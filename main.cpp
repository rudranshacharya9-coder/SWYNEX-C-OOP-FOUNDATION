#include <iostream>
#include <string>
using namespace std;

class Item {
private:
    string name;

public:
    Item(const string& itemName) : name(itemName) {}

    void display() const {
        cout << "Item: " << name << '\n';
    }
};

class Book : public Item {
private:
    
string author;

public:
    Book(const string& itemName, const string& bookAuthor)
        : Item(itemName), author(bookAuthor) {}

    void display() const {
        Item::display();
        cout << "Author: " << author << '\n';
    }
};

int main() {
    Book book("The Hobbit", "J.R.R. Tolkien"); // object; calls constructors
    book.display();
    return 0;
}
