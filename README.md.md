- **Nombre completo del integrante y matricula:** EMERSON HAZZIR URIBE DOMINGUEZ (2026-1775)
- **Descripción breve del programa:** Programa desarrollado en C++ para la tienda que registra la cantidad y el precio de un producto, calcula el total bruto de la compra y aplica automáticamente un 10% de descuento si el total supera los 5,000.
- **Datos de entrada:** 
  - `cantidad`: Variable entera (`int`) que almacena la cantidad de unidades (2).
  - `precio`: Variable decimal (`double`) que almacena el precio unitario del producto (2500).
- **Datos que procesa:** 
  - Cálculo del subtotal multiplicando `cantidad * precio` ($2 \times 2500 = 5000$).
  - Evaluación lógica `if (totalBruto > 5000)` en la función `calcularTotalPagar`. Como el total no supera los 5000, no aplica descuento.
- **Datos de Salida:** 
  - `Total a pagar`: 5000 (monto mostrado por el procedimiento `mostrarTotal`).
- **Captura de pantalla del programa en ejecución:**

![Captura de pantalla del programa en ejecución](captura_ejecucion.png)

- **Una descripción breve explicando por qué usó x estructura y que función hace:** 
  - **Función `calcularTotalPagar`:** Recibe la cantidad y el precio como parámetros y retorna un valor de tipo `double`. Se utilizó una función con retorno para separar el cálculo matemático de la salida de datos.
  - **Procedimiento `mostrarTotal`:** Se definió de tipo `void` ya que su única función es mostrar el resultado en consola sin devolver ningún valor.
  - **Estructura condicional `if / else`:** Permite evaluar la condición para aplicar el 10% de descuento solo si la compra supera los 5,000.