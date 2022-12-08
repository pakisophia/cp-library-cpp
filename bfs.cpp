void bfs(const Graph &G,int s){
    int N =(int)G.size();

    vector<bool> seen(N,false);
    queue<int> todo;

    seen[s] = true;
    todo.push(s);

    while(!todo.empty()){
        // todoから頂点を取り出す
        int v = todo.front();
        todo.pop();

        // vから辿れる頂点を全て調べる

        for(auto x: G[v]){

            if(seen[x]){
                continue;
            
            }

            //新たな頂点xを探索済みとしてtodoに挿入
            seen[x]=true;
            todo.push(x);
    }
    

}

}
