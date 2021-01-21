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
    int x[10];
    for(int i=0; i<10; i++){
        cin>>x[i];
        if(x[i]<=0)x[i]=1;
    }
    for(int i=0; i<10; i++)cout<<"X["<<i<<"] = "<<x[i]<<endl;
    return 0;
}
