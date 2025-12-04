#include<stdio.h>

int main(){
int C,F,i,j;
int sumF=0,sumC=0;


printf("Escriba el numero de filas\n");
scanf("%d",&F);

printf("Escriba el numero de columnas\n");
scanf("%d",&C);

int M[F][C];

for(i=0;i<F;i++){
for(j=0;j<C;j++){
printf("Escriba el valor de la matriz\n");
scanf("%d",&M[i][j]);
}
}

for(i=0;i<F;i++){
for(j=0;j<C;j++){
sumF=sumF+M[i][j];
printf("|%d",M[i][j]);
}

printf("| = %d\n",sumF);
sumF=0;
printf("\n");
}
for(j=0;j<C;j++){
for(i=0;i<F;i++){
sumC=sumC+M[i][j];
}

printf("§");
printf("%d ",sumC);
sumC=0;
}

}
