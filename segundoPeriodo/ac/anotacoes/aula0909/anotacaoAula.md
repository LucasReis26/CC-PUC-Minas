<h1 style="text-align: center"> Simplificação de Sistemas <br/> Combinacionais via Mapas de Karnaugh </h1>

<h2 style="text-align: center">Mapa de Karnaugh p/ 2 variáveis</h2>

<table>
	<thead>
		<th>A/B</th>
		<th><span style="text-decoration: overline">B</span> <br/> 0</th>
		<th>B <br/> 1</th>
	</thead>
<tbody>
	<tr>
		<td style="font-weight: bold"><span style="text-decoration: overline">A</span> 0</td>
		<td>0</td>
		<td>1</td>
	</tr>
	<tr>
		<td style="font-weight: bold">A 1</td>
		<td>1</td>
		<td>1</td>
	</tr>
</tbody>
</table>

<p>Y = A (<span style="text-decoration: overline">B</span> + B) + <span style="text-decoration: overline">A</span>B</p>
<p>Y = A<span style="text-decoration: overline">B</span> + AB + <span style="text-decoration: overline">A</span>B</p>
<p>Y = A + <span style="text-decoration: overline">A</span>B = A + B</p>

<h2>Regras para a formação de grupos</h2>

- Agrupar "1" isolados

- Agrupar "1" que só tem um vizinho

- Formar grupos, os maiores possíveis em potência de 2 elementos "16,8,4,2"

<h3>Restrições</h3>

- Os grupos só poderão ter formato retangular

- Poderá existir interseção entre grupos, para a formação dos maiores grupos possíveis

- Formar o menor grupo possível de grupos

<h2><span style="text-decoration: underline">Exercício</span> <br/><br/> Escreva de forma canônica e a forma simplificada associada aos mapas de Karnaugh abaixo:</h2>

<table>
	<thead>
		<th>A,B/C</th>
		<th>0</th>
		<th>1</th>
	</thead>
	<tbody>
		<tr>
			<td style="font-weight: bold">00</td>
			<td>0</td>
			<td>0</td>
		</tr>
		<tr>
			<td style="font-weight: bold">01</td>
			<td>0</td>
			<td>1</td>
		</tr>
		<tr>
			<td style="font-weight: bold">11</td>
			<td>1</td>
			<td>1</td>
		</tr>
		<tr>
			<td style="font-weight: bold">10</td>
			<td>0</td>
			<td>1</td>
		</tr>
	</tbody>
</table>
