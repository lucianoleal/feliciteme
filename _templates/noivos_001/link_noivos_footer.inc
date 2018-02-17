	<footer>
		<nav id="sociais">
			<ul>
		<?php

			// Facebook
			// Twitter
			// Google Plus
			// Instagram

			// face
			// twit
			// gpls
			// inst

			$_soc_class[0] = "face";
			$_soc_class[1] = "face";

			$_soc_title[0] = "Facebook";
			$_soc_title[1] = "Facebook";

			$_soc_url[0] = "https://www.facebook.com/lih.mesquita";
			$_soc_url[1] = "https://www.facebook.com/diogo.martins.1654700";

			$_soc_nome[0] = "Aline";
			$_soc_nome[1] = "Diogo";

			for ($i=0; $i<count($_soc_class); $i++) {
				echo('<li><a href="'. $_soc_url[$i].'" class="'.$_soc_class[$i].'" title="'.$_soc_title[$i].' '.$_soc_nome[$i].'"><span>'.$_soc_title[$i].'</span></a></li>');
			}
		?>
			</ul>
		</nav>
	</footer>

	
