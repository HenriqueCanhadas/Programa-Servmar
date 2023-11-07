import customtkinter
import tkinter as tk
from tkinter import font
from PIL import Image
import subprocess
import threading

def chamar_mark4():
    thread = threading.Thread(target=chamar_mark4)
    thread.start()
    status_label.config(text="")

def chamar():
    status_label.config(text="Abrindo Gerar Relatório")
    subprocess.call(["python", "Testes/Mark4.py"])
    status_label.config(text="")


janela=customtkinter.CTk()
janela.geometry("345x180")
janela.title("SERVMAR")
janela.resizable(width=False, height=False)
customtkinter.set_appearance_mode("light")
customtkinter.set_default_color_theme("dark-blue")

janela.iconbitmap(r'C:\Users\henrique.canhadas\OneDrive - Servmar Ambientais\Documentos\Codigos\GitHub\Programa Servmar\Testes\servmarico.ico')

gerar=customtkinter.CTkButton(janela, text="Gerar Relatório", command=chamar).place(x=15, y=10)
teste=customtkinter.CTkButton(janela, text="Gerar Analise").place(x=190, y=10)

status_label = tk.Label(janela, text="",bg="#ebebeb", font=("Arial", 15))
status_label.pack(pady=90)
fonte = font.nametofont("TkDefaultFont")
fonte.configure(underline=True)
fonte.configure(size=17)
status_label.config(font=fonte)


img=customtkinter.CTkImage(light_image=Image.open(r'C:\Users\henrique.canhadas\OneDrive - Servmar Ambientais\Documentos\Codigos\GitHub\Programa Servmar\Testes\servmarlogo.png'), dark_image=Image.open(r'C:\Users\henrique.canhadas\OneDrive - Servmar Ambientais\Documentos\Codigos\GitHub\Programa Servmar\Testes\servmarlogo.png'), size=(345,50))
customtkinter.CTkLabel(janela,text="", image=img).place(x=5, y=100)

janela.mainloop()
