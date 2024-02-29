**Projeto:** Controle de Robô Seguidor de Linha

``` Verção do Projeto : 1.0  ```

**Descrição:**

Este projeto implementa um robô seguidor de linha utilizando sensores infravermelhos e um Arduino. O robô é capaz de detectar a linha preta no chão e ajustar a velocidade dos motores para manter-se na linha.

**Funcionalidades:**

* Seguir linha preta no chão.
* Ajustar a velocidade dos motores para manter-se na linha.

**Tecnologias:**

* Linguagem de programação C++

**Hardware:**

* Arduino Uno
<img src="https://www.raltronix.com.br/wp-content/uploads/2016/06/arduino_quad.jpg" width="200" height="150" alt="Arduino Uno">

* 2-Motor DC 3 a 6v com Redução
<img src="https://images.tcdn.com.br/img/img_prod/650361/roda_com_pneu_motor_dc_3_a_6v_com_reducao_1691_1_20200203173927.jpg" width="200" height="150" alt="2-Motor DC 3 a 6v com Redução">
* Ponte H L298N
<img src="https://images.tcdn.com.br/img/img_prod/747012/ponte_h_l298_driver_para_motor_dc_345_1_20200119094107.jpg" width="200" height="150" alt="Texto Alternativo">  
* Módulo Sensor IR 5 Canais para Robô Seguidor de Linha
<img src="https://www.vidadesilicio.com.br/wp-content/uploads/2021/09/2295-jpg.webp" width="200" height="300" alt="Módulo Sensor IR 5 Canais para Robô Seguidor de Linha">  
* 1 bateria 9vz
<img src="https://images.tcdn.com.br/img/img_prod/959947/bateria_9v_alcalina_duracell_2700_1_48c3ae1877e20b343e7ddc863f4f648d.jpg" width="200" height="150" alt="1 bateria 9z">  
* [1 Suporte para 5 Pilhas]
<img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQfeFVBy-uKXt1Vgal5D9iTJxlvbR42MptTzhcMKn2uJSgXZKDEmcJiYYAzH_hGvavjfhU&usqp=CAU" width="200" height="150" alt="">  
* Fiação
<img src="https://img.irroba.com.br/fit-in/600x600/filters:fill(transparent):quality(80)/copelele/catalog/banners/jumper-m-f.png" width="200" height="150" alt="Texto Alternativo">


**Software:**

* IDE do Arduino
*  github

**Pinos:**

* M1: Pino 9 (Velocidade Motor 1)
* M2: Pino 11 (Velocidade Motor 2)
* dir1: Pino 8 (Direção Motor 1)
* dir2: Pino 10 (Direção Motor 2)
* pin_S1: Pino 7 (Sensor 1)
* pin_S2: Pino 6 (Sensor 2)
* pin_S3: Pino 5 (Sensor 3)

**Configuração:**

1. Conecte os sensores infravermelhos aos pinos do Arduino de acordo com o diagrama.
2. Conecte a ponte H L298N aos pinos do Arduino e aos motores.
3. Carregue o código no Arduino.
4. configure a sensibilidade
5. confira a finagem

**Uso:**

1. Ligue o Arduino.
2. Coloque o robô na linha preta.
3. O robô começará a seguir a linha.

**Ajustes:**

* A velocidade dos motores pode ser ajustada nas variáveis `velocidadeLow` e `velocidadeHigh`.
* A velocidade de curva pode ser ajustada na variável `velocidadeCurva`.

**Observações:**

* A distância entre os sensores e a linha preta pode precisar ser ajustada para um melhor desempenho.
* A luz ambiente pode afetar o desempenho dos sensores.

**Licença:**

Este projeto está licenciado sob a licença MIT.

**Contribuições:**

Sinta-se à vontade para contribuir com este projeto. Envie suas sugestões e pull requests para o repositório GitHub.


**Agradecimentos:**

Agradecemos a todos que contribuíram para este projeto.
