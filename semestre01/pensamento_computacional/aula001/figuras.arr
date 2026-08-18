use context starter2024
include image

overlay(circle(30, "solid", "red"), circle(31, "outline", "black"))

frame(rectangle(300, 20, "solid", "light blue"))


# bandeiras
fun barra(cor :: String) -> Image: 
  rectangle(30, 60, "solid", cor)
end

fun bandeira(cor1 :: String, cor2 :: String, cor3 :: String) -> Image:
  beside(
    barra(cor1),
    beside(
      barra(cor2),
      barra(cor3)
      ) 
    )
end

fun bandeira_estrela(
    cor1 :: String, 
    cor2 :: String, 
    cor3 :: String, 
    cor_estrela :: String
  ) -> Image:
  overlay-align(
    "center",
    "middle", 
    star(10, "solid", cor_estrela),
    bandeira(cor1, cor2, cor3)
  )
end

# função número círculo vermelho
fun numero(num :: Number
    ) -> Image:
  overlay-align(
    "center", 
    "middle", 
    text(to-string(num), 20, "white"), 
    circle(30, "solid", "red")
    )
end

# função padaria
fun preco(
    num1 :: Number, 
    num2 :: Number, 
    num3 :: Number
    ) -> Number:
  (num1 * 2) + (num2 * 3) + (num3 * 4)
end

