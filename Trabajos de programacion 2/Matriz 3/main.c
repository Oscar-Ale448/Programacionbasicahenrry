#include<stdio.h>

int main(){
int C,F,i,j;
int cont=0;

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
printf("|%d",M[i][j]);
}
printf("|\n");
}

for(i=0;i<F;i++){
for(j=0;j<C;j++){
if(M[i][j]%2==0){
cont++;
}
}
}
printf("La cantidad de valores pares en la matriz es de %d",cont);
}
