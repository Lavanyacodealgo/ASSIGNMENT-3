#include <iostream>
#include <string>
using namespace std;
class Book
{
    string title;
    string author;
    int copies;

public:

    Book() : Book("Unknown", "Unknown", 0)
    {
    }

    Book(string t) : Book(t, "Unknown", 1)
    {
    }

    Book(string t, string a) : Book(t, a, 1)
    {
    }

    Book(string t, string a, int c)
        : title(t), author(a), copies(c)
    {
        if (copies < 0)
        {
            copies = 0;
        }
    }

    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Number of Copies: " << copies << endl;
        cout << endl;
    }
};

int main()
{
    Book b1;
    Book b2("C++ Programming");
    Book b3("Data Structures", "Mark Allen", 5);

    cout << "Default Constructor:" << endl;
    b1.display();

    cout << "Parameterized Constructor:" << endl;
    b2.display();

    cout << "Overloaded Constructor:" << endl;
    b3.display();

    Book b4("Python", "Guido", -3);

    cout << "Negative Copies Test:" << endl;
    b4.display();

    return 0;
}

