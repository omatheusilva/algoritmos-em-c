cmake_minimum_required(VERSION 3.10)
project(ProgramasEmC C)
set(CMAKE_C_STANDARD 99)

# ==============================================================================
# 🎯 REGISTRO DE EXECUTÁVEIS
# ==============================================================================

# --- 📁 MÓDULO: MATRIZ ---
add_executable(boletim_escolar Matriz/boletim-escolar/main.c)
add_executable(busca_maior Matriz/busca-maior-elemento/main.c)
add_executable(busca_valor Matriz/busca-valor/main.c)
add_executable(contador_pares Matriz/contador-pares/main.c)
add_executable(matriz_transposta Matriz/matriz-transposta/main.c)
add_executable(multiplicar_escalar Matriz/multiplicar-matriz-escalar/main.c)
add_executable(soma_colunas Matriz/soma-colunas/main.c)
add_executable(soma_diagonais Matriz/soma-diagonais/main.c)
add_executable(soma_linhas Matriz/soma-linhas/main.c)
add_executable(somatorio Matriz/somatorio/main.c)
add_executable(tic_tac_toe Matriz/tic-tac-toe/main.c)
add_executable(soma_triangulo_superior Matriz/soma-triangulo-superior/main.c)
add_executable(soma_triangulo_inferior Matriz/soma-triangulo-inferior/main.c)
add_executable(soma_diagonal_principal Matriz/soma-diagonal-principal/main.c)
add_executable(soma_diagonal_secundaria Matriz/soma-diagonal-secundaria/main.c)
add_executable(soma_ambas_diagonais Matriz/soma-ambas-diagonais/main.c)
add_executable(maior_soma_submatriz Matriz/maior-soma-submatriz/main.c)
add_executable(maior_que_soma_indices Matriz/maior-que-soma-indices/main.c)
add_executable(soma_duas_matrizes Matriz/soma-duas-matrizes/main.c)
add_executable(extrair_coluna_matriz Matriz/extrair-coluna-matriz/main.c)
add_executable(multiplicacao_matrizes Matriz/multiplicacao-matrizes/main.c)
add_executable(soma_acima_diagonais Matriz/soma-acima-diagonais/main.c)

# --- 📁 MÓDULO: FUNDAMENTOS LOGICA ---
add_executable(calculadora fundamentos-logica/calculadora/main.c)
add_executable(intervalo_tempo fundamentos-logica/intervalo-tempo/main.c)
add_executable(media_notas fundamentos-logica/media-notas/main.c)
add_executable(salario_prof fundamentos-logica/Salarioprof-horas_trabalhadas/main.c)

# --- 📁 MÓDULO: REPETIÇÃO (Adicione aqui depois seguindo o padrão) ---
add_executable(expressao_math Estruturas-repetição/expressao-matematica/main.c)
add_executable(inverter_numero Estruturas-repetição/inverter-numero/main.c)
add_executable(maior_valor Estruturas-repetição/maior-valor/main.c)
add_executable(multi_soma Estruturas-repetição/multiplicacao-soma/main.c)
add_executable(multi_1000 Estruturas-repetição/multiplos-ate-1000/main.c)
add_executable(n_fibonacci Estruturas-repetição/nesimo-fibonacci/main.c)
add_executable(capicua Estruturas-repetição/numeros-capicua/main.c)
add_executable(numeros_pares Estruturas-repetição/numeros-pares/main.c)
add_executable(numeros_perfeitos Estruturas-repetição/numeros-perfeitos/main.c)
add_executable(numeros_primos Estruturas-repetição/numeros-primos/main.c)
add_executable(quociente_sem_div Estruturas-repetição/quociente-resto-sem-divisao/main.c)
add_executable(soma_digitos Estruturas-repetição/soma-digitos/main.c)
add_executable(tabuada Estruturas-repetição/tabuada/main.c)


# --- 📁 MÓDULO: VETORES (Adicione aqui depois seguindo o padrão) ---
add_executable(busca_vetor Vetores/busca-vetor/main.c)
add_executable(elemento_maior_que_soma Vetores/elemento-maior-que-soma/main.c)
add_executable(elementos_adjacentes_iguais Vetores/elementos-adjacentes-iguais/main.c)
add_executable(interseccao Vetores/interseccao-vetores/main.c)
add_executable(maior_menor_valor Vetores/Maior_Menor_Valor/main.c)
add_executable(media_vetor Vetores/media-vetor/main.c)
add_executable(ocorrencias_vetor Vetores/ocorrencias-vetor/main.c)
add_executable(ordenacao_vetor Vetores/ordenacao-vetor/main.c)
add_executable(remover_repetidos Vetores/Remover_Repetidos/main.c)
add_executable(rotacao_vetor Vetores/rotacao-de-vetor/main.c)
add_executable(soma_vetor Vetores/soma-vetor/main.c)
add_executable(ler_num_diferentes Vetores/Somente_Ler_Numeros_Diferente/main.c)
add_executable(vetor_invertido Vetores/vetor-invertido/main.c)