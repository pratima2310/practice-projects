#include <stdio.h>
int main(void) {
int n;
scanf("%d", &n);
int matrixA[n]; // Matrix A
int matrixB[n][n]; // Matrix B
int matrixC[n]; // Matrix C

for(int i=0; i<n;i++){
scanf("%d",&matrixA[i]);
}
for(int i=0; i<n; i++){
  for(int j=0; j <n; j++){
  scanf("%d",&matrixB[i][j]);
  }
}
for(int i=0; i<n;i++){
matrixC[i]=0;
	for(int j=0; j<n; j++){
	matrixC[i]=matrixC[i]+(matrixA[j]*matrixB[j][i]);
			
	}
}

for(int i=0;i<n;i++){
printf("%d ",matrixC[i]);
}
printf("\n");
return 0;
}
