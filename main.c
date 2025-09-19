#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int rolarDado();
int refeicaoPrimeiroAndar();
int aceitarSenshi();
int refeicaoTerceiroAndar();
int atacarBasilisco();
int escolherMandragora();
int escolherCaminho();
int passarSereias();
int descansar();
int acordarMarcille();
int interpretarSonho();
int interpretarSonho2();

void gameOver() { 
    printf("\nGAME OVER\n");
    printf("Sua aventura termina aqui... Outros aventureiros os encontrarão e os levarão para serem ressuscitados no primeiro andar da masmorra.\n");
    exit(0);  // Encerra o jogo
}

int main() {
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
        printf("Adentrando mais fundo na masmorra, vocês encontram folhas para fazer maniçoba, prato popular em uma terra longíqua. Cozinham as folhas por 3 horas e comem. Você e seus parceiros se sentem estranhos. Marcille, que poderia auxiliá-los com magia de cura, foi a primeira a cair. É o fim, você se sente tonto e seus sentidos começam a se esvair. Por fim, a escuridão. A planta que vocês comeram precisava cozinhar 7 dias para perder o veneno.\n");
        gameOver();
    }

    printf("\nNo ambiente, alguns sinais indicam a proximidade de um ninho de basilisco, um ser com aparência de galinha, mas que tem uma cobra no lugar da cauda. E Chilchuck avisa que mais adiante encontrou um jardim de mandrágoras.\nA hora do jantar se aproxima, qual será o prato da noite?\n");

    int escolha3 = refeicaoTerceiroAndar();

    if (escolha3 == 1) {
        printf("Você pensa em duas formas de vencer o basilisco. São:\n");

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
                printf("Seus companheiros criam uma distração e você consegue uma brecha para pegar o basilisco desprevenido e, com um único golpe, corta fora a cabeça de serpente da criatura, que se torna menos letal e é facilmente derrotada.\n\n");
            }    
        }
    } else {
        printf("Marcille e Senshi discutem a melhor forma de pegar mandrágoras, tubérculos que emitem um grito alto, atordoante, ao serem retiradas da terra. Marcile diz que aprendeu na escola de magia que se deve amarrar uma corda nas mandrágoras e puxá-las a uma distância segura para os ouvidos. Senshi afirma que ouviu dizer que é possível silenciar as mandrágoras ao golpear seu topo antes de desenterrá-las.\nQual técnica você decide testar primeiro?\n");

        int escolha5 = escolherMandragora();

        if (escolha5 == 1) {
            printf("Marcille e Chilchuck amarram uma corda no topo de uma mandrágora e tomam distância para longe dela, quando de repente surge um morcego grande e puxa a corda antes do tempo. O morcego fica aturdido com o grito da mandrágora e cai no chão. Ao lado Marcille, também atordoada, parecendo um pouco fora de si. Senshi se aproxima e retira uma mandrágora sem fazer barulho, apenas cortando o topo dela fora.\nA janta: Morcego grande assado com salada de mandrágora.\n");
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
            printf("O grupo segue pela área alagada da masmorra, uma área conhecida por ser habitat de monstros aquáticos. Você escuta um canto suave vindo de algum lugar. Senshi o encara. 'Sim, eu sei. São sereias!'. Vocês estudam um jeito de passar por elas sem ouvir o canto mortal que os levariam para o fundo daquele lago. Como proceder?\n");

            int escolha7 = passarSereias();

            if (escolha7 == 1) {
                printf("Você passa tranquilamente pelas sereias sem cair sob o efeito do feitiço do canto delas.\n");
            } else {
                int sorte3 = rolarDado();
                printf("Sorte: %d. ", sorte3);
                if (sorte3 >= 10) {
                    printf("IOOOOO CHE AMOO SOLO TE\nLO MI FERMERÒ E TI REGALERÒ.\nVocê canta a plenos pulmões, um pouco fora do tom, fazendo sua voz ecoar por todo ambiente, suprimindo o canto das sereias. Contrariadas, elas desistem decantar e mergulham na água. Agora vocês podem seguir com tranquilidade.\n");
                } else {
                    printf("IOOOOO CHE AMOO SOLO TE\nLO MI FERMERÒ E TI REGALERÒ. Você passa ao lado das criaturas cantando a plenos pulmões, um pouco fora do tom, fazendo sua voz ecoar por todo ambiente. Mas sua voz falha e não é suficiente para suprimir o cantos delas. Você então cai enfeiiçado, uma sereia vai em sua direção, mas Senshi, de ouvidos tampados, rapidamente corre até você e o salva.\n");
                }
            }

        }

    } else {
        printf("\nO grupo segue pela área alagada da masmorra, onde há um lago ocupando todo o andar, uma área conhecida por ser habitat de monstros aquáticos. Você escuta um canto suave vindo de algum lugar. Senshi o encara. 'Sim, eu sei. São sereias!'. Marcille usa magia para permitir que vocês caminhem sobre as águas. Agora vocês estudam um jeito de passar pelas sereias sem ouvir o canto mortal que os levariam para o fundo daquele lago. Como proceder?\n");
        int escolha7 = passarSereias();

            if (escolha7 == 1) {
                printf("Você passa tranquilamente pelas sereias sem cair sob o efeito do feitiço do canto delas.\n");
            } else {
                int sorte4 = rolarDado();
                printf("Sorte: %d. ", sorte4);
                if (sorte4 >= 10) {
                    printf("IOOOOO CHE AMOO SOLO TE\nLO MI FERMERÒ E TI REGALERÒ.\nVocê passa ao lado das criaturas cantando a plenos pulmões, um pouco fora do tom, fazendo sua voz ecoar por todo ambiente, suprimindo o canto das sereias. Contrariadas, elas desistem decantar e mergulham na água. Agora vocês podem seguir com tranquilidade.\n");
                } else {
                    printf("IOOOOO CHE AMOO SOLO TE\nLO MI FERMERÒ E TI REGALERÒ. Você passa ao lado das criaturas cantando a plenos pulmões, um pouco fora do tom, fazendo sua voz ecoar por todo ambiente. Mas sua voz falha e não é suficiente para suprimir o cantos delas. Você então cai enfeiiçado, uma sereia vai em sua direção, mas Senshi, de ouvidos tampados, rapidamente corre até você e o salva.\n");
                }
            }

        printf("\nDormir?\n");

        int escolha8 = descansar();

        if (escolha8 == 1) {
            printf("Vocês param para comer e depois seguem viagem.\n");
        } else {
            printf("\nVocês encontram um lugar bom para descansar e, depois de comer, se preparam para dormir. Marcille é a primeira a adormecer e você nota que há algo estranho com ela. Senshi e Chilchuck se aproximam e concordam com você: ela está sob o ataque de um pesadelo, criatura semelhante a uma ostra, que se aloca no travesseiro da pessoa e a faz ter maus sonhos alimentando traumas e feridas emocionais. Se não sair desse pesadelo, a pessoa eventualmente morre.\n");
            printf("O único jeito de combater um pesadelo é entrar no sonho da pessoa e a proteger do estresse emocional. Forçar o despertar pode causar danos mentais severos e irreversíveis. Então você você se prepara e entra no sonho de Marcille.\n");
            printf("Você está em um corretor de biblioteca, cercado por várias estantes de livros. Por onde começa a procurar?\n");

            int escolha9 = acordarMarcille();

            if () {
                printf("Você vê Falin segurando seu cajado, que emite raios de luz. Depois, luz apaga e um ser disforme lança uma neblina sobre ela, que a deixa enfraquecida e em seguida a criatura a engole. Aparece Marcille, em sua forma de criança, agarra sua mão e o puxa, aterrorizada, para fugir da criatura.\nEla está muito assustada e começa a chorar. Você precisa encontrar um jeito de tranquilizá-la. O que você achou do sonho dela?\n");

                int escolha10 = interpretarSonho();

                if () {
                    printf("Ela para, olha para você e começa a chorar. Você se pergunta se disse algo errado. De repente, o monstro agarra seu braço, mas você consegue se desvencilhar e diz que está bem, porém ao olhar para sua mão, percebe que algo aconteceu: sua pele envelheceu, sua mão se parece com uma mão idosa.\n");
                    printf("Chorando, Marcille diz que quando tentou usar magia ela ficou desse jeito. 'Ela?', você pergunta, e Marcille lhe mostra a boneca que trazia consigo: Era Falin. Então será que...?\n");

                    if () {
                        printf("");
                    } else {
                        printf("");
                    }

                } else {
                    printf("Você");
                }

            } else {
                printf("Você vê aquele ser acredita ser o falecido pai de Marcille, um homem alto (Marcille é mestiça de homem alto e mãe elfa) sentado em uma cadeira de balanço. Então, surge uma criatura disforme e lança uma névoa sobre ele, que o deixa enfraquecido e depois a criatura o engole. Aparece Marcille, em sua forma de criança, agarra sua mão e o puxa, aterrorizada, para fugir da criatura.\nEla está muito assustada e começa a chorar. Você precisa encontrar um jeito de tranquilizá-la. O que você achou do sonho dela?\n");

                int escolha10 = interpretarSonho();

                if () {

                } else {

                }

            }
        }
    }

        return 0;
    }


