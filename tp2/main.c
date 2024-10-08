#include <math.h>
#include <stdio.h>
#include <string.h>


struct Etudiant{
  int note;
  char prenom[40];
};

struct Passenger{
  char name[40];
  int seat_number;
};

struct Flight{
  char start[40];
  char dest[40];
  float duration;
  struct Passenger passengers[10];
};

void exercice1(void) {
    printf("\n\nEXERCICE 1\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int input;
    printf("n = ");
    scanf("%d", &input);
    if(input < 0){
      printf("n est strictememt négatif\n");
    }
    else if (input == 0){
      printf("n est nul\n");
    }
    else if (input > 0){
        printf("n est strictememt positif\n");
    }
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice2(void) {
    printf("\n\nEXERCICE 2\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int input;
    int sum;
    int i = 1;
    printf("n = ");
    scanf("%d", &input);
    while(i!=input+1){
      sum+=i;
      ++i;
    }
    
    printf("(while) Sum = %d\n", sum);
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice2_bis(void) {
    printf("\n\nEXERCICE 2 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int input;
    int sum;
    int i;
    printf("n = ");
    scanf("%d", &input);
    
    for(i = 0; i<=input; ++i){
      sum+=i;
    }
  
    printf("(for) Sum = %d\n", sum);
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice3(void) {
    printf("\n\nEXERCICE 3\n\n");
    
    /******************** Votre code ci-dessous ********************/
  int input;
  printf("day = ");
  scanf("%d", &input);
  if(input == 0){
    printf("Monday\n");
  }
  else if(input == 1){
    printf("Tuesday\n");
  }
  else if(input == 2){
    printf("Wednesday\n");
  }
  else if(input == 3){
    printf("Thursday\n");
  }
  else if(input == 4){
    printf("Friday\n");
  } 
  else if(input == 5){
    printf("Saturday\n");
  }
  else{
    printf("Sunday\n");
  }
  /******************** Votre code ci-dessus *********************/

    return;
}


void exercice3_bis(void) {
    printf("\n\nEXERCICE 3 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/
  int input;
  printf("day = ");
  scanf("%d", &input);
  switch (input) {      
    case 0:
      printf("Monday\n");
      break;
    case 1:
      printf("Tuesday\n");
      break;
    case 2:
      printf("Wednesday\n");
      break;
    case 3:
      printf("Thursday\n");
      break;
    case 4:
      printf("Friday\n");
      break;
    case 5:
      printf("Saturday\n");
      break;
    case 6:
      printf("Sunday\n");
      break;
  }
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice4(void) {
    printf("\n\nEXERCICE 4\n\n");
    
    /******************** Votre code ci-dessous ********************/
  int input;
  int tableau[5];
  int i;
  int sum = 0;

  for(i = 0; i<5; ++i){
    printf("n = ");
    scanf("%d", &input);
    tableau[i]=input;
  }

  for(i=0; i<5; ++i){
    sum+=tableau[i];
  }
  printf("sum = %d\n", sum);
  /******************** Votre code ci-dessus *********************/

    return;
}


void exercice4_bis(void) {
    printf("\n\nEXERCICE 4 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/
  int input;
  int tableau[5];
  int i;
  int location = 0;

  for(i = 0; i<5; ++i){
    printf("n = ");
    scanf("%d", &input);
    tableau[i]=input;
  }

  for(i = 1; i < 5; ++i){
    if(tableau[i]<tableau[location]){
      location = i;
    }
  }
  printf("min = %d\n", tableau[location]);

  for(i = 1; i < 5; ++i){
    if(tableau[i]>tableau[location]){
      location = i;
    }
  }
  printf("max = %d\n", tableau[location]);

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice5(void) {
    printf("\n\nEXERCICE 5\n\n");
    
    /******************** Votre code ci-dessous ********************/
  struct Etudiant e1;
  char name[40];
  int n;

  printf("Entrez votre prénom : ");
  scanf("%s", name);
  printf("Entrez votre note : ");
  scanf("%d", &n);

  strcpy(e1.prenom, name);
  e1.note = n;

  if(e1.note >= 4){
    printf("L'étudiant a passé\n");
  }
  else{
    printf("L'étudiant n'a pas passé\n");
  }
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice5_bis(void) {
    printf("\n\nEXERCICE 5 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/
  struct Etudiant etu[3];
  char name[40];
  int n;
  int note, i, nbr = 3;

  for(i = 1; i<=nbr; ++i){
    printf("Entrez le prénom de l'étudiant %d : ", i);
    scanf("%s", name);
    printf("Entrez la note de l'étudiant %d : ", i);
    scanf("%d", &n);

    strcpy(etu[i-1].prenom, name);
    etu[i-1].note = n;
  }

  for(i=0; i<nbr; ++i){
    if(etu[i].note >= 4){
      printf("L'étudiant %d a passé\n", i+1);
    }
    else{
      printf("L'étudiant %d n'a pas passé\n", i+1);
    }

  }
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice5_ter(void) {
    printf("\n\nEXERCICE 5 TER\n\n");
    
    /******************** Votre code ci-dessous ********************/
  struct Etudiant etu[3];
  char name[40];
  int n;
  int note, i, nbr = 3;

  for(i = 1; i<=nbr; ++i){
    printf("Entrez le prénom de l'étudiant %d : ", i);
    scanf("%s", name);
    printf("Entrez la note de l'étudiant %d : ", i);
    scanf("%d", &n);

    strcpy(etu[i-1].prenom, name);
    etu[i-1].note = n;
  }

  printf("Size of etu struct = %ld\n",sizeof(etu));
    /******************** Votre code ci-dessus *********************/
}


void exercice6(void) {
    printf("\n\nEXERCICE 6\n\n");
    
    /******************** Votre code ci-dessous ********************/
    //Définit une liste de deux vols de type struct Flight
    struct Flight flights[2];

    printf("Entrer les informations de 3 passagers pour 2 vols :\n");

    // For each flight, ask for start, stop, duration and passengers info
    for(int v = 0; v <= 1; v++){
      char start[40], stop[40];
      //start
      printf("\nPoint de départ du vol %d : ", v);
      scanf("%s", start);
      //stop
      printf("Point d'arrivée du vol %d : ", v);
      scanf("%s", stop);
      //duration
      printf("Durée du vol %d : ", v);
      scanf("%f", &flights[v].duration);
      //stores char tables in struct
      strcpy(flights[v].start, start);
      strcpy(flights[v].dest, stop);

      //for each passenger, ask for name and seat number
      for(int p = 0; p <= 2; p++){
        char name[40];
        //name
        printf("Prénom du passager %d : ", p);
        scanf("%s", name);
        //seat number
        printf("Numéro du siège du passager %d : ", p);
        scanf("%d", &flights[v].passengers[p].seat_number);

        //stores name in struct
        strcpy(flights[v].passengers[p].name, name);
      }
    }

    //print each info for each flight
    for(int f = 0; f < 2; f++){
      printf("\nDétails du vol %d :\n", f);
      printf("   Point de départ : %s\n", flights[f].start);
      printf("   Point d'arrivée : %s\n", flights[f].dest);
      printf("   Temps de vol : %f\n", flights[f].duration);
      printf("\n   Passagers : \n");
      for(int p = 0; p < 3; p++){
        printf("      Passager %d :\n", p);
        printf("         Prénom : %s\n", flights[f].passengers[p].name);
        printf("         Numéro de siège : %d\n", flights[f].passengers[p].seat_number);
      }
      
    }

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice7(void) {
    printf("\n\nEXERCICE 7\n\n");
    
    /******************** Votre code ci-dessous ********************/

    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice7_bis(void) {
    printf("\n\nEXERCICE 7 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/

    /******************** Votre code ci-dessus *********************/

    return;
}


int main(void) {   

    // Astuce : commenter tous les exercices sauf celui en cours pour gagner du temps !
    
  // exercice1();
  // exercice2();
  // exercice2_bis();
  // exercice3();
  // exercice3_bis();
  // exercice4();
  // exercice4_bis();
  // exercice5();
  // exercice5_bis();
  // exercice5_ter();
  exercice6();
  //exercice7();
  //exercice7_bis();

    return 0;
}
