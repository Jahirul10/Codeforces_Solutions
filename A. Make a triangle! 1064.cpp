#include<bits/stdc++.h>
using namespace std;
//accepted
int main()
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    cout<<(((a[0]+a[1])>a[2])? 0 : ((a[2]-a[0]-a[1]+1)))<<endl;

    return 0;
}
