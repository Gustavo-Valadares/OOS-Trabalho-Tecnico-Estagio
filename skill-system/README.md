# Sistema de Habilidades (Skill System)

Esse projeto é um sistema orientado a objetos para a representação e gerenciamento de habilidades de personagens em um jogo, desenvolvido como parte de um teste técnico

## 🛠️ Organização do Sistema

O programa foi idealizado utilizando os princípios fundamentais de **Programação Orientada a Objetos (POO)**:

* **Encapsulamento**: Utilização de atributos privados com acesso via *getters*, *setters* e gerenciamento de memória utilizando construtores e destrutores.
* **Abstração**: Implementação de uma classe pai abstrata para definição de atributos e métodos base das habilidades
* **Polimorfismo**: Cada habilidade específica herda da classe pai, permitindo que diferentes comportamentos sejam executados de forma genérica pelo personagem.

## 🧠 Decisões de Modelagem

* **Escalabilidade e Manutenabilidade**: A lógica foi fragmentada para facilitar a adição de novas habilidades ou a correção de bugs sem afetar o funcionamento base do software.
* **Regras de Ativação**: O sistema garante que uma habilidade seja ativada apenas se o personagem possuir recursos suficientes (mana/energia) e não houver tempo de recarga (*cooldown*)
* **Consumo de Recursos**: Após a ativação, os recursos são subtraídos do personagem e o cronômetro de coodown é iniciado (medido por iteração)

## 🚀 Expansibilidade

O código foi construído com a intenção de atender os requisitos mínimos, suportar novas funcionalidades com pouca ou nenhuma mudança no funcionamento base 
Como prova foi incluída interações extras simples que simulam uma gameplay real

Possíveis expansões futuras incluem:
1.  Habilidades com múltiplos custos de recursos.
2.  Interface gráfica para melhor visualização dos estados de recarga.

## 📝 Instruções

* **Linguagem**: C++.
* **Como Rodar**: 
1. Compilar: "g++ -I./include src/*.cpp view/*cpp -o run"
2. Executar: ./run