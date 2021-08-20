def divisaoFN(x, y):
    return x / y
    
def somaFN(x, y):
    return x + y
    
def multiFN(x, y):
    return x * y
    
def subtracaoFN(x, y):
    return x - y



numeros = [1, 2, 3, 4,]
novos_numeros = numeros

print("Novos Números, Antes", novos_numeros)

numeros[0] = 10


print("Novos Números, Depois", novos_numeros)

novos_numericos = [numero for numero in numeros]

print("Novos Numericos lista comprehen...", novos_numericos)


print("Ou")

numerosFor = []
    
for numero in numeros:
    numerosFor.append(numero)
    
    
print("Numeros em For", numerosFor)

print()
print()


divisao = [numero / 2 for numero in numerosFor]
multiplica = [numero * 2 for numero in numerosFor]
subtra = [numero - 2 for numero in numerosFor]
soma = [numero + 2 for numero in numerosFor]

print("Com Função")

divisaoFM = [divisaoFN(numero, 2) for numero in numerosFor]
multiplicaFM = [multiFN(numero, 2) for numero in numerosFor]
subtraFM = [subtracaoFN(numero, 2) for numero in numerosFor]
somaFM = [somaFN(numero, 2) for numero in numerosFor]


print("Divisao", divisao)
print("Multiplicacao", multiplica)
print("Subtracao", subtra)
print("Soma", soma)

print("Com funcao")

print("Divisao", divisaoFM)
print("Multiplicacao", multiplicaFM)
print("Subtracao", subtraFM)
print("Soma", somaFM)

#condicionais
print("Condicionais")
filtra = [numero for numero in somaFM if numero >= 5]
print("Filtrado >= 5", filtra)
print("---------------")
print("Impar")
impar = [numero for numero in somaFM if numero % 2 != 0]
print(impar)
print("Par")
par = [numero for numero in somaFM if numero % 2 == 0]
print(par)





