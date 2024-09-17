import datetime
import webbrowser
import pyttsx3
import speech_recognition as sr
import pyjokes
import string
import os
import time

def sph2txt():
    record = sr.Recognizer()
    with sr.Microphone() as source:
        print("Please Speak!")
        record.adjust_for_ambient_noise(source)
        audio = record.listen(source)
        try:
            print("Recognizing...")
            data = record.recognize_google(audio)
            return data
        except sr.UnknownValueError:
            print("Not Recognized!")

def txt2sph(x):
    engine = pyttsx3.init()
    voices = engine.getProperty('voices')
    engine.setProperty('voice',voices[1].id)
    rate = engine.getProperty('rate')
    engine.setProperty('rate',150)
    engine.say(x)
    engine.runAndWait()

if __name__=='__main__':

    if "hello friday" in sph2txt().lower():
        txt2sph("Hello Swarup!")
        
        while (1):
            data1 = sph2txt().lower()
            print(data1)
        
            if "your name" in data1:
                name = "My name is Friday"
                txt2sph(name)

            elif "old are you" in data1:
                age = "I was built just yesterday!"
                txt2sph(age)

            elif "time" in data1:
                time = datetime.datetime.today().strftime("%I%M%p")
                txt2sph(time)
        
            elif "youtube" in data1:
                webbrowser.open('www.youtube.com')

            elif "instagram" in data1:
                webbrowser.open('www.instagram.com')
        
            elif "joke" in data1:
                joke1 = pyjokes.get_joke(language="en",category='all')
                print(joke1)
                txt2sph(joke1)

            elif 'song' in data1:
                add = 'D:\Time Pass\Songs'
                list1 = os.listdir(add)
                print(list1)
                if 'special' in data1:
                    os.startfile(os.path.join(add,list1[0]))
                elif 'sukhi' in data1:
                    os.startfile(os.path.join(add,list1[1]))

            elif 'exit' in data1:
                txt2sph("Thank you! au Wu!")
                break
            
            time.sleep(1)
        
    else:
        txt2sph("I did not understand that!")