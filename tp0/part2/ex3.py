def Syracuse(N):
    u=[N]
    while(u[-1]!=1):
        if(u[-1]%2==0):
            u.append(u[-1]/2)
        else:
            u.append(3*u[-1]+1)
    return(u)

if __name__ == "__main__":
    N = int(input("N : "))
    print(Syracuse(N))
    print(len(Syracuse(N)))
