use context starter2024
# função para verificar se é par
fun verificar-par(n :: Number) -> Boolean:
  doc:"Dado um número, verificar se é par"
  num-modulo(n, 2) == 0
  
where:
  verificar-par(2) is true
  verificar-par(3) is false
end

# função para verificar se deve somar ou dividir
fun div-ou-somar(n :: Number) -> Number:
  doc: "Se for par, deve dividir por 2, senão, deve ser somado a 1 e depois dividir por 2"
  ask:
    | verificar-par(n) then: (n / 2)
    | otherwise: ((n + 1) / 2)
  end
  
where:
  div-ou-somar(30) is 15
  div-ou-somar(17) is 9
end