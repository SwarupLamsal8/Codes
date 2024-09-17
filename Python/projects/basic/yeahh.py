import customtkinter

customtkinter.set_appearance_mode("dark")
customtkinter.set_default_color_theme("dark-blue")

root = customtkinter.CTk()
root.geometry("600x400")


def login():
    print("Test")


frame = customtkinter.CTkFrame(master=root)
frame.place(relx=0.5,rely=0.5,anchor="center",relwidth=0.75,relheight=0.75)

label=customtkinter.CTkLabel(master=frame,text="Login System")
label.pack(pady=12,padx=10)

entry1=customtkinter.CTkEntry(master=frame,placeholder_text="Username")
entry1.pack(pady=12,padx=10)

entry2=customtkinter.CTkEntry(master=frame,placeholder_text="Password",show="*")
entry2.pack(pady=12,padx=10)

button=customtkinter.CTkButton(master=frame,text="Login",command=login)
button.pack(pady=12,padx=10)

checkbox=customtkinter.CTkCheckBox(master=frame,text="Remember Me")
checkbox.pack(pady=12,padx=10)

root.mainloop()