def contagem(n):
    if n <= 0:  
        return
    print(n)
    contagem(n + 1)  

print("Digite um número para iniciar a contagem regressiva:")
n = int(input())  
contagem(n)
