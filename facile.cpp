#include <iostream>
template <typename T>
class AlberoBinario {
private:
    T nodi[100];
public:
    AlberoBinario()
    { 
     //inizializza l'albero come vuoto
        for (int i = 0; i < 100; i++) {
              //i nodi sono considerati come assenti 
            nodi[i] = -1;
        }
    }   
    };
    bool alberoVuoto() const;
    {
        for (int i=0; i<100; i++) {
            if (nodi[i] !=-1) {
                return false; 
    }
    };
    //restituisce vero se l'albero è vuoto
    else return true; 
    };

    void insRadice(const T& valore); {
    //inserisce un valore come radice (posizione 0)
        if (alberoVuoto()) {
            nodi[0] = {valore};      
        } else {
            cout << "La radice esiste già!\n";
        };
    }; 
            
    T radice() const;
     //restituisce il valore della radice
        if (!alberoVuoto()) {
             //restituisce il valore della radice
            return nodi[0];  
        } 
        //restituisce un valore "vuoto" se l'albero è vuoto
        else cout <<"L'albero è vuoto\n";
           
    bool isFoglia(int indice) const; {
        {
        // Verifica se un nodo è una foglia (non ha figli)
     int left = 2 * indice + 1;  //indice del figlio sinistro
    int right = 2 * indice + 2; //indice del figlio destro
return (left == -1, right == -1);
    }
    };

    int sinistro=figliosinistro (int indice); {
        int figliostrinistro= 2* indice + 1;
    };
    
    intoDestro=figlioDestro (int indice) {
int figliodestro = 2 *indice + 2;
    };
    void insFiglioSinistro(int indice, const T& valore);
    {
        int destro=figliodestro (indice);
        if (presente [indice] && !presente [destro]) {
            nodi [destro] = valore
        };
        
