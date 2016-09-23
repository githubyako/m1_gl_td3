#include "person.hpp"

bool ageSortAscending(Person const & _p1, Person const &_p2){
  return _p1.getAge() < _p2.getAge();
  
  
}

void showVector(std::vector<Person> & _v){
  for(unsigned int i=0;i<_v.size();++i){
    std::cout << _v.at(i) << std::endl;
  }
}

int main(int argc, char **argv) {
    std::vector<Person> v;
    v.push_back(Person("Alfred", 12));
    v.push_back(Person("Yohann", 34));
    v.push_back(Person("José", 32));
    v.push_back(Person("Linda", 22));
    v.push_back(Person("Jin", 55));
    std::cout << "unsorted:" << std::endl;
    showVector(v);
    std::sort(v.begin(),v.end());
    std::cout << "sorted operator< on name:" << std::endl;
    showVector(v);
    std::cout << "sorted by ascending age with comparison function:" << std::endl;
    std::sort(v.begin(),v.end(),ageSortAscending);
    showVector(v);
    auto lambdacomp = [] (Person const & _p1, Person const & _p2 ) {  return _p1.getAge() > _p2.getAge(); };
    std::cout << "sorted by descending age with lambda comparison function:" << std::endl;
    std::sort(v.begin(),v.end(),lambdacomp);
    showVector(v);
    unsigned int acc=0;
    for(auto val : v){ acc+=val.getAge();}
    std::cout << "Age moyen = " << acc/v.size() << std::endl;
    return 0;
}
