import os 
import sys
import datetime 
from datetime  import timedelta

def makeques(x):
    f=open("ques.txt","a")
    f.write(x+"\n")
    f.close()


def nameit(a):
    a=a.split()
    return "_".join(a)

def filemake(a):
    f = open(a, "w")
    f.write("")
    f.close()
    
    
dir=datetime.date.today()
dir=(dir-timedelta(days=0))
dir=str(dir)
dir=dir.split("-")
dir=dir[::-1]
dir="_".join(dir)


os.mkdir(dir)
os.chdir(dir)
print("changed")
print(os.getcwd())
a=int(input("ENTER NUMBER OF FILES"))
print('''
      1.FOR PY
      2.FOR CPP
      3.FOR BOTH
      ''')
ch=int(input())
for i in range(a):
    xx=input("ENTER FILE NAME FOR FILE "+str(i+1)+":")
    makeques(xx)
    if(ch==1 or ch==3):
        yy=nameit(xx)+".py"
        filemake(yy)
    if(ch==2 or ch==3):
        zz=nameit(xx)+".cpp"
        filemake(zz)
    

        
        
        
    
    