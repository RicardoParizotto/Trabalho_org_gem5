# Trabalho_org_gem5


Vamos instalar uma versão do GCC que suporta
sudo apt install gcc-riscv64-linux-gnu

Compilando o código em C e gerando o código de máquina: 
riscv64-linux-gnu-gcc -static sum.c -o sum.riscv

Depois rode isso pra simular: 
./gem5/build/RISCV/gem5.opt   models/<model_name>.py   --binary programs/<program_name>.riscv

