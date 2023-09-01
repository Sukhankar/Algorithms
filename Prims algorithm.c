Prims Algorithm:
Algorithm prims(G,w,r)
{
for each u belongs to v[G];
 key[u]:= infinity;
//initially all vertices are set to infinity
pie[u]:=null;
key[r]:=0;
//root node set to 0
Queue<-v[G]
//in this algorithm we are maintaining queue to store all vertices of graph G
while(Queue is not equal to null)
{
u:=Extract min(Queue)
for each v belongs to adj(u)
if v belongs to Queue & w(u,v)<key[v]
//w(u,v)= weight of each edge
pie[v]:=u
key[v]:=w(u,v)
}