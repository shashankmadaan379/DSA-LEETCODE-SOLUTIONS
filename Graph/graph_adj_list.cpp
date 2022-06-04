#include<bits/stdc++.h>
using namespace std;
template <typename T>
class graph{
public:
    unordered_map<T, list<T> > adjlist;
    void add_edge(T u, T v, bool dir){
        //dir 0 means the graph is undirected
        //dir 1 means the graph is directed
        //okay! so let's create an edge between u and v
        adjlist[u].push_back(v);
        if(dir==0){
            adjlist[v].push_back(u);
        }
    }

    void print_graph(){
        for(auto it:adjlist){
            cout<<it.first<<"->";
            for(auto it2:it.second){
                cout<<it2<<",";
            }
            cout<<endl;
        }
    }
        
};
 
int main(){
    int edges,nodes;
    cin>>nodes>>edges;
    graph<int> g;
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        g.add_edge(u,v,0);  //craeting a graph

    }
    //printing the graph
    g.print_graph();
    return 0;
}
