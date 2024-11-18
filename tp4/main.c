#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/****************************/
/* Vos fonctions ci-dessous */ 
/****************************/

// EXERCICE 2

// EXERCICE 3


/****************************/
/* Vos fonctions ci-dessus **/
/****************************/

void print_list(int liste[], int size) {
    for (int i = 0; i < size - 1; i++) {
        printf("%d, ", *(liste + i));
    }
    printf("%d\n", *(liste + size - 1));
}

void exercice1(void) {
  printf("\n\nEXERCICE 1\n\n");

    /******************** Votre code ci-dessous ********************/
  int n;
  printf("Entrer la taille n de la liste : ");
  scanf("%d", &n);
  printf("%d\n", n);

  int liste[n];
  printf("%d\n", sizeof(liste)/sizeof(int));
  for(int i = 0; i < n; i++){
    liste[i] = i*i;
  }
  print_list(liste, n);
    /******************** Votre code ci-dessus *********************/

    return;
}

void exercice2(void) {
    printf("\n\nEXERCICE 2\n\n");

    /******************** Votre code ci-dessous ********************/

    /******************** Votre code ci-dessus *********************/

    return;
}

void exercice3(void) {
    printf("\n\nEXERCICE 3\n\n");

    /******************** Votre code ci-dessous ********************/

    /******************** Votre code ci-dessus *********************/

    return;
}

int main(void) { 
    exercice1();
    exercice2();
    exercice3();
    return 0;
}

