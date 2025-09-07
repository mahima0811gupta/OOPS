// Friend Function 
// 1. Why do we need it?
// Normally, the private section of a class is not accessible from outside.
// But sometimes, we want an outside function to access private/protected members.
// For this, we use the concept of friend function.
// 2. Key Points
// A friend function cannot be called using an object of the class.
// It is called like a normal function.
// A friend function can access the private/protected resources of a class, but it needs an object of that class.
// A friend function is declared inside the class using the friend keyword and friend function has object as a argyment