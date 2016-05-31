<?php
/**
 * @file
 * wv_spa_main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function wv_spa_main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: wv-main-menu_ablacin:donaciones-colaborar-ong/ablacion-tu-informacion.
  $menu_links['wv-main-menu_ablacin:donaciones-colaborar-ong/ablacion-tu-informacion'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'donaciones-colaborar-ong/ablacion-tu-informacion',
    'router_path' => 'donaciones-colaborar-ong/ablacion-tu-informacion',
    'link_title' => 'Ablación',
    'options' => array(
      'identifier' => 'wv-main-menu_ablacin:donaciones-colaborar-ong/ablacion-tu-informacion',
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_hazte-socio:http:/#',
  );
  // Exported menu link: wv-main-menu_actualidad:http:/#.
  $menu_links['wv-main-menu_actualidad:http:/#'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Actualidad',
    'options' => array(
      'devel' => TRUE,
      'identifier' => 'wv-main-menu_actualidad:http:/#',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: wv-main-menu_agua-y-saneamiento-en-ghana:<front>.
  $menu_links['wv-main-menu_agua-y-saneamiento-en-ghana:<front>'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Agua y saneamiento en Ghana',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'wv-main-menu_agua-y-saneamiento-en-ghana:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_apadrina-una-causa:http:/#',
  );
  // Exported menu link: wv-main-menu_apadrina-un-proyecto:http:/#.
  $menu_links['wv-main-menu_apadrina-un-proyecto:http:/#'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Apadrina un proyecto',
    'options' => array(
      'identifier' => 'wv-main-menu_apadrina-un-proyecto:http:/#',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_colabora:http:/#',
  );
  // Exported menu link: wv-main-menu_apadrina-una-causa:http:/#.
  $menu_links['wv-main-menu_apadrina-una-causa:http:/#'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Apadrina una causa',
    'options' => array(
      'identifier' => 'wv-main-menu_apadrina-una-causa:http:/#',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_colabora:http:/#',
  );
  // Exported menu link: wv-main-menu_apadrina:http:/#.
  $menu_links['wv-main-menu_apadrina:http:/#'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Apadrina',
    'options' => array(
      'devel' => TRUE,
      'identifier' => 'wv-main-menu_apadrina:http:/#',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: wv-main-menu_ayuda-en-emergencia:http:/#.
  $menu_links['wv-main-menu_ayuda-en-emergencia:http:/#'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Ayuda en emergencia',
    'options' => array(
      'identifier' => 'wv-main-menu_ayuda-en-emergencia:http:/#',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_colabora:http:/#',
  );
  // Exported menu link: wv-main-menu_blogs-colaboradores:http:/#.
  $menu_links['wv-main-menu_blogs-colaboradores:http:/#'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Blogs colaboradores',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'wv-main-menu_blogs-colaboradores:http:/#',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_actualidad:http:/#',
  );
  // Exported menu link: wv-main-menu_campaas:http:/#.
  $menu_links['wv-main-menu_campaas:http:/#'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Campañas',
    'options' => array(
      'devel' => TRUE,
      'identifier' => 'wv-main-menu_campaas:http:/#',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: wv-main-menu_carlos-sobera:http://carlossoberaenafrica.es/.
  $menu_links['wv-main-menu_carlos-sobera:http://carlossoberaenafrica.es/'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http://carlossoberaenafrica.es/',
    'router_path' => '',
    'link_title' => 'Carlos Sobera',
    'options' => array(
      'identifier' => 'wv-main-menu_carlos-sobera:http://carlossoberaenafrica.es/',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_blogs-colaboradores:http:/#',
  );
  // Exported menu link: wv-main-menu_cmo-funciona-el-apadrinamiento:node/56856.
  $menu_links['wv-main-menu_cmo-funciona-el-apadrinamiento:node/56856'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'node/56856',
    'router_path' => 'node/%',
    'link_title' => 'Cómo funciona el apadrinamiento?',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'wv-main-menu_cmo-funciona-el-apadrinamiento:node/56856',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_apadrina:http:/#',
  );
  // Exported menu link: wv-main-menu_colabora:http:/#.
  $menu_links['wv-main-menu_colabora:http:/#'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Colabora',
    'options' => array(
      'devel' => TRUE,
      'identifier' => 'wv-main-menu_colabora:http:/#',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: wv-main-menu_colabora:http://dona.worldvision.es/quierosermayor/#colabora.
  $menu_links['wv-main-menu_colabora:http://dona.worldvision.es/quierosermayor/#colabora'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http://dona.worldvision.es/quierosermayor/#colabora',
    'router_path' => '',
    'link_title' => 'Colabora',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'wv-main-menu_colabora:http://dona.worldvision.es/quierosermayor/#colabora',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_quiero-ser-mayor:http:/#',
  );
  // Exported menu link: wv-main-menu_colabora:stopablacion/colabora.
  $menu_links['wv-main-menu_colabora:stopablacion/colabora'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'stopablacion/colabora',
    'router_path' => 'stopablacion/colabora',
    'link_title' => 'Colabora',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'wv-main-menu_colabora:stopablacion/colabora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_stop-ablacin:http:/#',
  );
  // Exported menu link: wv-main-menu_concenos:http:/#.
  $menu_links['wv-main-menu_concenos:http:/#'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Conócenos',
    'options' => array(
      'devel' => TRUE,
      'identifier' => 'wv-main-menu_concenos:http:/#',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: wv-main-menu_conoce-ms:http://dona.worldvision.es/stopablacion/habla/.
  $menu_links['wv-main-menu_conoce-ms:http://dona.worldvision.es/stopablacion/habla/'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http://dona.worldvision.es/stopablacion/habla/',
    'router_path' => '',
    'link_title' => 'Conoce más',
    'options' => array(
      'identifier' => 'wv-main-menu_conoce-ms:http://dona.worldvision.es/stopablacion/habla/',
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_stop-ablacin:http:/#',
  );
  // Exported menu link: wv-main-menu_conoce-ms:https://dona.worldvision.es/quierosermayor/.
  $menu_links['wv-main-menu_conoce-ms:https://dona.worldvision.es/quierosermayor/'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'https://dona.worldvision.es/quierosermayor/',
    'router_path' => '',
    'link_title' => 'Conoce más',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'wv-main-menu_conoce-ms:https://dona.worldvision.es/quierosermayor/',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_quiero-ser-mayor:http:/#',
  );
  // Exported menu link: wv-main-menu_conoce-ms:los-padrinos/somos.
  $menu_links['wv-main-menu_conoce-ms:los-padrinos/somos'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'los-padrinos/somos',
    'router_path' => 'los-padrinos/somos',
    'link_title' => 'Conoce más',
    'options' => array(
      'identifier' => 'wv-main-menu_conoce-ms:los-padrinos/somos',
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_los-padrinos:http:/#',
  );
  // Exported menu link: wv-main-menu_crisis-pueblo-sirio:<front>.
  $menu_links['wv-main-menu_crisis-pueblo-sirio:<front>'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Crisis pueblo Sirio',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'wv-main-menu_crisis-pueblo-sirio:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_ayuda-en-emergencia:http:/#',
  );
  // Exported menu link: wv-main-menu_dnde-va-tu-dinero:node/56846.
  $menu_links['wv-main-menu_dnde-va-tu-dinero:node/56846'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'node/56846',
    'router_path' => 'node/%',
    'link_title' => 'Dónde va tu dinero?',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'wv-main-menu_dnde-va-tu-dinero:node/56846',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_concenos:http:/#',
  );
  // Exported menu link: wv-main-menu_dona-material:donaciones-colaborar-ong/ayuda-material-para-familias-en-espana.
  $menu_links['wv-main-menu_dona-material:donaciones-colaborar-ong/ayuda-material-para-familias-en-espana'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'donaciones-colaborar-ong/ayuda-material-para-familias-en-espana',
    'router_path' => 'donaciones-colaborar-ong/ayuda-material-para-familias-en-espana',
    'link_title' => 'Dona material',
    'options' => array(
      'identifier' => 'wv-main-menu_dona-material:donaciones-colaborar-ong/ayuda-material-para-familias-en-espana',
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_proyecto-espaa:http:/#',
  );
  // Exported menu link: wv-main-menu_dona:donaciones-colaborar-ong/ayuda-para-familias-en-espana-tus-datos.
  $menu_links['wv-main-menu_dona:donaciones-colaborar-ong/ayuda-para-familias-en-espana-tus-datos'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'donaciones-colaborar-ong/ayuda-para-familias-en-espana-tus-datos',
    'router_path' => 'donaciones-colaborar-ong/ayuda-para-familias-en-espana-tus-datos',
    'link_title' => 'Dona',
    'options' => array(
      'identifier' => 'wv-main-menu_dona:donaciones-colaborar-ong/ayuda-para-familias-en-espana-tus-datos',
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_proyecto-espaa:http:/#',
  );
  // Exported menu link: wv-main-menu_equipos-en-la-calle:node/56836.
  $menu_links['wv-main-menu_equipos-en-la-calle:node/56836'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'node/56836',
    'router_path' => 'node/%',
    'link_title' => 'Equipos en la calle',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'wv-main-menu_equipos-en-la-calle:node/56836',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_concenos:http:/#',
  );
  // Exported menu link: wv-main-menu_hazte-socio:http:/#.
  $menu_links['wv-main-menu_hazte-socio:http:/#'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Hazte socio',
    'options' => array(
      'identifier' => 'wv-main-menu_hazte-socio:http:/#',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_colabora:http:/#',
  );
  // Exported menu link: wv-main-menu_home:<front>.
  $menu_links['wv-main-menu_home:<front>'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'wv-main-menu_home:<front>',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: wv-main-menu_ir-al-blog:blog.
  $menu_links['wv-main-menu_ir-al-blog:blog'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Ir al blog',
    'options' => array(
      'identifier' => 'wv-main-menu_ir-al-blog:blog',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_ltimas-noticias:http:/#',
  );
  // Exported menu link: wv-main-menu_los-padrinos:http:/#.
  $menu_links['wv-main-menu_los-padrinos:http:/#'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Los Padrinos',
    'options' => array(
      'identifier' => 'wv-main-menu_los-padrinos:http:/#',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_campaas:http:/#',
  );
  // Exported menu link: wv-main-menu_ltimas-noticias:http:/#.
  $menu_links['wv-main-menu_ltimas-noticias:http:/#'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Últimas noticias',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'wv-main-menu_ltimas-noticias:http:/#',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_actualidad:http:/#',
  );
  // Exported menu link: wv-main-menu_nuestro-trabajo:node/56851.
  $menu_links['wv-main-menu_nuestro-trabajo:node/56851'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'node/56851',
    'router_path' => 'node/%',
    'link_title' => 'Nuestro trabajo',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'wv-main-menu_nuestro-trabajo:node/56851',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_concenos:http:/#',
  );
  // Exported menu link: wv-main-menu_nuestros-proyectos:http:/#.
  $menu_links['wv-main-menu_nuestros-proyectos:http:/#'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Nuestros proyectos',
    'options' => array(
      'devel' => TRUE,
      'identifier' => 'wv-main-menu_nuestros-proyectos:http:/#',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: wv-main-menu_proyecto-espaa:http:/#.
  $menu_links['wv-main-menu_proyecto-espaa:http:/#'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Proyecto España',
    'options' => array(
      'identifier' => 'wv-main-menu_proyecto-espaa:http:/#',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_colabora:http:/#',
  );
  // Exported menu link: wv-main-menu_quiero-ser-mayor:http:/#.
  $menu_links['wv-main-menu_quiero-ser-mayor:http:/#'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Quiero ser mayor',
    'options' => array(
      'identifier' => 'wv-main-menu_quiero-ser-mayor:http:/#',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_campaas:http:/#',
  );
  // Exported menu link: wv-main-menu_rosana-guiza:http://rosanaenafrica.es/.
  $menu_links['wv-main-menu_rosana-guiza:http://rosanaenafrica.es/'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http://rosanaenafrica.es/',
    'router_path' => '',
    'link_title' => 'Rosana Guiza',
    'options' => array(
      'identifier' => 'wv-main-menu_rosana-guiza:http://rosanaenafrica.es/',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_blogs-colaboradores:http:/#',
  );
  // Exported menu link: wv-main-menu_salud-materno-infantil-bolivia:<front>.
  $menu_links['wv-main-menu_salud-materno-infantil-bolivia:<front>'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Salud materno-infantil Bolivia',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'wv-main-menu_salud-materno-infantil-bolivia:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_apadrina-una-causa:http:/#',
  );
  // Exported menu link: wv-main-menu_salud-materno-infantil:<front>.
  $menu_links['wv-main-menu_salud-materno-infantil:<front>'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Salud materno-infantil',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'wv-main-menu_salud-materno-infantil:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_hazte-socio:http:/#',
  );
  // Exported menu link: wv-main-menu_seguridad-alimentaria-en-zimbabue:<front>.
  $menu_links['wv-main-menu_seguridad-alimentaria-en-zimbabue:<front>'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Seguridad alimentaria en Zimbabue',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'wv-main-menu_seguridad-alimentaria-en-zimbabue:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_apadrina-una-causa:http:/#',
  );
  // Exported menu link: wv-main-menu_sobre-nosotros:node/15148.
  $menu_links['wv-main-menu_sobre-nosotros:node/15148'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'node/15148',
    'router_path' => 'node/%',
    'link_title' => 'Sobre nosotros',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'wv-main-menu_sobre-nosotros:node/15148',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_concenos:http:/#',
  );
  // Exported menu link: wv-main-menu_solicita-informacin-sobre-el-apadrinamiento:<front>.
  $menu_links['wv-main-menu_solicita-informacin-sobre-el-apadrinamiento:<front>'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Solicita información sobre el apadrinamiento',
    'options' => array(
      'devel' => TRUE,
      'identifier' => 'wv-main-menu_solicita-informacin-sobre-el-apadrinamiento:<front>',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_apadrina:http:/#',
  );
  // Exported menu link: wv-main-menu_stop-ablacin:http:/#.
  $menu_links['wv-main-menu_stop-ablacin:http:/#'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Stop Ablación',
    'options' => array(
      'identifier' => 'wv-main-menu_stop-ablacin:http:/#',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_campaas:http:/#',
  );
  // Exported menu link: wv-main-menu_terremoto-en-nepal:<front>.
  $menu_links['wv-main-menu_terremoto-en-nepal:<front>'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Terremoto en Nepal',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'wv-main-menu_terremoto-en-nepal:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_ayuda-en-emergencia:http:/#',
  );
  // Exported menu link: wv-main-menu_voluntarios:node/56831.
  $menu_links['wv-main-menu_voluntarios:node/56831'] = array(
    'menu_name' => 'wv-main-menu',
    'link_path' => 'node/56831',
    'router_path' => 'node/%',
    'link_title' => 'Voluntarios',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'wv-main-menu_voluntarios:node/56831',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'wv-main-menu_concenos:http:/#',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ablación');
  t('Actualidad');
  t('Agua y saneamiento en Ghana');
  t('Apadrina');
  t('Apadrina un proyecto');
  t('Apadrina una causa');
  t('Ayuda en emergencia');
  t('Blogs colaboradores');
  t('Campañas');
  t('Carlos Sobera');
  t('Colabora');
  t('Conoce más');
  t('Conócenos');
  t('Crisis pueblo Sirio');
  t('Cómo funciona el apadrinamiento?');
  t('Dona');
  t('Dona material');
  t('Dónde va tu dinero?');
  t('Equipos en la calle');
  t('Hazte socio');
  t('Home');
  t('Ir al blog');
  t('Los Padrinos');
  t('Nuestro trabajo');
  t('Nuestros proyectos');
  t('Proyecto España');
  t('Quiero ser mayor');
  t('Rosana Guiza');
  t('Salud materno-infantil');
  t('Salud materno-infantil Bolivia');
  t('Seguridad alimentaria en Zimbabue');
  t('Sobre nosotros');
  t('Solicita información sobre el apadrinamiento');
  t('Stop Ablación');
  t('Terremoto en Nepal');
  t('Voluntarios');
  t('Últimas noticias');

  return $menu_links;
}
