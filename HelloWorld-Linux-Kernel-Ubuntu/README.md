# Passos para implementar seu primeiro modulo no kernel do linux

## 1 - Instale os pacotes de desenvolvimento do linux
```
sudo apt-get install build-essential linux-headers-`uname -r`
```
## 2 - Entre no mood Root
```
sudo -i
```
## 3 - Crie um diretorio para guardar seus arquivinhos
```
mkdir kernel_modules
```
## 4 - Crie seu arquivo de codigo no novo diretorio
```
touch hello_world.c
```
## 5 - Use o conteudo desse arquivo
[helloworld](hello-world.c)
## 6 - Crie o arquivo Makfile para executar seu código
[Makefile](Makefile)
## 7 - Gere seu arquivo hello_world.ko
```
make all
```
## 8 - Insira seu modulo no kernel do linux
```
insmod hello_world_mod.ko
```
## 9 - Use o comando dmesg para visualizar o seu Hello World
```
dmesg
```
## 10 - Apos todos os passos remova o modulo do kernel
```
rmmod hello_world_mod
```

Seu primeiro Hello World no kernel do linux foi feito!! Lembre sempre de usar o comando dmesg para ver todas as ações que seu modulo causou. E lembre-se, esses passos funcionam apenas para a distro Ubuntu, cada distro tem seus pacotes de instalação especificos.