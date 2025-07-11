// ---------------------------------------------------------------------------------------------------- //
// Imports

import java.io.BufferedReader;
import java.io.FileReader;
import java.text.SimpleDateFormat;
import java.util.*;

// ---------------------------------------------------------------------------------------------------- //

public class Show{
    // Global variables
    public static final String FILE_PATH = "/tmp/disneyplus.csv";
    //public static final String FILE_PATH = "/home/felipe/PUCMinas/AEDS2/tp02/Q01/disneyplus.csv";
    //public static ArrayList<Show> allShows = new ArrayList<Show>();  //Não utilizado
    public static int mov = 0, comp = 0; //Variaveis para contar movimentações e comparações

    //Atributos
    private String Show_id;
    private String type;
    private String title;
    private String director;
    private ArrayList<String> cast = new ArrayList<>();
    private String country;
    private Date date_added;
    private int release_year;
    private String rating; 
    private String duration; 
    private ArrayList<String> listed_in = new ArrayList<>(); 
    

    // Construtor padrão
    public Show() {
        this.Show_id = "";          
        this.type = "";             
        this.title = "";            
        this.director = "";         
        this.cast = new ArrayList<>();           
        this.country = "";          
        this.date_added = null;      
        this.release_year = 0;        
        this.rating = "";           
        this.duration = "";         
        this.listed_in = new ArrayList<>();       
    }

    // Construtor com parâmetros
    public Show(String show_id, String type, String title, String director, ArrayList<String> cast, String country, Date date_added, int release_year, String rating, String duration, ArrayList<String> listed_in) {
        this.Show_id = show_id;
        this.type = type;
        this.title = title;
        this.director = director;
        this.cast = new ArrayList<>(cast);
        this.country = country;
        this.date_added = date_added;    
        this.release_year = release_year;
        this.rating = rating;
        this.duration = duration;
        this.listed_in = new ArrayList<>(listed_in);
}

    // Getters e Setters
    public String getShow_id() {return Show_id;}
    public void setShow_id(String show_id) { Show_id = show_id;}
    
    public String getType() {return type;}
    public void setType(String type) {this.type = type;}
    
    public String getTitle() {return title;}
    public void setTitle(String title) {this.title = title;}
    
    public String getDirector() {return director;}
    public void setDirector(String director) {this.director = director;}
    
    public ArrayList<String> getCast() { return new ArrayList<>(cast); }
    public void setCast(ArrayList<String> cast) { this.cast = new ArrayList<>(cast); }
    
    public String getCountry() {return country;}
    public void setCountry(String country) {this.country = country;}
    
    public Date getDate_added() {return date_added;}
    public void setDate_added(Date date_added) {this.date_added = date_added;}
    
    public int getRelease_year() {return release_year;}
    public void setRelease_year(int release_year) {this.release_year = release_year;}
    
    public String getRating() {return rating;}
    public void setRating(String rating) {this.rating = rating;}
    
    public String getDuration() {return duration;}
    public void setDuration(String duration) {this.duration = duration;}
    
    public ArrayList<String> getListed_in() { return new ArrayList<>(listed_in); }
    public void setListed_in(ArrayList<String> listed_in) { this.listed_in = new ArrayList<>(listed_in); }
// ---------------------------------------------------------------------------------------------------- //
//Funções

