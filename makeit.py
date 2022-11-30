import os 
import sys
import datetime 
from datetime  import timedelta


def nameit(a):
    a=a.split()
    return "_".join(a)

def filemake(a):
    f = open(a, "w")
    f.write("")
    f.close()
    
    
dir=datetime.datetime.now()
dir=(dir-timedelta(days=0))
dir=dir.strftime("%d_%b_%Y")
dir=str(dir)
print(dir)
# dir=dir.split("-")
# dir=dir[::-1]
# dir="_".join(dir)


os.mkdir(dir)
os.chdir(dir)
print("changed")
print(os.getcwd())
a=int(input("ENTER NUMBER OF FILES"))

ch=2
for i in range(a):
    xx=input("ENTER FILE NAME FOR FILE "+str(i+1)+":")
    if(ch==2):
        zz=nameit(xx)+".cpp"
        filemake(zz)
    

        
        
        
    
    