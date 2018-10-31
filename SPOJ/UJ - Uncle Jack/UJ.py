from sys import stdin, stdout

def main():
    while True:
       n, k = stdin.readline().split()
       n = int(n)
       k = int(k)
       if n==0 and k==0:
          break
       stdout.write(str(n**k)+ '\n')

if __name__ == "__main__":
   main()