#include <iostream>
using namespace std;

static int count = 0;
double total = 0;
int i = 0;
double t = 0;
int tFishSpecies = 0;
int mCount = 0;
int fCount = 0;
int mOffsprings = 0;
int fOffsprings = 0;
int j;

class Fish
{
private:
    string species;
    char gender;
    double weight;

public:
    Fish()
    {
        // species = "guppy";
        // gender = 'm';
        // weight = 1.0;
    }

    Fish(string s, char g, double w)
    {
        species = s;
        gender = g;
        weight = w;
    }

    void setSpecies(string s)
    {
        species = s;
    }
    string getSpcies()
    {
        return species;
    }

    void setGender(char g)
    {
        gender = g;
    }
    char getGender()
    {
        return gender;
    }

    void setWeight(double w)
    {
        weight = w;
    }

    double getWeight()
    {
        return weight;
    }

    double feed()
    {
        weight += 0.1 * weight;
        return weight;
    }

    void toString()
    {
        // cout << "Species name is " << getSpcies() << endl;
        cout << "Gender is " << getGender() << endl;
        cout << "Weight of the fish is " << getWeight() << endl;
    }
};

Fish f[50];

class FishTank : public Fish
{
private:
    int totalFishes;

public:
    FishTank()
    {
        totalFishes = 0;
    }

    void addFish(Fish f)
    {
        f.setSpecies("starfish");
        f.setGender('f');
        f.setWeight(100);
        totalFishes++;
    }

    double feedFish()
    {
        for (int j = 0; j <= i; j++)
        {
            int w = f[j].getWeight();
            total += w + (w * 0.1);
        }
        return total;
    }

    double feedFish(string species)
    {
        for (int j = 0; j <= i; j++)
        {
            int w = f[j].getWeight();
            if (f[j].getSpcies() == species)
            {
                t += w + (w * 0.1);
            }
        }
        return t;
    }

    int getTotalFish()
    {
        return totalFishes;
    }

    int getFish(string species)
    {
        for (int j = 0; j <= i; j++)
        {
            if (f[j].getSpcies() == species)
            {
                tFishSpecies++;
            }
        }
        return tFishSpecies;
    }

    void reproduceFish()
    {
        int tmc = 0;
        int tfc = 0;
        for (j = 0; j < i; j++)
        {
            if (maleCount(f[j].getSpcies()))
            {
                tmc++;
            }
            if (femaleCount(f[j].getSpcies()))
            {
                tfc++;
            }
            if (tmc <= tfc && tmc != 0)
            {
                mOffsprings += 3 * (tfc);
                fOffsprings += 3 * (tfc);
            }
        }
    }

    bool maleCount(string species)
    {
        if (f[j].getGender() == 'm' && f[j].getSpcies() == species)
        {
            // mCount++;
            return true;
        }
        return false;
    }

    bool femaleCount(string species)
    {
        if (f[j].getGender() == 'f' && f[j].getSpcies() == species)
        {
            // fCount++;
            return true;
        }
        return false;
    }
};

int main()
{
    Fish t;

    // cout << t.getGender();
    // cout << t.getSpcies();
    // cout << t.feed();
    // t.toString();

    FishTank h;
    // h.addFish(t);
    // cout << h.getTotalFish();
    // cout << h.feedFish();

    // t.setGender('f');
    // t.setWeight(8);
    // t.setSpecies("starfish");
    // f[i++] = t;
    // h.singleFishreproduce();

    Fish T;
    T.setGender('m');
    T.setWeight(8);
    T.setSpecies("fish");
    f[i++] = T;

    Fish u;
    u.setGender('f');
    u.setWeight(6);
    u.setSpecies("fish");
    f[i++] = u;

    // Fish U;
    // U.setGender('m');
    // U.setWeight(8);
    // U.setSpecies("starfish");
    // f[i++] = U;
    // h.singleFishreproduce();

    // for(int j = 0; j < i; j++){
    //     cout << Arr[j] << endl;
    // }

    // cout << h.feedFish("fish") << endl;
    // cout << h.feedFish() << endl;
    // cout << h.getFish("fish") << endl;
    // cout <<  << endl;
    h.reproduceFish();
    // cout << i << endl;
    // cout << tfc << endl;
    // cout << tmc << endl;
    cout << mOffsprings << endl;
    cout << fOffsprings << endl;
    return 0;
}


// male count > 0 
// femalegender == malegender = 3,3
