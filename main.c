#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int rolarDado();
int aceitarSenshi();
int refeicaoPrimeiroAndar();
int refeicaoTerceiroAndar();
int atacarBasilisco();
int escolherMandragora();
int escolherCaminho();
int passarSereias();
int descansar();
int acordarMarcille();
int interpretarSonho();
int interacaoOrcs();
int capturarBarometz();
int atacarDragao();
int atacarDragao2();
int ressuscitarFalin();
int fazerMagiaNegra();

void final1() { 
    printf("Sua aventura termina aqui... Outros aventureiros os encontrarão e os levarão para serem ressuscitados no primeiro andar da masmorra.\n");
    printf("\nFIM DE JOGO\n");
    exit(0);  // Encerra o jogo
}

void final2() { 
    printf("Você já perdeu um tempo considerável ao pegar o caminho mais longo e parar para dormir. Com mais esse atraso, não será possível fazer o resgate de Falin, e agora ela será parte da masmorra para sempre.\n");
    printf("\nFIM DE JOGO\n");
    exit(0);  // Encerra o jogo
}

void final3() { 
    printf("Vocês voltam para casa sem Falin, e isso é um golpe terrível no coração de todos vocês, mas a vida que ela teria sendo metade monstro... é melhor aceitar que ela se foi.\n");
     printf("\nFIM DE JOGO\n");
    exit(0);  // Encerra o jogo
}

void final4() { 
    printf("\nFalin aparenta estar bem, ela come com vocês o assado de dragão feito por Senshi e ri das as histórias que vocês contam sobre as aventuras na masmorra para chegar até ela, sobre os monstros que comeram. Ela fica curiosa, queria ter experimentado todos eles. Depois do jantar, hora de dormir, e no meio da madrugada, Falin acorda e vai até a janela, sentindo como se algo estivesse chamando por ela. Depois de um instante, retorna à cama para dormir e, por um breve momento, é possível ver nos olhos dela o mesmo brilho dos olhos do dragão.\n");
    printf("\nFIM DE JOGO\n");
    exit(0);  // Encerra o jogo
}

