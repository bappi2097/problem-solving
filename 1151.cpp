#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n, int cnt, int old, int start)
{
    if(n==cnt)
        return old;
    cout<<old<<" ";
    return fibonacci(n, cnt+1, old+start, old);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp", "r", stdin);
    freopen("output.cpp", "w", stdout);
    #endif // ONLINE_JUDGE
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<0;
    }
    else if(n==2)
    {
        cout<<0<<" "<<1;
    }
    else
    {
        cout<<0<<" ";
        cout<<fibonacci(n, 2, 1, 0);
    }
    cout<<endl;
    return 0;
}
