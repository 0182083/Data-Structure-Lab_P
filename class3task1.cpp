#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Row number :";
    cin>>m;
    cout<<"Column number :";
    cin>>n;
    int a[m][n], tem;
    cout<<"Enter ["<<m<<"*"<<n<<"] matrix A:";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The Matrix is :"<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Transpose matrix is :"<<endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}
