# 〜ACLの使い方、関数についてのメモ〜
## ---Union-Find(DSU)---
>グラフの頂点の連結判定等に使用. 
### ・dsu ds(N);
>Nサイズのdsuインスタンスを作成（0-indexed)
### ・ds.merge(u,v);
>頂点u,vを併合
### ・ds.same(u,v);
>頂点u,vが同連結グラフ上にいるか判定。Trueなら1,Falseなら０を返す
### ・ds.leader(u);
>頂点uの根の頂点番号(int)を返す
### ・ds.size(u);
>頂点uが属している連結グラフの頂点数(int)を返す。
## ---fenwick-tree---
>配列の一点更新＆区間和を高速(O(logN))で求められる
### ・fenwick_tree<type> fk(N);
>Nサイズの変数の型が<type>のfenwick-treeインスタンスを作成(配列は0-indexed)
### ・fk.add(p,x);
>fkのindexがpであるものにxを加算
### ・fk.sum(l,r);
>fkの[l,r)の半開区間の和を型<type>で返す。
## ---modint---
>使い方参照[https://atcoder.github.io/ac-library/production/document_ja/modint.html]

