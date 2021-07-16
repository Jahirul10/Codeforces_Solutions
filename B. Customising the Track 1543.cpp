#include<bits/stdc++.h>
using namespace std;
//accepted
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,m;
     long long int sum=0,a;
     cin>>n;
     for(int i=0;i<n;i++)
     {
        cin>>m;
        sum+=m;
     }
      a=sum%n;
     cout<<(n-a)*a<<endl;
     }
    return 0;
}
