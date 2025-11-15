#include<iostream>
using namespace std;
double area(double r){
    return 3.14*r*r;
}
double area(double b,double h){
    return 0.15*b*h;
}
double area(double l,double b,int a){
    return l*b;
}
int main(){
    cout<<"Area of circle is:"<<area(5.6)<<endl;
    cout<<"Area of triangle is:"<<area(4,8)<<endl;
    cout<<"Area of rectangle is:"<<area(4,8,6)<<endl;
    return 0;
}
