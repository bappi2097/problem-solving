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
    int x, z;
    cin>>x;
    while(cin>>z)
    {
        int sum=0,cnt=0;
        if(z<=x)
            continue;
        for(int i=x; sum<=z; i++, cnt++)
        {
            sum+=i;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
