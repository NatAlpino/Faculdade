bool combina(char c1, char c2) {
    switch(c1) {
        case ')': return c2 =='(';
        case '}': return c2 =='{';
        case ']': return c2 =='[';
        default: return false;
    }
}

bool validar(char exp[], int tam) {
    struct Pilha* p = criar();
    for (int i = 0; i < tam; i++) {
        char c = exp[i];
        switch(c) {
            case '(': 
            case '{':
            case '[': empilhar(p, c); break;
            case ')':
            case '}':
            case ']': (
                if (vazia(p) == true) return false;
                if (combina(c, desempilhar(p)) == false) return false;
            )
        }
    }
    return (vazia(p));
}


int main() {
    char exp[] = "{([])}";
    printf("Resultado (1 = Correta; 0 = Incorreta) : %d\n", validar(exp, 6));

    return 0;
}

/*
Você recebeu a missão, de uma empresa desenvolvedora de jogos digitais, para escrever um programa que verifica se o arquivo com os dados de um jogador está 
correto ou não, quanto ao uso dos símbolos de agrupamentos, tais como {, [, ], }. 
Uma pilha pode ser convenientemente utilizada para resolver esse problema.

Um exemplo de algoritmo capaz de avaliar uma expressão com os símbolos de agrupamento (), {} e [] e retornar “true” se ela é válida e “false” se é inválida,
é apresentado no código –  Algoritmo para verificação de dados de um jogador, a seguir.

O algoritmo funciona da seguinte forma: 

Lendo a expressão da esquerda para a direita (isso é feito por meio do laço for da função “valida”), toda vez que se encontra um símbolo de abertura, 
insere-se esse símbolo na pilha (linhas 15, 16 e 17).

Além disso, toda vez que se encontra um símbolo de fechamento, retira-se o símbolo do topo da pilha e verifica se os dois são do mesmo tipo (linhas 18 a 22). 
Caso sim, continue com o processo.

Se a pilha estiver vazia após ter sido processada toda a sequência, então a expressão está correta. As possíveis situações de erro, que indicam que a 
expressão é inválida, são:

1- quando tenta-se remover um símbolo da pilha e a pilha está vazia – linha 21 (ocorre quando há mais símbolos de fechamento do que de abertura).
2- quando um símbolo retirado da pilha não casa com o símbolo lido – linha 22 (ocorre quando tenta-se fechar um agrupamento com um símbolo diferente 
daquele utilizado para abri-lo).
3- quando a pilha não está vazia após a leitura da expressão por completo – linha 26 (ocorre quando há mais símbolos de abertura do que de fechamento).
*/

