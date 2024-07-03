anothertuple=('swarup',99,False)
mytuple=tuple(('swarup',45,True))
print(type(mytuple))
print(anothertuple)

newlist=list(mytuple)
newlist.append('Neil')
print(newlist)
newtuple=tuple(newlist)
print(newtuple)

(one,two,*hey)=anothertuple
print(one)
print(two)
print(hey)

print(anothertuple.count(99))
