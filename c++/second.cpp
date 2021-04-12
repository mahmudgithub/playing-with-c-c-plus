#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int st[100], n, i;
    cout<<"How many elements?: ";
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(i = 0; i < n; i++)
    {
        cin>>st[i];
    }
    cout<<"Before sorting:"<<endl;
    for(i = 0; i < n; i++)
    {
        cout<<st[i]<<"\t";
    }
    cout<<endl;
     
    sort(st, st + n);
     
    cout<<"After sorting:"<<endl;
    for(i = 0; i < n; i++)
    {
        cout<<st[i]<<"\t";
    }
    cout<<endl;
    return 0;
}