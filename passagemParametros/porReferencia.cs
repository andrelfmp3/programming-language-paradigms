using System;
// Método de passagem de parâmetro por referencia

public class PorReferencia{
    
    static void DobroResult(ref int x){
        x = x * 2;
    }

    public static void Main(string[] args)
    {
        int teste = 10;
        
        Console.WriteLine("Valor antes de chamar a funcao: " + teste);
        DobroResult(ref teste);
        Console.WriteLine("Valor durante funcao dobro: " + teste);
        Console.WriteLine("Valor depois de chamar a funcao: " + teste);
    }
}
