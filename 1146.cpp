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
    int a;
    while(cin>>a && a!=0)
    {
        for(int i=1; i<=a; i++)
        {
            cout<<i;
            if(i!=a)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
