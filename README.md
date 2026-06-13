# Beecrowd 🚀

## Objetivo
Este repositório foi criado com o objetivo de centralizar, documentar e organizar as minhas resoluções para os problemas propostos na plataforma **Beecrowd**. A ideia principal é deixar esses códigos disponíveis publicamente para fins educacionais, servindo como uma referência de possíveis abordagens, implementação e modelagem de algoritmos eficientes para os desafios da plataforma.

## Tecnologias e Linguagens

* **Linguagem Principal:** Os códigos contidos neste repositório são desenvolvidos majoritariamente em **C++** (C++17/C++20), priorizando a performance em tempo de execução e o uso inteligente das estruturas nativas da *Standard Template Library* (STL).

## Prerequisitos 

Para rodar os códigos em C++ dos algoritmos, é necessário o compilador da Linguagem. Se você utiliza distribuições Linux, pode configurar o compilador nativo de C++ (`g++`) e testar as soluções diretamente pelo terminal seguindo os passos abaixo.

### 1. Instalando as ferramentas de compilação
Abra o seu terminal e execute os comandos abaixo para atualizar as listas do gerenciador de pacotes e instalar o metapacote `build-essential` (que inclui o compilador `g++`, `gcc` e utilitários como o `make`):

```bash
sudo apt update
sudo apt install build-essential
```

Para validar se o compilador foi instalado com sucesso, verifique a versão instalada, executando o seguinte comando:

```bash
g++ --version
```

### 2. Compilando e Executando um Código

Navegue via terminal até o diretório onde o arquivo do problema foi salvo. Substitua `problema.cpp` pelo nome exato do arquivo desejado.

```bash
g++ problema.cpp -o nome_executavel
```

Isso gerará um arquivo executável binário chamado `nome_executavel`. Para executá-lo e passar as entradas de teste, use:

```bash
./nome_executavel
```

## Referências

Durante os estudos de algoritmos e estruturas de dados, os seguintes livros me foram úteis:

* **Competitive Programmer’s Handbook** - Antti Laaksonen
* **Competitive Programming 4 - Book 1** - Steven Halim & Felix Halim
* **Competitive Programming 4 - Book 2** - Steven Halim & Felix Halim
* **Algoritmos Teoria e Prática** - Thomas H. Cormen