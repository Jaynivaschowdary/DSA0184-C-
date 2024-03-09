#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    int pages;
public:
    Book(const string& t, const string& a, int p) : title(t), author(a), pages(p) {
        cout << "Book object created with title: " << title << ", author: " << author << ", and pages: " << pages << endl;
    }
    ~Book() {
        cout << "Book object destroyed" << endl;
    }
    string getTitle() const {
        return title;
    }
    string getAuthor() const {
        return author;
    }
    int getPages() const {
        return pages;
    }
};
int main() {
    Book book("The Great Gatsby", "F. Scott Fitzgerald", 180);
    cout << "Title: " << book.getTitle() << endl;
    cout << "Author: " << book.getAuthor() << endl;
    cout << "Pages: " << book.getPages() << endl;

    return 0;
}
