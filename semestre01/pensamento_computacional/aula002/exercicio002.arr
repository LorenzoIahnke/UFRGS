use context starter2024

fun taxa-juros(n :: Number) -> Number:
  doc: "Dado um valor, mostrar a taxa de juros correspondida a esse valor"
  ask:
    | (n <= 1000) then: 0.04
    | (n <= 5000) then: 0.045
    | otherwise: 0.05
  end
where:
  taxa-juros(800) is 0.04
  taxa-juros(3500) is 0.045
  taxa-juros(6000) is 0.05
end
  