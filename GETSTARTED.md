# Hexapod Development

## Índice

1. [Introdução](#introdução)
2. [Ferramentas e Tecnologias](#ferramentas-e-tecnologias)
3. [Estrutura do Plano de Desenvolvimento](#estrutura-do-plano-de-desenvolvimento)
   - [Instalação do Software e Conhecimento de Hardware](#instalação-do-software-e-conhecimento-de-hardware)
   - [Montagem do Robô](#montagem-do-robô)
   - [Inicialização de Posições](#inicialização-de-posições)
   - [Movimentação Básica do Robô](#movimentação-básica-do-robô)
   - [Programas Avançados e Personalizados](#programas-avançados-e-personalizados)
   - [Extensão e Melhorias](#extensão-e-melhorias)
4. [Estrutura do Plano de Documentação](#estrutura-do-plano-de-documentação)
   - [Introdução ao Projeto](#introdução-ao-projeto)
   - [Configuração do Ambiente](#configuração-do-ambiente)
   - [Montagem do Hardware](#montagem-do-hardware)
   - [Programação Inicial](#programação-inicial)
   - [Movimentação e Controle](#movimentação-e-controle)
   - [Controle WiFi e Extensões](#controle-wifi-e-extensões)
   - [Depuração e Testes](#depuração-e-testes)
   - [Conclusão](#conclusão)
5. [Próximos Passos](#próximos-passos)

---

## Introdução

O projeto Hexapod é um robô inspirado em um aracnídeo biónico quadrúpede, utilizando a placa de controle ESP8266. Nosso objetivo é criar um material único e original que programe, documente e melhore o robô, utilizando lições e explicações detalhadas. Queremos proporcionar uma experiência de aprendizado rica e acessível para todos que desejam construir e programar seu próprio robô hexapod.

## Ferramentas e Tecnologias

- **Linguagem de Programação:** C/C++ (utilizando a IDE Arduino)
- **Placa de Controle:** ESP8266
- **Software:** Arduino IDE
- **Bibliotecas:** ESP8266 library para Arduino IDE
- **Hardware Adicional:** Módulos servo, placa de expansão servo, bateria 18650

## Estrutura do Plano de Desenvolvimento

### Instalação do Software e Conhecimento de Hardware
1. **Instalar Arduino IDE**
   - Baixar e instalar a versão mais recente do Arduino IDE.
   - [Link para Download](https://www.arduino.cc/en/software)
     1. Acesse o link de download.
     2. Selecione a versão correspondente ao seu sistema operacional (Windows, Mac OS ou Linux).
     3. Siga as instruções de instalação fornecidas pelo site.
     4. Após a instalação, abra o Arduino IDE para verificar se está funcionando corretamente.

2. **Instalar drivers necessários para ESP8266**
   - Instalar o driver CP210x para comunicação USB-Serial.
     1. Acesse a [página de drivers da Silicon Labs](https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers).
     2. Baixe o driver correspondente ao seu sistema operacional (Windows, Mac OS ou Linux).
     3. Execute o instalador e siga as instruções na tela.
     4. Após a instalação, conecte a placa ESP8266 ao seu computador para garantir que o driver foi instalado corretamente.

3. **Adicionar biblioteca ESP8266 ao Arduino IDE**
   - Configurar o URL adicional no Arduino IDE para baixar a biblioteca ESP8266:
     1. Abra o Arduino IDE.
     2. Vá em `File > Preferences`.
     3. No campo `Additional Boards Manager URLs`, adicione o seguinte URL:
     ```plaintext
     http://arduino.esp8266.com/stable/package_esp8266com_index.json
     ```
     4. Clique em `OK`.
     5. Vá em `Tools > Board > Boards Manager`.
     6. Pesquise por `esp8266` e instale a versão mais recente da biblioteca ESP8266.
     7. Após a instalação, selecione a placa `NodeMCU 1.0 (ESP-12E Module)` em `Tools > Board`.

4. **Testar ambiente de desenvolvimento**
   - Executar um programa simples para verificar a instalação correta.
5. **Conhecer e configurar o hardware do ESP8266 e módulos servo**
   - Reconhecer a placa ESP8266 e entender a função dos módulos servo.

### Montagem do Robô
1. **Listar e verificar todas as peças e componentes estruturais**
   - Conferir a lista de peças e garantir que todas estão presentes.
2. **Seguir os passos de montagem do robô**
   - Montar o robô conforme as instruções do tutorial.

### Inicialização de Posições
1. **Upload do programa de zeragem para o servo**
   - Carregar o código de zeragem e ajustar os servos para a posição inicial.
2. **Ajustar e verificar posições iniciais dos servos**
   - Confirmar que os servos estão na posição correta antes de prosseguir.

### Movimentação Básica do Robô
1. **Programar movimentos de avanço e retrocesso**
   - Escrever códigos para o robô se mover para frente e para trás.
2. **Programar rotações à esquerda e à direita**
   - Desenvolver códigos para rotacionar o robô.
3. **Programar movimentos laterais (esquerda e direita)**
   - Implementar movimentos laterais no código.

### Programas Avançados e Personalizados
1. **Criar programas para dança e movimentos complexos**
   - Desenvolver sequências de movimentos mais elaboradas.
2. **Implementar controle WiFi do robô via aplicativo**
   - Configurar e testar o controle do robô através de um aplicativo WiFi.

### Extensão e Melhorias
1. **Testar e depurar o código**
   - Realizar testes para garantir o funcionamento correto do robô.
2. **Adicionar novas funcionalidades e comportamentos ao robô**
   - Melhorar e expandir as capacidades do robô.
3. **Documentar todos os passos, melhorias e lições aprendidas**
   - Manter um registro detalhado do desenvolvimento e das melhorias.

## Estrutura do Plano de Documentação

### Introdução ao Projeto
- Visão geral do projeto hexapod.
- Objetivos e metas do projeto.

### Configuração do Ambiente
- Guia passo a passo para instalação do Arduino IDE e drivers.
- Adição de bibliotecas e configuração do ambiente de desenvolvimento.

### Montagem do Hardware
- Lista detalhada de peças.
- Instruções ilustradas de montagem.
- Dicas e truques para uma montagem eficiente.

### Programação Inicial
- Exemplos de código para testes iniciais.
- Explicação detalhada das funções básicas.

### Movimentação e Controle
- Códigos de movimentação básica.
- Explicações sobre os algoritmos de controle de movimento.
- Exemplos de códigos avançados.

### Controle WiFi e Extensões
- Guia de configuração do controle WiFi.
- Exemplos de códigos para controle via aplicativo.
- Ideias para extensões e melhorias.

### Depuração e Testes
- Métodos de teste e depuração.
- Solução de problemas comuns.

### Conclusão
- Resumo das realizações.
- Lições aprendidas.
- Possíveis futuras expansões do projeto.

## Próximos Passos

1. **Configuração do Ambiente de Desenvolvimento**
   - Instalar o Arduino IDE e configurar a biblioteca ESP8266.
   - Verificar a instalação do driver de porta serial.
2. **Montagem do Hardware**
   - Listar todas as peças e componentes.
   - Seguir os passos de montagem do tutorial.
3. **Desenvolvimento Inicial**
   - Carregar o programa de zeragem e testar os servos.
   - Iniciar a programação dos movimentos básicos.

---

Vamos começar pela instalação do Arduino IDE e configuração inicial do ambiente. Verifique o tutorial para seguir os passos de instalação detalhados.

---

## Referências
- [Arduino IDE Download](https://www.arduino.cc/en/Main/Software)
- [ESP8266 Library](http://arduino.esp8266.com/stable/package_esp8266com_index.json)
- [Driver CP210x](https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers)

