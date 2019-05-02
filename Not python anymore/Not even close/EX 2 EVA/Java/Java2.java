public class Pet{
	// ATRIBUTOS
	String nombre,especie,raza;
	int edad;
	boolean vacunado;
	//CONSTRUCTOR
	public Pet(String nombre){
		this.nombre=nombre;
	}
	//METODOS
	void setnombre(String nuevonombre){
		this.nombre=nuevonombre;
	}
	void setespecie(String nuevaespecie){
		this.especie=nuevaespecie;
		
	}
	void setraza(String nuevaraza){
		this.especie=nuevaraza;
	}
		void setedad(int nuevaedad){
		this.edad=nuevaedad;
	}
		void setvacunado(boolean nuevavacunado){
		this.vacunado=nuevavacunado;
		//metodos get 
		String getnombre(){
			return(nombre);
		}
		String getespecie(){
			return(especie);
		}String getraza(){
			return(raza);
		}
		int getedad(){
			return(edad)
		}
		boolean getvacunado(){
			return(vacunado);
		}

	}