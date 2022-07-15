t = int(input("")) 

for i in range(t):
    n = int(input(""))
    if n % 11 ==0:
        boolean = "Yeah"
    else:
        boolean = "Nah"
    print("Case #",i+1,": ",boolean , sep='')