#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,temp=n,ld;
    cout<<"enter an number:";
    cin>>n;
    while(temp!=0)
    {
        ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;
    }
    // cout<<(rev==n);
    return (rev==n);
}
