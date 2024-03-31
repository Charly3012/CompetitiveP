import tkinter as tk
import random
from tkinter import messagebox


class Buscaminas:
    def __init__(self, master, filas, columnas, bombas):
        self.master = master
        self.filas = filas
        self.columnas = columnas
        self.bombas_total = bombas
        self.bombas_restantes = bombas

        self.celdas = []
        self.bombas_pos = set()
        self.celdas_marcadas = set()
        self.botones = []

        self.bombas_label = tk.Label(master, text=f"Bombas restantes: {
                                     self.bombas_restantes}")
        self.bombas_label.grid(row=0, column=0, columnspan=self.columnas-2)

        self.reiniciar_button = tk.Button(
            master, text="Reiniciar", command=self.reiniciar_juego)
        self.reiniciar_button.grid(row=0, column=self.columnas-2, columnspan=2)

        self.crear_tablero()
        self.colocar_bombas()

    def crear_tablero(self):
        for fila in range(1, self.filas + 1):
            fila_celdas = []
            for columna in range(self.columnas):
                boton = tk.Button(self.master, width=2, bg="white")
                boton.bind("<Button-1>", lambda event, fila=fila,
                           columna=columna: self.revelar_celda(event, fila, columna))
                boton.bind("<Button-3>", lambda event, fila=fila,
                           columna=columna: self.marcar_celda(event, fila, columna))
                boton.grid(row=fila, column=columna)
                fila_celdas.append(boton)
            self.celdas.append(fila_celdas)

    def colocar_bombas(self):
        self.bombas_pos = set(random.sample([(fila, columna) for fila in range(
            1, self.filas + 1) for columna in range(self.columnas)], self.bombas_total))

    def reiniciar_juego(self):
        for fila in range(1, self.filas + 1):
            for columna in range(self.columnas):
                self.celdas[fila-1][columna].config(
                    text="", state=tk.NORMAL, relief=tk.RAISED)
        self.bombas_restantes = self.bombas_total
        self.bombas_label.config(text=f"Bombas restantes: {
                                 self.bombas_restantes}")
        self.celdas_marcadas.clear()
        self.colocar_bombas()

    def revelar_celda(self, event, fila, columna):
        if (fila, columna) in self.bombas_pos:
            self.mostrar_bombas()
            self.marcar_celdas_incorrectas()
            respuesta = messagebox.askquestion(
                "Game Over", "¡Has perdido! ¿Deseas jugar de nuevo?")
            if respuesta == "yes":
                self.reiniciar_juego()
            else:
                self.master.destroy()
        else:
            self.celdas[fila-1][columna].config(state=tk.DISABLED)
            self.celdas[fila-1][columna].config(relief=tk.SUNKEN)
            vecinos = self.obtener_vecinos(fila, columna)
            bombas_vecinas = sum(
                1 for vecino in vecinos if vecino in self.bombas_pos)
            if bombas_vecinas > 0:
                self.celdas[fila-1][columna].config(text=str(bombas_vecinas))
            else:
                for vecino in vecinos:
                    if self.celdas[vecino[0]-1][vecino[1]]["state"] == "normal":
                        self.revelar_celda(event, vecino[0], vecino[1])
        if self.bombas_restantes == 0 and self.celdas_marcadas == self.bombas_pos:
            self.mostrar_bombas()
            respuesta = messagebox.askquestion(
                "¡Felicidades!", "¡Has ganado! ¿Deseas jugar de nuevo?")
            if respuesta == "yes":
                self.reiniciar_juego()
            else:
                self.master.destroy()

    def marcar_celda(self, event, fila, columna):
        if self.celdas[fila-1][columna]["text"] == "":
            self.celdas[fila-1][columna].config(text="🚩")
            self.bombas_restantes -= 1
            self.bombas_label.config(text=f"Bombas restantes: {
                                     self.bombas_restantes}")
            self.celdas_marcadas.add((fila, columna))
        else:
            self.celdas[fila-1][columna].config(text="")
            self.bombas_restantes += 1
            self.bombas_label.config(text=f"Bombas restantes: {
                                     self.bombas_restantes}")
            self.celdas_marcadas.discard((fila, columna))

    def mostrar_bombas(self):
        for fila in range(1, self.filas + 1):
            for columna in range(self.columnas):
                if (fila, columna) in self.bombas_pos:
                    self.celdas[fila-1][columna].config(text="💣")

    def marcar_celdas_incorrectas(self):
        for fila, columna in self.celdas_marcadas:
            if (fila, columna) not in self.bombas_pos:
                self.celdas[fila-1][columna].config(text="❌")

    def obtener_vecinos(self, fila, columna):
        vecinos = []
        for i in range(-1, 2):
            for j in range(-1, 2):
                if 1 <= fila + i <= self.filas and 0 <= columna + j < self.columnas and (i != 0 or j != 0):
                    vecinos.append((fila + i, columna + j))
        return vecinos


def iniciar_juego(filas, columnas, bombas):
    root = tk.Tk()
    root.title("Buscaminas")
    juego = Buscaminas(root, filas, columnas, bombas)
    root.mainloop()


if __name__ == "__main__":
    # Puedes ajustar el tamaño del tablero y el número de bombas aquí
    iniciar_juego(20, 20, 1)
