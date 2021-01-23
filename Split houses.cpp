#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp", "r", stdin);
    freopen("output.cpp", "w", stdout);
    clock_t tstart = clock();
    #endif // ONLINE_JUDGE
    int n;
    string s;
    cin>>n;
    cin>>s;
    bool isPossible = true;
    for(int i=1; i<n; i++)
    {
        if(s[i-1]=='H' && s[i]=='H'){
            isPossible = false;
            break;
        }
    }
    if(isPossible)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++){
            if(s[i]=='.')cout<<"B";
            else cout<<s[i];
        }
        cout<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    #ifndef ONLINE_JUDGE
    printf("Time: %.8fs\n", (double)(clock()-tstart)/CLOCKS_PER_SEC);
    #endif // ONLINE_JUDGE
    return 0;
}
