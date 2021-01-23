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
    int l, n, w, h;
    cin>>l>>n;
    while(n--)
    {
        cin>>w>>h;
        if(w<l || h<l)cout<<"UPLOAD ANOTHER"<<endl;
        else{
            if(w==h)cout<<"ACCEPTED"<<endl;
            else cout<<"CROP IT"<<endl;
        }
    }
    #ifndef ONLINE_JUDGE
    printf("Time: %.8fs\n", (double)(clock()-tstart)/CLOCKS_PER_SEC);
    #endif // ONLINE_JUDGE
    return 0;
}


