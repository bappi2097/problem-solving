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
    int t;
    cin>>t;
    while(t--)
    {
        int pa,pb,cnt=0;
        double g1,g2;
        cin>>pa>>pb>>g1>>g2;
        while(pa<=pb && cnt<=100)
        {
            pa+=pa*(g1/100);
            pb+=pb*(g2/100);
            cnt++;
        }
        if(cnt>100)cout<<"Mais de 1 seculo."<<endl;
        else cout<<cnt<<" anos."<<endl;
    }
    return 0;
}
