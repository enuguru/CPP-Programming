
template<typename T>
class AccumulationTraits;

// this looks like a template specialization we are using the concpet of template specialization 
// to provide the extra parameter which is a property of the AccumulationTraits class

template<> 
class AccumulationTraits<char> {
  public:
    typedef int AccT;
};

template<>
class AccumulationTraits<short> {
  public:
    typedef int AccT;
};

template<>
class AccumulationTraits<int> {
  public:
    typedef long AccT;
};

template<>
class AccumulationTraits<unsigned int> {
  public:
    typedef unsigned long AccT;
};

template<>
class AccumulationTraits<float> {
  public:
    typedef double AccT;
};
