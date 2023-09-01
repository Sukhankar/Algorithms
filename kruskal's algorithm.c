Alorithm Kruskal's (Q, W)
{
 A<-- null(symbol);
 for each vertex v E v(G)
   do make set [v]
 sort the edges (u,v) E Ein
 non-decreasing order by weight
 do if find set (u) =/ find (v)
 then A<--A U {(u,v)}
 UNION (u,v)
 return A;
}