Function Dijkstra's (Graph source)
	Dist [source]:= 0
	for each vertex Vin Graph
	if V = sorce
	dist[v] = infinity
	add V to Q
	while Q is not empty
	V:= Vertex in Q with min dist[v]
	remove V from Q
	
	For each neighbour u of v
	alt:= dist[v] + length(v,u)
	if alt < dist(u)
	   dist[u]:= alt
	return dist[]
	end function