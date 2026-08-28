use context starter2024

fun double-or-triple(n :: Number) -> Number:
  doc: "Dado um número, caso seja maior que 10, é devolvido seu dobro, senão, devolvido seu triplo"
  
  if (n > 10):
    n * 2
  else:
    n * 3
  end
  
where:
  double-or-triple(2) is 6
  double-or-triple(10) is 30
  double-or-triple(12) is 24
end