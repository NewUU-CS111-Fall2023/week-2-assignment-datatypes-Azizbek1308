# * Author: Azizbek Ergashov
# * Date: 25/10/2023
from Task import leap_year,find_number,long_arithmetics,string_matching,spawn_prediction
print("Task_1")
year = leap_year()
year.leap_year(int(input("Please enter a year for checking if it is leap year or not \n")))
print("Task_2")
number = find_number()
number.find_number(int(input("Please guess a number! \n")))
print("Task_3")
input_number = long_arithmetics()
input_number.long_arithmetics(float(input("Please enter a number! \n")))
print("Task_4")
string = string_matching()
string.string_matching(input("please enter a sentence and a word respectively! For example: hi my name is aziz is  \n").split(" "))
print("Task_5")
character = spawn_prediction()
character.spawn_prediction(int(input("Please enter a number of steps! \n")),list(input("Please enter a cordinate! For example 1;2 \n").split(";")))