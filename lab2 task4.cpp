
#include <iostream>
using namespace std;
int main()
{
    int arr[10]={8,4,6,1,6,9,6,1,9,8};
    int a;
    int f=0;
    cout<<"Input a number to search: ";
    cin>>a;

    for (int i=0; i<10; i++)
    {
        if(arr[i]==a)
        {
            f++;
        }
    }

    cout<<"The number occurs "<<f<<" times in a array";


}
