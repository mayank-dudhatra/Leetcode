class DSU {
public:
    vector<int> parent, rankv;

    DSU(int n) {
        parent.resize(n);
        rankv.resize(n,0);
        for(int i=0;i<n;i++) parent[i]=i;
    }

    int find(int x){
        if(parent[x]==x) return x;
        return parent[x]=find(parent[x]);
    }

    bool unite(int a,int b){
        a=find(a);
        b=find(b);
        if(a==b) return false;

        if(rankv[a]<rankv[b]) swap(a,b);
        parent[b]=a;
        if(rankv[a]==rankv[b]) rankv[a]++;

        return true;
    }
};

class Solution {
public:

    bool check(long long X,int n,vector<vector<int>>& edges,int k){

        DSU dsu(n);
        int used=0;

        vector<pair<int,int>> freeEdges;
        vector<pair<int,int>> upEdges;

        for(auto &e:edges){
            int u=e[0],v=e[1],s=e[2],must=e[3];

            if(must){
                if(s<X) return false;
                if(!dsu.unite(u,v)) return false;
                used++;
            }
            else{
                if(s>=X) freeEdges.push_back({u,v});
                else if(2LL*s>=X) upEdges.push_back({u,v});
            }
        }

        for(auto &e:freeEdges){
            if(dsu.unite(e.first,e.second)){
                used++;
                if(used==n-1) return true;
            }
        }

        int upgrades=0;

        for(auto &e:upEdges){
            if(dsu.unite(e.first,e.second)){
                upgrades++;
                used++;
                if(upgrades>k) return false;
                if(used==n-1) return true;
            }
        }

        return used==n-1;
    }

    int maxStability(int n, vector<vector<int>>& edges, int k) {

        long long lo=1,hi=200000,ans=-1;

        while(lo<=hi){
            long long mid=(lo+hi)/2;

            if(check(mid,n,edges,k)){
                ans=mid;
                lo=mid+1;
            }
            else hi=mid-1;
        }

        return ans;
    }
};