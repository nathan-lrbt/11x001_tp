import random
from pprint import pprint

from utils import (
    exercice,
    formatter_sudoku,
    generer_personnes,
    generer_resultats,
    obtenir_sudoku_valide,
)


#
# EXERCICE 1
#


@exercice
def exercice1():
    # ******************** Votre code ci-dessous ********************
    name = input("Entrez votre prénom : ")
    birthDate = input("Entrez votre date de naissance : ")
    print(f"Je m'appelle {name} et je suis né le {birthDate}")
    pass
    # ******************** Votre code ci-dessus *********************


#
# EXERCICE 2
#


@exercice
def exercice2():
    nombres = list(range(10))
    # ******************** Votre code ci-dessous ********************
    carre = [nombre**2 for nombre in nombres]
    for n1, n2 in zip(nombres, carre):
        print(f"{n1}, {n2}")
    # ******************** Votre code ci-dessous ********************


#
# EXERCICE 3
#


@exercice
def exercice3():
    nombres = [0, 23, 5, 61, 86, 35, 51, 79, 2, 85, 15, 41, 19, 0, 3]
    # ******************** Votre code ci-dessous ********************
    pairs = [nombre for nombre in nombres if nombre % 2 == 0]
    impairs = [nombre for nombre in nombres if nombre % 2 != 0]
    print(pairs)
    print(impairs)
    # ******************** Votre code ci-dessus *********************


#
# EXERCICE 4
#


@exercice
def exercice4():
    while True:
        n = input("Calcul du n-ème terme de la suite de Fibonacci, n = ")
        if not n.isdigit():
            break
        n = int(n)
        print(
            f"--> fibonacci_rec({n}) = {fibonacci_rec(n)}, fibonacci({n}) = {fibonacci(n)}\n"
        )


def fibonacci_rec(n: int) -> int:
    # ******************** Votre code ci-dessous ********************
    if n == 0 or n == 1:
        return 1
    else:
        return fibonacci_rec(n - 1) + fibonacci_rec(n - 2)
    # ******************** Votre code ci-dessus *********************


def fibonacci(n: int) -> int:
    if n == 0 or n == 1:
        return 1
    else:
        fib = [1, 1]
        i = 2
        while i <= n:
            fib.append(fib[i - 1] + fib[i - 2])
            i += 1
        return fib[n]


#
# EXERCICE 5
#


@exercice
def exercice5():
    # ******************** Votre code ci-dessous ********************
    a = [2, 3]
    b = a
    print(a)
    print(b)

    b[0] = 1
    print(a)
    print(b)

    a = [5, 6]
    b[0] = 10
    print(a)
    print(b)
    pass
    # ******************** Votre code ci-dessus *********************


#
# EXERCICE 6
#


@exercice
def exercice6():
    liste_de_liste = [[random.randint(0, 99) for _ in range(2, 5)] for _ in range(2, 5)]
    liste_applatie = []
    # ******************** Votre code ci-dessous ********************
    for liste in liste_de_liste:
        liste_applatie += liste
    # ******************** Votre code ci-dessus *********************
    print(f"Liste de liste : {liste_de_liste}")
    print(f"Liste applatie : {liste_applatie}")


#
# EXERCICE 7
#


@exercice
def exercice7():
    while True:
        chaine = input(
            "Entrer une chaine de caractères (presser 'Entrée' pour sortir) : "
        )
        if chaine == "":
            break
        pal = est_palindrome(chaine)
        verbe = "est" if pal else "n'est pas"
        print(f"'{chaine}' {verbe} un palindrome.\n")


def est_palindrome(chaine: str) -> bool:
    # ******************** Votre code ci-dessous ********************
    chaine_reversed = chaine[::-1]
    print(chaine_reversed)
    if chaine_reversed == chaine:
        return True
    else:
        return False
    # ******************** Votre code ci-dessus *********************


#
# EXERCICE 8
#


@exercice
def exercice8():
    # Cette fonction est déjà complétée. Vous devez compléter la fonction `demander_nombres`
    nombres = demander_nombres()
    print(f"Vous avez entré les nombres suivants : {nombres}")


def demander_nombres():
    nombres = []
    # ******************** Votre code ci-dessous ********************
    while True:
        n = input("Donner un nombre : ")
        if not n.isdigit():
            break
        else:
            nombres.append(int(n))
    # ******************** Votre code ci-dessus *********************
    return nombres


#
# EXERCICE 9
#


@exercice
def exercice9():
    resultats = generer_resultats()
    # ******************** Votre code ci-dessous ********************
    eleves = {}
    for cours in resultats:
        for eleve in cours.keys():
            if eleve not in eleves:
                eleves[eleve] = [cours[eleve]]
            else:
                eleves[eleve].append(cours[eleve])

    pprint(eleves)
    for eleve in eleves.keys():
        notes = eleves[eleve]
        avg = sum(notes) / len(notes)
        note = "note" if len(notes) == 1 else "notes"
        print(f"{eleve:>10} : {len(notes):} {note:<5} - {avg:.2f} de moyenne.")
    # ******************** Votre code ci-dessus *********************


