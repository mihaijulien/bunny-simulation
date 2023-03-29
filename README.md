# Bunny Simulation

Simulation of bunny population exercise from [cplusplus forum](http://www.cplusplus.com/forum/articles/12974/)

### Description

**Each bunny object must have**:

- Sex: male, female (random at creation 50/50)
- Color: white, brown, black, spotted
- Age: 0-10 (years old)
- Radioactive mutant vampire bunny: true/false (occurrence possibility: 2%)

**Tasks**:


- The program should print a list of all the bunnies in the colony each turn along with all the bunnies details, sorted by age.
- The program should also output each turns events such as:
  _Bunny Thumper was born!_
  _Bunny Fufu was born!_
  _Radioactive Mutant Vampire Bunny Darth Maul was born!_
  _Bunny Julius Caesar died!_
- The program should write all screen output to a file.
- When all the bunnies have died the program terminates.
- If the bunny population exceeds 1000 a food shortage must occur killing exactly half of the bunnies (randomly chosen)