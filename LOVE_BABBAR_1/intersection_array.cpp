#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a{1,2,4,6,8,10};
    vector<int> b{3,4,5,6};
    
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            if(a[i]==b[j])
            {
                
                b[j]  = -1;
                cout<<a[i]<<" ";
                
            }
        }

    }
    return 0;
}