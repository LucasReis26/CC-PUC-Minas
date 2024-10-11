import java.io.RandomAccessFile;
import java.io.IOException;
import java.util.Scanner;

class Date
{

    private int day;
    private int month;
    private int year;

    Date()
    {

        this(0,0,0);

    }

    Date (int day, int month, int year)
    {

        this.day = day;
        this.month = month;
        this.year = year;

    }

    void setDay(int day)
    {
        this.day = day;
    }
    int getDay()
    {
        return this.day;
    }
    void setMonth(int month)
    {
        this.month = month;
    }
    int getMonth()
    {
        return this.month;
    }
    void setYear(int year)
    {
        this.year = year;
    }
    int getYear()
    {
        return this.year;
    }

    void print()
    {
        if (this.day < 10)
        {
            System.out.print("0" + this.day + "/");
        }
        else
        {
            System.out.print(this.day + "/");
        }
        if (this.month < 10)
        {
            System.out.print("0" + this.month + "/");
        }
        else
        {
            System.out.print(this.month + "/");
        }
        System.out.print(this.year);
    }

}

class Lista
{

    private String[] array;
    private int n;

    Lista()
    {

        this(10);

    }

    Lista(int tam)
    {

        array  = new String[tam];
        n = 0;

    }

    void insere (String tipo)
    {

        this.array[this.n++] = tipo;

    }

    void print()
    {
        for(int i = 0; i < this.n; i++)
        {
            if(i < this.n - 1)
                System.out.print("'"+ this.array[i] + "'" + ", ");
            else
                System.out.print("'" + this.array[i] + "'");
        }
    }

}

class Pokemon
{

    private int id;
    private int generation;
    private String name;
    private String description;
    private Lista types;
    private Lista abilities;
    private Double weight;
    private Double height;
    private int captureRate;
    private boolean isLegendary;
    private Date captureDate;

    Pokemon()
    {
        this(0,0,"Sem Nome","Sem Descrição",new Lista(),new Lista(),0.0,0.0,0,false,new Date());
    }

    Pokemon(int id, int generation, String name, String description, Lista types, Lista abilities, Double weight, Double height, int captureRate, boolean isLegendary, Date captureDate)
    {
        this.id = id;
        this.generation = generation;
        this.name = name;
        this.description = description;
        this.types = types;
        this.abilities = abilities;
        this.weight = weight;
        this.height = height;
        this.captureRate = captureRate;
        this.isLegendary = isLegendary;
        this.captureDate = captureDate;
    }

    void setId(int id)
    {
        this.id = id;
    }
    int getId()
    {
        return this.id;
    }
    void setGeneration(int generation)
    {
        this.generation = generation;
    }
    int getGeneration()
    {
        return this.generation;
    }
    void setName(String name)
    {
        this.name = name;
    }
    String getName()
    {
        return this.name;
    }
    void setDescription(String description)
    {
        this.description = description;
    }
    String getDescription()
    {
        return this.description;
    }
    void setTypes(Lista types)
    {
        this.types = types;
    }
    Lista getTypes()
    {
        return this.types;
    }
    void setAbilities(Lista abilities)
    {
        this.abilities = abilities;
    }
    Lista getAbilities()
    {
        return this.abilities;
    }
    void setWeight(Double weight)
    {
        this.weight = weight;
    }
    Double getWeight()
    {
        return this.weight;
    }
    void setHeight(Double height)
    {
        this.height = height;
    }
    Double getHeight()
    {
        return this.height;
    }
    void setCaptureRate(int captureRate)
    {
        this.captureRate = captureRate;
    }
    int getCaptureRate()
    {
        return this.captureRate;
    }
    void setIsLegendary(boolean isLegendary)
    {
        this.isLegendary = isLegendary;
    }
    boolean getIsLegendary()
    {
        return this.isLegendary;
    }
    void setCaptureDate (Date captureDate)
    {
        this.captureDate = captureDate;
    }
    Date getCaptureDate ()
    {
        return this.captureDate;
    }

    void print()
    {
        System.out.print("[#" + this.id);
        System.out.print(" -> " + this.name + ": ");
        System.out.print(this.description + " - ");
        System.out.print("[");
        this.types.print(); 
        System.out.print("]");
        System.out.print(" - [");
        this.abilities.print();
        System.out.print("]");
        System.out.print(" - " + this.weight + "kg");
        System.out.print(" - " + this.height + "m");
        System.out.print(" - " + this.captureRate + "%");
        System.out.print(" - " + this.isLegendary);
        System.out.print(" - " + this.generation + " gen]");
        System.out.print(" - ");
        this.captureDate.print();
    }

}

