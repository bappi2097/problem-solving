#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp", "r", stdin);
    freopen("output.cpp", "w", stdout);
    clock_t tstart = clock();
    #endif // ONLINE_JUDGE
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
        bool lower[5]={false}, upper[5]={false};
		int len = s.length();
		for(int i=0; i<len; i++)
        {
            switch(s[i])
            {
            case 'A':
                upper[0]=1;
                break;
            case 'E':
                upper[1]=1;
                break;
            case 'I':
                upper[2]=1;
                break;
            case 'O':
                upper[3]=1;
                break;
            case 'U':
                upper[4]=1;
                break;
            case 'a':
                lower[0]=1;
                break;
            case 'e':
                lower[1]=1;
                break;
            case 'i':
                lower[2]=1;
                break;
            case 'o':
                lower[3]=1;
                break;
            case 'u':
                lower[4]=1;
                break;
            }
        }
        int cntL=0, cntU=0;
        for(int i=0; i<5; i++)
        {
            if(lower[i])cntL++;
            if(upper[i])cntU++;
        }
        if(cntL==5 || cntU==5)cout<<"lovely string"<<endl;
        else cout<<"ugly string"<<endl;

	}

    #ifndef ONLINE_JUDGE
    printf("Time: %.8fs\n", (double)(clock()-tstart)/CLOCKS_PER_SEC);
    #endif // ONLINE_JUDGE
}
