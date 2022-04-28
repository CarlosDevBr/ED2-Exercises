public class NoDaArvore {
	private int valor;
	private NoDaArvore esquerda;
	private NoDaArvore direita;
	
	public NoDaArvore(int valor, NoDaArvore esquerda, NoDaArvore direita) {
		this.valor = valor;
		this.esquerda = esquerda;
		this.direita = direita;
	}
	
	public static void imprimirPreOrdem(NoDaArvore n){
		System.out.print(n.valor + " ");
		if (n.esquerda != null){
			imprimirPreOrdem(n.esquerda);
		}
		if (n.direita != null){
			imprimirPreOrdem(n.direita);
		}
	}
	
	public static void imprimirEmOrdem(NoDaArvore n){
		
		if (n.esquerda != null){
			imprimirEmOrdem(n.esquerda);
		}
		System.out.print(n.valor + " ");
		if (n.direita != null){
			imprimirEmOrdem(n.direita);
		}
	}
	
  public static void imprimirPosOrdem(NoDaArvore n){
		
		if (n.esquerda != null){
			imprimirPosOrdem(n.esquerda);
		}
		
		if (n.direita != null){
			imprimirPosOrdem(n.direita);
		}
		System.out.print(n.valor + " ");
	}

  public static void buscaBinaria(NoDaArvore n, int num){
    if(n != null){
      if(n.valor == num) {
        System.out.println("VALOR ENCONTRADO");
      }
      else{
        if(num < n.valor && n.esquerda != null){
          buscaBinaria(n.esquerda, num);
      }
        else{
          buscaBinaria(n.direita, num);
        }
      }
    }
    else{
      System.out.println("VALOR NÃO ENCONTRADO");
    }
  }
}