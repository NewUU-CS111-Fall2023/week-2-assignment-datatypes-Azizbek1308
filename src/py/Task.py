from random import randint
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
        x=randint(10**99,10**100-1)
        print(f"{x} is random 100 digit number \n")
        print(float(x/A))

class string_matching():
    def string_matching(self,x):
        if x[-1] in x[0:-1]:
            print(f'{x[0:-1].index(x[-1])} is index of "{x[-1]}" in "{" ".join(x[0:-1])}" sentence! ')
        else:
            print("no match")

class spawn_prediction():
    def spawn_prediction(self,x,y):
        lists=[]
        a=0
        j=0
        lists.append(y)
        for i in range(1,x,1):
            y=list(input("Please enter a cordinate! \n").split(";"))
            lists.append(y)
        while a<=3 and j<x-1:
            a=((int(lists[j][0])-int(lists[j+1][0]))**2+(int(lists[j][1])-int(lists[j+1][1]))**2)**(1/2)
            j+=1
        if j==x-1 and a<=3:
            print("The charecter is alive")
        else:
            print(f"The character is dead at the {j+1} cordinate!")





if __name__ == "__main__":
    print("hi ")