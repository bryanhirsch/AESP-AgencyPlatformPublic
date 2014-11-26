<div id="zone-branding" class="zone">
  <div class="silhouette">
    <div id="region-branding" class="clearfix <?php echo $region_wrapper; ?>">
      <?php if ($logo || $site_name || $site_slogan): ?>
        <div class="site-details clearfix">
          <?php if ($logo): ?>
            <a class="logo" href="/">
              <img src="<?php echo $logo; ?>"
                   alt="<?php echo $persistent_site_name; ?> Logo">
            </a>
          <?php endif; ?>

          <?php if ($site_name || $site_slogan): ?>
            <div class="site-info">
              <?php if ($site_name): ?>
                <div class="site-name">
                  <a href="/">
                    <h1><?php echo $site_name; ?></h1>
                  </a>
                </div>
              <?php endif; ?>
              <?php if ($site_slogan): ?>
                <div class="site-slogan">
                  <h6><?php echo $site_slogan; ?></h6>
                </div>
              <?php endif; ?>
            </div>
          <?php endif; ?>
        </div>
      <?php endif; ?>
      <?php if ($page['branding']) : ?>
        <?php print render($page['branding']); ?>
      <?php endif; ?>
    </div>

    <?php if ($page['menu']) : ?>
      <?php print render($page['menu']); ?>
    <?php endif; ?>
  </div>
</div>