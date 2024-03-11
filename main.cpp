#include <string>
#include <iostream>
#include "Book.h"
#include "Library.h"
// operator <<
std::ostream& operator<<(std::ostream& ostr, const Book& b){
    ostr << "Book: author " << b.author << " title "<< b.title <<  '}';
    return ostr;
}

int main () {
    std::string a="Napis Autor L", t="Napis Tytyl L";

    Book e;
    std::cout << "e: " << e << std::endl;
    Book bL(a, t);
    std::cout << "bL: "<< bL << std::endl;
    Book bR = {"Napis Autor R","Napis Tytyl R"};
    std::cout << "bR: "<< bR << std::endl;
    Book b3 = bL;
    std::cout << "b3: "<< b3 << " b1: " << bL << std::endl;
    e = std::move(bR);
    std::cout << "e: "<< e << " b2:" << bR << std::endl;
    e.setAuthor("E author ");
    std::cout << "e: "<< e << std::endl;
    e.setTitle("E titile");
    std::cout << "e: "<< e << std::endl;


    Library L;
    std::cout << "e: "<< L << std::endl;
//3-5 książek
    Library l1 = {{"<?1", "<4>"},
                  {"<?2", "<5>"},
                  {"<?3", "<6>"}};

    std::cout << "l1: "<< l1 << std::endl;
    Library l2(2);
    std::cout << "l2: "<< l2 << std::endl;
    l2[0] = {"<?>", "<?>"};
    l2[1] = {"<?>", "<?>"};
    std::cout << "l2: "<< l2 << std::endl;
    L = std::move(l2);
    std::cout << "e: " << e << " l2: "<< l2 << std::endl;
    l1[0] = std::move(e[1]);
    std::cout << "l1: " << l1 << " e: "<< e << std::endl;
}