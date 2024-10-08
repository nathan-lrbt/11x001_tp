age = input("Entrez votre age: ")   # age est un texte (string)
age = int(age)                      # age est maintenant un entier (int)
print("Votre age est: ", age)

if(age<18):
    print("Mineur")
else:
    print("Majeur")
