#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int rolarDado();
int refeicaoPrimeiroAndar();
int aceitarSenshi();
int refeicaoTerceiroAndar();
int atacarBasilisco();
int escolherMandragora();

void gameOver() { 
    printf("\n💀 GAME OVER 💀\n");
    printf("Sua aventura termina aqui... Outros aventureiros os encontrarão e levarão para serem ressuscitados no primeiro andar da masmorra.\n");
    exit(0);  // Encerra o jogo
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("Você está no primeiro andar da masmorra e observa o ambiente. Há alguns aventureiros e comerciantes. Nas paredes, nota a presença de raízes comestíveis, mas ao mesmo tempo está ansioso para colocar em prática o seu plano de cozinhar monstros. O que fazer primeiro?\n");

    int escolha1 = refeicaoPrimeiroAndar();

    if (escolha1 == 1) {
        printf("Você faz uma sopa com as raízes que crescem pelas paredes. Eca! O gosto é horrível. Então alguém se aproxima, balançando a cabeça negativamente:'Não, raízes selvagens não são boas para ensopado, mas dão uma ótima geléia. Prove só.'E passa para você metade do sanduíche que estava comendo. E realmente era bom.\n");
    } else {
        printf("Vocês avistam um cogumelo andante, uma criatura fraca que vive nos primeiros andares, e o capturam. Em seguida, você checa em seu bestiário como prepará-lo. Mas algo está errado, o gosto desse cogumelo é muito ruim.\n Então alguém se aproxima, balançando a cabeça negativamente: 'Não, essas partes de cogumelo andante não são boas para consumo. Vou mostrar.' E saca uma faca de cozinha e começa a picotar o cogumelo. As partes cortadas por ele eram mesmo boas.\n");
    }

    printf("O nome dele é Senshi, um anão acostumado a se aventurar pelas masmorras e que há muitos anos se dedica a criar receitas usando monstros como ingrediente. Ele ouviu você falar sobre ir atrás do dragão vermelho. 'Eu sempre quis fazer um prato com carne de dragão. Posso viajar com vocês?\n");

    int escolha2 = aceitarSenshi();

    if (escolha2 == 1) {
        printf("Vocês seguem viagem e descem ao terceiro andar da masmorra.");
    } else {
        printf("Adentrando mais fundo na masmorra, vocês encontram folhas para fazer maniçoba, prato popular em uma terra longíqua. Cozinham as folhas por 3 horas e comem. Você e seus parceiros se sentem estranhos. Marcille, que poderia auxiliá-los com magia de cura, foi a primeira a cair. É o fim, você se sente tonto e seus sentidos começam a se esvair. Por fim, a escuridão. A planta que vocês comeram precisava cozinhar 7 dias para perder o veneno.\n");
        gameOver();
    }

    printf("No ambiente há vários sinais que indicam a proximidade de um ninho de basilisco, um ser com aparência de galinha, mas que tem uma cobra no lugar da cauda. E Chilchuck avisa que mais adiante encontrou um jardim de mandrágoras.\nA hora do jantar se aproxima, qual será o prato da noite?\n");

    int escolha3 = refeicaoTerceiroAndar();

    if (escolha3 == 1) {
        printf("Você pensa em duas formas de vencer o basilisco. São:\n");

        int escolha3_1 = atacarBasilisco();
        
        if (escolha3_1 == 1) {
            printf("Seus companheiros criam uma distração e você consegue uma brecha para pegar o basilisco desprevenido e, com um único golpe, corta fora a cabeça de serpente da criatura, que se torna menos letal e é facilmente derrotada.\n");
        } else {    
            printf("O plano é o seguinte: Posicione-se em frente ao basilisco, coloque as mãos para o alto e grite o mais alto que puder. Seu objetivo é assustar a criatura. Se for bem sucedido, ela paralisa por um momento e recua, facilitando o ataque. Caso contrário, o ataca violentamente com a cauda de serpente.\n");

            int sorte1 = rolarDado();

            if (sorte1 >= 10) {
                printf("Para a surpresa dos demais, sua tática funcionou. Agora é a sua deixa, e você tem sucesso no ataque. Hoje terá omelete de basilisco no jantar.\n");
            } else {
                printf("Oh não! Sua tentativa de ser assustador não surtiu efeito algum e agora a parte serpente do monstro vem em sua direção e o atinge.\n");
            }    
        }
    } else {
        printf("Marcille e Senshi discutem a melhor forma de pegar mandrágoras, tubérculos que emitem um grito alto, atordoante, ao serem retiradas da terra. Marcile diz que aprendeu na escola de magia que se deve amarrar uma corda nas mandrágoras e puxá-las a uma distância segura para os ouvidos. Senshi afirma que ouviu dizer que é possível silenciar as mandrágoras ao cortar seu topo antes de desenterrá-las.\nQual técnica você decide testar primeiro?\n");

        int escolhaMarciSen = escolherMandragora();

        if (escolhaMarciSen == 1) {
            printf("Marcille pega mandrágora.\n");
        } else {
            printf("Senshi pega mandrágora.\n");
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
        printf("1. Vamos com a técnica da Marci, as lições de botãnica da escola de magia certamente são confiáveis.\n");
        printf("2. Senshi tem experiência na masmorra, certamente seus métodos são seguros.\n");
        printf("-> ");
    scanf("%d", &escolha);
    }

    while (escolha != 1 && escolha !=2);    

    return escolha;
}