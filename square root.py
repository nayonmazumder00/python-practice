def squareroot(n,l):
    x = n
    count = 0
    while (1):
        count += l

        root = 0.5*(x +(n/x))
        if(abs(root - x) < l):
            break
        x = root
        return root
if __name__ == "__main__":
    n = 327
    l = 0.00001
    print(squareroot(n,l))