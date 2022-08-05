    #include<iostream>
    #define ll long long
    using namespace std;
    ll a[1000010],par[1000010],sz[1000010];
    ll res=0;
    ll n;
    struct lmao
    {
    	ll u,v,c;
    };
    bool ss(lmao aa,lmao bb)
    {
    	return aa.c<bb.c;
    }
    ll find(ll u)
    {
    	if(u!=par[u]) return par[u]=find(par[u]);
    	return u;
    }
    void join(ll u,ll v,ll c)
    {
    	u=find(u);
    	v=find(v);
    	if(u==v) return;
    	par[u]=v;
    //	cout<<sz[u]<<" "<<sz[v]<<" "<<c<<'\n';
    	res+=sz[u]*sz[v]*c;
    	sz[v]+=sz[u];
    	sz[u]=0;
    }
    lmao b[1000010];
    void solve()
    {
    	for(ll i=1;i<=n;i++)
    	{
    		par[i]=i;
    		sz[i]=1;
    	}
    	for(ll i=1;i<n;i++)
    	{
    		b[i].c=max(a[b[i].u],a[b[i].v]);
    	}
    	sort(b+1,b+n,ss);
    	for(ll i=1;i<n;i++) join(b[i].u,b[i].v,b[i].c);
    }
   int  main()
    {
    	ios_base::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
    	cin>>n;
    	for(ll i=1;i<=n;i++)
    	{
    		cin>>a[i];
    	}
    	for(ll i=1;i<n;i++)
    	{
    		cin>>b[i].u>>b[i].v;
    	}
    	solve();
    	for(ll i=1;i<=n;i++) a[i]=-a[i];
    	solve();
    	cout<<res;
        return 0;
    }
    	 			 	 		  	    				 		  		  	