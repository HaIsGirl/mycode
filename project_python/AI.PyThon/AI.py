import speech_recognition
import pyttsx3
from datetime import date, datetime
today=date.today()
name="User"
while True:
    robot_ear=speech_recognition.Recognizer()
    with speech_recognition.Microphone() as mic:
        print("Robot: I'm Listening")
        audio=robot_ear.listen(mic)
    try:
       you=robot_ear.recognize_google(audio, show_all=True)
       you=you['alternative'][0]['transcript']
    except:
       you=""
    robot_brain=""
    print('You: ',you)
    print('Robot:...')
    if "hello" in you: 
        robot_brain="Hello "+name 
    elif "please call me is" in you:
        name=you.strip("please call me is")
    elif you=="":
        robot_brain="I can't hear you, please try again"
    elif ("today") in you:
        robot_brain= today.strftime("%B %d, %Y")
    elif you=="how are you":
        robot_brain="I'm fine, Can I help you?"
    elif you=="who are you":
        robot_brain="I'm is a robot"
    elif "bye" in you:
        robot_brain="Goodbye, see you again"
    elif "president" and "USA" in you:
        print("Joe Biden")
        print("Robot: "+robot_brain)
        robot_mouth = pyttsx3.init()
        robot_mouth.say(robot_brain)
        robot_mouth.runAndWait()
        break
    elif "time" in you :
        now=datetime.now()
        robot_brain=now.strftime("%H hours %M minutes %S seconds")
    else:
        robot_brain="I'm fine, Thanks"
    print("Robot: "+ robot_brain)
    robot_mouth = pyttsx3.init()
    robot_mouth.say(robot_brain)
    robot_mouth.runAndWait()