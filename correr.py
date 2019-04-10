import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ sumas.cpp -o sumas.x")
os.system("./sumas.x > datos.dat")

def leer(filename):
    
    archivo = open(filename,"r")
    lineas = archivo.readlines()
    return lineas

data = leer("datos.dat")

print(data[0])
print(data[1])