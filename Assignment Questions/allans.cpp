#include <iostream>
#include <string>
using namespace std;

class Fish
{
public:
    string specie;
    char gender;
    double weight;

    Fish()
    {
        specie = "guppy";
        gender = 'm';
        weight = 1.0;
    }

    Fish(string s, char g, double w)
    {
        specie = s;
        gender = g;
        weight = w;
    }

    void getSpecie()
    {
        cout << "the specie of fish is " << specie << endl;
        return;
    }

    void getGender()
    {
        if (gender == 'm')
            cout << "gender of fish is male" << endl;
        else
            cout << "gender of fish is female" << endl;
        return;
    }

    void getWeight()
    {
        cout << "the weight of fish is " << weight << " grams" << endl;
        return;
    }
    void mutateSpecie(string s)
    {
        specie = s;
    }

    void mutateGender(char g)
    {
        gender = g;
    }

    void mutateWeight(double w)
    {
        weight = w;
    }

    void feed()
    {
        weight = weight + (0.1 * weight);
        return;
    }

    void toString()
    {
        cout << "the specie is: " << specie << endl;
        cout << "the gender is: " << gender << endl;
        cout << "the weight is: " << weight << endl;
        return;
    }
};

class FishTank : public Fish{

    protected:
        Fish fishes[50];
        string species[50];
        int totalSpecies = 0;
        int totalFish = 0;

    public:
        void addFish(const Fish &f)
        {
            if (totalFish > 50)
            {
                cout << "limit of fishes in tank is exceeded! \n";
                return;
            }
            bool present = false;
            for (int i = 0; i < totalFish; i++)
            {
                if (fishes[i].specie == f.specie)
                {
                    present = true;
                    break;
                }
            }
            if (present == false)
            {
                species[totalSpecies++] = f.specie;
            }
            fishes[totalFish++] = f;
            cout << "Fish has been added\n";
        }

        void feedFish()
        {
            for (int i = 0; i < totalFish; i++)
            {
                fishes[i].weight = fishes[i].weight + (fishes[i].weight * 0.1);
            }
            cout << "all fishes are successfully feeden\n";
        }

        void feedFish(string mySpecie)
        {
            for (int i = 0; i < totalFish; i++)
            {
                if (fishes[i].specie == mySpecie)
                {
                    fishes[i].weight = fishes[i].weight + (fishes[i].weight * 0.1);
                }
            }
            cout << mySpecie << " totalSpecies has eaten food\n";
        }

        int getTotalFish()
        {
            return totalFish;
        }

        Fish maxWeight(string mySpecie)
        {
            Fish f;
            for (int i = 0; i < totalFish; i++)
            {
                if (fishes[i].weight > f.weight && fishes[i].specie == mySpecie)
                {
                    f = fishes[i];
                }
            }
            return f;
        }

        void reproduceFish()
        {
            for (int i = 0; i < totalSpecies; i++)
            {
                int males1 = males(species[i]);
                int females1 = females(species[i]);
                if (males1 == 0)
                    continue;
                else
                {
                    int totalOffSpring = females1 * 6;
                    for (int j = 0; j < totalOffSpring / 2; j++)
                    {
                        Fish f(species[i], 'm', 5.0);
                        addFish(f);
                    }
                    for (int j = 0; j < totalOffSpring / 2; j++)
                    {
                        Fish f(species[i], 'f', 5.0);
                        addFish(f);
                    }
                }
            }
            cout << "fishes have reproduced\n";
        }

        void loadFishes()
        {
            for (int i = 0; i < totalFish; i++)
            {
                cout << "specie= " << fishes[i].specie << " , "
                    << "gender= " << fishes[i].gender << " , "
                    << "weight= " << fishes[i].weight << endl;
            }
        }

        int males(string mySpecie)
        {
            int count = 0;
            for (int i = 0; i < totalFish; i++)
            {
                if (fishes[i].specie == mySpecie && fishes[i].gender == 'm')
                    count++;
            }
            return count;
        }

        int females(string mySpecie)
        {
            int count = 0;
            for (int i = 0; i < totalFish; i++)
            {
                if (fishes[i].specie == mySpecie && fishes[i].gender == 'f')
                {
                    count++;
                }
            }
            return count;
        }

};


int main()
{
    Fish f("guppy", 'm', 12);
    FishTank ft;
    ft.addFish(f);
    Fish f1("guppy", 'f', 14);
    ft.addFish(f1);
    Fish f2("puppy", 'm', 34);
    ft.addFish(f2);
    ft.loadFishes();
    ft.reproduceFish();
    ft.feedFish();
    ft.loadFishes();
}