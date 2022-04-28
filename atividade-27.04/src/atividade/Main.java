package atividade;

public class Main {
	public static void main(String[] args) {
		NoDaArvore no1 = new NoDaArvore(20, new NoDaArvore(10, new NoDaArvore(5, null, null), null),
				new NoDaArvore(30, null, null));
		no1.imprimirEmOrdem(no1);
		System.out.println("\n");
		no1.imprimirPosOrdem(no1);
		System.out.println("\n");
		no1.buscaBinaria(no1, 5);
	}
}
