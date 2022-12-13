# 〜ACLの使い方、関数についてのメモ〜
## ---Union-Find(DSU)---
>グラフの頂点の連結判定等に使用. 
### ・dsu ds(N);
>Nサイズのdsuインスタンスを作成（0-indexed)
### ・ds.merge(u,v)
>頂点u,vを併合
### ・ds.same(u,v)
>頂点u,vが同連結グラフ上にいるか判定。Trueなら1,Falseなら０を返す
### ・ds.leader(u)
>頂点uの根の頂点番号(int)を返す
### ・ds.size(u)
>頂点uが属している連結グラフの頂点数(int)を返す。

