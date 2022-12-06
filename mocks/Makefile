OBJ = AES256.o Curve25519.o SHA256.o
%.o: %.cpp 
	gcc -c -o $@ $<

doit: $(OBJ)