    //+-+-+--+-+-+-+ Função transformar uma string em um objeto +-+-+--+-+-+-+
    public static Show TrasInObj(String linha){
        Show showzinho = new Show();
        int i=0;        
        ArrayList<String> atrib = new ArrayList<>();
       
        while (i<linha.length()) {
            //Testa se um conjunto de dados
            if(linha.charAt(i)=='"'){
                 i++;
                 StringBuilder aux = new StringBuilder();
                 while (i+1<linha.length()) {

                      //testo se é fim do conjunto, se for para, se não continua a leitura
                     if(linha.charAt(i) == '"'){
                         if (linha.charAt(i+1) == ','){
                            i++;
                            break;
                         }
                        i++;
                    }

                    aux.append(linha.charAt(i));
					i++;                       
                    }
                    atrib.add(aux.toString()); 
            //Se não for um conjunto de dados realiza esse else              
            }else{
            //Testa se é um campo vazio ,, NaN
                 if (i < linha.length() && linha.charAt(i) == ',') {
				    if(linha.charAt(i+1) == ','){
					        atrib.add("NaN");
		            }
                    i++;
                //Se não cair em nenhma das condições anteriores quer dizer que é um dado unitario a ser lido
                }else{
                    StringBuilder aux = new StringBuilder();
					while(i < linha.length() && linha.charAt(i) != ','){
						aux.append(linha.charAt(i));
						i++;
					}
                    atrib.add(aux.toString());
                }
            }

            
        }
        //teste para ver se todos os atributos foram separados em strings
        //for (int j = 0; j < atrib.size(); j++){ System.out.println(atrib.get(j)); } System.out.println("\n");
        
        showzinho.setShow_id(atrib.get(0));
		showzinho.setType(atrib.get(1));
		showzinho.setTitle(atrib.get(2));
		showzinho.setDirector(atrib.get(3));
		showzinho.setCast(Separa(atrib.get(4)));
		showzinho.setCountry(atrib.get(5));
		
        //Tratamento da data
        try {
            if(!atrib.get(6).equals("NaN")) {
                String dataNormalizada = atrib.get(6).replace(",", "").trim();
                SimpleDateFormat dateFormat = new SimpleDateFormat("MMMM dd yyyy", Locale.ENGLISH);
                showzinho.setDate_added(dateFormat.parse(dataNormalizada));
            } else {
                showzinho.setDate_added(null);
            }
        } catch (Exception e) {
            System.err.println("Erro ao converter data: " + atrib.get(6));
            showzinho.setDate_added(null);
        }

		showzinho.setRelease_year(Integer.parseInt(atrib.get(7)));
		showzinho.setRating(atrib.get(8));
		showzinho.setDuration(atrib.get(9));
		showzinho.setListed_in(Separa(atrib.get(10)));
		
        return showzinho;
    }
    
    //+-+-+--+-+-+-+ Função para separar elementoentos por virgula +-+-+--+-+-+-+
    public static ArrayList<String> Separa(String s){
        ArrayList<String> separado = new ArrayList<>();
        int i = 0;

        while (i < s.length()) {
            if (s.equals("NaN")) {
                separado.add("NaN");
                break;
            } else {
                StringBuilder aux = new StringBuilder();
                while (i < s.length() && s.charAt(i) != ',') {
                    aux.append(s.charAt(i));
                    i++;
                }
                separado.add(aux.toString());
            }
            i += 2;
        }
        Collections.sort(separado);
        return separado;
    }
    
    //+-+-+--+-+-+-+Função para imprimir todos os shows de uma lista +-+-+--+-+-+-+

    public static void ImprimirLista( ArrayList<Show> show){
        SimpleDateFormat outputFormat = new SimpleDateFormat("MMMM d, yyyy", Locale.ENGLISH);//Tratamento da data
        for(int i=0; i< show.size();i++){
         

                String dataFormatada = (show.get(i).date_added != null) ? outputFormat.format(show.get(i).date_added) : "NaN"; //Tratamento da data
                System.out.print("=> " + show.get(i).Show_id);
                System.out.print(" ## ");
                System.out.print(show.get(i).title);
                System.out.print(" ## ");
                System.out.print(show.get(i).type);
                System.out.print(" ## ");
                System.out.print(show.get(i).director);
                System.out.print(" ## ");
                System.out.print(show.get(i).cast);
                System.out.print(" ## ");
                System.out.print(show.get(i).country);
                System.out.print(" ## ");
                System.out.print(dataFormatada);
                System.out.print(" ## ");
                System.out.print(show.get(i).release_year);
                System.out.print(" ## ");
                System.out.print(show.get(i).rating);
                System.out.print(" ## ");
                System.out.print(show.get(i).duration);
                System.out.print(" ## ");
                System.out.print(show.get(i).listed_in); 
                System.out.println(" ## ");

            
        }
         
    }

