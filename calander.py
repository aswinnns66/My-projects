import calendar
import datetime
import time

print(calendar.weekheader(3)) #this gives the headers of the week ;inside () signifies the length of the header like m,mo,mou..etc..
print()

print(calendar.firstweekday())
print()


print(calendar.month(2023, 6))

print(calendar.monthcalendar(2023, 6)) #this will print the calander in matrix format


print(calendar.calendar(2022)) #this will print the whole 2023 calander #we can't make the matrix for the entire year

day_of_the_week = calendar.weekday(2023,6,20)  #to know which weekday
print(day_of_the_week) #print the week day
is_leap = calendar.isleap(2024) #it is know the leap year or not
print(is_leap)
how_many_leap_days = calendar.leapdays(2000,2020) #to know how many leap days between two years
print(how_many_leap_days)


