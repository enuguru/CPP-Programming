


template<typename Str> class node{/* … */};
template<typename Str> class element : public node<Str>{/* … */};
template<typename Str> class textnode : public node<Str>{/* … */};
template<typename Str> class attribute : public node<Str>{/* … */};

int main()
{
   element<int> obj1;
   textnode<int> obj2;
   attribute<int> obj3;
   return 0;
}