int main() {
    int escolha9;
    setlocale(LC_ALL, "pt_BR.UTF-8");
    srand(time(NULL));

    printf("Você está no primeiro andar da masmorra e observa o ambiente. Há alguns aventureiros e comerciantes. Nas paredes, nota a presença de raízes comestíveis, mas ao mesmo tempo está ansioso para colocar em prática o seu plano de cozinhar monstros. O que fazer primeiro?\n");

    int escolha1 = refeicaoPrimeiroAndar();

    if (escolha1 == 1) {
        printf("Você faz uma sopa com as raízes que crescem pelas paredes. Eca! O gosto é horrível. Então alguém se aproxima, balançando a cabeça negativamente:'Não, raízes selvagens não são boas para ensopado, mas dão uma ótima geléia. Prove só.'E passa para você metade do sanduíche que estava comendo. E realmente era bom.\n");
    } else {
        printf("Vocês avistam um cogumelo andante, uma criatura fraca que vive nos primeiros andares, e o capturam. Em seguida, você checa em seu bestiário como prepará-lo. Mas algo está errado, o gosto desse cogumelo é muito ruim. Então alguém se aproxima, balançando a cabeça negativamente: 'Não, essas partes de cogumelo andante não são boas para consumo. Vou mostrar.' E saca uma faca de cozinha e começa a picotar o cogumelo. As partes cortadas por ele eram mesmo boas.\n");
    }

    printf("\nO nome dele é Senshi, um anão acostumado a se aventurar pelas masmorras e que há muitos anos se dedica a criar receitas usando monstros como ingrediente. Ele ouviu você falar sobre ir atrás do dragão vermelho. 'Eu sempre quis fazer um prato com carne de dragão. Posso viajar com vocês?\n");

    int escolha2 = aceitarSenshi();

    if (escolha2 == 1) {
        printf("Vocês seguem viagem e descem ao terceiro andar da masmorra.\n");
    } else {
        printf("Adentrando mais fundo na masmorra, vocês encontram folhas para fazer maniçoba, prato popular em uma terra longíqua do outro lado do mar. Pegam as folhas e cozinham por 3 horas e depois comem. Minutos depois, você e seus parceiros se sentem estranhos. Marcille, que poderia auxiliá-los com magia de cura, foi a primeira a cair. É o fim, você se sente tonto e seus sentidos começam a se esvair. Por fim, vem a escuridão. A planta que vocês comeram precisava cozinhar 7 dias para perder o veneno.\n");
        final1();
     }

    printf("\nNo ambiente, alguns sinais indicam a proximidade de um ninho de basilisco, um ser com aparência de galinha, mas que tem uma cobra no lugar da cauda. E Chilchuck avisa que mais adiante encontrou um jardim de mandrágoras.\nA hora do jantar se aproxima, qual será o prato da noite?\n");

    int escolha3 = refeicaoTerceiroAndar();

    if (escolha3 == 1) {
        printf("\nVocê pensa em duas formas de vencer o basilisco. São elas:\n");

        int escolha4 = atacarBasilisco();
        
        if (escolha4 == 1) {
            printf("Seus companheiros criam uma distração e você consegue uma brecha para pegar o basilisco desprevenido e, com um único golpe, corta fora a cabeça de serpente da criatura, que se torna menos letal e é facilmente derrotada.\n");
        } else {    
            printf("O plano é o seguinte: Posicione-se em frente ao basilisco, coloque as mãos para o alto e grite o mais alto que puder. Seu objetivo é assustar a criatura. Se for bem sucedido, ela paralisa por um momento e recua, facilitando o ataque. Caso contrário, o ataca violentamente com a cauda de serpente.\n");

            int sorte1 = rolarDado();
            printf("Sorte: %d. ", sorte1);
            if (sorte1 >= 10) {
                printf("Para a surpresa dos demais, sua tática funcionou. Agora é a sua deixa, e você tem sucesso no ataque. Hoje terá omelete de basilisco no jantar.\n");
            } else {
                printf("Oh não! Sua tentativa de ser assustador não surtiu efeito algum e agora a parte serpente do monstro vem em sua direção e o atinge. Você vai ter que ir pelo plano mais seguro.\n");
                printf("Seus companheiros criam uma distração e você consegue uma brecha para pegar o basilisco desprevenido e, com um único golpe, corta fora a cabeça de serpente da criatura, que se torna menos letal e é facilmente derrotada. Hoje terá omelete de basilisco no jantar\n");
            }    
        }
    } else {
        printf("Marcille e Senshi discutem a melhor forma de pegar mandrágoras, tubérculos que emitem um grito alto, atordoante, ao serem retiradas da terra. Marcile diz que aprendeu na escola de magia que se deve amarrar uma corda nas mandrágoras e puxá-las a uma distância segura para os ouvidos. Senshi afirma que ouviu dizer que é possível silenciar as mandrágoras ao golpear seu topo antes de desenterrá-las.\nQual técnica você decide testar primeiro?\n");

        int escolha5 = escolherMandragora();

        if (escolha5 == 1) {
            printf("\nMarcille e Chilchuck amarram uma corda no topo de uma mandrágora e tomam distância para longe dela, quando de repente surge um morcego grande e puxa a corda antes do tempo. O morcego fica aturdido com o grito da mandrágora e cai no chão. Ao lado Marcille, também atordoada, parecendo um pouco fora de si. Senshi se aproxima e retira uma mandrágora sem fazer barulho, apenas cortando o topo dela fora.\nA janta: Morcego grande assado com salada de mandrágora.\n");
        } else {
            printf("Senshi calmamente se abaixa e puxa uma mandrágora. Todos ficam em choque, commedo do grito assustador, mas não há barulho. Ele explica que é preciso acertar a parte responsável pelo som antes de retirar a planta da terra.\n");
        }
    }

    printf("\nDescendo mais a masmorra, Chilchuck pede para que vocês parem. 'Ainda não passamos por aqui, está cheio de armadilhas até o outro lado. Teremos que ter muita cautela para passar por aqui, qualquer erro pode ser fatal.'. Você considera, e conhece o caminho do outro lado, mais longo porém sem grandes riscos. Por onde continuar?\n");

    int escolha6 = escolherCaminho();

    if (escolha6 == 1) {
        int sorte2 = rolarDado();
        printf("Sorte: %d. ", sorte2);

        if (sorte2 >= 10) {
            printf("A travessia foi um sucesso! Chilchuck identificou corretamente as armadilhas e conseguiu guiá-los para o outro lado em segurança.\n");
        } else {
            printf("Você acidentalmente pisa em uma pedra fora das indicadas por Chilchuck. Espinhos saem da parede na direção do grupo e parte do piso desmorona. Não é mais possível atravessar, terão de ir pelo caminho mais longo...\n");
            printf("nO grupo segue pela área alagada da masmorra, uma área conhecida por ser habitat de monstros aquáticos. Você escuta um canto suave vindo de algum lugar. Senshi o encara. 'Sim, eu sei. São sereias!'. Vocês estudam um jeito de passar por elas sem ouvir o canto mortal que os levariam para o fundo daquele lago. Como proceder?\n");

            int escolha7 = passarSereias();

            if (escolha7 == 1) {
                printf("Você passa tranquilamente pelas sereias sem cair sob o efeito do feitiço do canto delas.\n");
            } else {
                int sorte3 = rolarDado();
                printf("Sorte: %d. ", sorte3);
                if (sorte3 >= 10) {
                    printf("IOOOOO CHE AMOO SOLO TE, LO MI FERMERÒ E TI REGALERÒ.\nVocê canta a plenos pulmões, um pouco fora do tom, fazendo sua voz de tenor ecoar por todo ambiente, suprimindo o canto das sereias. Contrariadas, elas desistem decantar e mergulham na água. Agora vocês podem seguir com tranquilidade.\n");
                } else {
                    printf("IOOOOO CHE AMOO SOLO TE\nLO MI FERMERÒ E TI REGALERÒ. Você passa ao lado das criaturas cantando a plenos pulmões, um pouco fora do tom, fazendo sua voz de tenor ecoar por todo ambiente. Mas sua voz falha e não é suficiente para suprimir o cantos delas. Você então cai enfeitiçado, e uma sereia parte em sua direção, mas Senshi, de ouvidos protegidos, rapidamente corre até você e o salva.\n");
                }
            }

        }

    } else {
        printf("\nO grupo segue pela área alagada da masmorra, onde há um lago ocupando todo o andar, uma área conhecida por ser habitat de monstros aquáticos. Você escuta um canto suave vindo de algum lugar. Senshi o encara. 'Sim, eu sei. São sereias!'. Marcille usa magia para permitir que vocês caminhem sobre as águas. Agora vocês estudam um jeito de passar pelas sereias sem ouvir o canto mortal que os levariam para o fundo daquele lago. Como proceder?\n");
        int escolha8 = passarSereias();

            if (escolha8 == 1) {
                printf("Você passa tranquilamente pelas sereias sem cair sob o efeito do feitiço do canto delas.\n");
            } else {
                int sorte4 = rolarDado();
                printf("Sorte: %d. ", sorte4);
                if (sorte4 >= 10) {
                    printf("IOOOOO CHE AMOO SOLO TE\nLO MI FERMERÒ E TI REGALERÒ.\nVocê passa ao lado das criaturas cantando a plenos pulmões, um pouco fora do tom, fazendo sua voz de tenor ecoar por todo ambiente, suprimindo o canto das sereias. Contrariadas, elas desistem decantar e mergulham na água. Agora vocês podem seguir com tranquilidade.\n");
                } else {
                    printf("IOOOOO CHE AMOO SOLO TE\nLO MI FERMERÒ E TI REGALERÒ. Você passa ao lado das criaturas cantando a plenos pulmões, um pouco fora do tom, fazendo sua voz de tenor ecoar por todo ambiente. Mas sua voz falha e não é suficiente para suprimir o cantos delas. Você então cai enfeiiçado, e uma sereia vai em sua direção, mas Senshi, de ouvidos protegidos, rapidamente corre até você e o salva.\n");
                }
            }

        printf("\nDormir?\n");

        int escolha9 = descansar();

        if (escolha9 == 1) {
            printf("Vocês param para comer e depois seguem viagem, sem acampar.\n");
        } else {
            printf("\nVocês encontram um lugar bom para descansar e, depois de comer, se preparam para dormir. Marcille é a primeira a adormecer e você nota que há algo estranho com ela. Senshi e Chilchuck se aproximam e concordam com você: ela está sob o ataque de um pesadelo, criatura semelhante a uma ostra, que se aloca no travesseiro da pessoa e a faz ter maus sonhos alimentando traumas e feridas emocionais. Se não sair desse pesadelo, a pessoa eventualmente morre.\n");
            printf("O único jeito de combater um pesadelo é entrar no sonho da pessoa e a proteger do estresse emocional. Forçar o despertar pode causar danos mentais severos e irreversíveis. Então você você se prepara e entra no sonho de Marcille.\n");
            printf("Você está em um corredor de biblioteca, rodeado por várias estantes de livros. Por onde começa a procurar?\n");

            int escolha10 = acordarMarcille();

            if (escolha10 == 1) {
                printf("\nVocê vê Falin segurando seu cajado, que emite raios de luz. Depois, luz apaga e um ser disforme lança uma neblina sobre ela, que a deixa enfraquecida, como que envenenada, e em seguida a criatura a engole. Aparece Marcille, em sua forma de criança, agarra sua mão e o puxa, aterrorizada, para fugir da criatura.\nEla está muito assustada e começa a chorar. Você precisa encontrar um jeito de tranquilizá-la. O que você acha?\n");

                int escolha11 = interpretarSonho();

                if (escolha11 == 1) {
                    printf("Ela para e olha para você. De repente, o monstro agarra seu braço, mas você consegue se desvencilhar e diz que está bem, porém ao olhar para sua mão, percebe que algo aconteceu: sua pele está diferente, parece enrugada. É uma mão idosa, e agora você entende: Marcille teme a morte das pessoas que ama por ser uma elfa e ter expectativa de vida maior de que todos.\n'Você consegue derrotá-lo, você é incrível, Marcille. Olhe tudo isso! Nos meus sonhos não tem nada'. Ela parece incerta, mas se concentra.\nSe ao menos eu tivesse um livro tão poderoso dele (do mago louco)\n'Então deseje isso! Deseje com todas suas forças.'\nDe dentro do corpo do monstro, emerge algo, ela pega, e é o livro do mago louco! Antes que a criatura consiga atacar, Marcille pega o livro e desfere uma pancada na cabeça do monstro e ele morre.\nEla não usou o livro do jeito que você imaginava, mas o importante é que o pesadelo chegou ao fim.\nVocês acordam. Senshi e Chilchuck pergunta como vocês estão, contam que tiveram pesadelos, mas você não lembra de nada, e Marcille narra um sonho divertido e engraçado.\n");
                } else {
                    printf("Você lembra de Falin antes de ser pega pelo monstro. Ela não foi envenenada, mas parecia terrivelmente velha, era como se tivesse ficado idosa em um piscar de olhos. Então você compreende: Marcille teme a morte das pessoas que ama por ser uma elfa e ter expectativa de vida maior de que todos.\n'Você consegue derrotá-lo, você é incrível, Marcille. Olhe tudo isso! Nos meus sonhos não tem nada'. Ela parece incerta, mas se concentra.\nSe ao menos eu tivesse um livro tão poderoso dele (do mago louco)\n'Então deseje isso! Deseje com todas suas forças.'\nDe dentro do corpo do monstro, emerge algo, ela pega, e é o livro do mago louco! Antes que a criatura consiga atacar, Marcille pega o livro e desfere uma pancada na cabeça do monstro e ele morre.\nEla não usou o livro do jeito que você imaginava, mas o importante é que o pesadelo chegou ao fim.\nVocês acordam. Senshi e Chilchuck pergunta como vocês estão, contam que tiveram pesadelos, mas você não lembra de nada, e Marcille narra um sonho divertido e engraçado.\n");
                }

            } else {
                printf("\nVocê vê aquele que ser acredita ser o falecido pai de Marcille, um homem alto (Marcille é mestiça, mistura de homem alto e mãe elfa) sentado em uma cadeira de balanço. Então, surge uma criatura disforme e lança uma névoa sobre ele, que o deixa enfraquecido e depois a criatura o engole. Uma versão infantil de Marcille surge ao seu lado. Ela agarra sua mão e o puxa para fugir da criatura.\nEla está muito assustada e começa a chorar. Você precisa encontrar um jeito de tranquilizá-la. O que você acha?\n");

                int escolha12 = interpretarSonho();

                if (escolha12 == 1) {
                    printf("Ela para e olha para você. De repente, o monstro agarra seu braço, mas você consegue se desvencilhar e diz que está bem, porém ao olhar para sua mão, percebe que algo aconteceu: sua pele está diferente, parece enrugada. É uma mão idosa, e agora você entende: Marcille teme a morte das pessoas que ama por ser uma elfa e ter expectativa de vida maior que a de todos.\n'Você consegue derrotá-lo, você é incrível, Marcille. Olhe tudo isso, esses livros! Nos meus sonhos não tem nada'. Ela parece incerta, mas se concentra.\nSe ao menos eu tivesse um livro tão poderoso dele (do mago louco)...\n'Então deseje isso! Deseje com todas suas forças.'\nDe dentro do corpo do monstro, emerge algo, ela pega, e é o livro do mago louco! Antes que a criatura consiga atacar, Marcille pega o livro e desfere uma pancada na cabeça do monstro e ele morre.\nEla não usou o livro do jeito que você imaginava, mas o importante é que o pesadelo chegou ao fim.\nVocês acordam. Senshi e Chilchuck pergunta como vocês se sentem, contam que tiveram pesadelos, mas você não lembra de nada, e Marcille narra um sonho divertido e engraçado.\n");
                } else {
                    printf("Você lembra do pai de Marcille. Ela disse que ele morreu quando ela era nova. Mas o modo como o tempo passa para os elfos... e na visão era como se o pai tivesse ficado idoso em um piscar de olhos. Então você compreende: Marcille teme a morte das pessoas que ama, por ser uma elfa e ter expectativa de vida maior que a de todos.\n'Você consegue derrotá-lo, você é incrível, Marcille. Olhe tudo isso, esses livros! Nos meus sonhos não tem nada'. Ela parece incerta, mas se concentra.\nSe ao menos eu tivesse um livro tão poderoso dele (do mago louco)\n'Então deseje isso! Deseje com todas suas forças.'\nDe dentro do corpo do monstro, emerge algo, ela pega, e é o livro do mago louco! Antes que a criatura consiga atacar, Marcille pega o livro e desfere uma pancada na cabeça do monstro e ele morre.\nEla não usou o livro do jeito que você imaginava, mas o importante é que o pesadelo chegou ao fim.\nVocês acordam. Senshi e Chilchuck pergunta como vocês se sentem, contam que tiveram pesadelos, mas você não lembra de nada, e Marcille narra um sonho divertido e engraçado.\n");
                }
            }
        }
    }

    printf("\nVocês continuam e descem mais andares da masmorra. Senshi diz que tem conhecidos naquela área e pode trocar mantimentos com eles. Vocês seguem adiante e algumas silhuetas enormes surgem bloqueando o caminho. São orcs! Eles exigem que se rendam. 'Desculpa, Senshi, são tempos difíceis'\n. 'Então esses eram seus amigos, Senshi...' E agora?\n");

        int escolha13 = interacaoOrcs();

        if (escolha13 == 1) {
            printf("\nSeu grupo é dominado pelos orcs. Eles pegam toda a comida de vocês. O líder deles, irritado, dispara contra você: 'Tudo o que passamos com aquele dragão, ainda temos que lidar com esses aventureiros idiotas'. À menção do dragão, você rapimente pergunta por mais detalhes e, depois de você expressar sua intenção de matar o dragão, ele lhe fala sobre os últimos locais de avistamento do dragão e libera seu grupo para seguir viagem. Sem comida, terão que caçar mais um monstro.\n");
            printf("\nQue sorte! Vocês enxergam um barometz, uma espécie de cordeiro vegetal, uma planta em forma de cordeiro. Ele é inofensivo, não tem nenhum mecanismo de defesa, entretanto costuma ser usado como isca por monstros que ficam à espreita esperando alguém se aproximar do barometz. Hum... os outros monstros devem ter fujido, o dragão não deve estar longe.\n");

            int escolha14 = capturarBarometz();

            if (escolha14 == 1) {
                printf("\nParece até bom demais para ser verdade, mas nada acontece, não há monstros esperando para emboscar e você pega tranquilamentre o barometz.  Hum... os outros monstros devem ter fugido, o dragão não deve estar longe daqui.\n");
            } else {
                printf("\nCom a magia de Marcille, vocês criam um golem para ir até o barometz, mas nada acontece. Hum... os outros monstros devem ter fugido, o dragão não deve estar longe daqui.\n");
            }

        } else {
            printf("\nO líder deles diz que não é da sua conta, então você fala sobre o resgate de sua irmã Falin, que foi engolida pelo dragão vermelho. O orc vacila um pouco, e por fim diz que estão migrando por causa dos ataques do dragão vermelho.\nDepois de você expressar sua intenção de matar o dragão, ele lhe fala sobre os últimos locais de avistamento do dragão e entrega um pouco de comida para a viagem de vocês.\n");
        }

    printf("\nSeu grupo chega ao lugar indicado e é possível ver os sinais da passagem do dragão por ali. Vocês fazem planos sobre como derrotá-lo e decidem que Chilchuck e Senshi vão atraí-lo para um lugar onde Marcille consiga imobilizá-lo e você o golpeie.\nO dragão vermelho aparece e o grupo começa a agir, porém ao se deslocar para seu lugar designado, você vê uma grande oportunidade de golpear o ponto fraco da criatura. O que você faz?\n");

        int escolha15 = atacarDragao();

        if (escolha15 == 1) {
        int sorte5 = rolarDado();
        printf("Sorte: %d. ", sorte5);
    
        if (sorte5 >= 15) {
        printf("Sucesso no ataque! A faca vai diretamente na garganta do dragão, onde há um pequeno espaço que não é revestido pelas escamas. O dragão cai, você o golpeia mais vezes.\n");
        }  else {
        // Verifica condições anteriores
            if (escolha6 != 1 && escolha9 != 1) {  // Caminho longo E dormiu
            printf("Com o golpe que acabou de receber, você não tem escolha a não ser parar para cuidar dos seus ferimentos e preparar para um novo ataque, talvez no próximo dia. Mas ter ido pelo caminho maior e parado para dormir fez com que você perdesse muito tempo. Agora é praticamente impossível salvar Falin.\n");
            final2();
        }   else {
            printf("Ataque falhou, mas ainda há esperança! Você atingiu o olho do dragão e ele o arremessou para longe, mas você levanta e rapidamente se prepara para uma segunda investida, aproveitando que o dragão está desnorteado por causa da visão embaçada. Cambaleante, o dragão fica lento e Marcille causa uma explosão que o deixa presa preso entre destroços. Seu próximo pass?\n");

            int escolha18 = atacarDragao2();

            if (escolha18 == 1) {
                printf("\nFuncionou, por mais improvável que pareça, você acertou exatamente o lugar almejado.\n");
            } else if(escolha18 == 2) {
                printf("\nFoi por pouco, mas você conseguiu saltar toda aquela distância por cima dos destroços para chegar até a garganta do dragão e conseguir golpeá-lo.\n");
            } else{
                printf("Você vai pelo lado mais distante e chega quando o dragão já está prestes a se libertar totalmente. Mas com um movimento rápido, consegue atingi-lo com um golpe mortal. No entanto, se desequilibra e não vê a última reação do monstro vindo em sua direção: Ele o atinge e decepa sua perna esquerda um pouco abaixo do joelho. Marcille pode curar você, colocar a perna de volta, mas a dor é insuportável.\n");
            }

        }
    }
        }  else {
            printf("Senshi e Chilchuck atraem o dragão para uma área mais estreita entre construções altas. Ao seu sinal, Marcille lança feitiço explosivo para derrubar as construções sobre o dragão e deixá-lo parado. Porém, os destroços não são o suficiente para prender o dragão por muito tempo.\n");

            int escolha19 = atacarDragao2();

            if (escolha19 == 1) {
                printf("\nFuncionou, por mais improvável que pareça, você acertou exatamente o lugar almejado.\n");
            } else if(escolha19 == 2) {
                printf("\nFoi por pouco, mas você conseguiu saltar toda aquela distância por cima dos destroços para chegar até a garganta do dragão e conseguir golpeá-lo.\n");
            } else{
                printf("Você vai pelo lado mais distante e chega quando o dragão já está prestes a se libertar totalmente. Mas com um movimento rápido, consegue atingi-lo com um golpe mortal. No entanto, se desequilibra e não vê a última reação do monstro vindo em sua direção: Ele o atinge e decepa sua perna esquerda um pouco abaixo do joelho. Marcille pode curar você, colocar a perna de volta, mas a dor é insuportável.\n");
            }

        }
    printf("\nO grande dragão vermelho finalmente é derrotado. Você, Marcille e Chilchuck procuram o corpo de Falin dentro da barriga do dragão para iniciar o ritual de ressureição. Senshi começa a separar algumas partes da carne do monstro, ele está muito animado para criar quitutes de dragão.\nPorém o corpo de Falin não está na barriga do dragão. Será que se enganaram e ela não foi engolida? Então você corta a bolsa de combustível do dragão, um orgão onde armazena matéria prima para produzir o fogo que ele exala. Lá dentro, há um esqueleto humano. É Falin!.\nMarcille fica séria e diz que nesse estado vocês tem pouco tempo para ressuscitá-la antes que seja impossível unir novamente a alma de Falin ao corpo dela. Você pergunta o que pode ser feito e ela responde que nesse caso teriam de usar carne de animais (como boi e carneiro) para refazer o corpo, mas não dá tempo de voltar à superfície, então terão que usar a carne do dragão. Você aceita ressuscitar sua irmã refazendo o corpo dela com carne de monstro?\n");

    int escolha16 = ressuscitarFalin();

    if (escolha16 == 1) {
        printf("\nMarcille desenha um grande círculo com várias runas antigas e no centro coloca os ossos de Falin. Ela bate o cajado no centro do círculo, começa a entoar cantigos antigos e uma aura estranha paira no ar. Você sabe: É magia negra. Se descobrirem, todos vocês poderão ser condenados à prisão perpétua ou pena de morte. Chilchuck parece contrariado e pergunta se você vai deixar que isso continue.\n");
        int escolha17 = fazerMagiaNegra();
        if (escolha17 == 1) {
            printf("\nEla termina o ritual, já esgotada e cai sem forças. O corpo de Falin foi preenchido por carne, sangue e tudo o mais, agora ela estava inteira outra vez. Então Falin abre os olhos e olha para vocês, sem entender bem o que tinha acontecido. Marcille pula na direção ela e a abraça com toda sua força, emocionada. Você cobre Falin com sua capa e também a abraça.\n");
            final4();
        } else {
            printf("\nVocê pede para que Marcille pare, isso não parece certo. Se descobrirem, a vida de Falin acabará do mesmo jeito e não se sabe o que o lado monstro poderá fazer a ela. Marcille");
            final3();
        }
    } else {
        printf("\nÉ o fim, Falin se foi, precisamos aceitar. Você guarda os ossos de Falin e se pprepara para subir à superfície e sair da masmorra.\n");
        final3();
    }
        return 0;
    }


