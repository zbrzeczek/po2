//
// Created by Zuza on 2024-03-11.
//

#include "Book.h"

    //konstruktory

    Book::Book(){
        author = "bez ";
        title = "bez ";
        std::cout << "bezparametrowy " << author << title << std::endl;
    }
    Book::Book (const std::string& author, const std::string& title) : author(author) , title(title) {
        std::cout << "L - parametr " << std::endl;
    }
    Book::Book (std::string&& author, std::string&& title) : author(std::move(author)) , title(std::move(title)) {
        std::cout << "R - parametr " << std::endl;
    }

    //getter
    std::string Book::getAuthor() const {
        return author;
    }
    // Getter
    std::string Book::getTitle() const {
        return title;
    }

    //setter dla l
    void Book::setAuthor(const std::string& newAuthor) {
        author = newAuthor;
    }
    // Setter dla l
    void Book::setTitle(const std::string& newTitle) {
        title = newTitle;
    }
    // Setter dla r
    void Book::setAuthor(std::string&& newAuthor) {
        author = std::move(newAuthor);
    }
    // Setter dla r
    void Book::setTitle(std::string&& newTitle) {
        title = std::move(newTitle);
    }

    //konstruktor kopiuj
    Book::Book (const Book &book) : author(book.author), title(book.title) {
        std::cout << "Copy " << std::endl;
    }
    //konstruktor przenies
    Book::Book(Book&& other) : author(std::move(other.author)), title(std::move(other.title)) {
        std::cout << "Move" << std::endl;
    }

    //przypisanie kopiujace
    Book& Book::operator=(const Book& bookRight) {
        Book temp(bookRight);
        std::cout  << "poczatek kopiujacy" << std::endl;
        std::swap(author, temp.author);
        std::swap(title, temp.title);
        std::cout  << "koniec kopiujacy" << std::endl;
        return *this;
    }
    //przyp swap
    Book& Book::operator=(Book&& bookRight) {
        author = std::move(bookRight.author);
        title = std::move(bookRight.title);
        return *this;
    }
