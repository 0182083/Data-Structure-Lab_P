#include<iostream>

using namespace std;

#include<conio.h>

int main()

{



              int arr[50], size, i, j, n;

              cout<<"Enter your array size : "<<" ";

              cin>>size;

              cout<<"Enter array elements : "<<" ";

              for(i=0; i<size; i++)

              {

                             cin>>arr[i];

              }

              j=i-1;

              i=0;

              while(i<j)

              {

                             n=arr[i];

                             arr[i]=arr[j];

                             arr[j]=n;

                             i++;

                             j--;

              }

              cout<<"Your reverse  array is :"<<" ";

              for(i=0; i<size; i++)

              {

                             cout<<arr[i]<<" ";

              }

              getch();

}

