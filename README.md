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

### Running interactive nandgame asm
while in build directory
```sh
  ./sim/interactive
```
