<h1>Universidade Estadual do Ceará &ndash; UECE</h1>

**Disciplina:** Estrutura de Dados II<br>
**Curso:** Ciência da Computação<br>
**Docente:** Bruno Rogerio Simoes Dos Santos Vale<br>
**Discente:** Gabriel Furtado Lins Melo<br>
**Matrícula:** 1394225<br>

<hr>

<h2>Exercício &ndash; TAD Conta Bancária</h2>

Implementação do Tipo Abstrato de Dados (TAD) **Conta Bancária** na linguagem C.

<hr>

<h2>Índice</h2>

- [Dependências](#dependências)
- [Instalação do compilador](#instalação-do-compilador)
- [Build do Projeto](#build-do-projeto)
  - [Make](#make)
  - [GCC](#gcc)
- [Executando o projeto](#executando-o-projeto)
  - [Com Make](#com-make)
  - [Por linha de comando](#por-linha-de-comando)
- [Referências](#referências)

<hr>

## Dependências

- [MinGW](https://sourceforge.net/projects/mingw/files/)
- GCC
- Make (Opcional)

<hr>

## Instalação do compilador

Após baixar o [MinGW](https://sourceforge.net/projects/mingw/files/), abra-o e marque os pacotes:

- mingw32-base
- mingw32-gcc-g++
- mingw32-make

Então, vá em "Installation" e clique em "Apply Changes".

Vá nas configurações do seu sistema e edite as Variáveis de ambiente.

Nas variáveis de ambiente, adicione o caminho para os binários do MinGW: `C:\MinGW\bin` e pode salvar.

Para testar, abra um terminal ou Power Shell e digite:

`> gcc --version`

<hr>

## Build do Projeto

### Make

Para buildar o projeto utilizando a ferramenta Make, abra um terminal ou power shell e escreva:

```powershell
> mingw32-make
```

### GCC

Se quiser utilizar o gcc por linha de comando para compilar, crie uma pasta no diretório atual chamada bin:

```powershell
> mkdir bin
```

E, então, compile com:

```powershell
> gcc -o .\bin\main.exe .\src\*.c
```

<hr>

## Executando o projeto

### Com Make

Se quiser utilizar o Make para executar o projeto:

```powershell
> mingw32-make run
```

### Por linha de comando

```powershell
> .\bin\main.exe
```

<hr>

## Referências

[1] THOMSON, A. D. **Estruturas de Dados e Algoritmos em C++**. 1.ed., Cengage, 2002.

[2] TENENBAUM, A. A., LANGSAM, Y. e AUGENSTE, M. J. **Estruturas de Dados usando C**. Prentice Hall, 1995.

<hr>
