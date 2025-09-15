#include<iostream>
using namespace std;
class btech{
    public:
    int roll;
    float cgpa;
    char section;
};
int main(){
    btech asif,raj;
    asif.roll=322;
    asif.cgpa=8.9;
    asif.section='F';
    cout<<"Roll:"<<asif.roll<<endl;
    cout<<"CGPA:"<<asif.cgpa<<endl;
    cout<<"Section:"<<asif.section<<endl;
    return 0;
}
