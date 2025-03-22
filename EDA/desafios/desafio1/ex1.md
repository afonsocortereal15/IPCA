## 1. Considere a implementação da função `FazTudo`

### a) Analisando apenas o algoritmo, qual acha que seja o resultado da execução de `FazTudo(3)`?

**Resposta**: O resultado da execução do programa é 6.

### b) Experimente executar o código e veja qual é exatamente o valor devolvido. Explique o porquê do resultado obtido?

**Resposta**: Se chamarmos `FazMuito(3)` pela primeira vez, o resultado vai ser 6, porque `i` começa em 0 e vai aumentando durante a recursão. Mas como `i` é `static`, ele não volta a 0 quando a função termina. Ou seja, se chamarmos `FazMuito(3)` outra vez no mesmo programa, `i` já vai ter um valor maior, e o resultado vai ser completamente diferente.