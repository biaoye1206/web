<?php
$z[0]=Array("field","",311,340);
$z[0][4]=array();
$z[0][4]['name']="keywords";
$z[1]=Array("field","",379,438);
$z[1][4]=array();
$z[1][4]['name']="description";
$z[1][4]['function']="html2text(@me)";
$z[2]=Array("field","",1230,1249);
$z[2][4]=array();
$z[2][4]['name']="title";
$z[3]=Array("global","",1250,1276);
$z[3][4]=array();
$z[3][4]['name']="cfg_webname";
$z[4]=Array("list","\n              <div id=\"project_item_[field:global.autoindex/]\" class=\"item_block wow\" style=\"animation-delay:.[field:global.autoindex/]s\"> <a href=\"view.php?aid=[field:id/]\" class=\"item_link clearfix\">\n                <div class=\"item_img\"> <img src=\"[field:picname/]\" alt=\"[field:title/]\" />\n                  <div class=\"item_mask\"></div>\n                </div>\n                <div class=\"item_wrapper\">\n                  <div class=\"item_info\">\n                    <p class=\"title ellipsis\">[field:title/]</p>\n                    <p class=\"line\"></p>\n                    <p class=\"subtitle ellipsis\">[field:description/]...</p>\n                  </div>\n                </div>\n                </a> </div>\n              ",1993,2753);
$z[4][4]=array();
$z[4][4]['pagesize']="8";
$z[5]=Array("pagelist","",2924,2980);
$z[5][4]=array();
$z[5][4]['listitem']="pre,next,pageno";
$z[5][4]['listsize']="1";
$z[6]=Array("include","",3106,3145);
$z[6][4]=array();
$z[6][4]['filename']="footer_m.htm";
$z[7]=Array("type","list.php?tid=[field:id/]",3538,3596);
$z[7][4]=array();
$z[7][4]['typeid']="1";
$z[8]=Array("field","(@me==\"1\")? @me=\"active\":@me=\"\";",3605,3687);
$z[8][4]=array();
$z[8][4]['name']="typeid";
$z[8][4]['runphp']="yes";
$z[9]=Array("channel","\n        <li><a href=\"list.php?tid=[field:id/]\">[field:typename/]</a></li>\n        ",3713,3918);
$z[9][4]=array();
$z[9][4]['currentstyle']="<li><a href='~typelink~' class='active'>~typename~</a></li>";

?>