//implementação

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
        printf("2. Experimentar uma tática ousada aprendida em um livro sobre basiliscos.\n");
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
        printf("1. Você decide confiar na furtividade e experiência do ladino para passar pelo caminho curto com armadilhas. 'Não podemos demorar muito, temos que alcançar Falin o quanto antes.\n");
        printf("2. É muito arriscado, a masmorra tem andado instável. Se sofrermos um golpe fatal, teremos 0 chances de salvar minha irmã.\n");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);
    return escolha;
}

int passarSereias() {
    int escolha;
    do {
        printf("1. Proteja seus ouvidos com algodão e peça para Marcille usar magia para forçar as sereias a imergirem na água.\n");
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
        print("2. Você ouve ruídos de origem desconhecida e anda em direção a ele, chamando por Marcille.\n");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);
    return escolha;
}

int interpretarSonho() {
    int escolha;
    do {
        printf("1. 'Já Sei! Ela tem medo de monstros. Deixe-mer como posso derrotar esse tipo de monstro, hum... Por que você não usa seus poderes mágicos para combatê-lo? Você consegue derrotar esse monstro.'\n");
        print("2. 'Não... será que...?'");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);
    return escolha;
}

int interpretarSonho2() {
    int escolha;
    do {
        printf("1. 'Entendi! Marcille se sente mal por seu feitiço de ressureição ter transformado Falin naquilo'\n");
        print("2. 'Não... será que...?'");
        printf("-> ");
        scanf("%d", &escolha);
    }
    while (escolha != 1 && escolha !=2);
    return escolha;
}