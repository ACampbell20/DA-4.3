class Car : public Vehicle
{
private:
    int doors;

public:
    Car();
    Car(string make, string model, int year, int doors, Mover* mover);
    Car(const Car& right);
    ~Car();

    int getDoors() const;
    void setDoors(int doors);

    Car& operator=(const Car& right);

    string move() override;

    friend ostream& operator<<(ostream& out, const Car& c);
};
