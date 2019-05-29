#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,n,x,y;
    long long int a[100005];
    cin>>T;
    for(int t=0;t<T;t++)
    {
        cin>>n>>x>>y;
        int cnt =0;
        for(int i=0;i<n;i++)
        {
            if(i!=0 && i%x==0)
            {
                a[cnt++] = i;
            }
        }
        cout<<x<<' ';
        for(int j=0;j<cnt-1;j++)
        {
            if(a[j]>x && a[j]%y!=0)
            {
                cout<<a[j]<<' ';
            }
        }cout<<a[cnt-1]<<endl;
        memset(a,0,sizeof(a));

    }
    return 0;
}
