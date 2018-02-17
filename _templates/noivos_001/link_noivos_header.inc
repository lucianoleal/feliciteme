	<header>
		<section id="cabecalho">
			<h3>O casamento de</h3>
			<h1><a href="index.php">Aline<img src="../../../_templates/noivos_001/link_&.jpg" />Diogo</h1></a>
			<h2>09 de Abril de 2016</h2>
			<?php
				$_casamento = mktime(0, 0, 0, 4, 9, 2016);
				$_agora = mktime(0, 0, 0, date('n'), date('d'), date('Y'));
				$_falta = (int)floor( ($_casamento-$_agora) / (60 * 60 * 24));
				if ($_falta==1) {
					echo('<h4>(Falta 1 dia)</h4>');
				} else {
					echo('<h4>(Faltam '.$_falta.' dias)</h4>');
				}
			?>
		</section>
		<nav id="menu">
			<div class="enfeite">
				<div class="enf_top_esq"></div>
				<div class="enf_top_cen"></div>
				<div class="enf_top_dir"></div>
			</div>
			<a href="#"><h2>NOSSO CASAMENTO</h2></a>
			<ul>
				<li><a href="noivos.php">Os noivos</a></li>
				<li><a href="historia.php">Nossa História</a></li>
				<li><a href="casamento.php">O casamento</a></li>
				<li><a href="presentes.php">Presentes</a></li>				
				<li><a href="galeria.php">Galeria de Fotos</a></li>
				<li><a href="noticias.php">Últimas Notícias</a></li>
			</ul>
			<div class="enfeite">
				<div class="enf_bot_esq"></div>
				<div class="enf_bot_cen"></div>
				<div class="enf_bot_dir"></div>
			</div>
		</nav>
	</header>