#
# EXERCICE 10
#


@exercice
def exercice10():
    # ******************** Votre code ci-dessous ********************
    text = input("Donner un text à 'slugify' : ")
    # mots = text.lower().split(" ")
    # text_slug = "-".join(mots)
    text_slug = "-".join(map(str.lower, text.split(" ")))
    print(text_slug)
    pass
    # ******************** Votre code ci-dessus *********************


#
# EXERCICE 11
#


@exercice
def exercice11():
    nombres = [random.randint(0, 100) for _ in range(random.randint(3, 20))]
    print(f"\nListe de nombres aléatoires :\n{nombres}")

    personnes = generer_personnes()
    formatter_personnes = lambda personnes: "\n".join(
        map(lambda personne: f"{personne[0]} ({personne[1]})", personnes)
    )
    print(f"\nListe de personnes aléatoires :\n{formatter_personnes(personnes)}")

    tri_a_bulles(nombres, num)  # TODO : modifier cette ligne
    print(f"\nListe de nombres triée :\n{nombres}")

    tri_a_bulles(personnes, name)  # TODO : modifier cette ligne
    print(f"\nListe de personnes triée :\n{formatter_personnes(personnes)}")


def num(l1, l2) -> bool:
    return l2 > l1


def name(l1, l2) -> bool:
    if l1[1] != l2[1]:
        return l1[1] > l2[1]
    else:
        return l1[0] > l2[0]


# TODO : modifier cette fonction
def tri_a_bulles(l, fonction_supperieur):
    for i in range(len(l) - 1, 0, -1):
        for j in range(i):
            if fonction_supperieur(l[j], l[j + 1]):
                l[j + 1], l[j] = l[j], l[j + 1]


#
# EXERCICE 12
#


@exercice
def exercice12():
    sudoku_valide = obtenir_sudoku_valide()
    sudoku_invalide = sudoku_valide.copy()
    sudoku_invalide[0], sudoku_invalide[1] = sudoku_invalide[1], sudoku_invalide[0]

    for i, sudoku in enumerate([sudoku_valide, sudoku_invalide]):
        print(f"\nSudoku n°{i  +1}\n")
        print(formatter_sudoku(sudoku))
        print("--> " + ("VALIDE" if verifier_sudoku(sudoku) else "INVALIDE"))


def verifier_bloc(bloc: list[int]) -> bool:
    checked = []
    nums = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    if sum(bloc) != sum(nums):
        print("Sum of numbers is not sum of 1 - 9")
        return False
    else:
        for num in bloc:
            if num not in checked:
                checked.append(num)
                # print(f"added {num} to checked")
                # print(checked)
            else:
                print(f"{num} appears twice")
                return False
        checked.sort()
        if checked != [1, 2, 3, 4, 5, 6, 7, 8, 9]:
            print("bloc doesn't contain 1-9")
            # print(f"checked and sorted list : {checked}")
            return False
        else:
            # print(f"checked and sorted list : {checked}")
            return True


def extract_lines(sudoku):
    lines = []
    for i in range(9):
        lines.append(sudoku[9 * i : 9 * i + 9])
    return lines
    # print(lines)


def extract_colomns(sudoku):
    colomns = [[], [], [], [], [], [], [], [], []]
    indexes = [i for i in range(0, 73, 9)]
    for i in range(9):
        for index in [index + i for index in indexes]:
            colomns[i].append(sudoku[index])
    return colomns
    # print(colomns)


def extract_corners(sudoku):
    corners = [[], [], [], [], [], [], [], [], []]
    # corners = []
    list_indexes = [
        [0, 9, 18],
        [3, 12, 21],
        [6, 15, 24],
        [27, 36, 45],
        [30, 39, 48],
        [33, 42, 51],
        [54, 63, 72],
        [57, 66, 75],
        [60, 69, 78],
    ]

    for i in range(len(list_indexes)):
        for j in list_indexes[i]:
            corners[i].extend(sudoku[j : j + 3])

    print(corners)
    return corners


def verifier_sudoku(sudoku):
    # ******************** Votre code ci-dessous ********************
    lines = extract_lines(sudoku)
    colomns = extract_colomns(sudoku)
    corners = extract_corners(sudoku)

    print("checking for each lines")
    for line in lines:
        if not verifier_bloc(line):
            return False
    print("checking for each colomn")
    for colomn in colomns:
        if not verifier_bloc(colomn):
            return False
    print("checking for each corner")
    for corner in corners:
        if not verifier_bloc(corner):
            return False

    return True
    # ******************** Votre code ci-dessus *********************


if __name__ == "__main__":

    exercice1()
    exercice2()
    exercice3()
    exercice4()
    exercice5()
    exercice6()
    exercice7()
    exercice8()
    exercice9()
    exercice10()
    exercice11()
    exercice12()
