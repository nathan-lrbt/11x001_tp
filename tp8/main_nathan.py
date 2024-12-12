from utils import exercice, GREEN, ENDC
import numpy as np


# ************************************
# ***** Vos fonctions ci-dessous *****
# ************************************

# EXERCICE 1


def hamming(str1, str2):
    # ******************** Votre code ci-dessous ********************
    dist = 0
    if len(str1) != len(str2):
        return -1
    else:
        for i in range(len(str1)):
            if str1[i] != str2[i]:
                dist += 1
        return dist
    # ******************** Votre code ci-dessus *********************


# EXERCICE 2


def recherche_mot_force_brute(mot, texte):
    # ******************** Votre code ci-dessous ********************
    n = len(mot)
    for i in range(len(texte)):
        print(f"texte[{i}]={texte[i]}")
        if mot[0] == texte[i]:
            print("a")
            if texte[i : i + n] == mot:
                return i
    return -1
    # ******************** Votre code ci-dessus *********************


# EXERCICE 3


# ***********************************
# ***** Vos fonctions ci-dessus *****
# ***********************************
def levenshtein(str1="chien", str2="niche"):
    n, m = len(str1), len(str2)

    D = np.zeros((n + 1, m + 1), dtype=int)

    for i in range(1, n + 1):
        D[i][0] = i
    for j in range(1, m + 1):
        D[0][j] = j
    for i in range(1, n + 1):
        for j in range(1, m + 1):
            if str1[i - 1] == str2[j - 1]:
                D[i][j] = D[i - 1][j - 1]
            else:
                D[i][j] = min(
                    D[i - 1][j] + 1,  # suppression
                    D[i][j - 1] + 1,  # insertion
                    D[i - 1][j - 1] + 1,  # remplacement
                )

    return D[n][m]


#
# EXERCICE 1


@exercice
def exercice1():
    str1 = input("str1 = ")
    str2 = input("str2 = ")
    print(f"\nHamming({str1}, {str2}) = {hamming(str1, str2)}.")


#
# EXERCICE 2
#


@exercice
def exercice2():
    mot = input("mot = ")
    texte = input("texte = ")
    idx = recherche_mot_force_brute(mot, texte)
    if idx == -1:
        print(f"'{mot}' n'est pas dans '{texte}'")
    else:
        print(
            f"'{mot}' trouvé à l'indice {idx} : {texte[:idx]}{GREEN}{texte[idx:idx+len(mot)]}{ENDC}{texte[idx+len(mot):]}"
        )


#
# EXERCICE 3
#


@exercice
def exercice3():
    # ******************** Votre code ci-dessous ********************
    str1 = " "
    while str1 != "":
        str1 = input("str1 = ")
        str2 = input("str2 = ")
        print(f"\nLevenshtein({str1}, {str2}) = {levenshtein(str1, str2)}.")
    # ******************** Votre code ci-dessus *********************


if __name__ == "__main__":

    exercice1()
    exercice2()
    exercice3()
