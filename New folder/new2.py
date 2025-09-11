a=int(input("enter the unitss:"))
if (a<100):
    print("250")
elif(200>=a and a>101) :
    print(a*7.15)
elif(300>=a and a>201) :
    print(a*8.50)
else :
    print(a*9.15)


n=int(input("enter a nummber :"))
sum=0
while(n>0):
    a=n%10
    sum=sum+a
    n=n//10
print("the sum of the digit number is :",sum)


n=int(input("enter a nummber :"))
i=1
k=1
while(n>=i):
    k=k*i
    i=i+1
print("factorial of given number is:",k)



k=0
i=0
while(i<=100):
    k=k+i
    i=i+2
print("sum is:",k)
    