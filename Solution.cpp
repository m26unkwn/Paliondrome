#include<iostream>
using namespace std;
bool ispalidrome(int n)
{
    int temp = n;
    int res = 0;
    while(temp != 0)
    {   
        res = ((res*10)+(temp%10));
        temp/=10;
    }
    if(res == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        if(ispalidrome(n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}
