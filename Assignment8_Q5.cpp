/*reate a class LibraryAccount with a data member availableBooks and 
a function issueBook(). Throw an exception if the withdrawal amount 
exceeds the available balance.*/
#include <iostream>
using namespace std;
class LibraryAccount
{
    int availableBooks;
public:
    LibraryAccount(int books)
    {
        availableBooks = books;
    }
    void issueBook(int n)
    {
        try
        {
            if (n > availableBooks)
            {
                throw n;
            }
            availableBooks = availableBooks - n;

            cout << "Books issued successfully!" << endl;
            cout << "Remaining books: " << availableBooks;
        }
        catch (int x)
        {
            cout << "Error: Not enough books available!";
        }
    }
};
int main()
{
    LibraryAccount obj(10);
    int n;
    cout << "Enter number of books to issue: ";
    cin >> n;
    obj.issueBook(n);
    return 0;
}
