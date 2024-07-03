marks=[2,3,4,5,6,7,8,9]

def checkmarks(mark):
    if(mark<5):
        return "failure"
    else:
        return "success"

y=list(map(checkmarks,marks))

for index,verdict in enumerate(y):
    print(marks[index],"is",verdict)