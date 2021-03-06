SET SESSION query_exec_time=0.1;

SET GLOBAL ENABLE_QUERY_RESPONSE_TIME_STATS=0;
EVAL SET GLOBAL QUERY_RESPONSE_TIME_RANGE_BASE=$base;
# Following two queries check works of FLUSH and 
# respecting of "QUERY_RESPONSE_TIME_STATS" variable (see launchpad bug #855312)
FLUSH QUERY_RESPONSE_TIME;
SHOW QUERY_RESPONSE_TIME;
SELECT * FROM INFORMATION_SCHEMA.QUERY_RESPONSE_TIME;
SET GLOBAL ENABLE_QUERY_RESPONSE_TIME_STATS=1;

SET SESSION query_exec_time=0.31; SELECT 1;
SET SESSION query_exec_time=0.32; SELECT 1;
SET SESSION query_exec_time=0.33; SELECT 1;
SET SESSION query_exec_time=0.34; SELECT 1;
SET SESSION query_exec_time=0.35; SELECT 1;
SET SESSION query_exec_time=0.36; SELECT 1;
SET SESSION query_exec_time=0.37; SELECT 1;
SET SESSION query_exec_time=0.38; SELECT 1;
SET SESSION query_exec_time=0.39; SELECT 1;
SET SESSION query_exec_time=0.4; SELECT 1;
SET SESSION query_exec_time=1.1; SELECT 1;
SET SESSION query_exec_time=1.2; SELECT 1;
SET SESSION query_exec_time=1.3; SELECT 1;
SET SESSION query_exec_time=1.5; SELECT 1;
SET SESSION query_exec_time=1.4; SELECT 1;
SET SESSION query_exec_time=0.5; SELECT 1;
SET SESSION query_exec_time=2.1; SELECT 1;
SET SESSION query_exec_time=2.3; SELECT 1;
SET SESSION query_exec_time=2.5; SELECT 1;
SET SESSION query_exec_time=3.1; SELECT 1;
SET SESSION query_exec_time=4.1; SELECT 1;
SET SESSION query_exec_time=5.1; SELECT 1;

SET SESSION query_exec_time=0.1;

SET GLOBAL ENABLE_QUERY_RESPONSE_TIME_STATS=0;

SHOW GLOBAL VARIABLES where Variable_name like 'QUERY_RESPONSE_TIME_RANGE_BASE';
SHOW QUERY_RESPONSE_TIME;
SELECT * FROM INFORMATION_SCHEMA.QUERY_RESPONSE_TIME;

SET SESSION query_exec_time=default;
