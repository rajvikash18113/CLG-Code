s1 = 'CGC'
s2 = "B.Tech"
print(s1)
print(s2)
print ('Concatenate -> ' + s1 +' ' + s2) # concatenate
print(s1 * 3) # repeat

s = "Chandigarh Engineering Collge"

print(s[0:10]) # access 1stt Word
s1 = s + s[0] # update
print(s1) # print


print(len(s)) # length of string

print(max(s)) # max char
print(min(s)) # min char

print(s.split()) # split string

#join string


#strip


print(sorted(s)) # sorted string

#formatted string
name = "Vikash"
roll = 367    
print("My name is {name} and my roll is {roll}.".format(name=name, roll=roll)) # using format method