using System;
// Método de passagem de parâmetro por resultado

public class porResultado{

    static int Resultado(out int x){
        x = 2;
        return x;
    }

    public static void Main(string[] args){
        
        int teste;
        int valorRetornado = Resultado(out teste);
        
        Console.WriteLine("Valor da funcao 'valorRetornado': " + valorRetornado);
        Console.WriteLine("Valor da variavel 'teste': " + teste);
        
    }
}
