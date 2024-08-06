#include <iostream>
using namespace std;

//add class definitions below this line

class CardBinder{
  public:
  CardBinder(){
    gold_card = 0;
    silver_card = 0;
  };
  
  int GetGold(){
    return gold_card;
  };
  int GetSilver(){
    return silver_card;
  };
  int GetTotal(){
    return gold_card+silver_card;
  };

  void AddGold(int add_gold){
    if (add_gold <= 0){
      cout << "You cannot add a negative or 0 amount of cards." << endl;
    }
    else if ((gold_card+add_gold) > 20){
      cout << "You do not have enough binder room." << endl;
    }
    else
      gold_card += add_gold;
  };
  void AddSilver(int add_silver){
    if (add_silver <= 0){
      cout << "You cannot add a negative or 0 amount of cards." << endl;
    }
    else if ((gold_card+add_silver) > 20){
      cout << "You do not have enough binder room." << endl;
    }
    else
      silver_card += add_silver;
  };

  void RemoveGold(int remove_gold){
    if (remove_gold <= 0){
      cout << "You cannot remove a negative or 0 amount of cards." << endl;
    }
    else if((gold_card-remove_gold) < 0){
      cout << "You do not have enough gold cards to remove." << endl;
    }
    else
      gold_card -= remove_gold;
  };
  void RemoveSilver(int remove_silver){
    if (remove_silver <= 0){
      cout << "You cannot remove a negative or 0 amount of cards." << endl;
    }
    else if((silver_card-remove_silver) < 0){
      cout << "You do not have enough silver cards to remove." << endl;
    }
    else
      silver_card -= remove_silver;
  };

  private:
  int gold_card;
  int silver_card;
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  CardBinder cb;
  cb.AddGold(21);
  cb.AddGold(11);
  cb.AddSilver(-4);
  cb.AddSilver(8);
  cb.RemoveGold(12);
  cb.RemoveGold(4);
  cb.RemoveSilver(-2);
  cb.RemoveSilver(6);
  cout << cb.GetGold() << endl;
  cout << cb.GetSilver() << endl;
  cout << cb.GetTotal() << endl;
  

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}
