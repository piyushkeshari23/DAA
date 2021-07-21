#include<iostream>
using namespace std;
int main()
{
    int t,n,i;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter the size of array: ";
        cin>>n;
        int a[n];
        cout<<"Enter the elements of array: ";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    
    int f;
    cout<<"Enter the element to be found: ";
    cin>>f;
    for(i=0;i<n;i++)
    {
        if(a[i]==f)
        {
            cout<<"Element found at location "<<i+1<<endl;
            cout<<"Total number of comparision "<<i+1<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"Element not found"<<endl;
        cout<<"Total number of comparision "<<n<<endl;
    }
    }
    return 0;
}