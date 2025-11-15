#include <iostream>
using namespace std;
class student{
    private:
    string name;
    int rollno;
    int prn;

    public:
    void set(string n, int r, int p){
        name=n;
        rollno=r;
        prn=p;
    }
    void display(){
        cout<<"Name is:-"<<name<< endl;
        cout<<"Roll No is:-"<<rollno<< endl;
        cout<<"PRN is:-"<<prn<< endl;
    }
};
int main(){
    student s;
    s.set("Anil",36,252141194);
    s.display();
    return 0;
}
