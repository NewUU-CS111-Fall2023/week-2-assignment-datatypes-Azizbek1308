from random import randint
# task_1
class leap_year():
    def leap_year(self,n):
        if n % 4 == 0:
            print(n, " is leap year")
        else:
            print(n, " is not leap year")


class find_number():
    def find_number(self,x):
        n=randint(1,100)
        while x!=n:
            if x>n:
                print("too high \n")
                x=int(input("Please again guess a number! \n"))
            else:
                print("too low \n")
                x = int(input("Please again guess a number! \n"))
        print(f"You found this {x} number! Congratulations!!! 🥳")


class long_arithmetics():
    def long_arithmetics(self,A):
        x=randint(10**100,10**101-1)
        print(f"{x} is random 100 digit number \n")
        print(float(x/A))

class string_matching():
    def string_matching(self,x):
        if x[-1] in x[0:-1]:
            print(f'{x[0:-1].index(x[-1])} is index of "{x[-1]}" in "{" ".join(x[0:-1])}" sentence! ')
        else:
            print("no match")


if __name__ == "__main__":
    print("hi")