#include<iostream>
using namespace std;
class Book{
    private:
    string author;
    string book;
    float price;
    string ISBN;
    public:
    Book(){
        cout<<"Enter a book details:-";
        cin>>author>>book>>price>>ISBN;
    }
    Book(Book &b1){
        author=b1.author;
        book=b1.book;
        price=b1.price;
        ISBN=b1.ISBN;
    }
    void display(){
        cout<<"Author is:"<<author<<endl;
        cout<<"Book is:"<<book<<endl;
        cout<<"Price is:"<<price<<endl;
        cout<<"ISBN is:"<<ISBN<<endl;
    }
};
int main(){
    Book b1;
    Book b2(b1);
    b1.display();
    b2.display();
    return 0;
}
