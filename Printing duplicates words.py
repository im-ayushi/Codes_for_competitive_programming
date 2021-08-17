#Input - The quick brown quick for jumps over the brown fox
#Output-
#the:2
#quick:2
#brown:2
#fox:2


#Code-

s = input();  
s = s.lower();  
word = s.split(" ");  
for i in range(0, len(word)):  
    count = 1;  
    for j in range(i+1, len(word)):  
        if(word[i] == (word[j])):  
            count = count + 1;  
            word[j] = "0";  
    if(count > 1 and word[i] != "0"):  
        print(word[i]+":2");
