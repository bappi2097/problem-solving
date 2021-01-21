#include<bits/stdc++.h>
using namespace std;
uint64_t fib[60];
void fibonacci()
{
    fib[0] = 0;
    fib[1] = 1;
    for(int i=2; i<=60; i++)fib[i] = fib[i-1]+fib[i-2];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp", "r", stdin);
    freopen("output.cpp", "w", stdout);
    #endif // ONLINE_JUDGE
    int t;
    cin>>t;
    int n[t];
    for(int i=0; i<t; i++)cin>>n[i];
    fibonacci();
    for(int i=0; i<t; i++)cout<<"Fib("<<n[i]<<") = "<<fib[n[i]]<<endl;
    return 0;
}