    //+-+-+--+-+-+-+Função para imprimir a serie desejada+-+-+--+-+-+-+
    public static void ImprimirPorId(String id, ArrayList<Show> show){
        SimpleDateFormat outputFormat = new SimpleDateFormat("MMMM d, yyyy", Locale.ENGLISH);//Tratamento da data
        for(int i=0; i< show.size();i++){
            if(show.get(i).getShow_id().equals(id)){

                String dataFormatada = (show.get(i).date_added != null) ? outputFormat.format(show.get(i).date_added) : "NaN"; //Tratamento da data
                System.out.print("=> " + show.get(i).Show_id);
                System.out.print(" ## ");
                System.out.print(show.get(i).title);
                System.out.print(" ## ");
                System.out.print(show.get(i).type);
                System.out.print(" ## ");
                System.out.print(show.get(i).director);
                System.out.print(" ## ");
                System.out.print(show.get(i).cast);
                System.out.print(" ## ");
                System.out.print(show.get(i).country);
                System.out.print(" ## ");
                System.out.print(dataFormatada);
                System.out.print(" ## ");
                System.out.print(show.get(i).release_year);
                System.out.print(" ## ");
                System.out.print(show.get(i).rating);
                System.out.print(" ## ");
                System.out.print(show.get(i).duration);
                System.out.print(" ## ");
                System.out.print(show.get(i).listed_in); 
                System.out.println(" ## ");

            }
        }
         
    }

    //+-+-+--+-+-+-+ Funação para clonar +-+-+--+-+-+-+
    public Show clone() {
        Show clone = new Show();
        clone.setShow_id(this.getShow_id());
        clone.setType(this.getType());
        clone.setTitle(this.getTitle());
        clone.setDirector(this.getDirector());
        clone.setCast(new ArrayList<>(this.getCast()));
        clone.setCountry(this.getCountry());
        clone.setDate_added(this.getDate_added() != null ? new Date(this.getDate_added().getTime()) : null);
        clone.setRelease_year(this.getRelease_year());
        clone.setRating(this.getRating());
        clone.setDuration(this.getDuration());
        clone.setListed_in(new ArrayList<>(this.getListed_in()));
        return clone;
    }

   
    //+-+-+--+-+-+-+ Função ler arquivo csv +-+-+--+-+-+-+
    public static ArrayList<Show> Ler(){
        String linha = "";
		int aux = 0;
		ArrayList <Show> show = new ArrayList<>(); 

		try {
			BufferedReader br = new BufferedReader(new FileReader(FILE_PATH));
			while ((linha = br.readLine()) != null) {

                if(aux >= 1){
					//System.out.println(linha + '\n');
					show.add(TrasInObj(linha));
				}

				aux++;
                
                
			}
            br.close();
		} catch (Exception e) {
			System.out.println("Erro ao ler arquivo!!");
		}
		return show;
        
    }

    //+-+-+--+-+-+-+ Função Pesquisa Sequencial +-+-+--+-+-+-+
    public static void pesqSeq(ArrayList<Show> lista, String title){
        boolean resp = false;
        int n = lista.size();
  
        for(int i = 0; i < n; i++){
           if(lista.get(i).title.equals(title)){
               resp = true;
               i = n;
            }
            comp++;
        }
         
        if(resp){
            System.out.println("SIM");
        }else{
            System.out.println("NAO");
        }
     }

