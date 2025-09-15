#include<iostream>
using namespace std;
class btech{
    public:
    int roll;
    float cgpa;
    char section;
};
int main(){
    btech asif;
    btech *raj =new btech;
    raj->roll=328;
    raj->cgpa=8.9;
    raj->section='F';
    cout<<"Roll:"<<raj->roll<<endl;
    cout<<"CGPA:"<<raj->cgpa<<endl;
    cout<<"Section:"<<raj->section<<endl;
    return 0;
}
