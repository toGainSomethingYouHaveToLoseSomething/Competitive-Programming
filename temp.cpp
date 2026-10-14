#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define endl "\n"
const ll MOD = 1e9+9;


ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

ll LCM(ll a,ll b){
    return (a*b)/gcd(a,b);
}

// -------------------- BITWISE --------------------
// Set bit:       n |= (1LL<<i);
// Unset bit:     n &= ~(1LL<<i);
// Toggle bit:    n ^= (1LL<<i);
// Check bit:     (n>>i)&1LL
// Even/odd:      n%2==0 / n%2!=0
// Lowest bit:    n&-n
// Count bits:    __builtin_popcountll(n)

#define setBit(x,i) ((x)|(1LL<<(i)))
#define clearBit(x,i) ((x)&~(1LL<<(i)))
#define toggleBit(x,i) ((x)^(1LL<<(i)))
#define checkBit(x,i) (((x)>>(i))&1LL)
#define popcount(x) __builtin_popcountll(x)
#define isPowerOfTwo(x) ((x)>0 && (((x)&((x)-1))==0))

// Ordinary power; may overflow.
ll binpow(ll a,ll b){
    ll res=1;
    while(b>0){
        if(b&1)res*=a;
        b>>=1;
        if(b)a*=a;
    }
    return res;
}

// Modular power.
ll modpow(ll a,ll b,ll mod=MOD){
    ll res=1;
    a%=mod;
    while(b>0){
        if(b&1)res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}

bool isPrime(ll n){
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0 || n%3==0)return false;

    for(ll i=5;i<=n/i;i+=6){
        if(n%i==0 || n%(i+2)==0)return false;
    }
    return true;
}

// Sieve: prime[i] = 1 if i is prime.
vector<ll> sieve(int n){
    vector<ll> prime(n+1,1);
    prime[0]=0;
    if(n>=1)prime[1]=0;

    for(ll i=2;i*i<=n;i++){
        if(prime[i]){
            for(ll j=i*i;j<=n;j+=i){
                prime[j]=0;
            }
        }
    }
    return prime;
}

ll dijkstra(int src,ll n,vector<vector<pair<ll,ll>>> & G){
    //input graph;
    // ll n,e;
    // cin>>n>>e;

    // vector<vector<pair<ll,ll>>> graph(n+1);

    // for(int ll i = 0; i<e;i++){
    //     ll u,v,w;cin>>u>>v>>w;
    //     graph[u].push_back({v,w});
    //     graph[v].push_back({u,w});
    // }
    //input end;

    vector<ll> dist(n+1,1e18);
    dist[src]=0;

    //(distance,node)
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;

    pq.push({0,src});

    while(!pq.empty()){
        auto dis = pq.top().first;
        auto u = pq.top().second;
        pq.pop();

        if(dis != dist[u]) continue;

        for(ll i = 0; i< G[u].size(); i++){
            auto v = G[u][i].first;
            auto w = G[u][i].second;
            if(dist[v] > dist[u] + w){
                dist[v] = dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
    return dist[n];
}

void solve(){
    ll n,m;cin>>n>>m;
    cout<<n+m<<endl;
    cout<<"ok\n";
}

int main(){
    FASTIO;

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll t;t=1;
    // cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
}