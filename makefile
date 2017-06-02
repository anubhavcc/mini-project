edit : 1st.o 2nd.o 
	cc -o edit 1st.o 2nd.o

1st.o : 1st.c a.h
	cc -c 1st.c
2nd.o : 2nd.c a.h
	cc -c 2nd.c
clean :
	rm edit 1st.o 2nd.o

