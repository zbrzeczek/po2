//
// Created by Zuza on 2024-03-11.
//

#ifndef PO_BOOK_H
#define PO_BOOK_H
#include <iostream>

class Book {
private:
    std::string author, title;
protected:
    friend std::ostream& operator<<(std::ostream& os, const Book& b);
public:
    //konstruktory
    Book();
    Book (const std::string& author, const std::string& title);
    Book (std::string&& author, std::string&& title);

    //getter
    std::string getAuthor() const;
    // Getter
    std::string getTitle() const;

    //setter dla l
    void setAuthor(const std::string& newAuthor);
    // Setter dla l
    void setTitle(const std::string& newTitle);
    // Setter dla r
    void setAuthor(std::string&& newAuthor);
    // Setter dla r
    void setTitle(std::string&& newTitle);

    //konstruktor kopiuj
    Book (const Book &book);
    //konstruktor przenies
    Book(Book&& other);

    //przypisanie kopiujace
    Book& operator=(const Book& bookRight);
    //przyp swap
    Book& operator=(Book&& bookRight);

};
#endif //PO_BOOK_H
