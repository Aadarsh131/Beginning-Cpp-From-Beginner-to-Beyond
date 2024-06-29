### Some important compiler(mingw/g++/gcc) commands to know:

- to copy input from an input.txt file and output the result in output.txt file
    #### In Windows- 
    1. **Using Cmd**-   
    ``` g++ -o sol.exe sol.cpp && sol.exe < ../input.txt > ../output.txt && del sol.exe```  
        > NOTE: `input.txt` and `output.txt` files are present one directory up
    
    2. **Using BASH**-  
    ```g++ -o sol.exe sol.cpp && ./sol.exe < ../input.txt > ../output.txt && rm sol.exe```

