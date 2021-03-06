--source ../../include/init_spider.inc
let $VERSION_COMPILE_OS_WIN=
  `SELECT IF(@@version_compile_os like 'Win%', 1, 0)`;
if ($VERSION_COMPILE_OS_WIN)
{
  eval DROP SERVER s_2_1;
  eval CREATE SERVER s_2_1 FOREIGN DATA WRAPPER oracle OPTIONS (
    HOST '$ORACLE_HOST',
    DATABASE '$ORACLE_DATABASE',
    USER '$ORACLE_USER',
    PASSWORD '$ORACLE_PASSWORD',
    PORT $ORACLE_PORT
  );
  eval DROP SERVER s_2_2;
  eval CREATE SERVER s_2_2 FOREIGN DATA WRAPPER oracle OPTIONS (
    HOST '$ORACLE_HOST',
    DATABASE '$ORACLE_DATABASE',
    USER '$ORACLE_USER',
    PASSWORD '$ORACLE_PASSWORD',
    PORT $ORACLE_PORT
  );
  eval DROP SERVER s_2_3;
  eval CREATE SERVER s_2_3 FOREIGN DATA WRAPPER oracle OPTIONS (
    HOST '$ORACLE_HOST',
    DATABASE '$ORACLE_DATABASE',
    USER '$ORACLE_USER',
    PASSWORD '$ORACLE_PASSWORD',
    PORT $ORACLE_PORT
  );
  eval DROP SERVER s_3_1;
  eval CREATE SERVER s_3_1 FOREIGN DATA WRAPPER mysql OPTIONS (
    HOST 'localhost',
    DATABASE 'auto_test_local',
    USER 'root',
    PASSWORD '',
    PORT $CHILD3_1_MYPORT
  );
  eval DROP SERVER s_3_2;
  eval CREATE SERVER s_3_2 FOREIGN DATA WRAPPER mysql OPTIONS (
    HOST 'localhost',
    DATABASE 'auto_test_local',
    USER 'root',
    PASSWORD '',
    PORT $CHILD3_2_MYPORT
  );
  eval DROP SERVER s_3_3;
  eval CREATE SERVER s_3_3 FOREIGN DATA WRAPPER mysql OPTIONS (
    HOST 'localhost',
    DATABASE 'auto_test_local',
    USER 'root',
    PASSWORD '',
    PORT $CHILD2_3_MYPORT
  );
}
if (!$VERSION_COMPILE_OS_WIN)
{
  eval DROP SERVER s_2_1;
  eval CREATE SERVER s_2_1 FOREIGN DATA WRAPPER oracle OPTIONS (
    HOST '$ORACLE_HOST',
    DATABASE '$ORACLE_DATABASE',
    USER '$ORACLE_USER',
    PASSWORD '$ORACLE_PASSWORD',
    PORT $ORACLE_PORT
  );
  eval DROP SERVER s_2_2;
  eval CREATE SERVER s_2_2 FOREIGN DATA WRAPPER oracle OPTIONS (
    HOST '$ORACLE_HOST',
    DATABASE '$ORACLE_DATABASE',
    USER '$ORACLE_USER',
    PASSWORD '$ORACLE_PASSWORD',
    PORT $ORACLE_PORT
  );
  eval DROP SERVER s_2_3;
  eval CREATE SERVER s_2_3 FOREIGN DATA WRAPPER oracle OPTIONS (
    HOST '$ORACLE_HOST',
    DATABASE '$ORACLE_DATABASE',
    USER '$ORACLE_USER',
    PASSWORD '$ORACLE_PASSWORD',
    PORT $ORACLE_PORT
  );
  eval DROP SERVER s_3_1;
  eval CREATE SERVER s_3_1 FOREIGN DATA WRAPPER mysql OPTIONS (
    HOST 'localhost',
    DATABASE 'auto_test_local',
    USER 'root',
    PASSWORD '',
    SOCKET '$CHILD3_1_MYSOCK'
  );
  eval DROP SERVER s_3_2;
  eval CREATE SERVER s_3_2 FOREIGN DATA WRAPPER mysql OPTIONS (
    HOST 'localhost',
    DATABASE 'auto_test_local',
    USER 'root',
    PASSWORD '',
    SOCKET '$CHILD3_2_MYSOCK'
  );
  eval DROP SERVER s_3_3;
  eval CREATE SERVER s_3_3 FOREIGN DATA WRAPPER mysql OPTIONS (
    HOST 'localhost',
    DATABASE 'auto_test_local',
    USER 'root',
    PASSWORD '',
    SOCKET '$CHILD3_3_MYSOCK'
  );
}