     //+-+-+--+-+-+-+ Função swap de show +-+-+--+-+-+-+
    public static void swap(ArrayList<Show> lista, int i, int j) {
        if (i != j) { 
            Show temp = lista.get(i); 
            lista.set(i, lista.get(j)); 
            lista.set(j, temp); 
            mov += 3;
        }
    }
     //+-+-+--+-+-+-+ Algoritmo de Seleção(title) +-+-+--+-+-+-+
     public static void Selecao(ArrayList<Show> lista) {
        int n = lista.size();
        for (int i = 0; i < n - 1; i++) {
            int menor = i;
            for (int j = i + 1; j < n; j++) {
                if (lista.get(j).getTitle().compareToIgnoreCase(lista.get(menor).getTitle()) < 0) {
                    menor = j;
                }
                comp++;
            }
            swap(lista, menor, i); 
        }
    }
     //+-+-+--+-+-+-+ Função para retornar a serie pesquisa +-+-+--+-+-+-+
     public static Show procurar(ArrayList<Show> showzinho, String id){
        for (int i = 0; i < showzinho.size(); i++) {
            if (showzinho.get(i).getShow_id().equals(id)) {
                return showzinho.get(i);
            }
        }
        return null;
    }

    public void imprimir() {
        SimpleDateFormat data = new SimpleDateFormat("MMMM d, yyyy");
        System.out.print("=> " + getShow_id());
        System.out.print(" ## " + getTitle());
        System.out.print(" ## " + getType());
        System.out.print(" ## " + getDirector());
        System.out.print(" ## " + getCast());
        System.out.print(" ## " + getCountry());
        System.out.print(" ## ");
        System.out.print(getDate_added() != null ? data.format(getDate_added()) : "NaN");
        System.out.print(" ## " + getRelease_year());
        System.out.print(" ## " + getRating());
        System.out.print(" ## " + getDuration());
        System.out.println(" ## " + getListed_in() + " ##");
    }
    

    //---------------------------------------------------------------------------------------------------- //
    //Fução main 
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		ArrayList<Show> listaShow = Ler();
		String id = "";

		PilhaFlexivel pilha = new PilhaFlexivel();
		id = sc.nextLine();
		while (!id.equals("FIM")) {
			for (int i = 0; i < listaShow.size(); i++) {
				if (listaShow.get(i).getShow_id().equals(id)) {
					pilha.empilhar(listaShow.get(i));
				}
			}
			id = sc.nextLine();
		}
		PilhaFlexivel pilhaRemovidos = new PilhaFlexivel();
		int n = sc.nextInt();
		sc.nextLine();
		for(int i = 0; i < n; i++) {
			String comando = sc.next();

			if(comando.equals("I")) {
				id = sc.next();
				pilha.empilhar(procurar(listaShow, id));
			} else if(comando.equals("R")) {
				Show removido = pilha.desempilhar();
				pilhaRemovidos.empilhar(removido);
			}
		}
		for(int i = pilhaRemovidos.tamanho(); i > 0; i--) {
			System.out.println("(R) " + pilhaRemovidos.pegar(i-1).getTitle());
		}
		
		for(int i = pilha.tamanho(); i > 0; i--) {
			System.out.print("["+ (i-1) + "] ");
			pilha.desempilhar().imprimir();
		}
		
		sc.close();
	}
}

//---------------------------------------------------------------------------------------------------- //
    //Classe pilha
//---------------------------------------------------------------------------------------------------- //

class Celula {
	public Show elemento;
	public Celula prox;

	public Celula() {
		this.elemento = null;
		this.prox = null;
	}

	public Celula(Show elemento) {
		this.elemento = elemento;
		this.prox = null;
	}
}

class PilhaFlexivel {
	public Celula topo;

	public PilhaFlexivel() {
		topo = new Celula();
	}

	public void empilhar(Show x) {
		Celula temp = new Celula(x);
		temp.prox = topo.prox;
		topo.prox = temp;
		temp = null;
	}

	public int tamanho() {
		int tam = 0;
		for(Celula i = topo.prox; i != null; i = i.prox) {
			tam++;
		}
		return tam;
	}

	public Show desempilhar() {
		Celula temp = topo.prox;
		topo.prox = temp.prox;
		Show x = temp.elemento;
		temp.prox = null;
		temp = null;
		return x;
	}

	public Show pegar(int pos) {
		Celula i = topo.prox;
		for(int j = 0; j < pos; j++, i = i.prox);
		return i.elemento;
	}
}


