
#include<bits/stdc++.h>
using namespace std;

/*
    USACO Bessie Come Home 计蒜客 - T3467
    5 Feb - 2022
    Omar Osman
*/
vector<vector<pair<int, int>>> G;
int dist[128];

void Dijkstra(int st){
    memset(dist, 63, sizeof(dist));
    dist[st] = 0;
    priority_queue<pair<int, int>> PQ;
    PQ.emplace(0, st);
    while(PQ.size()){
        int d, u;
        tie(d, u) = PQ.top();
        d = d * -1;
        PQ.pop();
        for(pair<int, int> P: G[u]){
            int v, len;
            tie(v, len) = P;
            if (dist[v] > d + len){
                dist[v] = d+ len;
                PQ.emplace(-dist[v], v);
            }
        }
    }

}

int main(){
    int t;
    cin >> t;
    G.resize(128);
    while(t--){
        char a,b;
        int d;
        cin >> a >> b >> d;
        G[a].emplace_back(b, d);
        G[b].emplace_back(a, d);

    }

    Dijkstra('Z');
    char res = min_element(dist + 'A', dist + 'Z') - dist;
    cout << res << " " << dist[res] << endl;

}
