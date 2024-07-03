num=5

# wrong syntax
# print("The number is "+num)

# right syntax
print("The number is "+str(num))

# printing all elements of a list
names=["swarup","kritan","shiva"]
for x in names:
    print(x)

# printing all of the elements in string
name="rhododendron"
for x in name:
    print(x)

for x in range(0,101,5):
    print(x)
else:
    print("The loop has ended")

names=["swarup","kritan","shiva"]
actions=["codes","eats","sleeps"]

# for name in names:
#     for action in actions:
#         print(name + " " + action + ".")

for action in actions:
    for name in names:
        print(name + " " + action + ".")
