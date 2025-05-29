import SpeechRecognition as sr # type: ignore
import pyttsx3 # type: ignore
import webbrowser
from datetime import datetime

# Initialize the speech recognizer and text-to-speech engine
recognizer = sr.Recognizer()
engine = pyttsx3.init()

# Set the voice assistant to speak
def speak(text):
    engine.say(text)
    engine.runAndWait()

# Function to listen to voice commands
def listen():
    with sr.Microphone() as source:
        print("Listening...")
        audio = recognizer.listen(source)
        try:
            command = recognizer.recognize_google(audio)
            print(f"User said: {command}")
            return command.lower()
        except sr.UnknownValueError:
            speak("Sorry, I did not understand that.")
            return None
        except sr.RequestError:
            speak("Sorry, I am having trouble accessing the service.")
            return None

# Function to respond to commands
def respond(command):
    if command:
        if "hello" in command:
            speak("Hello! How can I assist you today?")
        
        elif "time" in command:
            current_time = datetime.now().strftime("%H:%M")
            speak(f"The time is {current_time}.")
        
        elif "date" in command:
            current_date = datetime.now().strftime("%B %d, %Y")
            speak(f"Today's date is {current_date}.")
        
        elif "search for" in command:
            search_query = command.replace("search for", "").strip()
            speak(f"Searching the web for {search_query}")
            webbrowser.open(f"https://www.google.com/search?q={search_query}")
        
        else:
            speak("Sorry, I cannot perform that task right now.")
    else:
        speak("I did not hear any command. Please try again.")

# Main loop to keep the assistant running
def voice_assistant():
    speak("Voice Assistant Activated. How can I help you?")
    while True:
        command = listen()
        if command:
            if "exit" in command or "quit" in command:
                speak("Goodbye!")
                break
            respond(command)

if __name__ == "__main__":
    voice_assistant()
