use context starter2024

fun is-5(n :: Number) -> Boolean:
  doc: "Dado um número n, verificar se o valor dado é 5"
  n == 5
  
where:
  is-5(5) is true
  is-5(6) is false
end



fun between-5-and-6(n :: Number) -> Boolean:
  doc: "Dado um número, verificar se está entre 5 e 6"
  (n > 5) and (n < 6)

where: 
  between-5-and-6(5.5) is true
  between-5-and-6(5) is false
end



fun between-5-and-6-or-over-10(n :: Number) -> Boolean:
  doc: "Verificar se está entre 5 e 6 ou maior que 10"
  between-5-and-6(n) or (n > 10)
  
where:
  between-5-and-6-or-over-10(5.5) is true
  between-5-and-6-or-over-10(11) is true
  between-5-and-6-or-over-10(9) is false
end