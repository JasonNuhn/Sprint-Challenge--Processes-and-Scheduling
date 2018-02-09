1. Assume we have two processes, P1 and P2, that have both been initialized, and let's assume that each process on this machine is initially allocated 32 KB of memory as its address space. What are the possible address space ranges each process could have? Write a short paragraph explaining your answer.

	a. P1: 0 - 32,000;
	   P2: 32,001 - 64,000

       *considering that the proccessor uses 32 bits to store an address, there would be 8,000 possible address spaces for each processes (P1 and P2).*
	
	b. P1: 0 - 64,000;
	   P2: 0 - 64,000

       *considering that the proccessor uses 32 bits to store an address, there would be 16,000 possible address spaces virtually for each processes (P1 and P2).  The reason for virtually is that it is not possible that P1 and P2 to use the same memory address physically.*
	
	c. P1: 32,001 - 64,000;
	   P2: 0 - 32,000

       *considering that the proccessor uses 32 bits to store an address, there would be 8,000 possible address spaces for each processes (P1 and P2).*


2. List all of the possible states a process may be in at any point in time. Briefly explain what each of these states mean.

    *One process may be in 7 different kind of states.  They are created, ready, running, blocked, terminated, swaped out and waiting (if virtual memory applies) and swapped out and blocked (if virtual memory applies)*

    1. Created - *is the state where the process awaits admission to the "ready state".*
    2. Ready - *is the state where the process is loaded in main memory and awaiting execution on a CPU.*
    3. Running - *where the process moves into the running state when chosen for execution.*
    4. Blocked - *is a state where the process transitions to a blocked state where it cannot carry on with the execution.*
    5. Terminated - *is a state where the process is either completed or killed*
    6. Swapped out and Waiting (if Virtual memory applies) - *where one process is swapped out and placed on extermal storage by the scheduler*
    7. Swapped out and Blocked (if Virtual memory applies) - *where one process is swapped out blocked as part of the waiting process.*

3. On your machine, how much faster does a `printf` call take compared to how long a `write` system call takes?
    
    *The following results on my machine when comparing printf and write calls.*
        printf() took 0.014020 seconds to execute
        write() took 0.014605 seconds to execute


4. `printf` is a C library function that calls the `write` system call under the hood. What are some possible reasons as to why `printf` runs faster than `write`?
    
    *I believe the possible reason on why printf runs faster than write is that printf writes directly to output bypassing writing to memory like write system calls would.*