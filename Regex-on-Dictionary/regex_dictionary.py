import re

if __name__ == '__main__':
    matches = 0
    regex = input("Enter regex (all words are in lowercase): ")
    with open("dictionary.txt", "r") as file:
        for word in file:
            if(re.search(regex, word)):
                print(word.strip())
                matches += 1
    print("--------------------\nMatches Found: {}\n--------------------".format(matches))
