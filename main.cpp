#include <iostream>
#include <string>

struct Date
{
    int day;
    int month;
    int year;
};

struct Book
{
    int ID;
    std::string Name;
    std::string Author;
    std::string Category;
    Date published;
    int Page;
    int Price;
};


int main()
{
    Date dt[10];
    Book books[10];
    int enter;

        std::cout << "Please enter details for 10 books. " <<std::endl;
        for(int i = 0; i < 10; i++)
        {
            std::cout << "Book " << i + 1 << ":" << std::endl;
            std::cout << "Enter date in D.M.Y format: ";
            std::cin >> dt[i].day >> dt[i].month >> dt[i].year;
            std::cout << "Enter book ID: ";
            std::cin >> books[i].ID;
            std::cout << "Enter book name: ";
            std::cin >> books[i].Name;
            std::cout << "Enter author name: ";
            std::cin >> books[i].Author;
            std::cout << "Enter category: ";
            std::cin >> books[i].Category;
            std::cout << "Enter page count: ";
            std::cin >> books[i].Page;
            std::cout << "Enter price: ";
            std::cin >> books[i].Price;
        }

        int a = 0;
        while(a < 10)
        {
            std::cout << "Book " << a << " release date: " << dt[a].day << "." << dt[a].month << "." << dt[a].year << " . ID: "
            << books[a].ID << ". name: " << books[a].Name << ". Author: " << books[a].Author << ". Category: " << books[a].Category
            << ". " << books[a].Page << " pages. Price: " << books[a].Price << "." << std::endl;
            a++;
        }


    return 0;
}
