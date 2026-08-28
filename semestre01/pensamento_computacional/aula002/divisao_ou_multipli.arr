use context starter2024

fun div-ou-mult(n :: Number) -> Number:
  doc: "Dado um número, caso seja maior que 100, deverá ser dividido por 5, senão, multiplicado por 3"
  
  ask:
    | (n > 100) then: (n / 5)
    | otherwise: (n * 3)
  end
  
where:
  div-ou-mult(120) is 24
  div-ou-mult(150) is 30
  div-ou-mult(30) is 90
end