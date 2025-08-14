t1 = ()
t2 = ('This is  a tuple')
t3 = ('This is a tuple', 1, 2, 3, 4, 5)
t4 = (1, 2, 3, 4, 5)
print(t1) 
print(t2) 
print(t3) 
print(t3[0]) # access first element
print(t3[1:4]) # access elements from index 1 to 3
print(t4)
append_tuple = t4 + (6, 7, 8) # append elements
print(append_tuple) # print appended tuple
print(t4)
insert_tuple = (3,500) + t4 # insert element at the beginning
print(insert_tuple) # print tuple after insertion

