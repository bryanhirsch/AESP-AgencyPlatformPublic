<?php
$logo = theme_get_setting('sticky_nav_path');
$site_name = variable_get('site_name');
$use_logo = theme_get_setting('use_sticky_nav');
$flyout_text = theme_get_setting('flyout_nav_text');
$use_flyout_text = theme_get_setting('use_flyout_text');

if(theme_get_setting('sticky_nav_mobile') == 1){
	$sticky_mobile = 'sticky-only-mobile ';
} else {
	$sticky_mobile = 'sticky-desktop-mobile ';
};

?>

<div id="sticky_nav" class="<?php echo $sticky_mobile; print $classes; ?>"<?php print $attributes; ?>>
	<div class="wrapper content"<?php print $content_attributes; ?>>
		<img src="/<?php echo(drupal_get_path('theme', 'comm') .'/img/button-menu.png'); ?>" alt="Open Side Menu" title="Open Side Menu" class="button" />
		<?php if ($use_logo): if ($logo) :?>
			<a href="/"><img alt="<?php print $site_name; ?>" class='logo' src='<?php print $logo; ?>' />
		<?php endif; else: ?>
			<a class='logo' href="/"><?php print $site_name;
		endif;?>
		</a>
		<div id="sticky_nav_menu_wrapper">
			<?php print $content; ?>
		</div>
	</div>
</div>

<div id="flyout_menu" class="<?php print $classes; ?>"<?php print $attributes; ?>>

	<div class="content"<?php print $content_attributes; ?>>
		<img src="/<?php echo(drupal_get_path('theme', 'comm') .'/img/button-close.png'); ?>" alt="Close Button" title="Close Side Menu" class="close" />
		<?php 
			$menu = menu_tree('main-menu');
			$menuhtml = drupal_render($menu);
			print_r($menuhtml);
		?>
	</div>
	<div class="locations">
		<?php
		if ($use_flyout_text)
			print $flyout_text['value'];
		?>
	</div>
</div>