Implemente um programa que calcule o nível (representado a partir de uma série, como na escola) aproximado necessário para compreender algum texto, conforme a seguir.

$ ./readability
Texto: Parabéns! Hoje é seu dia. Você está indo para ótimos lugares! Você está com tudo!
Grade 3

Níveis de leitura

De acordo com a Scholastic , “Charlotte's Web” de EB White está entre o nível de leitura da segunda e quarta séries, e “The Giver” de Lois Lowry está entre um nível de leitura da oitava série e um nível de leitura da décima segunda série. No entanto, o que significa um livro estar no “nível de leitura da quarta série”?

Bem, em muitos casos, um especialista humano pode ler um livro e tomar uma decisão sobre a série para a qual acha que o livro é mais apropriado. Mas você também pode imaginar um algoritmo tentando descobrir qual é o nível de leitura de um texto.

Então, que tipo de características são características de níveis de leitura mais altos? Bem, palavras mais longas provavelmente se correlacionam com níveis de leitura mais altos. Da mesma forma, frases mais longas provavelmente se correlacionam com níveis mais altos de leitura também. Vários “testes de legibilidade” foram desenvolvidos ao longo dos anos, para fornecer um processo estereotipado para calcular o nível de leitura de um texto.

Um desses testes de legibilidade é o índice Coleman-Liau. O índice Coleman-Liau de um texto é projetado para mostrar qual nível escolar (EUA) é necessário para entender o texto. A fórmula é:

indice = 0.0588 * L - 0.296 * S - 15.8

Aqui, L é o número médio de letras por 100 palavras no texto e S é o número médio de sentenças por 100 palavras no texto.



Casos de Teste

Vamos escrever um programa chamado readability que recebe um texto e determina seu nível de leitura. Por exemplo, se o usuário digitar uma linha do Dr. Seuss:

$ ./readability
Texto: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3

O texto que o usuário inseriu tem 65 letras, 4 sentenças e 14 palavras. 65 letras por 14 palavras é uma média de cerca de 464,29 letras por 100 palavras. E 4 sentenças por 14 palavras é uma média de cerca de 28,57 sentenças por 100 palavras. Conectados à fórmula Coleman-Liau e arredondados para o número inteiro mais próximo, obtemos uma resposta de 3: portanto, esta passagem está em um nível de leitura da terceira série.

Vamos tentar outro:

$ ./readability
Text: Harry Potter was a highly unusual boy in many ways. For one thing, he hated the summer holidays more than any other time of year. For another, he really wanted to do his homework, but was forced to do it in secret, in the dead of the night. And he also happened to be a wizard.
Grade 5


Este texto contém 214 letras, 4 frases e 56 palavras. Isso resulta em cerca de 382,14 letras por 100 palavras e 7,14 frases por 100 palavras. Conectados à fórmula Coleman-Liau, chegamos ao nível de leitura da quinta série.

À medida que o número médio de letras e palavras por frase aumenta, o índice de Coleman-Liau dá ao texto um nível de leitura mais alto. Se você pegasse este parágrafo, por exemplo, que tem palavras e sentenças mais longas do que qualquer um dos dois exemplos anteriores, a fórmula daria ao texto um nível de leitura de décimo primeiro ano.

$ ./readability
Text: As the average number of letters and words per sentence increases, the Coleman-Liau index gives the text a higher reading level. If you were to take this paragraph, for instance, which has longer words and sentences than either of the prior two examples, the formula would give the text an eleventh grade reading level.
Grade 11



Detalhes de implementação

Projete e implemente um programa, readability, que calcule o índice Coleman-Liau do texto.





Implemente seu programa em um arquivo denominado readability.c em um diretório denominado pset2/readability.



Seu programa deve solicitar ao usuário uma string de texto (utilizando get_string).



Seu programa deve contar o número de letras, palavras e frases do texto. Você pode assumir que uma letra é qualquer caractere minúsculo de a a z ou qualquer caractere maiúsculo de A a Z , qualquer sequência de caracteres separados por espaços deve contar como uma palavra e que qualquer ocorrência de um ponto final, ponto de exclamação ou ponto de interrogação indica o final de uma frase.



Seu programa deve imprimir como saída "Grade X", onde X é o nível de grau calculado pela fórmula de Coleman-Liau, arredondado para o número inteiro mais próximo.



Se o número do índice resultante for 16 ou superior (equivalente ou superior ao nível de leitura de graduação sênior), seu programa deve produzir "Grade 16+" em vez de fornecer o número do índice exato. Se o número do índice for menor que 1, seu programa deve imprimir "Before Grade 1".

 

 

Como testar seu código no IDE do CS50?

Aqui estão alguns casos de teste. Teste se seu código funciona conforme prescrito quando você insere:





One fish. Two fish. Red fish. Blue fish. (Before Grade 1)



Would you like them here or there? I would not like them here or there. I would not like them anywhere. (Grade 2)



Congratulations! Today is your day. You're off to Great Places! You're off and away! (Grade 3)



Harry Potter was a highly unusual boy in many ways. For one thing, he hated the summer holidays more than any other time of year. For another, he really wanted to do his homework, but was forced to do it in secret, in the dead of the night. And he also happened to be a wizard. (Grade 5)



In my younger and more vulnerable years my father gave me some advice that I've been turning over in my mind ever since. (Grade 7)



Alice was beginning to get very tired of sitting by her sister on the bank, and of having nothing to do: once or twice she had peeped into the book her sister was reading, but it had no pictures or conversations in it, "and what is the use of a book," thought Alice "without pictures or conversation?" (Grade 8)



When he was nearly thirteen, my brother Jem got his arm badly broken at the elbow. When it healed, and Jem's fears of never being able to play football were assuaged, he was seldom self-conscious about his injury. His left arm was somewhat shorter than his right; when he stood or walked, the back of his hand was at right angles to his body, his thumb parallel to his thigh. (Grade 8)



There are more things in Heaven and Earth, Horatio, than are dreamt of in your philosophy. (Grade 9)



It was a bright cold day in April, and the clocks were striking thirteen. Winston Smith, his chin nuzzled into his breast in an effort to escape the vile wind, slipped quickly through the glass doors of Victory Mansions, though not quickly enough to prevent a swirl of gritty dust from entering along with him. (Grade 10)



A large class of computational problems involve the determination of properties of graphs, digraphs, integers, arrays of integers, finite families of finite sets, boolean formulas and elements of other countable domains. (Grade 16+)



Execute o seguinte para avaliar se seu código está correto usando check50. Mas certifique-se de compilar e testar você mesmo!
