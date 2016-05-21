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

  // Exported menu link: main-menu_ablacin:<front>.
  $menu_links['main-menu_ablacin:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Ablación',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_ablacin:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_hazte-socio:<front>',
  );
  // Exported menu link: main-menu_actualidad:<front>.
  $menu_links['main-menu_actualidad:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Actualidad',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Description of wreuuwi.',
      ),
      'identifier' => 'main-menu_actualidad:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_apadrina-a-un-nio:apadrina-ahora.
  $menu_links['main-menu_apadrina-a-un-nio:apadrina-ahora'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'apadrina-ahora',
    'router_path' => 'apadrina-ahora',
    'link_title' => 'Apadrina a un niño',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_apadrina-a-un-nio:apadrina-ahora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_colabora:<front>',
  );
  // Exported menu link: main-menu_apadrina-un-proyecto:<front>.
  $menu_links['main-menu_apadrina-un-proyecto:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Apadrina un proyecto',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_apadrina-un-proyecto:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_colabora:<front>',
  );
  // Exported menu link: main-menu_apadrina-una-causa:<front>.
  $menu_links['main-menu_apadrina-una-causa:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Apadrina una causa',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_apadrina-una-causa:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_colabora:<front>',
  );
  // Exported menu link: main-menu_apadrina:<front>.
  $menu_links['main-menu_apadrina:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Apadrina',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Description of trosasl.',
      ),
      'identifier' => 'main-menu_apadrina:<front>',
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
      'attributes' => array(
        'title' => 'Description of slewas.',
      ),
      'identifier' => 'main-menu_apadrinar-a-un-nio-ahora:apadrina-ahora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_apadrina:<front>',
  );
  // Exported menu link: main-menu_ayuda-en-emergencia:<front>.
  $menu_links['main-menu_ayuda-en-emergencia:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Ayuda en emergencia',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_ayuda-en-emergencia:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_colabora:<front>',
  );
  // Exported menu link: main-menu_campaas:<front>.
  $menu_links['main-menu_campaas:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Campañas',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Description of sigipr.',
      ),
      'identifier' => 'main-menu_campaas:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_cmo-funciona-el-apadrinamiento:node/1040.
  $menu_links['main-menu_cmo-funciona-el-apadrinamiento:node/1040'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1040',
    'router_path' => 'node/%',
    'link_title' => 'Cómo funciona el apadrinamiento?',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Description of prapru.',
      ),
      'identifier' => 'main-menu_cmo-funciona-el-apadrinamiento:node/1040',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_apadrina:<front>',
  );
  // Exported menu link: main-menu_colabora:<front>.
  $menu_links['main-menu_colabora:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Colabora',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Description of stuchitrem.',
      ),
      'identifier' => 'main-menu_colabora:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_concenos:<front>.
  $menu_links['main-menu_concenos:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Conócenos',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Description of wrophipomuw.',
      ),
      'identifier' => 'main-menu_concenos:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_dnde-va-tu-dinero:node/1044.
  $menu_links['main-menu_dnde-va-tu-dinero:node/1044'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1044',
    'router_path' => 'node/%',
    'link_title' => 'Dónde va tu dinero?',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Description of pritrig.',
      ),
      'identifier' => 'main-menu_dnde-va-tu-dinero:node/1044',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_concenos:<front>',
  );
  // Exported menu link: main-menu_equipo:node/1043.
  $menu_links['main-menu_equipo:node/1043'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1043',
    'router_path' => 'node/%',
    'link_title' => 'Equipo',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Description of staj.',
      ),
      'identifier' => 'main-menu_equipo:node/1043',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_concenos:<front>',
  );
  // Exported menu link: main-menu_equipos-en-la-calle:node/1041.
  $menu_links['main-menu_equipos-en-la-calle:node/1041'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1041',
    'router_path' => 'node/%',
    'link_title' => 'Equipos en la calle',
    'options' => array(
      'identifier' => 'main-menu_equipos-en-la-calle:node/1041',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_concenos:<front>',
  );
  // Exported menu link: main-menu_hazte-socio:<front>.
  $menu_links['main-menu_hazte-socio:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Hazte socio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_hazte-socio:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_colabora:<front>',
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
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
    'parent_identifier' => 'main-menu_actualidad:<front>',
  );
  // Exported menu link: main-menu_los-padrinos:http://dona.worldvision.es/stopablacion/.
  $menu_links['main-menu_los-padrinos:http://dona.worldvision.es/stopablacion/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://dona.worldvision.es/stopablacion/',
    'router_path' => '',
    'link_title' => 'Los Padrinos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_los-padrinos:http://dona.worldvision.es/stopablacion/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_campaas:<front>',
  );
  // Exported menu link: main-menu_nuestro-trabajo:node/1045.
  $menu_links['main-menu_nuestro-trabajo:node/1045'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1045',
    'router_path' => 'node/%',
    'link_title' => 'Nuestro trabajo',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Description of prutibroha.',
      ),
      'identifier' => 'main-menu_nuestro-trabajo:node/1045',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_concenos:<front>',
  );
  // Exported menu link: main-menu_nuestros-proyectos:<front>.
  $menu_links['main-menu_nuestros-proyectos:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Nuestros proyectos',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Description of huwrus.',
      ),
      'identifier' => 'main-menu_nuestros-proyectos:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_proyecto-espaa:<front>.
  $menu_links['main-menu_proyecto-espaa:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Proyecto España',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_proyecto-espaa:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_colabora:<front>',
  );
  // Exported menu link: main-menu_quiero-ser-mayor:http://dona.worldvision.es/stopablacion/.
  $menu_links['main-menu_quiero-ser-mayor:http://dona.worldvision.es/stopablacion/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://dona.worldvision.es/stopablacion/',
    'router_path' => '',
    'link_title' => 'Quiero ser mayor',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_quiero-ser-mayor:http://dona.worldvision.es/stopablacion/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_campaas:<front>',
  );
  // Exported menu link: main-menu_salud-materno-infantil:<front>.
  $menu_links['main-menu_salud-materno-infantil:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Salud materno-infantil',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_salud-materno-infantil:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_hazte-socio:<front>',
  );
  // Exported menu link: main-menu_sobre-nosotros:node/1046.
  $menu_links['main-menu_sobre-nosotros:node/1046'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1046',
    'router_path' => 'node/%',
    'link_title' => 'Sobre nosotros',
    'options' => array(
      'identifier' => 'main-menu_sobre-nosotros:node/1046',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_concenos:<front>',
  );
  // Exported menu link: main-menu_solicita-informacin-sobre-el-apadrinamiento:<front>.
  $menu_links['main-menu_solicita-informacin-sobre-el-apadrinamiento:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Solicita información sobre el apadrinamiento',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Description of ch.',
      ),
      'identifier' => 'main-menu_solicita-informacin-sobre-el-apadrinamiento:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_apadrina:<front>',
  );
  // Exported menu link: main-menu_stop-ablacin:http://dona.worldvision.es/stopablacion/.
  $menu_links['main-menu_stop-ablacin:http://dona.worldvision.es/stopablacion/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://dona.worldvision.es/stopablacion/',
    'router_path' => '',
    'link_title' => 'Stop Ablación',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_stop-ablacin:http://dona.worldvision.es/stopablacion/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_campaas:<front>',
  );
  // Exported menu link: main-menu_voluntarios:node/1042.
  $menu_links['main-menu_voluntarios:node/1042'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1042',
    'router_path' => 'node/%',
    'link_title' => 'Voluntarios',
    'options' => array(
      'devel' => TRUE,
      'attributes' => array(
        'title' => 'Description of ph.',
      ),
      'identifier' => 'main-menu_voluntarios:node/1042',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_concenos:<front>',
  );
  // Exported menu link: main-menu_zimbabue:node/936.
  $menu_links['main-menu_zimbabue:node/936'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/936',
    'router_path' => 'node/%',
    'link_title' => 'Zimbabue',
    'options' => array(
      'identifier' => 'main-menu_zimbabue:node/936',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_nuestros-proyectos:<front>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ablación');
  t('Actualidad');
  t('Apadrina');
  t('Apadrina a un niño');
  t('Apadrina un proyecto');
  t('Apadrina una causa');
  t('Apadrinar a un niño ahora');
  t('Ayuda en emergencia');
  t('Campañas');
  t('Colabora');
  t('Conócenos');
  t('Cómo funciona el apadrinamiento?');
  t('Dónde va tu dinero?');
  t('Equipo');
  t('Equipos en la calle');
  t('Hazte socio');
  t('Home');
  t('Ir al blog');
  t('Los Padrinos');
  t('Nuestro trabajo');
  t('Nuestros proyectos');
  t('Proyecto España');
  t('Quiero ser mayor');
  t('Salud materno-infantil');
  t('Sobre nosotros');
  t('Solicita información sobre el apadrinamiento');
  t('Stop Ablación');
  t('Voluntarios');
  t('Zimbabue');

  return $menu_links;
}
