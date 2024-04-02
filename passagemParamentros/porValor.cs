using System;
// Método de passagem de parâmetro por valor

public class PorValor{

    static int Dobro(int x){
        int y = x * 2;
        return y;
    }

    public static void Main(string[] args){
        
        int teste = 10;
        
        Console.WriteLine("Valor antes de chamar a funcao: " + teste);
        Console.WriteLine("Valor durante funcao dobro: " + Dobro(teste));
        Console.WriteLine("Valor depois de chamar a funcao: " + teste);
    }
}
