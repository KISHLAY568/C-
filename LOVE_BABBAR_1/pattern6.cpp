#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many rows you want: ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space = i-1;
        while(space)
        {
            cout<<" ";
            space = space-1;
        }
        int j = n+1-i;
        while(j)
        {
            cout<<i;
            j = j-1;
        }
        cout<<endl;
        i = i+1;
    }
}