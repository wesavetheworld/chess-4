<!doctype html>
    <html>
        <head>
            <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
            <title>CHESS</title>
			<link rel= 'stylesheet' href='<?php print URL.'css/style.css'; ?>'>
			<?php if(isset($_SESSION['alert'])){print $_SESSION['alert']; unset($_SESSION['alert']);}?>
        </head>
        <body>
            <?php include_once($_SERVER['DOCUMENT_ROOT'].'/chess/html/header.inc'); ?>
			<main>
				    <nav>
                    </nav>
				<form action='<?php print URL."login/?login"; ?>' method='POST' class='user_form'>
					<fieldset>
						<legend>Login</legend>
						<p><input type='text' name='login' required class='input_form_user'> User name</p>
						<p><input type='password' name='password' required class='input_form_user'> Password</p>
						<input type='submit' value='Login' name='sign' class='buttom_user submit'>
						<a href='<?php print URL."login/?recovery=0"; ?>'>recovery password</a>
					</fieldset>
				</form>
			</main>
			<?php include_once($_SERVER['DOCUMENT_ROOT'].'/chess/html/footer.inc'); ?>
		</body>
	</html>