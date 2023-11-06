import customtkinter
from PIL import Image
import subprocess
import threading

def chamar():
    thread = threading.Thread(target=chamar_mark4)
    thread.start()

def chamar_mark4():
    subprocess.call(["python", "Testes/Mark4.py"])

janela=customtkinter.CTk()
janela.geometry("345x200")
janela.title("SERVMAR")
janela.resizable(width=True, height=True)
customtkinter.set_appearance_mode("light")
customtkinter.set_default_color_theme("dark-blue")

def executar_mark4():
        import Mark4  # Importe o arquivo Mark4 dentro da função
        Mark4.executar_mark4()

customtkinter.CTkButton(janela, text="Gerar Relatório", command=chamar).grid(row=0, column=0, padx=0, pady=0)
customtkinter.CTkButton(janela, text="").grid(row=0, column=1)

img=customtkinter.CTkImage(light_image=Image.open("Testes/servmarlogo.png"), dark_image=Image.open("Testes/servmarlogo.png"), size=(345,50))
customtkinter.CTkLabel(janela,text="", image=img).grid(row=2, column=0, padx=15, pady=20)
janela.mainloop()
