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
    int n, index, mini = INT_MAX, x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x<mini){
            mini=x;
            index=i;
        }
    }
    cout<<"Menor valor: "<<mini<<endl;
    cout<<"Posicao: "<<index<<endl;
    return 0;
}
