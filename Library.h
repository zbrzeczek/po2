//
// Created by Zuza on 2024-03-11.
//

#ifndef PO_LIBRARY_H
#define PO_LIBRARY_H
#include "Book.h"
#include <initializer_list>
#include <string>


class Library {
private:
    Book *books;
    std::size_t size;
protected:
    friend std::ostream& operator<<(std::ostream& os, const Book& b);
public:
    Library();
    Library(std::initializer_list<Book> list);

    Library(const Library& orig);
    Library(Library&& orig);

    Library& operator=(const Library& right);
    Library& operator=(Library&& right);

    Book& operator[](std::size_t index);
    const Book& operator[](std::size_t index) const;
    std::size_t GetSize() const;
    ~Library();
    //Tylko dla implementacji jako lista
    //void push_back(const Book&);
    //void push_back(Book&&);
    //Book pop_back();
};



#endif //PO_LIBRARY_H
