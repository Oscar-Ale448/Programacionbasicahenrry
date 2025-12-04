#include<stdio.h>

int main(){
int N;
printf("Ingrese la cantidad de columnas y filas de la matriz\n");
scanf("%d",&N);

char resp;
do{

int i,j;
int M[N][N];
char s;

for(i=0;i<N;i++){
for(j=0;j<N;j++){
printf("Escriba el valor de la matriz\n");
scanf("%d",&M[i][j]);
}
}


for(i=0;i<N;i++){
for(j=0;j<N;j++){
printf("|%d",M[i][j]);

}printf("|\n");
}

printf("\n");
for(i=0;i<N;i++){
for(j=0;j<N;j++){
if (i==j){
M[i][j]=0;
}
printf("|%d",M[i][j]);

}printf("|\n");
}

printf("\n");
for(i=0;i<N;i++){
for(j=0;j<N;j++){
M[j][i]=M[i][j]+M[j][i];
if(i<j){
M[i][j]=0;
}printf("|%d",M[i][j]);
}printf("|\n");
}

printf("Repetir el proceso? \n");
scanf("%c",resp);

}while(resp=='s');

}
