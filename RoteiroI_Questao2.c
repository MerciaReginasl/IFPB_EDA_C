#include <stdio.h>

int main(){
int vet1 [5], *vet2;
int i;
int cont = 0;

for(i = 0; i < 5; i++){
  vet1[1] = i;
}

vet2 = vet1;
for (i = 0; i < 5; i++){
  if (vet2[i] % 2 == 0){
    vet2[i] *= -1; 
    cont++;
  }
}

for (i = 0; i < 5; i++){
  printf("%d %d\n", vet1[i], vet2[i]);
}

printf("contador: %d\n", cont);

return 0;

}
