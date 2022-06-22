import java.util.Scanner;


class Main {
  public static int indicaIndice(int num, int tam){
    int NewVlr = num%tam;
    return NewVlr;
  }
      
  public static int insereVetor(int vet[], int vlr, int tam){
    return vet[indicaIndice(vlr,tam)] = vlr;
  }
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    System.out.println("digite o tamanho do vetor do seu hash: ");
    int tam = sc.nextInt();

    int vetor[] = new int[tam];

    insereVetor(vetor, 80, tam);
    System.out.println(indicaIndice(80,tam));
    
    int i = 0;
    for(int item : vetor){
      System.out.println("Indice "+i+" : "+item);
      i = i+1;
    }
    
  }  
}

