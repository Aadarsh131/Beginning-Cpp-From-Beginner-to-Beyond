### Some important compiler(mingw/g++/gcc) commands to know:

- to copy input from an input.txt file and output the result in output.txt file
    #### In Windows- 
    1. **Using Cmd**-   
    ``` g++ -o sol.exe sol.cpp && sol.exe < ../input.txt > ../output.txt && del sol.exe```  (todo: first check if the file compiled successfully) 
        > NOTE: `input.txt` and `output.txt` files are present one directory up
    
    2. **Using BASH**-  
    ```g++ sol.cpp && if [ -f a.exe ]; then ./a.exe < ../input.txt > ../output.txt; echo "Compiled Successfully"; fi && rm a.exe```