//Funções

int rolarDado() {
    return rand() % 20 + 1; // Função para jogar dado D20 em jogadas de sorte
}

int refeicaoPrimeiroAndar(){
    int escolha;
    do {
    printf("1. Um ensopado de raízes.\n");
    printf("2. Sanduíche de monstro! Vamos procurar alguma criatura neste andar.\n");
    printf("-> ");
    scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);
    return escolha;
}

int aceitarSenshi(){
    int escolha;
    do {
    printf("1. Claro! Eu nunca tinha conhecido alguém que cria receitas a partir de monstro. Estou curioso.\n");
    printf("2. Chilchuk e Marcille parecem receosos em aceitar o novo companheiro, eles expressam suas opiniões e você, relutantemente, concorda com a preocupação deles, seguindo viagem sem Senshi.\n");
    printf("-> ");
    scanf("%d", &escolha);
}
    while (escolha != 1 && escolha !=2);
    return escolha;
}


int refeicaoTerceiroAndar(){
    int escolha;
    do {
        printf("1. Hum... omelete com ovos de basilisco. É isso!\n");
        printf("2. Vamos guardar nossa energia para enfrentar o dragão, mandrágoras são mais fáceis de lidar.\n");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);
    return escolha;
}

int atacarBasilisco() {
    int escolha;
    do {
        printf("1. Escolha segura de usar a distração causada pelo grupo e atingir o ponto fraco da criatura.\n");
        printf("2. Experimentar uma tática ousada aprendida em um livro sobre basiliscos. @Sorte requer >=10@\n");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);    
    return escolha;
}

