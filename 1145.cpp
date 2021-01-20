#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp", "r", stdin);
    freopen("output.cpp", "w", stdout);
    #endif // ONLINE_JUDGE
    int a, b, i=1, j=0;
    cin>>a>>b;
    for(i=1;i<=b;)
    {
        for(j=0;j<a && i<=b;j++, i++)
        {
            cout<<i;
            if(i%a!=0 && i<b)
                cout<<" ";
        }
        cout<<endl;
    }
}
