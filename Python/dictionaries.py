# Dictionaries
band={
    "vocals":"Plant",
    "guitar":"Page"
}

band2= dict(vocals="plants",guitar="Page")

print(band)
print(band2)
print(type(band))
print(len(band))

print(band["vocals"])
print(band.get("guitar"))

# list the keys
print(band.keys())
# list the values
print(band.values())
# list he key/values of pairs
print(band.items())
# verify if a key exists
print("guitar" in band)
print("reyna" in band)
# change values in dictionary
band["vocals"]="Reyna"
band.update({"Base":"JPJ"})

print(band)

# Removedata
print(band.pop("Base"))
print(band)

band["drums"]="broth"
print(band)

print(band.popitem()) #tuple
print(band)

#delete and clear
band["drums"]="broth"
del band["drums"]
print(band)

band2.clear()
print(band2)

del band2

# copy dictionary
# band2=band refer the the same memory so it affects both if one is changed
# print("Bad copy!")
# print(band)
# print(band2)

# band2["drums"]="Yeahh"
# print(band)

# Good copy
band2=band.copy()
band2["drums"]="yeah"
print(band)
print(band2)

#copy using constructor
band3=dict(band)
band3["Yeha"]="LAKNIGHT"
print(band)
print(band3)

member1={
    "name":"yeah",
    "tribal":"cheif",
}

member2={
    "yo":"boy",
    "page":"guitar"
}

member3={
    "member1":member1,
    "member2":member2
}

print(member3)
print(member3["member1"]["tribal"])

#sets

nums={1,2,3,4}
nums2=set((1,2,3,4))

print(nums)
print(nums2)
print(type(nums))
print(len(nums))

#no duplicates are allowed
nums={1,1,2,3,4,5,5,6}
print(nums)

#true is a dupe of 1, False is a dupe of zero
nums={1,True,2,False,4,0,3}
print(nums)

#check values in set
print(5 in nums)

#you cannot refer to an element in the set with an index position or a key
nums.add(8)
print(nums)

#add element frim ine set to another
morenums={5,6,7}
nums.update(morenums)
print(nums)

#you can update with lists,tuples,and dictionaries too

#merge two sets to create a new set
one={1,2,3}
two={5,6,7}

mynewset=one.union(two)
print(mynewset)

#keep only the duplicates
one={1,2,3}
two={2,3,4}

mynewset=one.intersection(two)
print(mynewset)

#Keep everthing other than dupes
one={1,2,3}
two={2,3,4}

one.symmetric_difference_update(two)
print(one)