<?php
$z[0]=Array("field","",31,57);
$z[0][4]=array();
$z[0][4]['name']="currentstyle";
$z[1]=Array("field","\nglobal \$dsql;\n\$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\n\$row = \$dsql->GetOne(\$sql);      \n  @me=is_array(\$row)?'href=\"javascript:;\"':'';\n  ",59,316);
$z[1][4]=array();
$z[1][4]['name']="typeid";
$z[1][4]['runphp']="yes";
$z[2]=Array("field","",323,351);
$z[2][4]=array();
$z[2][4]['name']="typeurl";
$z[3]=Array("field","",373,402);
$z[3][4]=array();
$z[3][4]['name']="typename";
$z[4]=Array("field","",404,433);
$z[4][4]=array();
$z[4][4]['name']="typename";
$z[5]=Array("field","\n  global \$dsql;\n  \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\n  \$row = \$dsql->GetOne(\$sql);      \n  @me=is_array(\$row)?'<i class=\"fa fa-angle-down\"></i>':'';\n  ",440,716);
$z[5][4]=array();
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("php","\n  \$id = \$refObj->Fields['id'];\n  \$sql = (\"SELECT * FROM dede_arctype where reid ='\$id'\");\n  \$db->SetQuery(\$sql);\n  \$db->Execute();\n  if(\$db->GetTotalRow()){\n  echo '\n  <ul class=\"subnav\">\n    ';\n    while(\$row = \$db->GetArray()){\n    \$url = str_replace('{cmspath}','',(\$row[typedir]));\n    echo \"\n    <li><a href=\".\$url.\">\".(\$row[typename]).\"</a></li>\n    \";\n    };\n    echo '\n  </ul>\n  ';\n  };\n  ",721,1140);
$z[6][4]=array();

?>