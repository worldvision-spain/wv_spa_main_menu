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

  // Exported menu link: main-menu_ablacin:http://www.worldvision.es/donaciones-colaborar-ong/ablacion-tu-informacion.
  $menu_links['main-menu_ablacin:http://www.worldvision.es/donaciones-colaborar-ong/ablacion-tu-informacion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.worldvision.es/donaciones-colaborar-ong/ablacion-tu-informacion',
    'router_path' => '',
    'link_title' => 'Ablación',
    'options' => array(
      'identifier' => 'main-menu_ablacin:http://www.worldvision.es/donaciones-colaborar-ong/ablacion-tu-informacion',
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
    'parent_identifier' => 'main-menu_hazte-socio:http:/#',
  );
  // Exported menu link: main-menu_actualidad:http:/#.
  $menu_links['main-menu_actualidad:http:/#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Actualidad',
    'options' => array(
      'devel' => TRUE,
      'identifier' => 'main-menu_actualidad:http:/#',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_agua-y-saneamiento-en-ghana:<front>.
  $menu_links['main-menu_agua-y-saneamiento-en-ghana:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Agua y saneamiento en Ghana',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_agua-y-saneamiento-en-ghana:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_apadrina-una-causa:http:/#',
  );
  // Exported menu link: main-menu_apadrina-a-un-nio:apadrina-ahora.
  $menu_links['main-menu_apadrina-a-un-nio:apadrina-ahora'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'apadrina-ahora',
    'router_path' => 'apadrina-ahora',
    'link_title' => 'Apadrina a un niño',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_apadrina-a-un-nio:apadrina-ahora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_colabora:http:/#',
  );
  // Exported menu link: main-menu_apadrina-un-proyecto:http:/#.
  $menu_links['main-menu_apadrina-un-proyecto:http:/#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Apadrina un proyecto',
    'options' => array(
      'identifier' => 'main-menu_apadrina-un-proyecto:http:/#',
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
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_colabora:http:/#',
  );
  // Exported menu link: main-menu_apadrina-una-causa:http:/#.
  $menu_links['main-menu_apadrina-una-causa:http:/#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Apadrina una causa',
    'options' => array(
      'identifier' => 'main-menu_apadrina-una-causa:http:/#',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_colabora:http:/#',
  );
  // Exported menu link: main-menu_apadrina:http:/#.
  $menu_links['main-menu_apadrina:http:/#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Apadrina',
    'options' => array(
      'devel' => TRUE,
      'identifier' => 'main-menu_apadrina:http:/#',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_apadrinar-a-un-nio-ahora:apadrina-ahora.
  $menu_links['main-menu_apadrinar-a-un-nio-ahora:apadrina-ahora'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'apadrina-ahora',
    'router_path' => 'apadrina-ahora',
    'link_title' => 'Apadrinar a un niño ahora',
    'options' => array(
      'devel' => TRUE,
      'identifier' => 'main-menu_apadrinar-a-un-nio-ahora:apadrina-ahora',
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
    'parent_identifier' => 'main-menu_apadrina:http:/#',
  );
  // Exported menu link: main-menu_ayuda-en-emergencia:http:/#.
  $menu_links['main-menu_ayuda-en-emergencia:http:/#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Ayuda en emergencia',
    'options' => array(
      'identifier' => 'main-menu_ayuda-en-emergencia:http:/#',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_colabora:http:/#',
  );
  // Exported menu link: main-menu_blogs-colaboradores:http:/#.
  $menu_links['main-menu_blogs-colaboradores:http:/#'] = array(
    'menu_name' => 'main-menu',
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
      'identifier' => 'main-menu_blogs-colaboradores:http:/#',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_actualidad:http:/#',
  );
  // Exported menu link: main-menu_campaas:http:/#.
  $menu_links['main-menu_campaas:http:/#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Campañas',
    'options' => array(
      'devel' => TRUE,
      'identifier' => 'main-menu_campaas:http:/#',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_carlos-sobera:http://carlossoberaenafrica.es/.
  $menu_links['main-menu_carlos-sobera:http://carlossoberaenafrica.es/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://carlossoberaenafrica.es/',
    'router_path' => '',
    'link_title' => 'Carlos Sobera',
    'options' => array(
      'identifier' => 'main-menu_carlos-sobera:http://carlossoberaenafrica.es/',
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
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_blogs-colaboradores:http:/#',
  );
  // Exported menu link: main-menu_colabora:http:/#.
  $menu_links['main-menu_colabora:http:/#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Colabora',
    'options' => array(
      'devel' => TRUE,
      'identifier' => 'main-menu_colabora:http:/#',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_colabora:http://dona.worldvision.es/quierosermayor/#colabora.
  $menu_links['main-menu_colabora:http://dona.worldvision.es/quierosermayor/#colabora'] = array(
    'menu_name' => 'main-menu',
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
      'identifier' => 'main-menu_colabora:http://dona.worldvision.es/quierosermayor/#colabora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_quiero-ser-mayor:http:/#',
  );
  // Exported menu link: main-menu_colabora:https://www.worldvision.es/los-padrinos/apadrinar-un-nino/ninos.
  $menu_links['main-menu_colabora:https://www.worldvision.es/los-padrinos/apadrinar-un-nino/ninos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.worldvision.es/los-padrinos/apadrinar-un-nino/ninos',
    'router_path' => '',
    'link_title' => 'Colabora',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_colabora:https://www.worldvision.es/los-padrinos/apadrinar-un-nino/ninos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_los-padrinos:http:/#',
  );
  // Exported menu link: main-menu_concenos:http:/#.
  $menu_links['main-menu_concenos:http:/#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Conócenos',
    'options' => array(
      'devel' => TRUE,
      'identifier' => 'main-menu_concenos:http:/#',
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
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_conoce-ms:http://dona.worldvision.es/stopablacion/habla/.
  $menu_links['main-menu_conoce-ms:http://dona.worldvision.es/stopablacion/habla/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://dona.worldvision.es/stopablacion/habla/',
    'router_path' => '',
    'link_title' => 'Conoce más',
    'options' => array(
      'identifier' => 'main-menu_conoce-ms:http://dona.worldvision.es/stopablacion/habla/',
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
    'parent_identifier' => 'main-menu_stop-ablacin:http:/#',
  );
  // Exported menu link: main-menu_conoce-ms:https://dona.worldvision.es/quierosermayor/.
  $menu_links['main-menu_conoce-ms:https://dona.worldvision.es/quierosermayor/'] = array(
    'menu_name' => 'main-menu',
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
      'identifier' => 'main-menu_conoce-ms:https://dona.worldvision.es/quierosermayor/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_quiero-ser-mayor:http:/#',
  );
  // Exported menu link: main-menu_conoce-ms:https://www.worldvision.es/los-padrinos/somos.
  $menu_links['main-menu_conoce-ms:https://www.worldvision.es/los-padrinos/somos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://www.worldvision.es/los-padrinos/somos',
    'router_path' => '',
    'link_title' => 'Conoce más',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_conoce-ms:https://www.worldvision.es/los-padrinos/somos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_los-padrinos:http:/#',
  );
  // Exported menu link: main-menu_crisis-pueblo-sirio:<front>.
  $menu_links['main-menu_crisis-pueblo-sirio:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Crisis pueblo Sirio',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_crisis-pueblo-sirio:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_ayuda-en-emergencia:http:/#',
  );
  // Exported menu link: main-menu_dona-material:http://www.worldvision.es/donaciones-colaborar-ong/ayuda-material-para-familias-en-espana.
  $menu_links['main-menu_dona-material:http://www.worldvision.es/donaciones-colaborar-ong/ayuda-material-para-familias-en-espana'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.worldvision.es/donaciones-colaborar-ong/ayuda-material-para-familias-en-espana',
    'router_path' => '',
    'link_title' => 'Dona material',
    'options' => array(
      'identifier' => 'main-menu_dona-material:http://www.worldvision.es/donaciones-colaborar-ong/ayuda-material-para-familias-en-espana',
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
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_proyecto-espaa:http:/#',
  );
  // Exported menu link: main-menu_dona:http://www.worldvision.es/donaciones-colaborar-ong/ayuda-para-familias-en-espana-tus-datos.
  $menu_links['main-menu_dona:http://www.worldvision.es/donaciones-colaborar-ong/ayuda-para-familias-en-espana-tus-datos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.worldvision.es/donaciones-colaborar-ong/ayuda-para-familias-en-espana-tus-datos',
    'router_path' => '',
    'link_title' => 'Dona',
    'options' => array(
      'identifier' => 'main-menu_dona:http://www.worldvision.es/donaciones-colaborar-ong/ayuda-para-familias-en-espana-tus-datos',
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
    'parent_identifier' => 'main-menu_proyecto-espaa:http:/#',
  );
  // Exported menu link: main-menu_hazte-socio:http:/#.
  $menu_links['main-menu_hazte-socio:http:/#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Hazte socio',
    'options' => array(
      'identifier' => 'main-menu_hazte-socio:http:/#',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_colabora:http:/#',
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
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
  );
  // Exported menu link: main-menu_ir-al-blog:blog.
  $menu_links['main-menu_ir-al-blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Ir al blog',
    'options' => array(
      'identifier' => 'main-menu_ir-al-blog:blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_ltimas-noticias:http:/#',
  );
  // Exported menu link: main-menu_los-padrinos:http:/#.
  $menu_links['main-menu_los-padrinos:http:/#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Los Padrinos',
    'options' => array(
      'identifier' => 'main-menu_los-padrinos:http:/#',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_campaas:http:/#',
  );
  // Exported menu link: main-menu_ltimas-noticias:http:/#.
  $menu_links['main-menu_ltimas-noticias:http:/#'] = array(
    'menu_name' => 'main-menu',
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
      'identifier' => 'main-menu_ltimas-noticias:http:/#',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_actualidad:http:/#',
  );
  // Exported menu link: main-menu_nuestros-proyectos:http:/#.
  $menu_links['main-menu_nuestros-proyectos:http:/#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Nuestros proyectos',
    'options' => array(
      'devel' => TRUE,
      'identifier' => 'main-menu_nuestros-proyectos:http:/#',
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
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_proyecto-espaa:http:/#.
  $menu_links['main-menu_proyecto-espaa:http:/#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Proyecto España',
    'options' => array(
      'identifier' => 'main-menu_proyecto-espaa:http:/#',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_colabora:http:/#',
  );
  // Exported menu link: main-menu_quiero-ser-mayor:http:/#.
  $menu_links['main-menu_quiero-ser-mayor:http:/#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Quiero ser mayor',
    'options' => array(
      'identifier' => 'main-menu_quiero-ser-mayor:http:/#',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_campaas:http:/#',
  );
  // Exported menu link: main-menu_rosana-guiza:http://rosanaenafrica.es/.
  $menu_links['main-menu_rosana-guiza:http://rosanaenafrica.es/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://rosanaenafrica.es/',
    'router_path' => '',
    'link_title' => 'Rosana Guiza',
    'options' => array(
      'identifier' => 'main-menu_rosana-guiza:http://rosanaenafrica.es/',
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
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_blogs-colaboradores:http:/#',
  );
  // Exported menu link: main-menu_salud-materno-infantil-bolivia:<front>.
  $menu_links['main-menu_salud-materno-infantil-bolivia:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Salud materno-infantil Bolivia',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_salud-materno-infantil-bolivia:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_apadrina-una-causa:http:/#',
  );
  // Exported menu link: main-menu_salud-materno-infantil:<front>.
  $menu_links['main-menu_salud-materno-infantil:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Salud materno-infantil',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_salud-materno-infantil:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_hazte-socio:http:/#',
  );
  // Exported menu link: main-menu_seguridad-alimentaria-en-zimbabue:<front>.
  $menu_links['main-menu_seguridad-alimentaria-en-zimbabue:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Seguridad alimentaria en Zimbabue',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_seguridad-alimentaria-en-zimbabue:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_apadrina-una-causa:http:/#',
  );
  // Exported menu link: main-menu_solicita-informacin-sobre-el-apadrinamiento:<front>.
  $menu_links['main-menu_solicita-informacin-sobre-el-apadrinamiento:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Solicita información sobre el apadrinamiento',
    'options' => array(
      'devel' => TRUE,
      'identifier' => 'main-menu_solicita-informacin-sobre-el-apadrinamiento:<front>',
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
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_apadrina:http:/#',
  );
  // Exported menu link: main-menu_stop-ablacin:http:/#.
  $menu_links['main-menu_stop-ablacin:http:/#'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http:/#',
    'router_path' => '',
    'link_title' => 'Stop Ablación',
    'options' => array(
      'identifier' => 'main-menu_stop-ablacin:http:/#',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_campaas:http:/#',
  );
  // Exported menu link: main-menu_terremoto-en-nepal:<front>.
  $menu_links['main-menu_terremoto-en-nepal:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Terremoto en Nepal',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_terremoto-en-nepal:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_ayuda-en-emergencia:http:/#',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ablación');
  t('Actualidad');
  t('Agua y saneamiento en Ghana');
  t('Apadrina');
  t('Apadrina a un niño');
  t('Apadrina un proyecto');
  t('Apadrina una causa');
  t('Apadrinar a un niño ahora');
  t('Ayuda en emergencia');
  t('Blogs colaboradores');
  t('Campañas');
  t('Carlos Sobera');
  t('Colabora');
  t('Conoce más');
  t('Conócenos');
  t('Crisis pueblo Sirio');
  t('Dona');
  t('Dona material');
  t('Hazte socio');
  t('Home');
  t('Ir al blog');
  t('Los Padrinos');
  t('Nuestros proyectos');
  t('Proyecto España');
  t('Quiero ser mayor');
  t('Rosana Guiza');
  t('Salud materno-infantil');
  t('Salud materno-infantil Bolivia');
  t('Seguridad alimentaria en Zimbabue');
  t('Solicita información sobre el apadrinamiento');
  t('Stop Ablación');
  t('Terremoto en Nepal');
  t('Últimas noticias');

  return $menu_links;
}
