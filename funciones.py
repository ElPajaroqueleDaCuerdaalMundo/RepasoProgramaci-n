# Funciones 

def imprimir_dos_veces(nombre): # nombre es una nombre cualquiera
    print(nombre)
    print(nombre) 

imprimir_dos_veces("Newton")

def decimal_en_entero(numero): # esta funcion transforma un numero tipo 'float' en entero y lo imprime 
    a = int(numero)
    print(a)

def devolver_Numero(numero): # esta función transforma un número tipo 'float' o 'double' en entero y lo retorna
                            # para poderlo amacenar en alguna variable 
    a = int(numero)
    return(a)

decimal_en_entero(2.5555)

# creo una variable y la almaceno el valor de la función dentro de ella 
numero_prueba = devolver_Numero(2.5656548)

## aquí imprimo numero_prueba 
print(numero_prueba) 


## función suma

def suma_numeros(numero1, numero2): 
    a = numero1 + numero2
    return a 

print(suma_numeros(5,7))
