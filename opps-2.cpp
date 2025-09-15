#include<iostream>
using namespace std;
class btech{
    public:
    int roll;
    float cgpa;
    char section;
};
btech *asif= new btech;
void getData(){
    cout<<"Enter the Roll-no:";
    cin>>asif->roll;
    cout<<"Enter the CGPA:";
    cin>>asif->cgpa;
    cout<<"Enter the Section:";
    cin>>asif->section;
}
void putData(){
    cout<<"Roll:"<<asif->roll<<endl;
    cout<<"CGPA:"<<asif->cgpa<<endl;
    cout<<"Section:"<<asif->section<<endl;
}
int main(){
    getData();
    putData();
    return 0;
}