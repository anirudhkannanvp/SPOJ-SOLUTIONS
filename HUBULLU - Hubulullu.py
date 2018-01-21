t=int(input())
while(t):
    t-=1
    n,k=map(int,input().split())
    if(k==0):
        print("Airborne wins.")
    else:
        print("Pagfloyd wins.")