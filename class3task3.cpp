#include<iostream>
#include<cstring>
using namespace std;
struct student
{
    int id;
    int Ccredit ;
    double cgpa;
};
int main()
{
    student arr[10];
     cout<<"Enter 10 students information"<<endl;
    for(int i=0 ; i<10;i++)
    {
      cout<<"Enter student ID :";
        cin>>arr[i].id;
        cout<<"Enter Credit Complete :";
        cin>>arr[i].Ccredit;
        cout<<"Enter CGPA: ";
        cin>>arr[i].cgpa;
    }
    cout<<"CGPA more than 3.75 students ID : ";
    for(int j=0; j<10; j++)
    {
        if(arr[j].cgpa>3.75)
        {
            cout<<arr[j].id<<", ";
        }
    }
    cout<<endl<<"completed credit more than 50 students ID : ";
    for(int j=0; j<10; j++)
    {
        if(arr[j].Ccredit >50)
        {
            cout<<arr[j].id<<", ";
        }
    }

}
