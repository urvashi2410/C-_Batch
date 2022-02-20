#include <iostream>
using namespace std;

static int count = 0;
double total = 0;
int c = 0;

class Fish{
    private:
        string species;
        char gender;
        double weight;
    public:
        Fish(){
            species = "guppy";
            gender = 'm';
            weight = 1.0;
        }

        Fish(string s, char g, double w){
            species = s;
            gender = g;
            weight = w;
        }

        void setSpecies(string s){
            species = s;
        }
        string getSpcies(){
            return species;
        }

        void setGender(char g){
            gender = g;
        }
        char getGender(){
            return gender;
        }

        void setWeight(double w){
            weight = w;
        }

        double getWeight(){
            return weight;
        }

        double feed(){
            weight += 0.1*weight;
            return weight;
        }

        void toString(){
            cout << "Species name is " << getSpcies() << endl;
            cout << "Gender is " << getGender() << endl;
            cout << "Weight of the fish is "<< getWeight() << endl;
        }
};

class FishTank : public Fish{
    private:
        int totalFishes;
    public:
        FishTank(){
            totalFishes = 0;
        }

        void addFish(Fish f){
            f.setSpecies("starfish");
            f.setGender('f');
            f.setWeight(100);
            totalFishes++;
        }

        double feedFish(){
            return total;
        }

        // double feedFish(string species){
        //     Fish r;
        //     r.getWeight()
        // }

        int getTotalFish(){
            return totalFishes;
        }

        int singleFishreproduce(){
            Fish e;
            int offSprings = 0;
            if(e.getSpcies() == "guppy" && c == 1){
                offSprings += 6;
            }
            return offSprings;
        }

        int reproduceFish(){
            
        }

        double getArray(double* Arr, int n){
            for(int i = 0; i < n; i++){
                // cout << Arr[i] << endl;
                total = total + Arr[i] + Arr[i]*0.1;
            }
            return total;
        }

        void maleCount(char* gen, int n){
            int c = 0;
            for(int i = 0; i < n; i++){
                if(gen[i] == 'm'){
                    c++;
                }
            }
        }

};

int main(){
    Fish t;

    // cout << t.getGender();
    // cout << t.getSpcies();
    // cout << t.feed();
    // t.toString();

    FishTank h;
    int i = 0;
    h.addFish(t);
    // cout << h.getTotalFish();
    // cout << h.feedFish();
    double *Arr = new double(1);
    char *gen = new char(1);

    t.setGender('f');
    t.setWeight(8);
    t.setSpecies("starfish");
    Arr[i++] = t.getWeight();
    gen[i++] = t.getGender();
    h.singleFishreproduce();

    t.setGender('m');
    t.setWeight(4);
    t.setSpecies("fish");
    Arr[i++] = t.getWeight();
    gen[i++] = t.getGender();
    h.singleFishreproduce();

    // for(int j = 0; j < i; j++){
    //     cout << Arr[j] << endl;
    // }

    h.getArray(Arr, i);
    cout << h.feedFish();
    h.maleCount(gen, i);
    return 0;
}