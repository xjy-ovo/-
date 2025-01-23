#include<stdio.h>
int main(){
	int n,m;
	int op,x,y;
	scanf("%d %d",&n,&m);
	int map[n+1][n+1];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			scanf("%d",&map[i][j]);
	
	int row[n+1],col[n+1];
	for(int i=1;i<=n;i++){
		row[i]=i;
		col[i]=i;
	}
	
	for(int i=0;i<m;i++){
		scanf("%d %d %d",&op,&x,&y);
		if(op==1){
			int t=row[x];
			row[x]=row[y];
			row[y]=t;
		}
		else{
			int t=col[x];
			col[x]=col[y];
			col[y]=t;
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",map[row[i]][col[j]]);
		}
		printf("\n");
	}
	return 0;
} 
