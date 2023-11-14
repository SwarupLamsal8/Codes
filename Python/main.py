# Swarup Lamsal
import time
t=int(time.strftime('%H'))
print(t)
if(t>=4 and t<12):
    print("Good Morning:")
elif(t>=12 and t<=15):
    print("Good Afternoon:")
else:
    print("Good Night:")