int escolherMandragora() {
    int escolha;
    do {
        printf("1. Vamos com a técnica da Marci, as lições de botânica da escola de magia certamente são confiáveis.\n");
        printf("2. Senshi tem experiência na masmorra, seus métodos devem ser seguros.\n");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);    
    return escolha;
}

int escolherCaminho() {
    int escolha;
    do {
        printf("1. Você decide confiar na furtividade e experiência do ladino para passar pelo caminho curto com armadilhas. 'Não podemos demorar muito, temos que alcançar Falin o quanto antes. @Sorte requer >10@\n");
        printf("2. É muito arriscado, e a masmorra tem andado instável. Se sofrermos um golpe fatal, não teremos nenhuma chance de salvar minha irmã.\n");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);
    return escolha;
}

int passarSereias() {
    int escolha;
    do {
        printf("1. Faça um protetor para seus ouvidos e peça para Marcille usar magia para forçar as sereias a mergulharem na água. @Sorte requer >=10@\n");
        printf("2. Tente uma abordagem um pouco menos ortodoxa.\n");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);
    return escolha;
}

int descansar() {
    int escolha;
    do {
        printf("1. Para não perder mais tempo, vocês decidem seguir viagem direto.\n");
        printf("2. Vocês resolvem parar um pouco para descansar e recuperar as energias.\n");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);
    return escolha;
}

