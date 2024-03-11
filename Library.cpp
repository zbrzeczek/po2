//
// Created by Zuza on 2024-03-11.
//

#include "Library.h"

Library::Library() : books(nullptr), size(0) {}

Library::Library(std::initializer_list<Book> list) : size(list.size()), books(new Book[list.size()] ) {
    std::size_t i = 0;
    for (const Book& book : list) {
        books[i] = book;
        i++;
    }
}


Library::Library(const Library &orig) : size(orig.size) , books(new Book[orig.size]) {
    for (std::size_t i = 0; i < size; ++i) {
        books[i] = orig.books[i];
    }
    std::cout << "Copy List" << std::endl;
}

Library::Library(Library &&orig){
    size = orig.size;
    books = orig.books;
    orig.books = nullptr;
    orig.size = 0;
    std::cout << "move List" << std::endl;
}


Library& Library::operator=(const Library &right) {
    Library temp(right);
    std::swap(size, temp.size);
    std::swap(books, temp.books);
    return *this;
}
Library& Library::operator=(Library &&right) {
    std::swap(size, right.size);
    std::swap(books, right.books);
    return *this;
}

Book& Library::operator[](std::size_t index) {
    return books[index];

}
const Book& Library::operator[](std::size_t index) const {
    return books[index];
}

std::size_t Library::GetSize() const {
    return size;
}

Library::~Library(){
    delete[]books;
}