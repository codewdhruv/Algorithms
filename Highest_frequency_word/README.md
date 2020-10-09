The code finds the word with highest frequency excluding the given banned words.
The iteration takes place just once,observing one character at a time.
Each character is stored in the list -word - till a non digit/alphabet character is reached. Once this happens, word is joined to form a string and the frequency of each word is stored in a dictionary as key->value pairs(if and only if it is not one of the banned words)
We use the defaultdict() from collections module to define the dictionary so that the key error is not produced while storing the frequency of each new word.
