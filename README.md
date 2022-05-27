### How to compile

#### Using ninja 
```sh
cd nandgame-sv
mkdir build
cd build
cmake -GNinja ..
ninja
```

### How to use codegen
```sh 
  while read p; do echo "$p" | ./codegen; done < init_stack
```
From 68f82d5 onwards you should use this command:
```sh 
  cat init_stack | ./codegen
```

### Running interactive nandgame asm
while in build directory
```sh
  ./sim/interactive
```
