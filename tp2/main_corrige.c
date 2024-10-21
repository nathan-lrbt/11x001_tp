#include <math.h>
#include <stdio.h>


void exercice1(void) {
    printf("\n\nEXERCICE 1\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int mon_entier;
 
    printf("Renseigner un entier relatif : ");
    scanf("%d", &mon_entier);

    if (mon_entier < 0) {
        printf("%d est strictement négatif.", mon_entier);
    } else if (mon_entier == 0) {
        printf("%d est nul.", mon_entier);
    } else {
        printf("%d est strictement positif.", mon_entier);
    }
    
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice2(void) {
    printf("\n\nEXERCICE 2\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int mon_entier;
    int mon_entier_initial;
    int somme = 0;
 
    printf("Renseigner un entier naturel : ");
    scanf("%d", &mon_entier);

    mon_entier_initial = mon_entier;

    while (mon_entier > 0) {
        somme += mon_entier;
        mon_entier -= 1;
    }

    printf("La somme des entiers naturels jusqu'à %d vaut %d", mon_entier_initial, somme);
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice2_bis(void) {
    printf("\n\nEXERCICE 2 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int mon_entier;
    int somme = 0;
 
    printf("Renseigner un entier naturel : ");
    scanf("%d", &mon_entier);

    for (int i = 1; i <= mon_entier; ++i) {
        somme += i;
    }

    printf("La somme des entiers naturels jusqu'à %d vaut %d", mon_entier, somme);
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice3(void) {
    printf("\n\nEXERCICE 3\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int mon_entier;
    printf("Renseigner un entier compris entre 0 et 6 : ");
    scanf("%d", &mon_entier);

    if (mon_entier == 0) {
        printf("Lundi");
    } else if (mon_entier == 1) {
        printf("Mardi");
    } else if (mon_entier == 2) {
        printf("Mercredi");
    } else if (mon_entier == 3) {
        printf("Jeudi");
    } else if (mon_entier == 4) {
        printf("Vendredi");
    } else if (mon_entier == 5) {
        printf("Samedi");
    } else if (mon_entier == 6) {
        printf("Dimanche");
    } else {
        printf("Are you ok buddy?");
    }
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice3_bis(void) {
    printf("\n\nEXERCICE 3 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int mon_entier;
    printf("Renseigner un entier compris entre 0 et 6 : ");
    scanf("%d", &mon_entier);

    switch (mon_entier) {
        case 0:
            printf("Lundi");
            break;
        case 1:
            printf("Mardi");
            break;
        case 2:
            printf("Mercredi");
            break;
        case 3:
            printf("Jeudi");
            break;
        case 4:
            printf("Vendredi");
            break;
        case 5:
            printf("Samedi");
            break;
        case 6:
            printf("Dimanche");
            break;
        default:
            printf("Are you ok buddy?");
    }
    
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice4(void) {
    printf("\n\nEXERCICE 4\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int entier_un, entier_deux, entier_trois, entier_quatre, entier_cinq;
    int somme;

    printf("Renseigner 5 entiers : ");
    scanf("%d %d %d %d %d", &entier_un, &entier_deux, &entier_trois, &entier_quatre, &entier_cinq);

    int mes_entiers[5] = {entier_un, entier_deux, entier_trois, entier_quatre, entier_cinq};

    for (int i = 0; i < 5; i++) {
        somme += mes_entiers[i];
    }

    printf("Somme : %d", somme);
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice4_bis(void) {
    printf("\n\nEXERCICE 4 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int entier_un, entier_deux, entier_trois, entier_quatre, entier_cinq;

    printf("Renseigner 5 entiers : ");
    scanf("%d %d %d %d %d", &entier_un, &entier_deux, &entier_trois, &entier_quatre, &entier_cinq);

    int mes_entiers[5] = {entier_un, entier_deux, entier_trois, entier_quatre, entier_cinq};

    int min = mes_entiers[0];
    int max = mes_entiers[0];

    for (int i = 1; i < 5; i++) {
        if (mes_entiers[i] > max) {
            max = mes_entiers[i];
        }
        if (mes_entiers[i] < min) {
            min = mes_entiers[i];
        }
    }
    
    printf("Min : %d\n", min);
    printf("Max : %d\n", max);
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice5(void) {
    printf("\n\nEXERCICE 5\n\n");
    
    /******************** Votre code ci-dessous ********************/
    struct Etudiant {
        char prenom[30];
        int note;
    };

    struct Etudiant mon_etudiant;

    printf("Renseigner le nom de l'étudiant : ");
    scanf("%s", mon_etudiant.prenom);
    printf("Renseigner la note de l'étudiant : ");
    scanf("%d", &mon_etudiant.note);

    if (mon_etudiant.note >= 4) {
        printf("%s a réussi IPA.", mon_etudiant.prenom);
    }
    else {
        printf("%s a échoué IPA.", mon_etudiant.prenom);
    }
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice5_bis(void) {
    printf("\n\nEXERCICE 5 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/
    struct Etudiant {
        char prenom[30];
        int note;
    };

    struct Etudiant etudiants[3];

    for (int i = 0; i < 3; i++) {
        printf("Renseigner le nom de l'étudiant %d : ", i);
        scanf("%s", etudiants[i].prenom);
        printf("Renseigner la note de l'étudiant %d : ", i);
        scanf("%d", &etudiants[i].note);

    }

    for (int i = 0; i < 3; i++) {
        if (etudiants[i].note >= 4) {
            printf("%s a réussi IPA.\n", etudiants[i].prenom);
        }
        else {
            printf("%s a échoué IPA.\n", etudiants[i].prenom);
        }
    }
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice5_ter(void) {
    printf("\n\nEXERCICE 5 TER\n\n");
    
    /******************** Votre code ci-dessous ********************/
    struct Etudiant {
        char prenom[30];
        int note;
    };

    struct Etudiant etudiants[3];

    int num_elem = sizeof(etudiants) / sizeof(etudiants[0]);
    printf("%d éléments dans le tableau.", num_elem);
    /******************** Votre code ci-dessus *********************/
}


void exercice6(void) {
    printf("\n\nEXERCICE 6\n\n");
    
    /******************** Votre code ci-dessous ********************/
    struct Passager {
        char prenom[30];
        int siege;
    };

    struct Vol {
        char depart[30];
        char arrivee[30];
        int duree;
        struct Passager passagers[2];
    };
    
    struct Vol vols[2];

    for (int i = 0; i < 2; i++) {

        struct Vol vol;
        printf("Vol %d, départ : ", i);
        scanf("%s", vol.depart);
        printf("Vol %d, arrivée : ", i);
        scanf("%s", vol.arrivee);
        printf("Vol %d, durée : ", i);
        scanf("%d", &vol.duree);

        for (int j = 0; j < 2; j++) { 
            struct Passager passager;
            printf("Vol %d, nom du passager %d : ", i, j);
            scanf("%s", passager.prenom);
            printf("Vol %d, siège du passager %d : ", i, j);
            scanf("%d", &passager.siege);
            vol.passagers[j] = passager;
        }
        vols[i] = vol;
    }

    for (int i = 0; i < 2; i++) {
        printf("Vol au départ de %s et à destination de %s d'une durée de %d heures, nous appelons les passagers : \n", vols[i].depart, vols[i].arrivee, vols[i].duree);
        for (int j = 0; j < 2; j++) {
            printf("- %s siège %d. \n", vols[i].passagers[j].prenom, vols[i].passagers[j].siege);
        }
    }
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice7(void) {
    printf("\n\nEXERCICE 7\n\n");
    
    /******************** Votre code ci-dessous ********************/
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10-i; j++) {
            printf(" ");
        }  
        for(int j = 0; j < 2*i+1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10-i; j++) {
            printf(" ");
        }  
        for(int j = 0; j < 2*i+1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(int i = 0; i < 6; i++) {
        for (int j = 0; j < 9; j++) {
            printf(" ");
        }
        printf("***\n");
    }
    /******************** Votre code ci-dessus *********************/

    return;
}


void exercice7_bis(void) {
    printf("\n\nEXERCICE 7 BIS\n\n");
    
    /******************** Votre code ci-dessous ********************/
    int dimensions[3];

    for (int i = 0; i < 3; i++) {
        printf("Renseigner le nombre de lignes de la forme %d : ", i);
        scanf("%d", &dimensions[i]);
    }
    
    for(int i = 0; i < dimensions[0]; i++) {
        for(int j = 0; j < dimensions[0]-i; j++) {
            printf(" ");
        }  
        for(int j = 0; j < 2*i+1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(int i = 0; i < dimensions[1]; i++) {
        for(int j = 0; j < dimensions[0]-i; j++) {
            printf(" ");
        }  
        for(int j = 0; j < 2*i+1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(int i = 0; i < dimensions[2]; i++) {
        for (int j = 0; j < dimensions[0]-1; j++) {
            printf(" ");
        }
        printf("***\n");
    }
    /******************** Votre code ci-dessus *********************/

    return;
}


int main(void) {   

    // Astuce : commenter tous les exercices sauf celui en cours pour gagner du temps !
    
    exercice1();
    exercice2();
    exercice2_bis();
    exercice3();
    exercice3_bis();
    exercice4();
    exercice4_bis();
    exercice5();
    exercice5_bis();
    exercice5_ter();
    exercice6();
    exercice7();
    exercice7_bis();

    return 0;
}
