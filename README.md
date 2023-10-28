
# Projeto: Cálculo de Combustível

Esse projeto consiste em um programa simples em C para calcular
qual tipo de combustível é mais vantajoso abastecer, gasolina ou etanol,
com base nos preços atuais de cada combustível. O cálculo é feito
considerando a relação de rendimento entre a gasolina e o etanol.

## Funções

1. **`main()`**: Função principal que inicia a execução do programa. 
Ela lida com a entrada dos preços da gasolina e do etanol e chama a função 
`Calculation` para determinar qual combustível é mais vantajoso. A função 
também imprime a mensagem correspondente ao resultado.

2. **`Calculation(float vG, float vE)`**: Função de cálculo que recebe 
os preços da gasolina e do etanol como argumentos. Ela calcula se é mais 
vantajoso abastecer com gasolina, etanol ou se ambos têm um custo equivalente. 
Retorna 0 se a gasolina for mais vantajosa, 1 se o etanol for mais vantajoso 
e 2 se ambos forem equivalentes.

<br>

# Estrutura do Projeto

- `cdb.c`: Arquivo principal que contém o código fonte do programa em C.
- `cdb.o`: Arquivo objeto gerado após a compilação do arquivo `cdb.c`.
- `cdb.exe`: Arquivo executável gerado a partir do arquivo objeto `cdb.o`.

## Notas Adicionais

1. A função `setlocale` é usada para configurar a localização para "Portuguese", garantindo que a acentuação e caracteres especiais sejam exibidos corretamente.
2. O programa considera a relação de rendimento entre gasolina e etanol como 0.7 para determinar a melhor opção de abastecimento.

