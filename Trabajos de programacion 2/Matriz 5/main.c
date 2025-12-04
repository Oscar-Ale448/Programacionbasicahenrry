#include<stdio.h>

int main(){
int N,i,j;



printf("Escriba el numero de filas\n");
scanf("%d",&N);


int M[N][N];

for(i=0;i<N;i++){
for(j=0;j<N;j++){
printf("Escriba el valor de la matriz\n");
scanf("%d",&M[i][j]);
}
}

for(i=0;i<N;i++){
for(j=0;j<N;j++){
printf("|%d",M[i][j]);
}
printf("|\n");
}

printf("\n");
int max;
max=M[0][0];

for(i=0;i<N;i++){
for(j=0;j<N;j++){

if(M[i][j]>max){
max=M[i][j];
}

} printf("%d|",max);
}

}

