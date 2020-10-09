from collections import defaultdict

def common_count(para, banned):
    comm_word = ""
    max_count=0
    count = defaultdict(int)
    each_word = ""
    word = []

    for p in para:
        if p.isalnum():
            word.append(p.lower())
        elif (len(word) > 0):
            each_word = "".join(word)
            word = []
            if(each_word not in banned):
                count[each_word] += 1
                if(max_count<count[each_word]):
                    max_count=count[each_word]
                    comm_word=each_word

    print(comm_word)