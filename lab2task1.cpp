#include<iostream>
using namespace std;
int main()
{
    int array_1[] = {10,20,30,40,50};
    int array_2[] = {1,2,3,4,5,6,7,8};
    int MergeArray[13];




    for(int i = 0;i<5;i++)
    {
        MergeArray[i] = array_1[i];
    }



   for(int i  = 0;i<8;i++)
    {
        MergeArray[i+5] = array_2[i];
    }



   for(int i =12;i>=0;i--)
    {
        cout<<MergeArray[i]<<""<<endl;
    }



   return 0;



}
