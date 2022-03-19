# Assignment 1
# Asmaa Ismael Heikal
# ID: 20210067
# Game 7 : Subtract a square


import math

start = int(input("enter the number of coins you have to play : "))


def play(coins):
    while coins != 0:

        # getting the input from the user
        print("Player 1 enter a \"squared\" non-zero number less than or equal ", coins, " : ", end="")
        x = int(input())

        # check if there is invalid input
        if x > coins or x == 0 or math.isqrt(x) != math.sqrt(x):
            print("Invalid input")
            continue

        coins -= x

        # check if the winner is player 1
        if coins == 0:
            print("Player 1 is the winner")
            break

        else:
            i = 0
            while True:
                if i % 2 != 0:
                    break

                print("Player 2 enter a \"squared\" non-zero number less than or equal ", coins, " : ", end="")
                x = int(input())
                if x > coins or x == 0 or math.isqrt(x) != math.sqrt(x):
                    print("Invalid input")
                    continue

                coins -= x
                i += 1
                # check if the winner is player 2
                if coins == 0:
                    print("Player 2 is the winner")
                    break

            # to break the biggest loop
            if coins == 0:
                break


play(start)
print("*Congratulations*")