#include <iostream>
using namespace std;
int main()
{

    int arr1[6]={1,4,6,3,6,9};
    int arr2[6]={5,3,7,1,2,6};
    int x=0;
    int arr3[x];


    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr3[x]=arr1[i];
                x++;
            }
        }

    }
    if (x==0)
        {
            cout<<"No common element"<<endl;
        }

    else{
    cout<<"Common element array: ";

    for(int i=0; i<x; i++)
    {
        cout<<arr3[i]<<" ";
    }
    }

}
