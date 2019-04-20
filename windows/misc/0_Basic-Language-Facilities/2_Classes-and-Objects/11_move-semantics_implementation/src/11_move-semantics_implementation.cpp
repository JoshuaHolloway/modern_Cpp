// -Copy of objects is implemented through copy constructor
// -Copy can be either deep copy or shallow copy
// -Deep copy is required for classes that contain pointers as members.
// -Wasteful in cases where copy is created from a temporary
// -In some expressions the copy must be created from the temporary.
//		--e.g., if there is a function that returns a user-defined object by value
//				then a copy of the object will be created when the function returns.
//			---In this case, we can move the state from the source object into the target object.
//			---This is what move semantic are.