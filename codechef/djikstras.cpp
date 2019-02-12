/*
* @Author: SyedAli
* @Date:   2019-01-26 19:50:01
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-26 20:26:41
*/
// A C++ program for Dijkstra's single source shortest path algorithm. 
// The program is for adjacency matrix representation of the graph 

#include<bits/stdc++.h>
int graph[1000][1000];
int flag=0;

// Number of vertices in the graph 

// A utility function to find the vertex with minimum distance value, from 
// the set of vertices not yet included in shortest path tree 
int minDistance(int dist[], bool sptSet[],int V) 
{ 
// Initialize min value 
int min = INT_MAX, min_index; 

for (int v = 0; v < V; v++) 
	if (sptSet[v] == false && dist[v] <= min) 
		min = dist[v], min_index = v; 

return min_index; 
} 

// A utility function to print the constructed distance array 
int printSolution(int dist[], int n,int V,int src) 
{ 
// printf("Vertex Distance from Source\n"); 
for (int i = 0; i < V; i++) {
	if(dist[i] != graph[src][i]) flag = 1;
	// printf("%d tt %d\n", i, dist[i]); 
}
} 

// Function that implements Dijkstra's single source shortest path algorithm 
// for a graph represented using adjacency matrix representation 
void dijkstra(int src,int V) 
{ 
	int dist[V];	 // The output array. dist[i] will hold the shortest 
					// distance from src to i 

	bool sptSet[V]; // sptSet[i] will be true if vertex i is included in shortest 
					// path tree or shortest distance from src to i is finalized 

	// Initialize all distances as INFINITE and stpSet[] as false 
	for (int i = 0; i < V; i++) 
		dist[i] = INT_MAX, sptSet[i] = false; 

	// Distance of source vertex from itself is always 0 
	dist[src] = 0; 

	// Find shortest path for all vertices 
	for (int count = 0; count < V-1; count++) 
	{ 
	// Pick the minimum distance vertex from the set of vertices not 
	// yet processed. u is always equal to src in the first iteration. 
	int u = minDistance(dist, sptSet,V); 

	// Mark the picked vertex as processed 
	sptSet[u] = true; 

	// Update dist value of the adjacent vertices of the picked vertex. 
	for (int v = 0; v < V; v++) 

		// Update dist[v] only if is not in sptSet, there is an edge from 
		// u to v, and total weight of path from src to v through u is 
		// smaller than current value of dist[v] 
		if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX 
									&& dist[u]+graph[u][v] < dist[v]) 
			dist[v] = dist[u] + graph[u][v]; 
	} 

	// print the constructed distance array 
	printSolution(dist, V,V,src); 
} 

// driver program to test above function 
int main() 
{ 
/* Let us create the example graph discussed above */
	int testcases,V;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%d",&V);
		// int graph[V][V];
		for(int i=0;i<V;i++){
			scanf("%d",&graph[0][i]);
		}	
		for(int i=0;i<V;i++){
			scanf("%d",&graph[V-1][i]);
		}
		for(int i=1;i<V-1;i++){
			for(int j=0;j<V;j++){
				if(i == j){
					graph[i][j] = 0;
					continue;
				}
				graph[i][j] = graph[j][i]; 
			}
		}
		dijkstra(0,V);
		dijkstra(2,V);
		if(flag == 0) printf("Yes\n");
		else printf("No\n");
	}
	
	return 0; 
} 
