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
    int a, n;
    cin>>a;
    while(cin>>n)
    {
        if(n<=0)
            continue;
        int sum=0;
        for(int i=a; i<n+a; i++)
        {
            sum+=i;
        }
        cout<<sum<<endl;
        break;
    }
    return 0;
}
