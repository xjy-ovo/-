#include<stdio.h>
#include<string.h>
int main(){
	int n,q;
	scanf("%d",&n);
	char s[n+1];
	scanf("%s",s);
	scanf("%d",&q);
	char c[q],d[q];
	int letters[26];
	for(int i=0;i<26;i++){
		letters[i]='a'+i;
	}
	for(int i=0;i<q;i++){
		getchar();
		scanf("%c %c",&c[i],&d[i]);
		for(int j=0;j<26;j++){
			if(letters[j]==c[i]){
				letters[j]=d[i];
			}
		}
	}
	for(int i=0;i<n;i++){
		s[i]=letters[s[i]-'a'];
	}
	printf("%s\n",s);
	return 0;
}