int acordarMarcille() {
    int escolha;
    do {
        printf("1. Você segue em direção a um foco de luz no meio de toda a escuridão que domina o ambiente e chama por Marcille.\n");
        printf("2. Você ouve ruídos de origem desconhecida e anda em direção a ele, chamando por Marcille.\n");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);
    return escolha;
}

int interpretarSonho() {
    int escolha;
    do {
        printf("1. Ela tem medo de monstros! 'Marci, você consegue derrotá-lo com seus poderes mágicos.'\n");
        printf("2. 'Não... pensa, Laios, pensa.\n'");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);
    return escolha;
}

int interacaoOrcs() {
    int escolha;
    do {
        printf("1. Puxe a espada e os desafie para o combate.\n");
        printf("2. Pergunte o que está acontecendo, pois eles parecem preocupados, de mudança para outro local.\n");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);
    return escolha;
}

int capturarBarometz() {
    int escolha;
    do {
        printf("1. Vá direto ao barometz e pegue-o.\n");
        printf("2. Verifique se não há predadores espreitando.\n");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);
    return escolha;
}

int atacarDragao() {
    int escolha;
    do {
        printf("1. Aproveite a oportunidade e avance em direção ao ponto fraco da criatura. @Sucesso requer >=15@\n");
        printf("2. Continue com o combinado.\n");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);
    return escolha;
}

int atacarDragao2() {
    int escolha;
    do {
        printf("1. O ponto fraco exposto do dragão está visível, e ele, paralisado. Mas sabendo que os destroços não o segurarão por muito tempo, você pega sua faca e lança no local desejado.\n");
        printf("2. Você tem pouco tempo para agir antes que o dragão consiga se libertar dos destroços. Há um atalho que pode deixá-lo com a espada ao alcance do ponto fraco do monstro, mas você precisa dar um salto enorme por cima das construções.\n");
        printf("3. Corra pelo caminho que parece mais estável e seguro, acelerando o passo para alcançar o dragão o quanto antes.\n");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2 && escolha !=3);
    return escolha;
}

int ressuscitarFalin() {
    int escolha;
    do {
        printf("1. Sim.\n");
        printf("2. Não.\n");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);
    return escolha;
}

int fazerMagiaNegra() {
    int escolha;
    do {
        printf("1. Sim, já chegamos até aqui e eu faço o que for possível para salvar minha irmã.\n");
        printf("2. Não, você tem razão... não sabemos o que isso pode causar na Falin. É muito arriscado.\n");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);
    return escolha;
}