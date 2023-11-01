import random


letters = [
    "a",
    "b",
    "c",
    "d",
    "e",
    "g",
    "h",
    "i",
    "j",
    "k",
    "l",
    "m",
    "n",
    "o",
    "p",
    "q",
    "r",
    "s",
    "t",
    "u",
    "v",
    "w",
    "x",
    "y",
    "z",
    "A",
    "B",
    "C",
    "D",
    "E",
    "F",
    "G",
    "H",
    "I",
    "J",
    "K",
    "L",
    "M",
    "N",
    "O",
    "P",
    "Q",
    "R",
    "S",
    "T",
    "U",
    "V",
    "W",
    "X",
    "Y",
    "Z",
]
numbers = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9"]
symbols = ("!", "@", "#", "$", "%", "^", "&", "*", "(", ")", ">", "<", "+")
print("WELCOME TO PASSWORD GENERATOR!")
n_letters = int(input("How many latters you want in your password\n"))
n_numbers = int(input("How many numbers you want in your password\n"))
n_symbols = int(input("How many symblos you want in your password\n"))
password = ""
for _ in range(1, n_letters + 1):
    char = random.choices(letters)
    password += "".join(char)
for _ in range(1, n_symbols + 1):
    char = random.choices(symbols)
    password += "".join(char)
for _ in range(1, n_numbers + 1):
    char = random.choices(numbers)
    password += "".join(char)


print(password)
