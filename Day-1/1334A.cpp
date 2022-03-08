#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<bits/stdc++.h>
#include<cmath>
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define vi vector<int>
#define vl vector<long long>
#define p(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define s(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define sf(x) scanf("%lf", &x)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define bitcount __builtin_popcountll
#define endl '\n'
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define FIO ios_base::sync_with_stdio(false)
using namespace std;
#define M 1000000007
#define MAX 1000001
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
const int N=1e5+10;
const int INF=1e9+10;


void in_itcode() {
#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}







int main()
{
    in_itcode();
    FIO;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p=0,q=0;
        bool lol=true;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            if(x<p||y<q||(x-p)<(y-q))
            {
                lol=false;
            }
            p=x;
            q=y;
        }
        puts(lol ? "YES" : "NO");
    }

}

