# What does this program do?
It takes a regex (regular expression) pattern as input, and displays all the words from the dictionary that matches that pattern.
# How many words are there in the dictionary used?
The program can read any wordlist that has been named `dictionary.txt`.  
The dictionary provided here has the top 25,322 frequently used words in the English language, compiled by [Dolph Mathews](https://github.com/dolph) using Wiktionary's word frequency list.  
# How does it work?
The program reads each word in the dictionary and checks it against the regex pattern. If it is a match, the word is printed.  
The `re` module of Python is used for the regex operations.  
# Is there a regex cheatsheet?
Yes there is. Head over to [**"Regex Cheat Sheet: A Quick Guide to Regular Expressions in Python"**](https://www.dataquest.io/blog/regex-cheatsheet/).