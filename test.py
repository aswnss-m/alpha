
if __name__ == '__main__':
    flag =0
    n = int(input("Enter a limit : ")) #string
    for i in range(2,n//2): #range(start,stop,step)
         if n%i == 0:
             flag =  1 #not prime
             break
    if flag == 0:
        print("prime")
    else:
        print("not prime")
        

    