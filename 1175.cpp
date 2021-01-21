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
    long long int n[20];
    for(int i=0; i<20; i++)cin>>n[i];
    for(int i=0, j=19; i<10; i++, j--){
        int temp = n[i];
        n[i] = n[j];
        n[j] = temp;
    }
    for(int i=0; i<20; i++)cout<<"N["<<i<<"] = "<<n[i]<<endl;
    return 0;
}
