#This program is to find the vowel count in a given string

string = input("Enter a string : ")
count = 0
word =""
for x in string :
	for letter in "aeiouAEIOU":
		if x == letter :
			count += 1
			word = word + x
print ("The number of vowels in the string = " , count)
print ("They are : " + word)
