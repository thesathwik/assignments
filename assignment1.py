a='qwertyuiopasdfghjklzxcvbnm'
text=input("Enter a sentence: ")
text=text.lower()
for letter1 in a:
    f=0
    if letter1 in text:
        f+=1
if f==1:
    print("It a pangram")
else:
    print("It is not a pangram")
