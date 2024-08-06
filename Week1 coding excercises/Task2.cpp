#include <iostream>
using namespace std;

//add class definitions below this line

class Watch{
  public:
    Watch(string man, string mod, int d, int wr, string mat){
      manufacturer = man;
      model = mod;
      diameter = d;
      water_resistance = wr;
      material = mat;
    };
    string GetManufacturer(){
      return manufacturer;
    };
    string GetModel(){
      return model;
    };
    int GetDiameter(){
      return diameter;
    };
    int GetWaterResistance(){
      return water_resistance;
    };
    string GetMaterial(){
      return material;
    };
    void SetManufacturer(string new_man){
      manufacturer = new_man;
    };
    void SetModel(string new_mod){
      model = new_mod;
    }; 
    void SetDiameter(int new_d){
      diameter = new_d;
    }; 
    void SetWaterResistance(int new_wr){
      water_resistance = new_wr;
    }; 
    void SetMaterial(string new_mat){
      material = new_mat;
    };
    void Summary(){
      cout << "Manufacturer: " << manufacturer << endl;
      cout << "Model: " << model << endl;
      cout << "Diameter: " << diameter << " mm" << endl;
      cout << "Water Resistance: " << water_resistance << " m" << endl;
      cout << "Material: " << material << endl;
    }; 

  private:
    string manufacturer;
    string model;
    int diameter;
    int water_resistance;
    string material;
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Watch my_watch("Omega", "Speedmaster", 42, 50, "steel");
  cout << my_watch.GetManufacturer() << endl;
  cout << my_watch.GetModel() << endl;
  cout << my_watch.GetDiameter() << endl;
  cout << my_watch.GetWaterResistance() << endl;
  cout << my_watch.GetMaterial() << endl;
  my_watch.SetManufacturer("Rolex");
  my_watch.SetModel("Explorer");
  my_watch.SetDiameter(36);
  my_watch.SetWaterResistance(60);
  my_watch.SetMaterial("gold");
  my_watch.Summary();

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}
