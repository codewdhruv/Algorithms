string = input("Enter a string: ")
number=[]
k=0
nine=[9]
for word in string.split():
    if word.isdigit():
        result = word.find('9')
        if(result==-1):
            print(word)