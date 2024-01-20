#include<stdio.h>
#include<stdlib.h>
#define MAX_VERTEX 100
struct edge{
    int startVertex;
    int endVertex;
};

int main(){
    int graph[MAX_VERTEX][MAX_VERTEX];
    for(int i=0;i<=MAX_VERTEX;i++)
    {
        for(int j=0;j<=MAX_VERTEX;j++)
        {
            graph[i][j]=0;
        }
    }

    for(int i=0;i<=MAX_VERTEX;i++)
    {
        for(int j=0;j<=MAX_VERTEX;j++)
        {
            printf("%d",graph[i][j]);
        }
    }

}