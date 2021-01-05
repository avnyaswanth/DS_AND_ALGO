#include<stdio.h>
#include<stdlib.h>
struct graph *adj_matrix();
struct graph
{
	int V,E,**Adj;
};
 int main()
 {
 	struct graph *G = adj_matrix();
 	for(int i=0;i<G->V;i++){
 	for(int j=0;j<G->V;j++)
 		printf("%d\t",G->Adj[i][j]);
 		printf("\n");
 	}
 }
 
 struct graph *adj_matrix()
 {
 	int e,v;
 	struct graph *G = (struct graph*)malloc(sizeof(struct graph));
 	printf("Enter number of Vertices and Edges");
 	scanf("%d%d",&G->V,&G->E);
 	G->Adj = (int**)malloc(sizeof(G->V*G->V));
 	for(e=0;e<G->E;e++)
 		for(v=0;v<G->V;v++)
 		G->Adj[e][v]=0;
 		for(int i=0;i<G->E;i++)
 		{
 			printf("Enter the vertices");
 			scanf("%d%d",&v,&e);
 			G->Adj[e][v]=1;
 			G->Adj[v][e]=1;
		 }
		 return G;
 }
