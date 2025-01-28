#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/****************************/
/* Vos fonctions ci-dessous */
/****************************/

// EXERCICE 2

struct Cell;
struct Cell {
  int val;
  struct Cell *suivante;
};
typedef struct Cell cell;
typedef struct {
  cell *premiere;
} liste;

liste *creer_liste() {
  liste *l = malloc(sizeof(liste));
  l->premiere = 0;
  return l;
}

void ajouter_element(liste *l, int x) {
  cell *c;
  c = malloc(sizeof(int));
  c->val = x;
  c->suivante = l->premiere;
  l->premiere = c;
}

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

  int *carre = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    *(carre + i) = i * i;
  }

  print_list(carre, n);
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