public class Main
{

    public static Pokemon converteLinha (String linha)
    {
        Pokemon pokedex = new Pokemon();

        char[] charArray = linha.toCharArray();
        String[] atributes;
        int atributeCount = 0, virgulaCount = 0, colcheteAberto = 0;
        int colcheteFechado = 0, abilities = 0;

        for(int i = 0; i < charArray.length; i++)
        {
            if(charArray[i] == ',')
                virgulaCount++;
        }

        atributes = new String[virgulaCount + 3];

        for(int i = 0; i < atributes.length; i++)
        {
            atributes[i] = "";
        }

        for(int i = 0; i < charArray.length; i++)
        {
            if(charArray[i] != ',')
            {
                if(charArray[i] == '[' || charArray[i] == '"' || charArray[i] == '\'' || charArray[i] == '/' || charArray[i] == ']')
                {
                    switch(charArray[i])
                    {
                        case '/':
                            atributeCount++;
                            break;
                        case '[':
                            colcheteAberto++;
                            break;
                        case ']':
                            colcheteFechado++;
                            break;
                        default:
                            break;
                    }
                }
                else
                {
                    if(charArray[i] == ' ' && charArray[i-1] == ',')
                    {}
                    else
                    atributes[atributeCount] += charArray[i];
                }
            }
            else
            {
                if(colcheteAberto > colcheteFechado)
                        abilities++;
                if(charArray[i-1] == ',' && i != 0)
                    atributes[atributeCount] = "NULO";

                
                atributeCount++;
            }
        }

        /*for(int i = 0; i < atributes.length; i++)
        {
            System.out.println(i + ": " +atributes[i]);
        }*/

        pokedex.setId(Integer.parseInt(atributes[0]));
        pokedex.setGeneration(Integer.parseInt(atributes[1]));
        pokedex.setName(atributes[2]);
        pokedex.setDescription(atributes[3]);

        Lista pokeTypes = new Lista(2);

        for(int i = 4; i <= 5; i++)
        {
            if(atributes[i] != "NULO")
                pokeTypes.insere(atributes[i]);
        }

        pokedex.setTypes(pokeTypes);

        Lista pokeAbilities = new Lista(10);

        for(int i = 6; i <= 6 + abilities; i++)
        {
            pokeAbilities.insere(atributes[i]);
        }

        pokedex.setAbilities(pokeAbilities);

        int posAbilities = abilities + 6;

        if(atributes[++posAbilities] == "NULO")
        {
            pokedex.setWeight(0.0);
        }
        else
            pokedex.setWeight(Double.parseDouble(atributes[posAbilities]));

        if(atributes[++posAbilities] == "NULO")
        {
            pokedex.setHeight(0.0);
        }
        else
            pokedex.setHeight(Double.parseDouble(atributes[posAbilities]));

        pokedex.setCaptureRate(Integer.parseInt(atributes[++posAbilities]));

        if(atributes[++posAbilities].equals("1"))
            pokedex.setIsLegendary(true);
        else if (atributes[posAbilities].equals("0"))
            pokedex.setIsLegendary(false);

        Date pokeCaptureDate = new Date();

        pokeCaptureDate.setDay(Integer.parseInt(atributes[++posAbilities]));

        pokeCaptureDate.setMonth(Integer.parseInt(atributes[++posAbilities]));

        pokeCaptureDate.setYear(Integer.parseInt(atributes[++posAbilities]));

        pokedex.setCaptureDate(pokeCaptureDate);

        return pokedex;
    }
    public static void main (String[] args)
    {

        String linha;
        Pokemon[] pokedex = new Pokemon[801];
        
        Scanner sc = new Scanner(System.in);

        String procuraPokemon = sc.nextLine();

        for(int i = 0; i < 801; i++)
        {
            pokedex[i] = new Pokemon();
        }
        try
        {
            RandomAccessFile raf = new RandomAccessFile("../pokemon.csv","r");

            
            raf.readLine();

            for(int i = 0; i < 801; i++)
            {
                linha = raf.readLine();

                linha = new String(linha.getBytes("ISO-8859-1"),"UTF-8");

                pokedex[i] = converteLinha(linha);
            }

            while(!procuraPokemon.equals("FIM"))
            {
                int numPokemon = Integer.parseInt(procuraPokemon);

                pokedex[numPokemon - 1].print();
                System.out.println();

                procuraPokemon = sc.nextLine();
            }

            sc.close();
            raf.close();
        } 
        catch (IOException e)
        {
            e.printStackTrace();
        }

    }
}