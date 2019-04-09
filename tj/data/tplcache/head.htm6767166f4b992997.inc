<?php
$z[0]=Array("field","(@me==\"\")? @me=\"active\":@me=\"\";",119,200);
$z[0][4]=array();
$z[0][4]['name']="typeid";
$z[0][4]['runphp']="yes";
$z[1]=Array("channelartlist","\n<li class=\"navitem\"> <a class='{dede:field.currentstyle/}' {dede:field name=typeid runphp=\"yes\"}\nglobal \$dsql;\n\$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\n\$row = \$dsql->GetOne(\$sql);      \n  @me=is_array(\$row)?'href=\"javascript:;\"':'';\n  {/dede:field} href=\"{dede:field name='typeurl'/}\" > <span data-title=\"{dede:field name='typename'/}\">{dede:field name='typename'/}</span>{dede:field name=typeid runphp=\"yes\"}\n  global \$dsql;\n  \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\n  \$row = \$dsql->GetOne(\$sql);      \n  @me=is_array(\$row)?'<i class=\"fa fa-angle-down\"></i>':'';\n  {/dede:field}</a> {dede:php}\n  \$id = \$refObj->Fields['id'];\n  \$sql = (\"SELECT * FROM dede_arctype where reid ='\$id'\");\n  \$db->SetQuery(\$sql);\n  \$db->Execute();\n  if(\$db->GetTotalRow()){\n  echo '\n  <ul class=\"subnav\">\n    ';\n    while(\$row = \$db->GetArray()){\n    \$url = str_replace('{cmspath}','',(\$row[typedir]));\n    echo \"\n    <li><a href=\".\$url.\">\".(\$row[typename]).\"</a></li>\n    \";\n    };\n    echo '\n  </ul>\n  ';\n  };\n  {/dede:php} </li>\n",277,1503);
$z[1][4]=array();
$z[1][4]['typeid']="top";
$z[1][4]['currentstyle']="active";

?>