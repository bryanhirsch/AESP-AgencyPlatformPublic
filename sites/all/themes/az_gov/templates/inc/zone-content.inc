<div id="zone-content" class="zone">


  <?php if ($preface['count'] > 0): ?>
    <div id="preface-group" class="clearfix <?php echo $preface['class']; ?>">
      <?php if ($page['preface_first']) : ?>
        <div id="region-preface-first" class="preface">
          <?php print render($page['preface_first']); ?>
        </div>
      <?php endif; ?>
      <?php if ($page['preface_second']) : ?>
        <div id="region-preface-second" class="preface">
          <?php print render($page['preface_second']); ?>
        </div>
      <?php endif; ?>
      <?php if ($page['preface_third']) : ?>
        <div id="region-preface-third" class="preface">
          <?php print render($page['preface_third']); ?>
        </div>
      <?php endif; ?>
    </div>
  <?php endif; ?>

  <div id="content-wrapper" class="clearfix">
    <?php if ($messages): ?>
      <div id="messages">
        <?php print render($messages); ?>
      </div>
    <?php endif; ?>

    <?php if ($page['sidebar_first']) : ?>
      <aside id="sidebar-first" class="main-region">
        <?php print render($page['sidebar_first']); ?>
      </aside>
    <?php endif; ?>


    <div id="content"
         class="main-region contextual-links-region <?php echo $content_class; ?>">


      <h1 id="page-title">
        <?php print $title; ?>
      </h1>

      <?php print render($title_suffix); ?>

      <?php if ($tabs = render($tabs)): ?>
        <div class="tabs"><?php print $tabs; ?></div>
      <?php endif; ?>
      <?php print render($page['content']); ?>
    </div>


    <?php if ($page['sidebar_second']) : ?>
      <aside id="sidebar-second" class="main-region">
        <?php print render($page['sidebar_second']); ?>
      </aside>
    <?php endif; ?>
  </div>


  <?php if ($postscript['count'] > 0): ?>
    <div id="postscript-group"
         class="clearfix <?php echo $postscript['class']; ?>">
      <?php if ($page['postscript_first']) : ?>
        <div id="region-postscript-first" class="postscript">
          <?php print render($page['postscript_first']); ?>
        </div>
      <?php endif; ?>
      <?php if ($page['postscript_second']) : ?>
        <div id="region-postscript-second" class="postscript">
          <?php print render($page['postscript_second']); ?>
        </div>
      <?php endif; ?>
      <?php if ($page['postscript_third']) : ?>
        <div id="region-postscript-third" class="postscript">
          <?php print render($page['postscript_third']); ?>
        </div>
      <?php endif; ?>
      <?php if ($page['postscript_fourth']) : ?>
        <div id="region-postscript-fourth" class="postscript">
          <?php print render($page['postscript_fourth']); ?>
        </div>
      <?php endif; ?>
    </div>
  <?php endif; ?>

</div>