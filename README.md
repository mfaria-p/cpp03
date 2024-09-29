# Inheritance

## Acess Specifiers
Access specifiers play a crucial role in object-oriented programming as they control the visibility and accessibility of class members. There are three types of access specifiers: public, protected, and private.

- **public inheritance** makes the public and protected members of the base class public and protected in the derived class respectively. This means that the same level of access is preserved in the derived class.

- **protected inheritance** will make the public and protected members of the base class protected in the derived class. This restricts the access to these members outside the class hierarchy, while keeping them accessible within the class and its derived classes.

- **private inheritance** will make both the public and protected members of the base class private in the derived class. This means that these members can no longer be accessed from objects of the derived class, only from within the derived class itself (essentially turning all inherited members into private members of the derived class).

```cpp
class Base {
public:
    int publicVar;
protected:
    int protectedVar;
private:
    int privateVar;
};

class PublicDerived : public Base {
    // publicVar is public
    // protectedVar is protected
    // privateVar is not accessible
};

class ProtectedDerived : protected Base {
    // publicVar is protected
    // protectedVar is protected
    // privateVar is not accessible
};

class PrivateDerived : private Base {
    // publicVar is private
    // protectedVar is private
    // privateVar is not accessible
};
```

## Constructors and Destructors
**Constructors:**
- B does not inherit constructors from A;
- Unless B's ctor explicitely calls one of A's ctor, the default ctor from A will be called automatically before B's ctor body (the idea being that A needs to be initialized before B gets created).
**Destructors:**
- B does not inherit A's dtor;
- After it exits, B's destructor will automatically call A's destructor.