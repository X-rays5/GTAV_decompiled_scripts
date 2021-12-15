#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93[65];
	float fLocal_289 = 0f;
	struct<3> Local_290 = { 0, 0, 0 } ;
	struct<3> Local_293 = { 0, 0, 0 } ;
	struct<3> Local_296 = { 0, 0, 0 } ;
	struct<3> Local_299 = { 0, 0, 0 } ;
	float fLocal_302 = 0f;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	float fLocal_323 = 0f;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	int iLocal_336 = 0;
	struct<3> Local_337[65];
	var uLocal_533[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_599[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	struct<68> Local_626 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	struct<535> Local_714 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_1249 = -1;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = -1082130432;
	var uLocal_1272 = 3;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = -1;
	var uLocal_1289 = 0;
	var uLocal_1290 = -1;
	var uLocal_1291 = -1;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = -1082130432;
	var uLocal_1314 = 3;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = -1;
	var uLocal_1331 = 0;
	var uLocal_1332 = -1;
	var uLocal_1333 = -1;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = -1082130432;
	var uLocal_1356 = 3;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = -1;
	var uLocal_1373 = 0;
	var uLocal_1374 = -1;
	var uLocal_1375 = -1;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = -1082130432;
	var uLocal_1398 = 3;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = -1;
	var uLocal_1415 = 0;
	var uLocal_1416 = -1;
	var uLocal_1417 = -1;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = -1082130432;
	var uLocal_1440 = 3;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = -1;
	var uLocal_1457 = 0;
	var uLocal_1458 = -1;
	var uLocal_1459 = -1;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = -1082130432;
	var uLocal_1482 = 3;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = -1;
	var uLocal_1499 = 0;
	var uLocal_1500 = -1;
	var uLocal_1501 = -1;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = -1082130432;
	var uLocal_1524 = 3;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = -1;
	var uLocal_1541 = 0;
	var uLocal_1542 = -1;
	var uLocal_1543 = -1;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = -1082130432;
	var uLocal_1566 = 3;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = -1;
	var uLocal_1583 = 0;
	var uLocal_1584 = -1;
	var uLocal_1585 = -1;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = -1082130432;
	var uLocal_1608 = 3;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = -1;
	var uLocal_1625 = 0;
	var uLocal_1626 = -1;
	var uLocal_1627 = -1;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = -1082130432;
	var uLocal_1650 = 3;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = -1;
	var uLocal_1667 = 0;
	var uLocal_1668 = -1;
	var uLocal_1669 = -1;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = -1082130432;
	var uLocal_1692 = 3;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = -1;
	var uLocal_1709 = 0;
	var uLocal_1710 = -1;
	var uLocal_1711 = -1;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = -1082130432;
	var uLocal_1734 = 3;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = -1;
	var uLocal_1751 = 0;
	var uLocal_1752 = -1;
	var uLocal_1753 = -1;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = -1082130432;
	var uLocal_1776 = 3;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = -1;
	var uLocal_1793 = 0;
	var uLocal_1794 = -1;
	var uLocal_1795 = -1;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = -1082130432;
	var uLocal_1818 = 3;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = -1;
	var uLocal_1835 = 0;
	var uLocal_1836 = -1;
	var uLocal_1837 = -1;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = -1082130432;
	var uLocal_1860 = 3;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = -1;
	var uLocal_1877 = 0;
	var uLocal_1878 = -1;
	var uLocal_1879 = -1;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = -1082130432;
	var uLocal_1902 = 3;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = -1;
	var uLocal_1919 = 0;
	var uLocal_1920 = -1;
	var uLocal_1921 = -1;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = -1082130432;
	var uLocal_1944 = 3;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = -1;
	var uLocal_1961 = 0;
	var uLocal_1962 = -1;
	var uLocal_1963 = -1;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = -1082130432;
	var uLocal_1986 = 3;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = -1;
	var uLocal_2003 = 0;
	var uLocal_2004 = -1;
	var uLocal_2005 = -1;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = -1082130432;
	var uLocal_2028 = 3;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = -1;
	var uLocal_2045 = 0;
	var uLocal_2046 = -1;
	var uLocal_2047 = -1;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = -1082130432;
	var uLocal_2070 = 3;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = -1;
	var uLocal_2087 = 0;
	var uLocal_2088 = -1;
	var uLocal_2089 = -1;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = -1082130432;
	var uLocal_2112 = 3;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = -1;
	var uLocal_2129 = 0;
	var uLocal_2130 = -1;
	var uLocal_2131 = -1;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = -1082130432;
	var uLocal_2154 = 3;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = -1;
	var uLocal_2171 = 0;
	var uLocal_2172 = -1;
	var uLocal_2173 = -1;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = -1082130432;
	var uLocal_2196 = 3;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = -1;
	var uLocal_2213 = 0;
	var uLocal_2214 = -1;
	var uLocal_2215 = -1;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = -1082130432;
	var uLocal_2238 = 3;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = -1;
	var uLocal_2255 = 0;
	var uLocal_2256 = -1;
	var uLocal_2257 = -1;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = -1082130432;
	var uLocal_2280 = 3;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = -1;
	var uLocal_2297 = 0;
	var uLocal_2298 = -1;
	var uLocal_2299 = -1;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = -1082130432;
	var uLocal_2322 = 3;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = -1;
	var uLocal_2339 = 0;
	var uLocal_2340 = -1;
	var uLocal_2341 = -1;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = -1082130432;
	var uLocal_2364 = 3;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = -1;
	var uLocal_2381 = 0;
	var uLocal_2382 = -1;
	var uLocal_2383 = -1;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = -1082130432;
	var uLocal_2406 = 3;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = -1;
	var uLocal_2423 = 0;
	var uLocal_2424 = -1;
	var uLocal_2425 = -1;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = -1082130432;
	var uLocal_2448 = 3;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = -1;
	var uLocal_2465 = 0;
	var uLocal_2466 = -1;
	var uLocal_2467 = -1;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = -1082130432;
	var uLocal_2490 = 3;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = -1;
	var uLocal_2507 = 0;
	var uLocal_2508 = -1;
	var uLocal_2509 = -1;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = -1082130432;
	var uLocal_2532 = 3;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = -1;
	var uLocal_2549 = 0;
	var uLocal_2550 = -1;
	var uLocal_2551 = -1;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = -1082130432;
	var uLocal_2574 = 3;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = -1;
	var uLocal_2591 = 0;
	var uLocal_2592 = -1;
	struct<12> Local_2593[32];
	struct<12> Local_2978 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_289 = 40000f;
	iLocal_325 = unk_0x5E54B0823F46079E();
	iLocal_326 = unk_0x5E54B0823F46079E();
	iLocal_327 = -1;
	iLocal_328 = -1;
	if (unk_0x25DDB354A40FFCDB())
	{
		if (!func_780(ScriptParam_0))
		{
			func_742();
		}
	}
	while (true)
	{
		func_741();
		if (func_734() || func_732())
		{
			func_742();
		}
		if (func_730())
		{
			func_742();
		}
		func_704();
		switch (func_703(unk_0x1EF8FCAB83E4BE53()))
		{
			case 0:
				if (func_702() == 1)
				{
					if (func_701())
					{
						func_700(unk_0x1EF8FCAB83E4BE53(), 1);
					}
				}
				break;
			
			case 1:
				if (func_702() == 1)
				{
					func_140();
					func_128();
				}
				else if (func_702() == 3)
				{
					func_700(unk_0x1EF8FCAB83E4BE53(), 3);
				}
				break;
			
			case 3:
				func_742();
				break;
		}
		if (unk_0xAFF96FDC3971E7EA())
		{
			switch (func_702())
			{
				case 0:
					if (func_115())
					{
						func_114(1);
					}
					break;
				
				case 1:
					if (Local_626.f_37 == 6)
					{
						func_114(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_303, 1000, 0))
					{
						func_114(3);
					}
					break;
				
				case 3:
					func_742();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
	if (unk_0x25DDB354A40FFCDB() && !bParam2)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x25DDB354A40FFCDB() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				*uParam0 = unk_0x29B9AF1CB5B8175D();
			}
		}
		else
		{
			*uParam0 = unk_0x578C4EF320340AF7();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	bool bVar0;
	
	if (func_44(2, 0, 0, 0, 0))
	{
		if (!unk_0xCE990E643CD9D0E5(Local_626.f_2, 0))
		{
			unk_0xBE20AB8238688965(&(Local_626.f_2), 0);
			Local_626.f_1 = unk_0x6CAAB7E78B5D978A();
		}
	}
	switch (Local_626.f_37)
	{
		case 0:
			if (func_43())
			{
				if (!func_31())
				{
					bVar0 = true;
				}
			}
			if (!bVar0)
			{
				func_30(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_626.f_43), func_29(), 0) || unk_0xCE990E643CD9D0E5(Local_626.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_626.f_38 = unk_0x6CAAB7E78B5D978A();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_626.f_39), func_28(0), 0) || unk_0xCE990E643CD9D0E5(Local_626.f_2, 0))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_626.f_2, 1))
				{
					Local_626.f_1 = unk_0x6CAAB7E78B5D978A();
					unk_0xBE20AB8238688965(&(Local_626.f_2), 1);
					func_27(&(Local_626.f_39), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&iLocal_328, &iLocal_327);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_626.f_41), 20000, 0) || Local_626.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_626.f_3))
				{
					func_27(&(Local_626.f_45), 0, 0);
					func_30(5);
				}
				else
				{
					func_30(6);
				}
			}
			else
			{
				func_31();
			}
			break;
		
		case 5:
			if (func_4())
			{
				func_30(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_626.f_67[iVar0 /*2*/].f_1) && !unk_0xA59F96B50B97E63C(unk_0x62D2FF718BC7717D(Local_626.f_67[iVar0 /*2*/].f_1), 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
		{
			iVar2 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar1));
			if (!func_7(iVar2))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_2593[iVar1 /*12*/].f_1, 1) || Local_2593[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (unk_0xCE990E643CD9D0E5(Local_2593[iVar1 /*12*/].f_1, 0))
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_7(int iParam0)
{
	if (func_8(iParam0))
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 8);
}

bool func_8(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)
{
	struct<14> Var0;
	var uVar14;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		uVar14 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(*iParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = 636452783;
			Var0.f_10 = uVar14;
			func_10(Var0, func_11(1));
		}
		*iParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = -1949011582;
	Param0.f_1 = unk_0x460153A63B9477BC();
	if (!iParam14 == 0)
	{
		unk_0xB802750B43D4047C(1, &Param0, 14, iParam14);
	}
}

int func_11(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
		{
			iVar2 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x460153A63B9477BC() || iParam0)
				{
					unk_0xBE20AB8238688965(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5A228A6A51E757C8(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440049.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			unk_0xBE20AB8238688965(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xCE990E643CD9D0E5(iVar3, iVar0))
		{
			func_23(iVar0);
			unk_0xBE20AB8238688965(&(Local_626.f_47), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0));
				if (unk_0x166E920FB00B2DBB(iVar4) && !func_14(iVar4, 0))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_626.f_50)
	{
		Local_626.f_50 = iVar1;
	}
	else
	{
		Local_626.f_66 = (Local_626.f_50 - iVar1);
	}
	if (iVar2 > Local_626.f_51)
	{
		Local_626.f_51 = iVar2;
	}
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_15(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_15(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
	}
	if (Global_1312876[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_16()
{
	return Global_1312763;
}

int func_17(int iParam0, bool bParam1)
{
	float fVar0;
	
	if (iParam0 >= 0 && iParam0 < 32)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_2593[iParam0 /*12*/].f_4);
	}
	else if (iParam0 == -1)
	{
		fVar0 = SYSTEM::TO_FLOAT(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_4);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_19())
		{
			return 1;
		}
	}
	if (func_18())
	{
		fVar0 = (fVar0 / 10f);
	}
	switch (Local_626.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_10947)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_10948)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_10949)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_10950)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_10951)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_10952)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_10953 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_10954)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_10955)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_10956)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_10957)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_10958))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_10959))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_11071)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_11072)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_10962))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_10964))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_10965))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_10966))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()
{
	switch (Local_626.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_19()
{
	if ((func_20(0) || func_20(1)) || func_20(2))
	{
		return 1;
	}
	return 0;
}

int func_20(int iParam0)
{
	if (iParam0 >= 0)
	{
		if (Local_626.f_4[iParam0] == unk_0x59E2AD1A8ACEDA31() && func_21(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_4, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_21(int iParam0, int iParam1)
{
	if (!func_22())
	{
		return iParam0 > iParam1;
	}
	if (iParam0 == 0)
	{
		iParam0 = 2147483647;
	}
	if (iParam1 == 0)
	{
		iParam1 = 2147483647;
	}
	return iParam0 < iParam1;
}

int func_22()
{
	switch (Local_626.f_3)
	{
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

void func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = Local_2593[iParam0 /*12*/].f_4;
	iVar1 = Local_2593[iParam0 /*12*/].f_4.f_2;
	if (!unk_0xCE990E643CD9D0E5(Local_626.f_48, iParam0))
	{
		fVar2 = SYSTEM::TO_FLOAT(Local_626.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_626.f_49++;
			unk_0xBE20AB8238688965(&(Local_626.f_48), iParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_626.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_626.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_626.f_4[iVar3] < 0 || func_21(iVar0, Local_2593[Local_626.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_2593[Local_626.f_4[iVar3] /*12*/].f_4, iVar1, Local_2593[Local_626.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_626.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_327 = iVar3;
				iLocal_328 = iParam0;
			}
			Local_626.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_626.f_4[iVar5] == iParam0)
				{
					Local_626.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_626.f_3 == 2)
	{
		if (iParam0 == iParam1 && iParam2 > iParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_25(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_26(int iParam0)
{
	int iVar0;
	
	if (unk_0xCE990E643CD9D0E5(Local_626.f_47, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_626.f_4[iVar0] == iParam0)
			{
				Local_626.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		unk_0xD2459066EA58CE43(&(Local_626.f_48), iParam0);
		unk_0xD2459066EA58CE43(&(Local_626.f_47), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x25DDB354A40FFCDB() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x6CAAB7E78B5D978A();
		}
		else
		{
			*uParam0 = unk_0x29B9AF1CB5B8175D();
		}
	}
	else
	{
		*uParam0 = unk_0x578C4EF320340AF7();
	}
	uParam0->f_1 = 1;
}

int func_28(bool bParam0)
{
	if (unk_0xCE990E643CD9D0E5(Local_626.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_626.f_3)
	{
		case 0:
			return Global_262145.f_10259;
		
		case 8:
			return Global_262145.f_10261;
		
		case 3:
			return Global_262145.f_10262;
		
		case 1:
			return Global_262145.f_11057;
		
		case 6:
			return Global_262145.f_11058;
		
		case 10:
			return Global_262145.f_11060;
		
		case 11:
			return Global_262145.f_11062;
		
		case 12:
			return Global_262145.f_11063;
		
		case 15:
			return Global_262145.f_11067;
		
		case 16:
			return Global_262145.f_11068;
		
		case 17:
			return Global_262145.f_11069;
		
		case 18:
			return Global_262145.f_11070;
		
		case 13:
			return Global_262145.f_11061;
		
		case 14:
			return Global_262145.f_11064;
		
		case 2:
			return Global_262145.f_10264;
		
		case 7:
			return Global_262145.f_11059;
		
		case 9:
			return Global_262145.f_11065;
		
		case 5:
			return Global_262145.f_10265;
		
		case 4:
			return Global_262145.f_10263;
		
		default:
	}
	return -1;
}

int func_29()
{
	return Global_262145.f_11027;
}

void func_30(int iParam0)
{
	Local_626.f_37 = iParam0;
}

int func_31()
{
	struct<2> Var0;
	struct<3> Var2;
	var uVar5;
	int iVar6;
	
	if (func_43() && ((Local_626.f_37 == 0 || func_5(Local_626.f_3)) || Local_626.f_54 < 10))
	{
		Var0 = { Local_626.f_67[iLocal_322 /*2*/] };
		if (func_42(Var0))
		{
			if (!unk_0xF7DE07F319727299(Var0.f_1))
			{
				if (func_40(Local_626.f_3, iLocal_322, &Var2, &uVar5))
				{
					Local_626.f_55[iLocal_322] = func_36(iLocal_322);
					if (unk_0xCE990E643CD9D0E5(Local_2593[Local_626.f_55[iLocal_322] /*12*/].f_2, iLocal_322))
					{
						if (func_33(&(Local_626.f_67[iLocal_322 /*2*/].f_1), Var0, Var2, uVar5, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							unk_0xE8E8B0AB0DDA30F4(unk_0x62D2FF718BC7717D(Local_626.f_67[iLocal_322 /*2*/].f_1), 1, 1);
							unk_0x5DC21979EC6C531F(unk_0x770D3B2B4702434A(Local_626.f_67[iLocal_322 /*2*/].f_1), 1);
							unk_0x7C47E49129337557(unk_0x770D3B2B4702434A(Local_626.f_67[iLocal_322 /*2*/].f_1), 1);
							unk_0x22BA2B3490860247(unk_0x770D3B2B4702434A(Local_626.f_67[iLocal_322 /*2*/].f_1), 0);
							func_32(unk_0x770D3B2B4702434A(Local_626.f_67[iLocal_322 /*2*/].f_1), 1);
							if (unk_0x6844807B17DC2DFC("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x00AF6A2AAFB41525(unk_0x770D3B2B4702434A(Local_626.f_67[iLocal_322 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x6844807B17DC2DFC("MPBitset", 3))
							{
								if (unk_0x871819940BD2E434(unk_0x770D3B2B4702434A(Local_626.f_67[iLocal_322 /*2*/].f_1), "MPBitset"))
								{
									iVar6 = unk_0x8C0800114C2864BE(unk_0x770D3B2B4702434A(Local_626.f_67[iLocal_322 /*2*/].f_1), "MPBitset");
								}
								unk_0xBE20AB8238688965(&iVar6, 10);
								unk_0xBE20AB8238688965(&iVar6, 11);
								unk_0x00AF6A2AAFB41525(unk_0x770D3B2B4702434A(Local_626.f_67[iLocal_322 /*2*/].f_1), "MPBitset", iVar6);
							}
							Local_626.f_55[iLocal_322] = -1;
							Local_626.f_54++;
						}
					}
				}
			}
		}
		iLocal_322++;
		if (iLocal_322 >= 10)
		{
			iLocal_322 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (unk_0x6844807B17DC2DFC("MPBitset", 3))
	{
		if (unk_0x871819940BD2E434(iParam0, "MPBitset"))
		{
			uVar0 = unk_0x8C0800114C2864BE(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0xBE20AB8238688965(&uVar0, 13);
		}
		else
		{
			unk_0xD2459066EA58CE43(&uVar0, 13);
		}
		unk_0x00AF6A2AAFB41525(iParam0, "MPBitset", uVar0);
	}
}

int func_33(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x003F998A2839DD5E(iParam1))
	{
		return 0;
	}
	if (!unk_0xCAF3836E98C401B1(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		unk_0xF27E737981AFB47D(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0xCE4780E24AFDFBF9(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0xAE06B9E39EBDE049(iVar1))
	{
		*uParam0 = unk_0x50ACD47FCBAD9F89(iVar1);
		Global_2540384.f_6583 = iVar1;
		if (unk_0xF7DE07F319727299(*uParam0))
		{
			if (bParam15)
			{
				unk_0xFA6E875B9DF13F14(iVar1, 1);
			}
			unk_0x7C47E49129337557(iVar1, iParam10);
			if (unk_0x4349BF35C5B9A49B(iVar1))
			{
				if (bParam8)
				{
					unk_0x342AB3CE1C296A56(*uParam0, 1);
				}
				else
				{
					unk_0x342AB3CE1C296A56(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xDB600F30FAA757F3(*uParam0, unk_0x460153A63B9477BC(), 1);
				}
			}
			unk_0xDBDEDE7005EE04EF(iVar1, iParam9);
			unk_0x6B75B3B5FAC90C06(iVar1, 1);
			if (bParam12)
			{
				unk_0x9DFE5167DB83E411(iVar1);
				unk_0x7C3ECA5C7ACE0DDB(iVar1, 5, 5, 1f);
			}
			func_34(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_34(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_35(unk_0x460153A63B9477BC(), Param0, iParam4) > -1)
	{
		if ((Global_2405074.f_2914[1 /*6*/].f_5 == iParam5 && Global_2405074.f_2914[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2405074.f_2914[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405074.f_2914[iVar0 /*6*/] = { Global_2405074.f_2914[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405074.f_2914[1 /*6*/] = { Param0 };
		Global_2405074.f_2914[1 /*6*/].f_3 = uParam3;
		Global_2405074.f_2914[1 /*6*/].f_4 = iParam4;
		Global_2405074.f_2914[1 /*6*/].f_5 = iParam5;
	}
}

int func_35(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (unk_0x0D77CDCF403AEBD2((Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	
	fVar2 = 1000000f;
	if (func_39(iParam0, &Var4, &uVar7))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0xEFA28384DDD283E1() - 1))
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
			{
				iVar8 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0));
				if (func_12(iVar8, 1, 1))
				{
					fVar3 = func_37(func_38(iVar8), Var4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_37(struct<3> Param0, struct<3> Param3)
{
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	return SYSTEM::VDIST(Param0, Param3);
}

Vector3 func_38(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), 0);
}

int func_39(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729.582f, -2943.77f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		
		case 1:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		
		case 2:
			*uParam1 = { 1073.972f, 3003.889f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		
		case 3:
			*uParam1 = { 1928.635f, 4702.327f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		
		case 4:
			*uParam1 = { 1278.65f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		
		case 5:
			*uParam1 = { -1700.407f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		
		case 6:
			*uParam1 = { -2733.589f, 2925.563f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		
		case 7:
			*uParam1 = { 1493.418f, -2442.99f, 64.9693f };
			*uParam2 = 52.9918f;
			break;
		
		case 8:
			*uParam1 = { 569.0449f, -772.5692f, 10.4088f };
			*uParam2 = 179.3501f;
			break;
		
		case 9:
			*uParam1 = { -905.1526f, 5548.172f, 5.5251f };
			*uParam2 = 95.8361f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_40(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (func_5(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -1729.582f, -2943.77f, 12.9443f };
				*uParam3 = 300.078f;
				break;
			
			case 1:
				*uParam2 = { 677.2984f, 769.7758f, 204.6846f };
				*uParam3 = 82.8903f;
				break;
			
			case 2:
				*uParam2 = { 1073.972f, 3003.889f, 40.5508f };
				*uParam3 = 333.2717f;
				break;
			
			case 3:
				*uParam2 = { 1928.635f, 4702.327f, 40.1958f };
				*uParam3 = 327.9112f;
				break;
			
			case 4:
				*uParam2 = { 1278.65f, 6579.366f, 1.505f };
				*uParam3 = 84.26f;
				break;
			
			case 5:
				*uParam2 = { -1700.407f, -829.8932f, 8.2542f };
				*uParam3 = 70.1811f;
				break;
			
			case 6:
				*uParam2 = { -2733.589f, 2925.563f, 1.2152f };
				*uParam3 = 173.6421f;
				break;
			
			case 7:
				*uParam2 = { 1493.418f, -2442.99f, 64.9693f };
				*uParam3 = 52.9918f;
				break;
			
			case 8:
				*uParam2 = { 569.0449f, -772.5692f, 10.4088f };
				*uParam3 = 179.3501f;
				break;
			
			case 9:
				*uParam2 = { -905.1526f, 5548.172f, 5.5251f };
				*uParam3 = 95.8361f;
				break;
			
			default:
				return 0;
		}
	}
	else if (func_41(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -3132.932f, 1130.534f, 19.683f };
				*uParam3 = 168.7723f;
				break;
			
			case 1:
				*uParam2 = { -1008.917f, -1640.027f, 3.4035f };
				*uParam3 = 235.1491f;
				break;
			
			case 2:
				*uParam2 = { 1075.063f, -2445.105f, 28.2896f };
				*uParam3 = 100.2369f;
				break;
			
			case 3:
				*uParam2 = { 1101.198f, -266.9387f, 68.3046f };
				*uParam3 = 359.2015f;
				break;
			
			case 4:
				*uParam2 = { 2658.878f, 1667.581f, 23.4886f };
				*uParam3 = 90.4833f;
				break;
			
			case 5:
				*uParam2 = { -399.1095f, 874.6328f, 230.2586f };
				*uParam3 = 107.5929f;
				break;
			
			case 6:
				*uParam2 = { 156.5429f, 3117.213f, 41.5677f };
				*uParam3 = 218.5338f;
				break;
			
			case 7:
				*uParam2 = { -2242.923f, 4315.749f, 46.7647f };
				*uParam3 = 236.8359f;
				break;
			
			case 8:
				*uParam2 = { -143.7363f, 6500.573f, 28.7366f };
				*uParam3 = 116.1312f;
				break;
			
			case 9:
				*uParam2 = { 1939.475f, 4628.652f, 39.3984f };
				*uParam3 = 350.0428f;
				break;
			
			default:
				return 0;
			}
	}
	return 1;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x78FCB2E22C41B9D5(iParam0);
	return unk_0x7D167B9A0CCDA347(iParam0);
}

bool func_43()
{
	return (func_5(Local_626.f_3) || func_41(Local_626.f_3));
}

int func_44(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_113(unk_0x460153A63B9477BC(), 0) || func_110(unk_0x460153A63B9477BC(), 0))
	{
		if (func_109(unk_0x460153A63B9477BC()) || func_107(unk_0x460153A63B9477BC()))
		{
			bParam2 = false;
		}
	}
	if (unk_0xDD3720600B3FC529() < iParam0)
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 1);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	if (func_47(&(Global_1574656.f_18)))
	{
		if (!func_1(&(Global_1574656.f_18), 7500, 0))
		{
			return 0;
		}
		func_46(&(Global_1574656.f_18));
	}
	if (func_45())
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 0);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xB9E6DF0411C3488E() < iParam0)
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 1);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_45()
{
	return unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 0);
}

void func_46(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_47(var uParam0)
{
	return uParam0->f_1;
}

void func_48(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xA2C3707E24751958(0, iParam1);
			break;
		
		default:
			uVar1 = func_49(iParam1);
			iVar0 = unk_0xFCBF95335DD16537(uVar1);
			if (unk_0xCE990E643CD9D0E5(iVar0, iParam0))
			{
				unk_0xD2459066EA58CE43(&iVar0, iParam0);
				unk_0xA2C3707E24751958(iVar0, iParam1);
			}
			break;
	}
}

int func_49(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_16();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

bool func_50(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	uVar0 = func_49(iParam1);
	uVar1 = unk_0xFCBF95335DD16537(uVar0);
	return unk_0xCE990E643CD9D0E5(uVar1, iParam0);
}

void func_51(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 2) && !func_8(unk_0x460153A63B9477BC())) && !func_7(unk_0x460153A63B9477BC()))
	{
		if (unk_0x7BCC91F3C1CF24E8(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0x7BCC91F3C1CF24E8(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_52(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 2);
	}
}

int func_52(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_106(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_104(&(Var0.f_69), iParam7);
	}
	return func_53(&Var0);
}

int func_53(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2440049.f_3156)
		{
			return 0;
		}
	}
	func_68(uParam0, uParam0->f_17);
	func_65(uParam0);
	if (func_64())
	{
		func_65(uParam0);
	}
	if (func_63(uParam0->f_1))
	{
		func_56();
		if (Global_2440049.f_2834[0 /*80*/].f_2 == 0)
		{
			Global_2440049.f_2834[0 /*80*/] = { *uParam0 };
			if (func_55(uParam0->f_69, 8192))
			{
				Global_1663777 = 1;
			}
			return 1;
		}
		if (((Global_2440049.f_2834[0 /*80*/].f_1 == 13 || Global_2440049.f_2834[0 /*80*/].f_1 == 53) || Global_2440049.f_2834[0 /*80*/].f_1 == 54) || Global_2440049.f_2834[0 /*80*/].f_1 == 58)
		{
			Global_2440049.f_2834[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2440049.f_2834[iVar0 + 1 /*80*/] = { Global_2440049.f_2834[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2440049.f_2834[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_2 == 0)
		{
			Global_2440049.f_2834[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_56();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_104(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 2);
				Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_55(uParam0->f_69, 128))
			{
				if (func_54(Global_2440049.f_2834[iVar0 /*80*/].f_1))
				{
					Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
					func_104(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_55(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_56()
{
	bool bVar0;
	
	if (Global_2440049.f_3157)
	{
		return;
	}
	if (!Global_77101)
	{
		Global_77101 = 1;
		bVar0 = true;
	}
	func_57();
	if (bVar0)
	{
		Global_77101 = 0;
	}
}

void func_57()
{
	Global_2440049.f_3158 = 0;
	Global_2440049.f_3158.f_578 = 0;
	func_61(&(Global_2440049.f_3158.f_1));
	Global_2440049.f_3158.f_1.f_1 = 0;
	func_58(&(Global_2440049.f_3158.f_1), 1);
}

void func_58(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x2E352DDBBF674246(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0xF8EDFF98A9C94C74())
		{
			unk_0x830F007E19C63E14(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xF1B28F753235CE2A(0);
			unk_0xE1FDD153F5858534();
		}
		unk_0x2E352DDBBF674246(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xFF8E7A064055ECA6(0);
		uParam0->f_564 = 0;
	}
	if (!Global_77101)
	{
		if (!unk_0x252C34B7867FDDFA(unk_0x2639A2323BEA8CC6()))
		{
			if (!Global_77102)
			{
				if (unk_0x03DB5C6AABF8DA46() && !func_60(0))
				{
					unk_0xFD45D90342D2A0CD(800);
				}
			}
		}
	}
	func_59(0);
}

void func_59(int iParam0)
{
	Global_77093 = iParam0;
	Global_77094 = iParam0;
}

bool func_60(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_61(var uParam0)
{
	func_62(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_62(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_63(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_64()
{
	return Global_2451787.f_18;
}

void func_65(var uParam0)
{
	if (func_67(uParam0->f_1))
	{
		uParam0->f_72 = func_66();
	}
}

int func_66()
{
	return 21;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_68(var uParam0, int iParam1)
{
	if (func_67(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_103() || !func_12(iParam1, 0, 1))
	{
		return;
	}
	if (func_54(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_69(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_69(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_101(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x6CC163E30ECE0790(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_77785[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_101(unk_0x460153A63B9477BC()) || (func_100() && func_99())) && !unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 31)) && !bParam4)
	{
		uVar1 = func_98();
		if (unk_0xAE06B9E39EBDE049(uVar1))
		{
			if (unk_0xD0390A93AF3907B8(iVar1))
			{
				if (unk_0xE4400E48E081F17A(iVar1) != -1)
				{
					if (func_12(unk_0xE4400E48E081F17A(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
						{
							if (Global_4456448.f_77785[iParam1] != -1)
							{
								return func_96(iParam1, iParam0, 0);
							}
							else
							{
								return func_82(iParam0, unk_0xE4400E48E081F17A(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_82(iParam0, unk_0xE4400E48E081F17A(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
			{
				if (Global_4456448.f_77785[iParam1] != -1)
				{
					return func_96(iParam1, iParam0, 0);
				}
				else
				{
					return func_70(0, -1, 0);
				}
			}
			else
			{
				return func_70(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
	{
		if (Global_4456448.f_77785[iParam1] != -1)
		{
			return func_96(iParam1, iParam0, 0);
		}
		else
		{
			return func_82(iParam0, unk_0x460153A63B9477BC(), iParam1, bParam2, bParam3);
		}
	}
	return func_82(iParam0, unk_0x460153A63B9477BC(), iParam1, bParam2, bParam3);
}

int func_70(bool bParam0, int iParam1, bool bParam2)
{
	return func_71(unk_0x460153A63B9477BC(), bParam0, iParam1, bParam2);
}

int func_71(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x166E920FB00B2DBB(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x6CC163E30ECE0790(iParam0);
	if ((func_81() || (func_80() && func_78())) && Global_1388252.f_1)
	{
		if (bParam1)
		{
			return func_77(iParam2, iVar0);
		}
		else
		{
			return func_77(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_76(iVar0, iParam2, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_75(1);
				}
				else
				{
					return func_75(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 20))
			{
				return func_72(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_72(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_75(1);
	}
	return func_75(0);
}

int func_72(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_74(iParam0, iParam1, iParam3);
	if (func_73(Global_4456448.f_82708, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_73(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_129348 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9021[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_76(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 0);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 1);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 2);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 4);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 5);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 6);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 8);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 9);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 10);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 12);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 13);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 14);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_74(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_78()
{
	if (func_79())
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 4);
}

bool func_79()
{
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_123318, 12);
}

bool func_80()
{
	if (unk_0xFC559366953F62B3())
	{
		return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0);
	}
	return ((unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0) || Global_1655243) && unk_0x7B70881748D166CD(joaat("fm_deathmatch_creator")) > 0);
}

int func_81()
{
	if (func_79() && unk_0xFC559366953F62B3())
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x6CC163E30ECE0790(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590682[iVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_91())
			{
				iVar3 = func_87(iParam0);
				if (!iVar3 == -1)
				{
					return func_85(iVar3);
				}
			}
			if ((func_84(iParam1, iParam0, iVar0, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)) || ((func_76(unk_0x6CC163E30ECE0790(iParam1), unk_0x6CC163E30ECE0790(iParam0), 0) && unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 23)) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)))
			{
				return func_75(1);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26))
			{
				return func_83(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574416 || Global_1574407) || Global_1590682[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574416 == 1 && Global_1574426 == 0))
			{
				return func_75(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574411 && Global_1573907.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_87(iParam0);
	if (!iVar4 == -1)
	{
		return func_85(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_83(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(iParam0) == -1 && unk_0x6CC163E30ECE0790(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x6CC163E30ECE0790(iParam0) == unk_0x6CC163E30ECE0790(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x6CC163E30ECE0790(iParam0) == iParam2;
	}
	return unk_0x6CC163E30ECE0790(iParam0) == iParam2;
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_86(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_86(int iParam0)
{
	return Global_2417956.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_87(int iParam0)
{
	if (!iParam0 == func_103())
	{
		if (func_89(iParam0, 1))
		{
			return Global_2417956.f_818.f_11[func_88(iParam0)];
		}
	}
	return -1;
}

int func_88(int iParam0)
{
	if (iParam0 != func_103())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_103();
}

bool func_89(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_90(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_103();
}

int func_90(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_103())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_91()
{
	if ((((func_95() || func_94()) || func_64()) || func_93()) || func_92())
	{
		return 1;
	}
	if (unk_0xFC559366953F62B3() && unk_0xCE990E643CD9D0E5(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

var func_92()
{
	return Global_2451787.f_23;
}

bool func_93()
{
	return Global_2451787.f_20;
}

var func_94()
{
	return Global_2451787.f_17;
}

var func_95()
{
	return Global_2451787.f_16;
}

int func_96(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969055.f_14[iParam0];
	if (func_91())
	{
		iVar2 = func_87(iParam1);
		if (!iVar2 == -1)
		{
			return func_85(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_592[iParam0 /*16355*/].f_7079[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_103())
	{
		if (Global_4456448.f_77785[iParam0] != -1 && Global_4456448.f_77785[iParam0] <= 4)
		{
			if (Global_4456448.f_77785[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_77785[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_77785[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_77785[iParam0] == 4)
			{
				if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_77785[iParam0];
			}
		}
		else
		{
			iVar0 = func_71(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_21, 13))
		{
			iVar0 = func_97(iParam0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26) && !func_76(iParam0, unk_0x6CC163E30ECE0790(iParam1), 0))
		{
			iVar0 = func_83(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_97(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_129476;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_129477;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_129478;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_129479;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_98()
{
	return Global_2359302.f_2;
}

bool func_99()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 4);
}

bool func_100()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

int func_101(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_102())
	{
		if (iParam0 == unk_0x460153A63B9477BC())
		{
			return 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_102()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_103()
{
	return -1;
}

void func_104(var uParam0, int iParam1)
{
	func_105(uParam0, iParam1);
}

void func_105(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_106(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_103();
	uParam1->f_18 = func_103();
	uParam1->f_19 = func_103();
	uParam1->f_20 = func_103();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

bool func_107(int iParam0)
{
	return func_108(iParam0, 20);
}

bool func_108(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_108(iParam0, 9);
	}
	return 0;
}

int func_110(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 && func_111(Global_1630317[iParam0 /*595*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1)
	{
		if (func_111(Global_1630317[iParam0 /*595*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_112(iParam0, 0);
	return 0;
}

int func_112(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_113(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_114(int iParam0)
{
	Local_626 = iParam0;
}

int func_115()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_626.f_4[iVar0] = -1;
		iVar0++;
	}
	func_46(&(Local_626.f_39));
	func_120();
	if (func_43())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_626.f_55[iVar0] = func_36(iVar0);
			iVar0++;
		}
		func_116();
	}
	return 1;
}

void func_116()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_41(Local_626.f_3))
		{
			Local_626.f_67[iVar0 /*2*/] = func_119();
		}
		else
		{
			Local_626.f_67[iVar0 /*2*/] = func_117();
		}
		iVar0++;
	}
}

int func_117()
{
	int iVar0;
	
	switch (Local_626.f_3)
	{
		case 12:
			return func_118();
			break;
	}
	iVar0 = unk_0x344C570D6F8700DF(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		
		case 1:
			return joaat("mammatus");
		
		default:
	}
	return 0;
}

int func_118()
{
	int iVar0;
	
	iVar0 = unk_0x344C570D6F8700DF(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("stunt");
		
		case 1:
			return joaat("besra");
		
		default:
	}
	return 0;
}

int func_119()
{
	int iVar0;
	
	iVar0 = unk_0x344C570D6F8700DF(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("sanchez");
		
		case 1:
			return joaat("pcj");
		
		default:
	}
	return 0;
}

void func_120()
{
	int iVar0;
	
	iVar0 = func_124();
	Local_626.f_3 = iVar0;
	func_121(func_123(133, iVar0, 0, 0));
}

void func_121(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.x = -438498801;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = iParam0;
	iVar3 = func_122(1, 1);
	if (!iVar3 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 3, iVar3);
	}
}

var func_122(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x460153A63B9477BC() || iParam0)
			{
				if (bParam1)
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	return -1;
}

int func_124()
{
	int iVar0[19];
	float fVar20;
	int iVar21;
	float fVar22;
	
	iVar0[0] = Global_262145.f_11356;
	iVar0[1] = Global_262145.f_11029;
	iVar0[2] = Global_262145.f_11360;
	iVar0[3] = Global_262145.f_11358;
	iVar0[4] = Global_262145.f_11359;
	iVar0[5] = Global_262145.f_11361;
	iVar0[6] = Global_262145.f_11030;
	iVar0[7] = Global_262145.f_11031;
	iVar0[8] = Global_262145.f_11357;
	iVar0[9] = Global_262145.f_11037;
	iVar0[10] = Global_262145.f_11032;
	iVar0[11] = Global_262145.f_11034;
	iVar0[12] = Global_262145.f_11035;
	iVar0[13] = Global_262145.f_11033;
	iVar0[14] = Global_262145.f_11036;
	iVar0[15] = Global_262145.f_11039;
	iVar0[16] = Global_262145.f_11040;
	iVar0[17] = Global_262145.f_11041;
	iVar0[18] = Global_262145.f_11042;
	fVar20 = 0f;
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		if (func_127(iVar21) || func_125(133, iVar21, 0, 0))
		{
			iVar0[iVar21] = 0f;
		}
		else
		{
			fVar20 = (fVar20 + iVar0[iVar21]);
		}
		iVar21++;
	}
	fVar22 = unk_0x658086F2B3C5E4E4(0f, fVar20);
	iVar21 = 0;
	while (iVar21 < iVar0)
	{
		if (fVar22 <= iVar0[iVar21])
		{
			return iVar21;
		}
		fVar22 = (fVar22 - iVar0[iVar21]);
		iVar21++;
	}
	return func_124();
}

int func_125(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return 0;
		
		default:
	}
	iVar1 = func_126(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8113)
		{
			if (Global_2508189.f_136[iVar0 /*2*/] == iVar1 && Global_2508189.f_136[iVar0 /*2*/].f_1 == func_123(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		case 150:
			return 20;
		
		default:
	}
	return -1;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10252;
		
		case 1:
			return Global_262145.f_11043;
		
		case 6:
			return Global_262145.f_11044;
		
		case 7:
			return Global_262145.f_11045;
		
		case 8:
			return Global_262145.f_10253;
		
		case 3:
			return Global_262145.f_10254;
		
		case 4:
			return Global_262145.f_10255;
		
		case 2:
			return Global_262145.f_10256;
		
		case 5:
			return Global_262145.f_10258;
		
		case 9:
			return Global_262145.f_11051;
		
		case 10:
			return Global_262145.f_11046;
		
		case 11:
			return Global_262145.f_11048;
		
		case 12:
			return Global_262145.f_11049;
		
		case 15:
			return Global_262145.f_11053;
		
		case 16:
			return Global_262145.f_11054;
		
		case 17:
			return Global_262145.f_11055;
		
		case 18:
			return Global_262145.f_11056;
		
		case 13:
			return Global_262145.f_11047;
		
		case 14:
			return Global_262145.f_11050;
		
		default:
	}
	return 1;
}

void func_128()
{
	int iVar0;
	
	if (func_43())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_626.f_55[iVar0] == unk_0x59E2AD1A8ACEDA31())
			{
				if (func_129(iVar0))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_2, iVar0))
					{
						unk_0xBE20AB8238688965(&(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_2), iVar0);
					}
				}
				else if (unk_0xCE990E643CD9D0E5(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_2, iVar0))
				{
					unk_0xD2459066EA58CE43(&(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_2), iVar0);
				}
			}
			else if (unk_0xCE990E643CD9D0E5(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_2, iVar0))
			{
				unk_0xD2459066EA58CE43(&(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_2), iVar0);
			}
			iVar0++;
		}
	}
}

int func_129(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (func_39(iParam0, &Var0, &uVar3))
	{
		if (func_130(Var0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_130(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405074.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x160FF3CA76647557(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x11C93463B5150761(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x11C93463B5150761(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xF666C0F9CA439368(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam13)
	{
		if (unk_0x7B4B68137DA4DF12(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (fParam14 > 0f)
	{
		if (func_135(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_131(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

int func_131(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0x460153A63B9477BC(), 1, 1))
		{
			if (!unk_0x03DB5C6AABF8DA46())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x272784C60C397DB6(func_133(unk_0x460153A63B9477BC()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x9A70B1BD2A5BA09C(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_12(iVar1, 1, 1))
		{
			if (!func_14(iVar1, 0) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x460153A63B9477BC()))
				{
					if ((func_132(iVar1) || !bParam10) && !Global_2425869[iVar1 /*443*/].f_263)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x6CC163E30ECE0790(iVar1) == -1)
							{
								if (unk_0x6CC163E30ECE0790(iVar1) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x6CC163E30ECE0790(iVar1) != unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))) || unk_0x6CC163E30ECE0790(iVar1) == -1)
							{
								if (unk_0x272784C60C397DB6(func_133(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x6CC163E30ECE0790(iVar1) != iParam8 || unk_0x6CC163E30ECE0790(iVar1) == -1)
						{
							if (unk_0x272784C60C397DB6(func_133(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_132(int iParam0)
{
	if (unk_0xEB7D4DA50142DE0A(unk_0x1FA7B77001D60F9D(iParam0)) || Global_2425869[iParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

Vector3 func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_64() && Global_1590682[iVar0 /*883*/].f_854) && !func_134(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_38(iParam0);
}

int func_134(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_135(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x460153A63B9477BC() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
				{
					if (!bParam7 || (!unk_0x5AEB5DDFFAD43CA5(unk_0x1FA7B77001D60F9D(iVar1)) && func_132(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) != unk_0x6CC163E30ECE0790(iVar1))) || unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && uParam9) && bParam6) && func_136(iVar1))
							{
							}
							else if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
							{
								if (unk_0x272784C60C397DB6(func_38(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_136(int iParam0)
{
	if (func_139(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	Global_2515173 = { func_138(iParam0) };
	if (unk_0x78A7795C9C51946D(&Global_2515173))
	{
		return 1;
	}
	if (func_137(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_88(iParam0);
	if (!iVar0 == func_103())
	{
		if (iVar0 == func_88(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_138(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

int func_139(int iParam0, int iParam1)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		Global_2515173 = { func_138(iParam0) };
		Global_2515186 = { func_138(iParam1) };
		if (unk_0xBF9EC1ED7E386622(&Global_2515173))
		{
			if (unk_0xBF9EC1ED7E386622(&Global_2515186))
			{
				unk_0x192BD21E18525C69(&Global_2515103, 35, &Global_2515173);
				unk_0x192BD21E18525C69(&Global_2515138, 35, &Global_2515186);
				if (Global_2515103 == Global_2515138)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_140()
{
	float fVar0;
	float fVar1;
	
	func_697();
	func_696();
	if (func_694())
	{
		func_579();
	}
	if (!func_7(unk_0x460153A63B9477BC()))
	{
		if (func_554(0, 1, 1))
		{
			if (unk_0xCE990E643CD9D0E5(iLocal_317, 6))
			{
				unk_0xD2459066EA58CE43(&iLocal_317, 6);
			}
			switch (Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_3)
			{
				case 0:
					if (Local_626.f_37 < 2)
					{
						if (Local_626.f_37 > 0)
						{
							if (Local_626.f_3 != -1)
							{
								func_553(1);
								func_552(1);
							}
						}
					}
					else
					{
						func_552(2);
					}
					break;
				
				case 1:
					func_546(9);
					if (Local_2978.f_8 == 0)
					{
						Local_2978.f_8 = unk_0x5A002C4821A13338();
					}
					if (Local_626.f_37 >= 2)
					{
						func_552(2);
						Local_2978.f_9 = unk_0x5A002C4821A13338();
					}
					if (func_43())
					{
						func_546(0);
					}
					func_544((func_29() - func_545(&(Local_626.f_43), 0, 0)));
					func_541(func_543((func_29() - func_545(&(Local_626.f_43), 0, 0)), 0), func_542(Local_626.f_3));
					func_478(0, func_540());
					func_451();
					func_428();
					if (func_427())
					{
						func_426();
					}
					break;
				
				case 2:
					if (Local_626.f_37 > 2)
					{
						func_553(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_425())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_407(133, fVar0, fVar1, 0, 0, 0, 0);
						func_406(Local_626.f_3, 1);
						func_405(23, 1);
						if (Local_2978.f_8 == 0)
						{
							Local_2978.f_8 = unk_0x5A002C4821A13338();
						}
						if (Local_2978.f_9 == 0)
						{
							Local_2978.f_9 = unk_0x5A002C4821A13338();
						}
						func_401();
						unk_0xFB7DCD4289A91C1E(1);
						if (func_425())
						{
							unk_0x34FEEAC2548C3789(0f);
							unk_0x53797676AD34A9AA(0);
						}
						if (Local_626.f_3 == 14)
						{
							func_400(&Local_337);
						}
						func_399();
						if (!func_7(unk_0x460153A63B9477BC()))
						{
							func_52(63, "AMCH_STARTED", func_398(Local_626.f_3), func_66(), -1, func_66(), 1, 0);
							if (func_395("AMCH_WARN", func_397(Local_626.f_3), func_396(Local_626.f_3)))
							{
								unk_0xD289B55B6AADBA10(1);
							}
						}
						if (func_43())
						{
							func_377(678f, 794f, 206f, 8f, 0);
							func_377(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_377(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_552(3);
					}
					break;
				
				case 3:
					if (Local_626.f_37 > 3)
					{
						iLocal_319 = 0;
						func_552(4);
					}
					else
					{
						if (!unk_0xCE990E643CD9D0E5(Local_626.f_2, 1))
						{
							func_335();
							func_332();
							func_331();
						}
						if (func_330(0) && !func_20(0))
						{
							func_329();
						}
					}
					if (func_425())
					{
						unk_0xA2FFEA2766563CF9(unk_0x460153A63B9477BC());
					}
					func_328();
					func_303();
					func_579();
					func_478(0, 1);
					func_451();
					func_428();
					func_546(2);
					func_546(5);
					func_546(7);
					break;
				
				case 4:
					if (func_292(&uLocal_329, !unk_0xCE990E643CD9D0E5(Local_626.f_2, 0)) || unk_0xCE990E643CD9D0E5(Local_626.f_2, 0))
					{
						if (func_5(Local_626.f_3))
						{
							if (Local_626.f_37 == 5)
							{
								func_552(5);
							}
						}
						else
						{
							func_552(6);
						}
					}
					func_279();
					func_172();
					func_303();
					func_579();
					func_478(1, 1);
					func_399();
					break;
				
				case 5:
					if (Local_626.f_37 > 5)
					{
						func_552(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_167();
		}
	}
	else
	{
		func_167();
	}
	func_147();
	func_142();
	func_141();
}

void func_141()
{
	struct<2> Var0;
	int iVar2;
	
	if (func_43())
	{
		Var0 = { Local_626.f_67[iLocal_336 /*2*/] };
		if (unk_0xF7DE07F319727299(Var0.f_1))
		{
			iVar2 = unk_0x770D3B2B4702434A(Var0.f_1);
			if (unk_0xAA5B806352173DEA(iVar2))
			{
				if (!unk_0x80FF6C016CDB0FAF(iVar2, 0))
				{
					unk_0xE730EAF558C97567(&iVar2);
				}
			}
		}
		iLocal_336++;
		if (iLocal_336 >= 10)
		{
			iLocal_336 = 0;
			iLocal_625 = iLocal_624;
			iLocal_624 = 0;
		}
	}
}

void func_142()
{
	if (Local_626.f_37 == 5)
	{
		if (unk_0xF7DE07F319727299(Local_626.f_67[iLocal_336 /*2*/].f_1))
		{
			if (!unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(Local_626.f_67[iLocal_336 /*2*/].f_1), 0))
			{
				if (!unk_0xCE990E643CD9D0E5(iLocal_612, iLocal_336))
				{
					unk_0xBE20AB8238688965(&iLocal_612, iLocal_336);
					iLocal_613[iLocal_336] = unk_0x5E54B0823F46079E();
					unk_0x2DB2D4C3CB88500D(iLocal_613[iLocal_336], "Explosion_Countdown", unk_0x770D3B2B4702434A(Local_626.f_67[iLocal_336 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0xD4974F3117C9F232(iLocal_613[iLocal_336], "Time", 30f);
				}
				if ((30000 - func_545(&(Local_626.f_45), 0, 0)) >= 0)
				{
					if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_626.f_67[iLocal_336 /*2*/].f_1), 0))
					{
						func_546(1);
						iLocal_624 = 1;
					}
				}
				else if (unk_0xF05B7723022657B3(Local_626.f_67[iLocal_336 /*2*/].f_1))
				{
					unk_0xBB7976F6FB9C9DD2(unk_0x770D3B2B4702434A(Local_626.f_67[iLocal_336 /*2*/].f_1));
					unk_0x9B751DD1E3DE899A(unk_0x770D3B2B4702434A(Local_626.f_67[iLocal_336 /*2*/].f_1), 1, 0, -1);
				}
			}
			else if (unk_0xCE990E643CD9D0E5(iLocal_612, iLocal_336) && !unk_0x046706CBB367B768(iLocal_613[iLocal_336]))
			{
				unk_0xC5E5600D1CF5CEF9(iLocal_613[iLocal_336]);
			}
		}
		if (iLocal_625)
		{
			if (!func_101(unk_0x460153A63B9477BC()))
			{
				func_144(func_543((30000 - func_545(&(Local_626.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				func_143();
			}
		}
	}
}

void func_143()
{
	Global_1378744.f_1130 = 1;
}

void func_144(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_146(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_145(7, iVar0);
		Global_1378744.f_4573[iVar0] = iParam0;
		StringCopy(&(Global_1378744.f_4573.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_4573.f_172[iVar0] = iParam2;
		Global_1378744.f_4573.f_216[iVar0] = iParam3;
		Global_1378744.f_4573.f_183[iVar0] = iParam4;
		Global_1378744.f_4573.f_194[iVar0] = iParam5;
		Global_1378744.f_4573.f_249[iVar0] = iParam6;
		Global_1378744.f_4573.f_260[iVar0] = iParam7;
		Global_1378744.f_4573.f_205[iVar0] = iParam8;
		Global_1378744.f_4573.f_314[iVar0] = iParam9;
		Global_1378744.f_4573.f_325[iVar0] = iParam10;
		Global_1378744.f_4573.f_357[iVar0] = iParam11;
		Global_1378744.f_4573.f_238[iVar0] = iParam12;
		Global_1378744.f_4573.f_271[iVar0] = iParam13;
		Global_1378744.f_4573.f_368[iVar0] = iParam14;
		Global_1378744.f_4573.f_379[iVar0] = iParam15;
		Global_1378744.f_4573.f_390[iVar0] = iParam16;
		Global_1378744.f_4573.f_227[iVar0] = iParam17;
	}
}

void func_145(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_146(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1378744.f_6304[iParam0], iParam1);
}

void func_147()
{
	if (((func_12(unk_0x460153A63B9477BC(), 1, 1) && !func_7(unk_0x460153A63B9477BC())) && !func_163(unk_0x460153A63B9477BC())) && func_554(0, 1, 1))
	{
		if (Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_3 == 1)
		{
			func_160(func_162(Local_626.f_3), func_397(Local_626.f_3), 0, 0);
		}
		else if (Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_3 == 3)
		{
			if (!unk_0xCE990E643CD9D0E5(iLocal_317, 10))
			{
				func_148(func_396(Local_626.f_3), 0);
			}
			else
			{
				func_148("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_399();
		}
	}
	else
	{
		func_399();
	}
}

void func_148(char* sParam0, bool bParam1)
{
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return;
	}
	if (unk_0xA221A4BC051BFCCE(sParam0) > 23)
	{
		return;
	}
	if (func_158(sParam0))
	{
		return;
	}
	func_152();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), unk_0x6C5C6B207AA78253(), 32);
	Global_1312603.f_9 = unk_0x856D5567211886A2(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_151();
	func_150(bParam1);
	func_149();
}

void func_149()
{
	unk_0xBE20AB8238688965(&(Global_1312603.f_59), 1);
}

void func_150(bool bParam0)
{
	if (bParam0)
	{
		unk_0xBE20AB8238688965(&(Global_1312603.f_59), 0);
		return;
	}
	unk_0xD2459066EA58CE43(&(Global_1312603.f_59), 0);
}

void func_151()
{
	Global_1312603.f_10 = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), 86400000);
	Global_1312603.f_11 = unk_0x6CAAB7E78B5D978A();
}

void func_152()
{
	func_154();
	func_153(0);
}

void func_153(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x25DDB354A40FFCDB();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = unk_0x6CAAB7E78B5D978A();
		Global_1312603.f_11 = unk_0x6CAAB7E78B5D978A();
	}
	StringCopy(&(Global_1312603.f_12), "", 16);
	StringCopy(&(Global_1312603.f_16), "", 64);
	StringCopy(&(Global_1312603.f_32), "", 64);
	Global_1312603.f_52 = 0;
	Global_1312603.f_53 = 0;
	Global_1312603.f_54 = 0;
	Global_1312603.f_55 = -1;
	Global_1312603.f_56 = 0;
	Global_1312603.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_154()
{
	if (!func_157())
	{
	}
	if (func_156())
	{
		unk_0x6BF33E036B49E0DD(&(Global_1312603.f_12));
		func_155();
		unk_0x9F579D40FBAC4233();
	}
}

void func_155()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x42710E9E08FA375A(Global_1312603.f_52);
			return;
		
		case 2:
			unk_0x42710E9E08FA375A(Global_1312603.f_52);
			unk_0x42710E9E08FA375A(Global_1312603.f_53);
			return;
		
		case 3:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 4:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 5:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 6:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 7:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 8:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 9:
			unk_0x05CA0125610AB2F4(&(Global_1312603.f_16));
			return;
		
		case 10:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			return;
		
		case 12:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 13:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_57);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 11:
			unk_0x05CA0125610AB2F4(&(Global_1312603.f_16));
			return;
		
		case 14:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 15:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_57);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 17:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_48));
			return;
		
		case 16:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 19:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 18:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_48));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

int func_156()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

int func_157()
{
	if (!func_156())
	{
		return 0;
	}
	unk_0xCD7691F7F3015C57(&(Global_1312603.f_12));
	func_155();
	return unk_0x5E0AC8AED85CE7CB();
}

bool func_158(char* sParam0)
{
	if (!func_156())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_159(sParam0);
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_12));
}

bool func_159(char* sParam0)
{
	if (!func_156())
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_16));
}

int func_160(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (unk_0xA221A4BC051BFCCE(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		return 0;
	}
	if (func_161(sParam0, sParam1) && Global_1312603.f_56 == Global_1312603.f_58)
	{
		return 0;
	}
	func_152();
	Global_1312603 = 3;
	StringCopy(&(Global_1312603.f_1), unk_0x6C5C6B207AA78253(), 32);
	Global_1312603.f_9 = unk_0x856D5567211886A2(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	StringCopy(&(Global_1312603.f_16), sParam1, 64);
	Global_1312603.f_58 = iParam3;
	Global_1312603.f_56 = iParam3;
	func_151();
	func_150(bParam2);
	func_149();
	return 1;
}

bool func_161(char* sParam0, char* sParam1)
{
	if (!func_156())
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		return 0;
	}
	if (!unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_12)))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam1) == unk_0x856D5567211886A2(&(Global_1312603.f_16));
}

char* func_162(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7())) || unk_0xDF1110AC39C733FE(unk_0x9B0761B4C3EB8BC7())) || unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7())) || unk_0xF1263D4D1D8024EF(unk_0x9B0761B4C3EB8BC7())) || unk_0x167A1D90CE844D68(unk_0x9B0761B4C3EB8BC7()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7())) || unk_0xDF1110AC39C733FE(unk_0x9B0761B4C3EB8BC7())) || unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7())) || unk_0xF1263D4D1D8024EF(unk_0x9B0761B4C3EB8BC7())) || unk_0x167A1D90CE844D68(unk_0x9B0761B4C3EB8BC7())) || unk_0xE4B70EFD14220305(unk_0x9B0761B4C3EB8BC7()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7());
					iVar1 = unk_0x36FE6D3220816ADA(iVar0);
					if (unk_0x97AFEF6099069369(iVar1) && unk_0x72B9CC2155AEDF58(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!unk_0x642A35A076CECC5A(unk_0x9B0761B4C3EB8BC7()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!unk_0x15D88F65956DC2F6(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_sniperrifle"), 0) && !unk_0x15D88F65956DC2F6(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_heavysniper"), 0)) && !unk_0x15D88F65956DC2F6(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7())) || unk_0xDF1110AC39C733FE(unk_0x9B0761B4C3EB8BC7())) || unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7())) || unk_0xF1263D4D1D8024EF(unk_0x9B0761B4C3EB8BC7())) || unk_0x167A1D90CE844D68(unk_0x9B0761B4C3EB8BC7()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

bool func_163(int iParam0)
{
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		if (((func_166() && !func_165()) || func_164(unk_0x460153A63B9477BC(), 21)) || func_164(unk_0x460153A63B9477BC(), 25))
		{
			return 1;
		}
		if (func_47(&(Global_1574656.f_13)))
		{
			if (!func_1(&(Global_1574656.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_46(&(Global_1574656.f_13));
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 9);
}

bool func_164(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

bool func_165()
{
	return Global_1312436.f_1;
}

bool func_166()
{
	return Global_1312436;
}

void func_167()
{
	if (!unk_0xCE990E643CD9D0E5(iLocal_317, 6))
	{
		unk_0xF6D7145773FE3ADD();
		func_478(1, 1);
		unk_0xC5E5600D1CF5CEF9(iLocal_325);
		unk_0xD2459066EA58CE43(&iLocal_317, 4);
		func_171();
		func_169();
		unk_0xDFC7A4B191C8D46C(0f, 0, 21);
		unk_0xBE20AB8238688965(&iLocal_317, 6);
		func_168();
	}
}

void func_168()
{
	Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_7 = 0;
}

void func_169()
{
	if (Global_2413905.f_6 == unk_0x354AD085195C5FA6())
	{
		func_170();
	}
}

void func_170()
{
	struct<28> Var0;
	
	if (unk_0x7FD2BDF03806FD9D(Global_2413905.f_6))
	{
		if (!Global_2413905.f_6 == unk_0x354AD085195C5FA6())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413905 = { Var0 };
	Global_2413905.f_6 = -1;
}

void func_171()
{
	struct<6> Var0;
	
	if (Global_2405074.f_487.f_1 == unk_0x354AD085195C5FA6())
	{
		Global_2405074.f_487 = { Var0 };
	}
}

void func_172()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	if (!unk_0xCE990E643CD9D0E5(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_1, 0))
	{
		if (func_7(unk_0x460153A63B9477BC()))
		{
			unk_0xBE20AB8238688965(&(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_1), 0);
			return;
		}
		if (func_163(unk_0x460153A63B9477BC()))
		{
			unk_0xBE20AB8238688965(&(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_1), 0);
			return;
		}
		func_240(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_2978.f_6 = (Local_2978.f_6 + iVar0);
			if (!Global_262145.f_11508)
			{
				func_239(10, Local_2978.f_6);
			}
			Global_2464451 = iVar0;
			if (func_238())
			{
				func_226(-1468524125, iVar0, &uVar6, 0, 1, 0);
			}
			else
			{
				unk_0x41E465DD667BCD29(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_2978.f_7 = (Local_2978.f_7 + iVar1);
			func_225();
			func_173(0, unk_0x9B0761B4C3EB8BC7(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		}
		unk_0xBE20AB8238688965(&(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_1), 0);
	}
}

int func_173(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_174(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_174(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_184(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xAE06B9E39EBDE049(iParam1))
		{
			if (unk_0xA1914E72A0EB31D0(iParam1))
			{
				uVar1 = unk_0x9048E8838E822F21(iParam1);
				func_180(unk_0x1D5C49FCA9BC5B02(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_175(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_175(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_178(iParam0, 1) };
	if (iParam0 == func_177(unk_0x9B0761B4C3EB8BC7()))
	{
		func_176(1);
	}
	func_180(Var0, iParam1, 0, sParam2, uParam3);
}

void func_176(int iParam0)
{
	Global_2440049.f_2002 = iParam0;
}

int func_177(int iParam0)
{
	return iParam0;
}

Vector3 func_178(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xC337F69A1938DDA2())
	{
		Var3 = { unk_0x1DB2F48A1F5B2CD3(2) };
	}
	if (iParam0 == func_179(unk_0x9B0761B4C3EB8BC7()) && unk_0xF7B3A1430308F92B(unk_0xFA3A11B011BBD7F6()) == 4)
	{
		Var0 = { unk_0x7EC595B99EA7C4B1(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		fVar6 = unk_0xEF7858F25585F853(iParam0);
		if (unk_0xF7B3A1430308F92B(unk_0xFA3A11B011BBD7F6()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x140662B520844E45(unk_0x36FE6D3220816ADA(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x1BAE5C94E38E44FE(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_179(int iParam0)
{
	return iParam0;
}

void func_180(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2440049.f_1401[iVar0 /*30*/].f_6 == 0 || Global_2440049.f_1401[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2440049.f_1401[iVar1 /*30*/] = { Param0 };
			Global_2440049.f_1401[iVar1 /*30*/].f_6 = 1;
			Global_2440049.f_1401[iVar1 /*30*/].f_4 = func_183(Global_2440049.f_1401[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2440049.f_1401[iVar1 /*30*/].f_7 = unk_0x6CAAB7E78B5D978A();
			Global_2440049.f_1401[iVar1 /*30*/].f_3 = iParam3;
			Global_2440049.f_1401[iVar1 /*30*/].f_8 = iParam4;
			Global_2440049.f_1401[iVar1 /*30*/].f_9 = func_182();
			Global_2440049.f_1401[iVar1 /*30*/].f_10 = func_181();
			StringCopy(&(Global_2440049.f_1401[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2440049.f_1401[iVar1 /*30*/].f_26 = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), uParam6);
		}
	}
}

int func_181()
{
	if (Global_2440049.f_2002)
	{
		Global_2440049.f_2002 = 0;
		return 1;
	}
	Global_2440049.f_2002 = 0;
	return 0;
}

var func_182()
{
	var uVar0;
	
	uVar0 = Global_2440049.f_2004;
	Global_2440049.f_2004 = 1;
	return uVar0;
}

float func_183(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x272784C60C397DB6(unk_0x0F1DDC797C100E7F(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_184(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_185(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_185(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_224(unk_0x460153A63B9477BC()) || func_223(unk_0x460153A63B9477BC()))
	{
		if (Global_262145.f_9637 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9637;
		}
	}
	else if (func_221() || func_218(unk_0x460153A63B9477BC()))
	{
		if (Global_262145.f_22787 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22787;
		}
	}
	else if (Global_262145.f_6636 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6636;
	}
	if (func_217(uParam2))
	{
	}
	if (func_216())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_214(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_213(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_211(0, &iVar1);
					break;
				
				case 3:
					func_211(1, &iVar1);
					break;
				
				case 1:
					func_209(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1688737)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_206(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_195((func_205(unk_0x460153A63B9477BC()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xC0B1609C742F66E3(iVar1, iParam8, iParam9);
				if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_2 != -1)
				{
					func_206(1165, iVar1, -1);
				}
				func_190(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_186((func_188(unk_0x460153A63B9477BC()) + iVar1));
			}
			else
			{
				func_186((func_188(unk_0x460153A63B9477BC()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_186(int iParam0)
{
	if (func_216())
	{
		Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_5 = iParam0;
		func_187(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_187(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_188(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x460153A63B9477BC())
			{
				return func_189(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_5;
			}
		}
		else
		{
			return func_189(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_189(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xD2F202166691EDB2(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_190(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_138(unk_0x460153A63B9477BC()) };
	if (unk_0xE2FBD13450B2DA21())
	{
		if (unk_0xBF9EC1ED7E386622(&Var0))
		{
			iVar13 = func_193(func_194(&Var0));
			if (iVar13 == 0)
			{
				func_192(&Global_1388052, iParam0);
				func_191(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1388052);
			}
			else if (iVar13 == 1)
			{
				func_192(&Global_1388053, iParam0);
				func_191(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1388053);
			}
			else if (iVar13 == 2)
			{
				func_192(&Global_1388054, iParam0);
				func_191(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1388054);
			}
			else if (iVar13 == 3)
			{
				func_192(&Global_1388055, iParam0);
				func_191(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1388055);
			}
			else if (iVar13 == 4)
			{
				func_192(&Global_1388056, iParam0);
				func_191(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1388056);
			}
		}
	}
}

void func_191(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1388047 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_1_ID"):
			Global_1388049 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_2_ID"):
			Global_1388049 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_3_ID"):
			Global_1388050 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_4_ID"):
			Global_1388051 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1388052 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1388053 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1388054 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1388055 = uParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1388056 = uParam1;
			break;
		
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1388057 = uParam1;
			break;
		
		case joaat("MPPLY_FRIENDLY"):
			Global_1388058 = uParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1388059 = uParam1;
			break;
		
		case joaat("MPPLY_GRIEFING"):
			Global_1388060 = uParam1;
			break;
		
		case joaat("MPPLY_HELPFUL"):
			Global_1388061 = uParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1388062 = uParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1388063 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_192(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_193(int iParam0)
{
	if (iParam0 == Global_1388047)
	{
		return 0;
	}
	else if (iParam0 == Global_1388048)
	{
		return 1;
	}
	else if (iParam0 == Global_1388049)
	{
		return 2;
	}
	else if (iParam0 == Global_1388050)
	{
		return 3;
	}
	else if (iParam0 == Global_1388051)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_194(var uParam0)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		if (unk_0xBF9EC1ED7E386622(uParam0))
		{
			return Global_2462175;
		}
	}
	return Global_2462175;
}

void func_195(int iParam0, int iParam1, int iParam2)
{
	if (func_216())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9605 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388197[func_204(-1)])
				{
					unk_0xC0B1609C742F66E3(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388197[func_204(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xC0B1609C742F66E3(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xC0B1609C742F66E3(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_203(unk_0x460153A63B9477BC()))
		{
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_1 = iParam0;
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_6 = func_201(iParam0, 1);
		}
		func_200(639, iParam0, -1, 1);
		func_199(640, func_201(iParam0, 1), -1, 1, 0);
		Global_1388197[func_204(-1)] = iParam0;
		func_196(-1109644434, 7, 0);
	}
}

void func_196(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_198(iParam1, iParam2))
	{
		iVar0 = func_197();
		Global_2462127[iVar0] = iParam1;
		Global_2462138[iVar0] = iParam0;
	}
}

int func_197()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2462127[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_198(int iParam0, var uParam1)
{
	if (Global_1312884)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312896) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_199(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_204(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_200(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_204(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_204(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_204(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_204(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_204(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_204(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_204(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_204(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_204(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_204(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_204(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_204(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_204(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_204(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_204(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_204(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_204(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_204(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_204(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_204(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_204(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_204(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_204(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_204(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_204(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_204(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_204(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_204(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_204(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_204(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_204(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_204(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_204(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_204(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_204(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_204(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_204(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_204(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_204(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_204(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_204(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_204(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_204(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_204(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_204(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_204(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_204(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_204(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_204(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_204(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_204(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_204(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_204(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_204(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_201(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_202(iParam0, 0);
}

int func_202(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_292402[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_292402[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_203(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_2440049.f_1, iParam0);
	}
	return 1;
}

int func_204(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
		if (iVar1 > -1)
		{
			Global_2551544 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551544 = 1;
		}
	}
	return iVar0;
}

int func_205(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x460153A63B9477BC())
			{
				return Global_1388197[func_204(-1)];
			}
			else if (func_203(iParam0))
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388197[func_204(-1)];
	}
	return 0;
}

void func_206(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_208(iParam0, func_204(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_207(iParam0))
	{
		func_199(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_200(iParam0, iVar0, iParam2, 1);
	}
}

int func_207(int iParam0)
{
	if (Global_1388046)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8727:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8729:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8731:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8733:
			case 1303:
			case 7234:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8732:
			case 9534:
			case 1236:
			case 1877:
			case 2268:
			case 2930:
			case 3059:
			case 10138:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3233:
			case 3235:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3228:
			case 3222:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3690:
			case 3231:
			case 3230:
			case 4021:
			case 4020:
			case 4024:
			case 4023:
			case 4027:
			case 4026:
			case 4030:
			case 4029:
			case 6111:
			case 6110:
			case 6169:
			case 6168:
			case 6534:
			case 6533:
			case 6547:
			case 6546:
			case 6560:
			case 6559:
			case 6563:
			case 6562:
			case 6566:
			case 6565:
			case 7284:
			case 7286:
			case 7288:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8011:
			case 8535:
			case 8976:
			case 8978:
			case 8979:
			case 8981:
				return 1;
				break;
			}
	}
	return 0;
}

int func_208(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2551832[iParam0 /*3*/][func_204(iParam1)];
		if (unk_0xD2F202166691EDB2(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC());
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		iVar4 = unk_0x628A51AC66E80772(iVar0);
		if (unk_0xBD09DF93F957A0CF(iVar4))
		{
			iVar5 = unk_0x9019589211A13B02(iVar4);
			if (unk_0x6CC163E30ECE0790(iVar5) != -1)
			{
				if (unk_0x6CC163E30ECE0790(iVar5) == iVar1 || func_76(unk_0x6CC163E30ECE0790(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x460153A63B9477BC())
					{
						if (func_139(unk_0x460153A63B9477BC(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_210(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_210(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_210(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_211(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xEFA28384DDD283E1())
		{
			iVar3 = iVar0;
			if (unk_0xBD09DF93F957A0CF(iVar3))
			{
				iVar4 = unk_0x9019589211A13B02(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x460153A63B9477BC())
					{
						iVar1++;
						if (func_139(unk_0x460153A63B9477BC(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_12(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x460153A63B9477BC())
				{
					if (func_212(unk_0x460153A63B9477BC(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_139(unk_0x460153A63B9477BC(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_210(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_210(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_212(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_38(iParam0), func_38(iParam1));
	return 0f;
}

int func_213(int iParam0)
{
	int iVar0;
	
	if (unk_0x2F9269FB5C4717C0() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_210(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_214(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x44F29CF6A0675F4F(iParam0) > func_205(unk_0x460153A63B9477BC()))
		{
			iParam0 = -func_205(unk_0x460153A63B9477BC());
		}
	}
	if (func_215(8000, 0, 0) > 0)
	{
		if (func_215(8000, 0, 0) < (iParam0 + func_205(unk_0x460153A63B9477BC())))
		{
			iParam0 = (func_215(8000, 0, 0) - func_205(unk_0x460153A63B9477BC()));
		}
	}
	return iParam0;
}

int func_215(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_292402[iParam0];
}

int func_216()
{
	return 1;
}

int func_217(var uParam0)
{
	if (unk_0x211E6DB3335430B4(uParam0))
	{
		return 1;
	}
	else if (unk_0xF005CCA4263DF67F(uParam0, "") || unk_0xF005CCA4263DF67F(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)
{
	return func_219(func_220(iParam0));
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_220(int iParam0)
{
	if (func_113(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

bool func_221()
{
	if (unk_0xFC559366953F62B3())
	{
		return func_64();
	}
	return func_222(Global_4456448.f_82708);
}

int func_222(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5009[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_223(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_224(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

void func_225()
{
	Global_2463792 = 1;
}

void func_226(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_238())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_227(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_227(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_227(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
			func_227(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_238())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_16()) || unk_0x701B05C16EF4F48E())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4264051[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x734A68E809CC23F0(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x9F5556ED9A739FBC(iVar4))
		{
			*uParam0 = func_234(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4264051[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4264051[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4265552 = 1;
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_233(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_228(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_228(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xBE20AB8238688965(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_229(iParam0);
	}
}

void func_229(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_238())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_232(iParam0))
		{
			if (!bVar0)
			{
				unk_0x2ABDF07188759AF4();
			}
		}
		else if (!bVar0)
		{
			unk_0x7365588A145923CE(Global_4264051[iParam0 /*85*/].f_66);
		}
		func_230(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_230(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_231(&(uParam0->f_14));
	func_231(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_231(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_232(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_233(int iParam0, var uParam1)
{
	Global_2464590 = uParam1;
	Global_2464589 = iParam0;
}

int func_234(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_238())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4264051[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4264051[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4264051[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4264051[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4264051[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4264051[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4264051[iVar0 /*85*/].f_66 = iParam0;
			Global_4264051[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4264051[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4264051[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4264051[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4264051[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar0 /*85*/].f_66.f_14 = unk_0xD3137A576BE9EC5C();
			Global_4264051[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4265538 = 0;
			if (bParam6)
			{
				Global_4264051[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_235(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_235(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 1191422458;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_237(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_236();
		unk_0xB802750B43D4047C(1, &Var0, 36, iVar36);
	}
}

void func_236()
{
	unk_0xBE9B3870B1B370E3("AM_ARENA_SHP");
}

var func_237(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xBE20AB8238688965(&uVar0, iParam0);
	}
	return uVar0;
}

int func_238()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		return unk_0xC5AA3415F982DC6C();
	}
	return 0;
}

void func_239(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23502 == 0 || Global_262145.f_23502 == 1)
		{
			if (!unk_0xF8EDFF98A9C94C74() || Global_262145.f_23502 == 1)
			{
				Global_2540384.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6585)
				{
					iParam1 = Global_262145.f_6585;
				}
				Global_2540384.f_284 = iParam1;
				Global_2540384.f_285 = 0;
			}
		}
	}
}

void func_240(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(unk_0x59E2AD1A8ACEDA31(), 1))
	{
		iVar1 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_626.f_1 - iLocal_315)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_11443)
		{
			iVar1 = Global_262145.f_11443;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_278() * iVar1);
		*uParam1 = (func_277() * iVar1);
		fVar2 = func_276();
		if (fVar2 > 0f && !unk_0xCE990E643CD9D0E5(Local_626.f_2, 0))
		{
			iVar3 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_275())
			{
				iVar3 = func_275();
			}
			iVar4 = Local_626.f_51;
			if (iVar4 > func_274())
			{
				iVar4 = func_274();
			}
			*uParam0 = (*uParam0 + SYSTEM::ROUND((IntToFloat(func_267(func_273(), func_272(), iVar3, fVar2, func_271(), func_270(), func_269(), iVar4)) * Global_262145.f_11456)));
			*uParam1 = (*uParam1 + SYSTEM::ROUND((IntToFloat(func_267(func_266(), func_265(), iVar3, fVar2, func_271(), func_270(), func_269(), iVar4)) * Global_262145.f_11457)));
		}
		else
		{
			func_263(1);
		}
	}
	else
	{
		func_263(0);
	}
	func_241(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_241(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_262())
		{
			if (func_261(0))
			{
				if (!func_257(0))
				{
					if (unk_0x166E920FB00B2DBB(func_256()))
					{
						if (func_255() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_255());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_253(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_246("GB_BCUT_TICK1", func_256(), iVar0, 0, 0, 1);
						}
						func_245(20);
						func_242(func_256(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Var0 = 1596100569;
		Var0.f_1 = unk_0x460153A63B9477BC();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_244(iParam0);
		func_243(&(Var0.f_6), &(Var0.f_7));
		unk_0xB802750B43D4047C(1, &Var0, 8, func_237(iParam0));
	}
}

void func_243(var uParam0, var uParam1)
{
	*uParam0 = Global_1652336.f_9;
	*uParam1 = Global_1652336.f_10;
}

var func_244(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_506;
}

void func_245(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xBE20AB8238688965(&(Global_2540384.f_5188.f_7[iVar0]), iVar1);
}

int func_246(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x72C1D3A1AB8CAA5B(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x72C1D3A1AB8CAA5B(iParam1), 64);
		}
		if (unk_0x7BCC91F3C1CF24E8(&Var1))
		{
		}
		unk_0x5B8DD855EAFD33B5(sParam0);
		unk_0x7006FC1051C85FCA(func_69(iParam1, -2, 1, 0, 0));
		unk_0x9EFD301E3BE8324E(func_251(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x7006FC1051C85FCA(iParam3);
		}
		unk_0x42710E9E08FA375A(iParam2);
		iVar0 = unk_0xD60C2975A14D763D(0, 1);
		func_247(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_247(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_250() || !unk_0xFC559366953F62B3()) || !func_14(unk_0x460153A63B9477BC(), 0))
	{
		return;
	}
	iVar0 = func_248(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1672611.f_5[iVar0 /*53*/] = iParam0;
		Global_1672611.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1672611.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1672611.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1672611.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1672611.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1672611.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1672611 - 1))
	{
		if (iParam0 > Global_1672611.f_5[iVar0 /*53*/].f_1)
		{
			func_249(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1672611++;
	if (Global_1672611 > 5)
	{
		Global_1672611 = 5;
		return Global_1672611;
	}
	return (Global_1672611 - 1);
}

void func_249(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672611.f_5[iVar0 /*53*/] = { Global_1672611.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_250()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

var func_251(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_252(&cVar0);
}

var func_252(char[4] cParam0)
{
	return cParam0;
}

void func_253(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_254(1);
	}
	else
	{
		iVar1 = func_254(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_254(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12398;
}

int func_255()
{
	return Global_262145.f_12397;
}

int func_256()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
}

bool func_257(bool bParam0)
{
	return func_258(unk_0x460153A63B9477BC(), bParam0);
}

int func_258(int iParam0, bool bParam1)
{
	return func_259(iParam0, bParam1, 1);
}

int func_259(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_103())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_260(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[iParam0 /*595*/].f_11;
	if (iVar0 != func_103() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0, int iParam1)
{
	if (iParam0 != func_103())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_103())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 == iParam0 && Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_261(bool bParam0)
{
	return func_89(unk_0x460153A63B9477BC(), bParam0);
}

bool func_262()
{
	return func_90(unk_0x460153A63B9477BC());
}

void func_263(bool bParam0)
{
	if (bParam0)
	{
		if (func_264(1))
		{
			unk_0xBE20AB8238688965(&Global_1574681, 1);
		}
	}
	else if (func_264(2))
	{
		unk_0xBE20AB8238688965(&Global_1574681, 2);
	}
}

int func_264(int iParam0)
{
	var uVar0;
	
	uVar0 = func_208(2535, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xCE990E643CD9D0E5(uVar0, 0) && unk_0xCE990E643CD9D0E5(iVar0, 1)) && unk_0xCE990E643CD9D0E5(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xCE990E643CD9D0E5(iVar0, 3) && unk_0xCE990E643CD9D0E5(iVar0, 4)) && unk_0xCE990E643CD9D0E5(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xCE990E643CD9D0E5(iVar0, 6) && unk_0xCE990E643CD9D0E5(iVar0, 7)) && unk_0xCE990E643CD9D0E5(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xCE990E643CD9D0E5(iVar0, 9) && unk_0xCE990E643CD9D0E5(iVar0, 10)) && unk_0xCE990E643CD9D0E5(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_265()
{
	return Global_262145.f_10943;
}

int func_266()
{
	return Global_262145.f_10941;
}

int func_267(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_268(SYSTEM::ROUND(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_269()
{
	return Global_262145.f_10946;
}

float func_270()
{
	return Global_262145.f_10945;
}

float func_271()
{
	return Global_262145.f_10944;
}

int func_272()
{
	return Global_262145.f_10942;
}

int func_273()
{
	return Global_262145.f_10940;
}

int func_274()
{
	return Global_262145.f_11348;
}

int func_275()
{
	return Global_262145.f_11347;
}

var func_276()
{
	if (func_20(0))
	{
		return Global_262145.f_10967;
	}
	if (func_20(1))
	{
		return Global_262145.f_10968;
	}
	if (func_20(2))
	{
		return Global_262145.f_10969;
	}
	return Global_262145.f_10970;
}

int func_277()
{
	return Global_262145.f_10939;
}

int func_278()
{
	return Global_262145.f_10938;
}

void func_279()
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	char* sVar5;
	
	if (!unk_0xCE990E643CD9D0E5(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_1, 1) && (func_291() || unk_0xCE990E643CD9D0E5(Local_626.f_2, 0)))
	{
		if (func_67(func_290()))
		{
			func_289();
		}
		if (func_12(unk_0x460153A63B9477BC(), 1, 1))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_626.f_2, 0))
			{
				if (func_330(0))
				{
					iVar2 = Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_4;
					func_285(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_283(64, func_284(Local_626.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_397(Local_626.f_3), 1, 2, 0);
						}
						else if (func_282())
						{
							func_283(69, func_284(Local_626.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_397(Local_626.f_3), 1, 2, 0);
						}
						else
						{
							func_283(64, func_284(Local_626.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_397(Local_626.f_3), 1, 2, 0);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_283(67, func_284(Local_626.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_397(Local_626.f_3), 1, 2, 0);
						}
						else if (func_282())
						{
							func_283(75, func_284(Local_626.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_397(Local_626.f_3), 1, 2, 0);
						}
						else
						{
							func_283(67, func_284(Local_626.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_397(Local_626.f_3), 1, 2, 0);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_283(67, func_284(Local_626.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_397(Local_626.f_3), 1, 2, 0);
						}
						else if (func_282())
						{
							func_283(75, func_284(Local_626.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_397(Local_626.f_3), 1, 2, 0);
						}
						else
						{
							func_283(67, func_284(Local_626.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_397(Local_626.f_3), 1, 2, 0);
						}
					}
					else
					{
						uVar3 = unk_0x628A51AC66E80772(Local_626.f_4[0]);
						if (unk_0xBD09DF93F957A0CF(uVar3))
						{
							iVar4 = unk_0x9019589211A13B02(iVar3);
							if (Local_2593[Local_626.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_2593[Local_626.f_4[0] /*12*/].f_4;
							func_285(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_281(76, func_103(), func_284(Local_626.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_397(Local_626.f_3), -1, fVar1, 1, 2, unk_0x72C1D3A1AB8CAA5B(iVar4));
							}
							else if (func_282())
							{
								func_281(77, func_103(), func_284(Local_626.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_397(Local_626.f_3), iVar0, -1082130432, 1, 2, unk_0x72C1D3A1AB8CAA5B(iVar4));
							}
							else
							{
								func_281(76, func_103(), func_284(Local_626.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_397(Local_626.f_3), iVar0, -1082130432, 1, 2, unk_0x72C1D3A1AB8CAA5B(iVar4));
							}
						}
					}
				}
				else
				{
					func_52(66, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2, 1, 0);
				}
			}
			else
			{
				func_51("", "", 1);
			}
			unk_0xBE20AB8238688965(&(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_1), 1);
			func_280(133);
		}
	}
}

void func_280(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_281(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_106(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_17 = iParam1;
	StringCopy(&(Var0.f_57), sParam2, 16);
	StringCopy(&(Var0.f_61), sParam6, 16);
	StringCopy(&(Var0.f_25), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_71 = iParam9;
	Var0.f_72 = iParam10;
	return func_53(&Var0);
}

int func_282()
{
	return 0;
}

int func_283(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_106(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_104(&(Var0.f_69), iParam10);
	}
	return func_53(&Var0);
}

char* func_284(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x1CB1AF03C74FCE70())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x1CB1AF03C74FCE70())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_285(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_286(Local_626.f_3, iParam2) / 10f);
		}
		else
		{
			*fParam1 = (SYSTEM::TO_FLOAT(iParam2) / 10f);
		}
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

float func_286(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x1CB1AF03C74FCE70())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_288(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x1CB1AF03C74FCE70())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_287(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_287(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_288(float fParam0)
{
	return (fParam0 / 0.3048f);
}

void func_289()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_2 != 0)
		{
			Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			func_104(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_290()
{
	return Global_2440049.f_2834[0 /*80*/].f_1;
}

bool func_291()
{
	return unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 25);
}

int func_292(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_302()) && !(func_113(unk_0x460153A63B9477BC(), 0) && (func_109(unk_0x460153A63B9477BC()) || func_301(unk_0x460153A63B9477BC())))) && !func_299(unk_0x460153A63B9477BC()))
	{
		func_298();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_47(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 25);
				if (bParam1)
				{
					unk_0xBE20AB8238688965(&(Global_2540384.f_4652), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_297(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_47(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_294();
				func_297(uParam0, 2);
			}
			break;
		
		case 2:
			func_294();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_293("AMEV_LBD_HELP"))
				{
					unk_0xD289B55B6AADBA10(1);
				}
				func_297(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0xD2459066EA58CE43(&(Global_2540384.f_4652), 1);
				func_297(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xD2459066EA58CE43(&(Global_2540384.f_4652), 1);
			return 1;
	}
	return 0;
}

bool func_293(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_294()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 0))
	{
		if (((((!unk_0xEBB78303C505A9D7() && !unk_0xCE990E643CD9D0E5(Global_2540384.f_833, 2)) && func_12(unk_0x460153A63B9477BC(), 1, 1)) && !Global_74030) && !Global_58898) && !unk_0x03DB5C6AABF8DA46())
		{
			unk_0xBE20AB8238688965(&(Global_2540384.f_4652), 1);
			func_296("AMEV_LBD_HELP", -1);
			func_295(1);
			unk_0xD2459066EA58CE43(&(Global_2540384.f_4652), 0);
		}
	}
}

void func_295(int iParam0)
{
	unk_0x642EF0F7FC397A2C(3, 21, 200, 0, 0);
	if (iParam0 && !func_302())
	{
		unk_0xC4CC25B68A91D144(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_296(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, 0, iParam1);
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_298()
{
	Global_2463793 = 1;
}

int func_299(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_300(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
	}
	return -1;
}

bool func_301(int iParam0)
{
	return func_108(iParam0, 19);
}

bool func_302()
{
	return Global_2440049.f_2834[0 /*80*/].f_1 != 0;
}

void func_303()
{
	int iVar0[3];
	int iVar4;
	var uVar5[3];
	var uVar9[3];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	var uVar26[3];
	var uVar30;
	var uVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	
	if (Local_626.f_4[0] > -1)
	{
		iVar20 = 0;
		bVar21 = (func_327() && !func_101(unk_0x460153A63B9477BC()));
		iVar16 = 0;
		while (iVar16 < 3)
		{
			iVar0[iVar16] = func_103();
			iVar16++;
		}
		iVar16 = 0;
		while (iVar16 < 3)
		{
			if (Local_626.f_4[iVar16] > -1)
			{
				uVar30 = unk_0x628A51AC66E80772(Local_626.f_4[iVar16]);
				if (unk_0xBD09DF93F957A0CF(uVar30))
				{
					iVar4 = unk_0x9019589211A13B02(iVar30);
					if (func_12(iVar4, 0, 1))
					{
						if (!func_14(iVar4, 0))
						{
							if (Local_2593[Local_626.f_4[iVar16] /*12*/].f_4 != 0)
							{
								iVar0[iVar24] = iVar4;
								func_285(&(uVar5[iVar24]), &(uVar9[iVar24]), Local_2593[Local_626.f_4[iVar16] /*12*/].f_4, 1);
								iVar24++;
								if (func_261(1))
								{
									if (func_89(iVar4, 1))
									{
										uVar26[iVar16] = func_69(iVar4, -2, 0, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar16++;
		}
		iVar17 = unk_0x59E2AD1A8ACEDA31();
		if (func_101(unk_0x460153A63B9477BC()))
		{
			uVar31 = func_325();
			iVar32 = unk_0xE4400E48E081F17A(uVar31);
			if (unk_0x166E920FB00B2DBB(iVar32))
			{
				iVar33 = unk_0x653D75F1BBF766B3(iVar32);
				if (unk_0xBD09DF93F957A0CF(iVar33))
				{
					iVar17 = iVar33;
				}
			}
		}
		func_285(&iVar13, &fVar18, iLocal_319, 1);
		func_285(&iVar14, &fVar19, Local_2593[iVar17 /*12*/].f_4, 1);
		iVar34 = func_28(0);
		iVar35 = func_545(&(Local_626.f_39), 0, 0);
		iVar15 = func_543(0, (iVar34 - iVar35));
		if (func_17(-1, 0))
		{
			func_322(iVar15);
		}
		if (iVar15 > 30000)
		{
			iVar22 = 1;
		}
		else
		{
			iVar22 = 6;
		}
		if (unk_0xCE990E643CD9D0E5(iLocal_317, 2))
		{
			iVar23 = 2000;
		}
		else
		{
			iVar23 = 0;
		}
		if (func_327() || Local_626.f_3 == 6)
		{
			iVar25 = 2;
		}
		else
		{
			iVar25 = 1;
		}
		if (Local_626.f_37 >= 4)
		{
			iVar15 = 0;
		}
		if (func_18())
		{
			func_318(iVar0[0], iVar0[1], iVar0[2], uVar9[0], uVar9[1], uVar9[2], fVar18, fVar19, iVar15, func_284(Local_626.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_319(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else if (func_282())
		{
			func_317(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, &iVar20, iVar22, bVar21, iVar23, func_319(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		else
		{
			func_308(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar13, iVar14, iVar15, func_284(Local_626.f_3, 0, 1, 0), &iVar20, iVar22, bVar21, iVar23, func_319(), iVar25, uVar26[0], uVar26[1], uVar26[2]);
		}
		func_304();
	}
}

void func_304()
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_307();
	if (fVar0 >= 0f)
	{
		if (Local_626.f_37 == 3)
		{
			if (func_12(unk_0x460153A63B9477BC(), 1, 1))
			{
				if (unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7()) || unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7()))
				{
					iVar1 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
					if (unk_0x80FF6C016CDB0FAF(iVar1, 0))
					{
						func_306(iVar1, &fLocal_323);
						fVar2 = (fVar0 + fLocal_323);
						unk_0xDFC7A4B191C8D46C(fVar2, 1, 21);
						func_305(fVar0);
						return;
					}
				}
			}
		}
		if (func_293("AMCH_FLYLOW"))
		{
			unk_0xD289B55B6AADBA10(1);
		}
		if (unk_0xCE990E643CD9D0E5(iLocal_317, 4))
		{
			unk_0xC5E5600D1CF5CEF9(iLocal_325);
			unk_0xD2459066EA58CE43(&iLocal_317, 4);
		}
		unk_0xDFC7A4B191C8D46C(0f, 0, 21);
	}
}

void func_305(float fParam0)
{
	float fVar0;
	
	if (unk_0x44BEB8B7BFC5D660(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_546(6);
			if (!unk_0xCE990E643CD9D0E5(iLocal_317, 4))
			{
				unk_0xC4CC25B68A91D144(iLocal_325, "Altitude_Warning", "EXILE_1", 1);
				unk_0xBE20AB8238688965(&iLocal_317, 4);
			}
		}
		else
		{
			if (func_293("AMCH_FLYLOW"))
			{
				unk_0xD289B55B6AADBA10(1);
			}
			if (unk_0xCE990E643CD9D0E5(iLocal_317, 4))
			{
				unk_0xC5E5600D1CF5CEF9(iLocal_325);
				unk_0xD2459066EA58CE43(&iLocal_317, 4);
			}
		}
	}
}

float func_306(int iParam0, var uParam1)
{
	float fVar0;
	struct<3> Var1;
	var uVar4;
	
	Var1 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	unk_0xE5CC8E2D904E42CE(Var1, uParam1, 1, 0);
	unk_0xE5CC8E2D904E42CE(Var1, &uVar4, 0, 0);
	if (unk_0xFD08FECCF4F5AE88())
	{
		func_546(3);
		unk_0xBE20AB8238688965(&iLocal_317, 10);
		func_27(&uLocal_313, 0, 0);
	}
	else if (unk_0xCE990E643CD9D0E5(iLocal_317, 10))
	{
		if (func_1(&uLocal_313, 2000, 0))
		{
			unk_0xD2459066EA58CE43(&iLocal_317, 10);
		}
	}
	if (*uParam1 < 0f)
	{
		*uParam1 = 0f;
	}
	fVar0 = (Var1.f_2 - *uParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	return fVar0;
}

float func_307()
{
	switch (Local_626.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_308(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_314(0) == 0)
	{
		return;
	}
	func_313();
	iVar1 = 0;
	if (((Global_2463318[0] != iParam0 || Global_2463318[1] != iParam1) || Global_2463318[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2463318[0] = iParam0;
	Global_2463318[1] = iParam1;
	Global_2463318[2] = iParam2;
	Global_2463318[3] = 0;
	Global_2463318[4] = 0;
	if (Global_2463318[0] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x72C1D3A1AB8CAA5B(Global_2463318[0]);
			Global_2463324[0 /*16*/] = { func_312(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_309(iParam3, &(Global_2463324[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2463318[1] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x72C1D3A1AB8CAA5B(Global_2463318[1]);
			Global_2463324[1 /*16*/] = { func_312(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_309(iParam4, &(Global_2463324[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2463318[2] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x72C1D3A1AB8CAA5B(Global_2463318[2]);
			Global_2463324[2 /*16*/] = { func_312(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_309(iParam5, &(Global_2463324[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_309(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x460153A63B9477BC() != func_103())
			{
				if (func_163(unk_0x460153A63B9477BC()) == 0)
				{
					func_309(iParam7, unk_0x72C1D3A1AB8CAA5B(unk_0x460153A63B9477BC()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_163(unk_0x460153A63B9477BC()) == 0)
			{
				func_309(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_163(unk_0x460153A63B9477BC()) == 0)
			{
				func_309(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_217(sParam14))
	{
		sVar2 = sParam14;
	}
	func_144(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	func_143();
}

void func_309(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_146(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_145(6, iVar0);
		Global_1378744.f_3955[iVar0] = iParam0;
		StringCopy(&(Global_1378744.f_3955.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_3955.f_183[iVar0] = iParam3;
		Global_1378744.f_3955.f_172[iVar0] = iParam2;
		Global_1378744.f_3955.f_260[iVar0] = iParam4;
		Global_1378744.f_3955.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378744.f_3955.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1378744.f_3955.f_443[iVar0] = iParam7;
		Global_1378744.f_3955.f_454[iVar0] = fParam8;
		Global_1378744.f_3955.f_497[iVar0] = iParam9;
		Global_1378744.f_3955.f_508[iVar0] = iParam10;
		Global_1378744.f_3955.f_205[iVar0] = iParam11;
		Global_1378744.f_3955.f_216[iVar0] = iParam12;
		Global_1378744.f_3955.f_227[iVar0] = iParam13;
		Global_1378744.f_3955.f_238[iVar0] = iParam14;
		Global_1378744.f_3955.f_249[iVar0] = iParam15;
		Global_1378744.f_3955.f_519[iVar0] = iParam16;
		Global_1378744.f_3955.f_530[iVar0] = iParam17;
		Global_1378744.f_3955.f_541[iVar0] = iParam18;
		Global_1378744.f_3955.f_552[iVar0] = iParam19;
		Global_1378744.f_3955.f_563[iVar0] = iParam20;
		Global_1378744.f_3955.f_574[iVar0] = iParam21;
		Global_1378744.f_3955.f_585[iVar0] = iParam22;
		Global_1378744.f_3955.f_596[iVar0] = iParam23;
		Global_1378744.f_3955.f_607[iVar0] = iParam24;
		Global_1378744.f_3955.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_311())
		{
			Global_1378744.f_1130 = 1;
		}
		if (unk_0xF8EDFF98A9C94C74())
		{
			iVar2 = 0;
			unk_0x9DD549AAA043F83A(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1378744.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1378744.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378744.f_1130 = 1;
			}
			if (func_310())
			{
				Global_1378744.f_1134 = 1;
			}
		}
	}
}

int func_310()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xF8EDFF98A9C94C74())
	{
		unk_0x9DD549AAA043F83A(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_311()
{
	if (((unk_0xA2C6E70C9BCA9C34() == 8 || unk_0xA2C6E70C9BCA9C34() == 9) || unk_0xA2C6E70C9BCA9C34() == 10) || unk_0xA2C6E70C9BCA9C34() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_312(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0x7C774D8CB8DC6FE3("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0x7C774D8CB8DC6FE3("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0x7C774D8CB8DC6FE3("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0x7C774D8CB8DC6FE3("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0x7C774D8CB8DC6FE3("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_313()
{
	unk_0x4CB4237D8858ADA6(8);
	unk_0x4CB4237D8858ADA6(9);
	unk_0x4CB4237D8858ADA6(6);
	unk_0x4CB4237D8858ADA6(7);
	Global_2463796 = 1;
}

int func_314(bool bParam0)
{
	if (func_316())
	{
		return 0;
	}
	if (func_315())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(unk_0x460153A63B9477BC(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_315()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_196 != 0;
}

bool func_316()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 12);
}

void func_317(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_314(0) == 0)
	{
		return;
	}
	func_313();
	iVar1 = 0;
	if (((Global_2463318[0] != iParam0 || Global_2463318[1] != iParam1) || Global_2463318[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2463318[0] = iParam0;
	Global_2463318[1] = iParam1;
	Global_2463318[2] = iParam2;
	Global_2463318[3] = 0;
	Global_2463318[4] = 0;
	if (Global_2463318[0] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x72C1D3A1AB8CAA5B(Global_2463318[0]);
			Global_2463324[0 /*16*/] = { func_312(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_144(iParam3, &(Global_2463324[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0, -1);
		}
	}
	if (Global_2463318[1] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x72C1D3A1AB8CAA5B(Global_2463318[1]);
			Global_2463324[1 /*16*/] = { func_312(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_144(iParam4, &(Global_2463324[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0, -1);
		}
	}
	if (Global_2463318[2] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x72C1D3A1AB8CAA5B(Global_2463318[2]);
			Global_2463324[2 /*16*/] = { func_312(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_144(iParam5, &(Global_2463324[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0, -1);
		}
	}
	if (bParam11)
	{
		func_144(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iParam14)
	{
		case 0:
			if (unk_0x460153A63B9477BC() != func_103())
			{
				if (func_163(unk_0x460153A63B9477BC()) == 0)
				{
					func_144(iParam7, unk_0x72C1D3A1AB8CAA5B(unk_0x460153A63B9477BC()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		
		case 1:
			if (func_163(unk_0x460153A63B9477BC()) == 0)
			{
				func_144(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 2:
			if (func_163(unk_0x460153A63B9477BC()) == 0)
			{
				func_144(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_217(sParam13))
	{
		sVar2 = sParam13;
	}
	func_144(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0, -1);
	*iParam9 = 0;
	func_143();
}

void func_318(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_314(0) == 0)
	{
		return;
	}
	func_313();
	iVar1 = 0;
	if (((Global_2463318[0] != iParam0 || Global_2463318[1] != iParam1) || Global_2463318[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2463318[0] = iParam0;
	Global_2463318[1] = iParam1;
	Global_2463318[2] = iParam2;
	Global_2463318[3] = 0;
	Global_2463318[4] = 0;
	if (Global_2463318[0] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x72C1D3A1AB8CAA5B(Global_2463318[0]);
			Global_2463324[0 /*16*/] = { func_312(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_309(-1, &(Global_2463324[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2463318[1] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x72C1D3A1AB8CAA5B(Global_2463318[1]);
			Global_2463324[1 /*16*/] = { func_312(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_309(-1, &(Global_2463324[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2463318[2] != func_103())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x72C1D3A1AB8CAA5B(Global_2463318[2]);
			Global_2463324[2 /*16*/] = { func_312(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_309(-1, &(Global_2463324[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_309(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (unk_0x460153A63B9477BC() != func_103())
			{
				if (func_163(unk_0x460153A63B9477BC()) == 0)
				{
					func_309(-1, unk_0x72C1D3A1AB8CAA5B(unk_0x460153A63B9477BC()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_163(unk_0x460153A63B9477BC()) == 0)
			{
				func_309(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_163(unk_0x460153A63B9477BC()) == 0)
			{
				func_309(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_217(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		func_144(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	}
	*iParam10 = 0;
	func_143();
}

char* func_319()
{
	return "HUD_COUNTDOWN";
	switch (func_321(unk_0x460153A63B9477BC()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_320())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_320()
{
	if (func_321(unk_0x460153A63B9477BC()) == 133)
	{
		return Global_2540384.f_5109;
	}
	return -1;
}

int func_321(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/];
	}
	return -1;
}

void func_322(int iParam0)
{
	if (func_324(unk_0x460153A63B9477BC()) || func_323(unk_0x460153A63B9477BC()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < unk_0x9E3DAF75EFC49F5B())
	{
		if (unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 0))
		{
			if (!unk_0x7BCC91F3C1CF24E8(&(Global_2540384.f_5027)))
			{
				unk_0x08F33B91E190227C(&(Global_2540384.f_5027));
			}
			unk_0x96F763331D19ED14(1);
			unk_0x21723EF7B2FCC4CC("FM_COUNTDOWN_30S_FIRA");
			unk_0xFA07F8BEBDAAFBA8("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x0C0DE28672975DC3("DisableFlightMusic", 0);
			unk_0x0C0DE28672975DC3("WantedMusicDisabled", 0);
			unk_0x0C0DE28672975DC3("AllowScoreAndRadio", 0);
			if (Global_2540384.f_5035 > -1)
			{
				unk_0xADB6EEE689FE86DE(Global_2540384.f_5035);
				Global_2540384.f_5035 = -1;
			}
			Global_2540384.f_5025 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 0))
		{
			if (unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 4))
			{
				if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 2))
				{
					if (unk_0xEB3E13794C74EC98())
					{
						if ((!unk_0xF005CCA4263DF67F(unk_0xA15491F33A2A9467(unk_0x9301B13EC408DE79()), "OFF") && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0)) && !unk_0x7BCC91F3C1CF24E8(&(Global_2540384.f_5027)))
						{
							StringCopy(&(Global_2540384.f_5027), "", 32);
							unk_0x21723EF7B2FCC4CC("FM_COUNTDOWN_30S_FIRA");
							unk_0xFA07F8BEBDAAFBA8("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x0C0DE28672975DC3("DisableFlightMusic", 0);
							unk_0x0C0DE28672975DC3("WantedMusicDisabled", 0);
							unk_0x0C0DE28672975DC3("AllowScoreAndRadio", 0);
							unk_0x96F763331D19ED14(1);
							unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 2);
						}
					}
				}
				else if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) && unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 5))
				{
					unk_0x08F33B91E190227C("OFF");
				}
			}
			else if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x21723EF7B2FCC4CC("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x21723EF7B2FCC4CC("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x21723EF7B2FCC4CC("FM_COUNTDOWN_30S");
				}
				unk_0x17E478571720218F("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 1);
			}
			else if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x344CF631FC7C50AD() != 0)
					{
						if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) && !unk_0x66955F4E33E53A73())
						{
							StringCopy(&(Global_2540384.f_5027), unk_0x29E54CBCA7932BF9(), 32);
							unk_0x08F33B91E190227C("OFF");
						}
						unk_0x96F763331D19ED14(1);
						unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 3))
				{
					Global_2540384.f_5035 = unk_0x5E54B0823F46079E();
					unk_0xC4CC25B68A91D144(Global_2540384.f_5035, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 0))
			{
				Global_2540384.f_5025 = 0;
				Global_2540384.f_5035 = -1;
				unk_0x1BDBFE8EFF10BC95("FM_COUNTDOWN_30S_KILL");
				unk_0x96F763331D19ED14(0);
				unk_0x21723EF7B2FCC4CC("FM_PRE_COUNTDOWN_30S");
				unk_0x0C0DE28672975DC3("DisableFlightMusic", 1);
				unk_0x0C0DE28672975DC3("WantedMusicDisabled", 1);
				unk_0x0C0DE28672975DC3("AllowScoreAndRadio", 1);
				unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 0);
				if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 2))
				{
					unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 2);
					unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 5);
				}
				else
				{
					unk_0xD2459066EA58CE43(&(Global_2540384.f_5025), 5);
					unk_0xD2459066EA58CE43(&(Global_2540384.f_5025), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 0))
		{
			Global_2540384.f_5025 = 0;
			Global_2540384.f_5035 = -1;
			unk_0x1BDBFE8EFF10BC95("FM_COUNTDOWN_30S_KILL");
			unk_0x96F763331D19ED14(0);
			unk_0x21723EF7B2FCC4CC("FM_PRE_COUNTDOWN_30S");
			unk_0x0C0DE28672975DC3("DisableFlightMusic", 1);
			unk_0x0C0DE28672975DC3("WantedMusicDisabled", 1);
			unk_0x0C0DE28672975DC3("AllowScoreAndRadio", 1);
			unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 0);
			if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 2);
				unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 5);
			}
			else
			{
				unk_0xD2459066EA58CE43(&(Global_2540384.f_5025), 2);
				unk_0xD2459066EA58CE43(&(Global_2540384.f_5025), 5);
			}
		}
	}
}

int func_323(int iParam0)
{
	if (iParam0 != func_103() && func_12(iParam0, 1, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_314.f_15;
	}
	return -1;
}

int func_324(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 19;
			}
		}
	}
	return 0;
}

var func_325()
{
	if (unk_0xAE06B9E39EBDE049(func_326()))
	{
		return func_326();
	}
	return func_98();
}

var func_326()
{
	return Global_2359302.f_3;
}

int func_327()
{
	switch (Local_626.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

void func_328()
{
	int iVar0;
	struct<42> Var1;
	int iVar43;
	var uVar44;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		Local_714.f_534[iVar0 /*42*/] = { Var1 };
		Local_714.f_534[iVar0 /*42*/].f_1 = func_103();
		if (Local_626.f_4[iVar0] > -1)
		{
			uVar44 = unk_0x628A51AC66E80772(Local_626.f_4[iVar0]);
			if (unk_0xBD09DF93F957A0CF(uVar44))
			{
				iVar43 = unk_0x9019589211A13B02(iVar44);
				if (!func_14(iVar43, 0))
				{
					Local_714.f_534[iVar0 /*42*/] = Local_626.f_4[iVar0];
					Local_714.f_534[iVar0 /*42*/].f_1 = iVar43;
					Local_714.f_534[iVar0 /*42*/].f_9 = Local_2593[Local_626.f_4[iVar0] /*12*/].f_4;
					Local_714.f_534[iVar0 /*42*/].f_31 = -1;
					Local_714.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_329()
{
	unk_0xBE20AB8238688965(&(Global_2540384.f_1794), 19);
}

int func_330(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_626.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_2593[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_331()
{
}

void func_332()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_285(&iVar1, &fVar2, iLocal_319, 1);
	switch (Local_626.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_334(sVar0, fVar2 >= 70f);
			if (unk_0x306BF588BD8151E8(sVar0))
			{
				fVar2 = func_333(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				unk_0x944B1AEB263532C4(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = unk_0xFA8D84162757E74D();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_334(sVar0, bVar3);
			if (unk_0x306BF588BD8151E8(sVar0))
			{
				fVar2 = SYSTEM::TO_FLOAT(iVar1);
				fVar2 = func_333(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_333(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				unk_0x944B1AEB263532C4(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_324 != iLocal_319)
			{
				if (iLocal_319 > 0)
				{
					unk_0xC4CC25B68A91D144(iLocal_326, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
					unk_0xD4974F3117C9F232(iLocal_326, "Count", SYSTEM::TO_FLOAT(iVar1));
				}
				else
				{
					unk_0xC4CC25B68A91D144(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
				}
			}
			iLocal_324 = iLocal_319;
			break;
	}
	if (func_20(0))
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_317, 3))
		{
			if (func_257(1))
			{
				unk_0xC4CC25B68A91D144(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0xC4CC25B68A91D144(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0xBE20AB8238688965(&iLocal_317, 3);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(iLocal_317, 3))
	{
		if (func_257(1))
		{
			unk_0xC4CC25B68A91D144(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0xC4CC25B68A91D144(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0xD2459066EA58CE43(&iLocal_317, 3);
	}
}

float func_333(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_334(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x306BF588BD8151E8(sParam0))
		{
			unk_0x17E478571720218F(sParam0);
		}
	}
	else if (unk_0x306BF588BD8151E8(sParam0))
	{
		unk_0xFA07F8BEBDAAFBA8(sParam0);
	}
}

void func_335()
{
	int iVar0;
	
	if ((!func_163(unk_0x460153A63B9477BC()) && !func_14(unk_0x460153A63B9477BC(), 0)) && func_12(unk_0x460153A63B9477BC(), 1, 1))
	{
		iVar0 = func_361();
		if (iVar0 != Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_316) || func_360(iVar0, iLocal_316))
			{
				if (!func_359() || func_1(&uLocal_305, 1000, 0))
				{
					func_27(&uLocal_305, 0, 0);
					iLocal_316 = iVar0;
					Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_4 = iVar0;
					func_338();
					if (iLocal_315 == 0)
					{
						iLocal_315 = unk_0x6CAAB7E78B5D978A();
					}
					if (Local_2978.f_11 == 0)
					{
						Local_2978.f_11 = unk_0x5A002C4821A13338();
					}
				}
			}
		}
		iLocal_319 = func_336();
	}
}

int func_336()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_626.f_3)
	{
		case 0:
			fVar1 = unk_0xE4ED3A676A23E952();
			break;
		
		case 1:
			fVar1 = unk_0x725DA517F9404092();
			break;
		
		case 2:
			fVar1 = unk_0xFA8D84162757E74D();
			break;
		
		case 3:
			fVar1 = unk_0xF9DF7BE317DB5785();
			break;
		
		case 4:
			fVar1 = unk_0x5476A83129B9CABE();
			break;
		
		case 5:
			fVar1 = unk_0xC3C59E55C7ADEF32();
			break;
		
		case 8:
			iVar0 = unk_0xBAC15ECCC5915F78();
			break;
		
		case 9:
			fVar1 = unk_0x9496064DE02B270B();
			break;
		
		case 11:
			fVar1 = unk_0xDA8590AD644D16F2();
			break;
		
		case 12:
			fVar1 = unk_0xDA8590AD644D16F2();
			break;
		
		case 13:
			fVar1 = unk_0x8B0322CE4D601547();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	iVar2 = unk_0x44F29CF6A0675F4F(iVar0);
	func_337(&iVar2);
	if (iVar2 == iLocal_318)
	{
		if (func_21(iVar2, 0))
		{
			if (!unk_0xCE990E643CD9D0E5(iLocal_317, 1))
			{
				func_27(&uLocal_307, 0, 0);
				Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_4.f_2 = func_545(&uLocal_307, 0, 0);
				unk_0xBE20AB8238688965(&iLocal_317, 1);
			}
			else if ((func_545(&uLocal_307, 0, 0) % 1000) == 0)
			{
				Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_4.f_2 = func_545(&uLocal_307, 0, 0);
			}
		}
	}
	else
	{
		unk_0xD2459066EA58CE43(&iLocal_317, 1);
	}
	if ((func_21(iLocal_318, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_309, 2000, 0))
	{
		iVar2 = iLocal_318;
		unk_0xBE20AB8238688965(&iLocal_317, 2);
	}
	else
	{
		iLocal_318 = iVar2;
		func_46(&uLocal_309);
		unk_0xD2459066EA58CE43(&iLocal_317, 2);
	}
	return iVar2;
}

void func_337(int iParam0)
{
	switch (Local_626.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(unk_0x460153A63B9477BC(), 1, 1))
				{
					if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						if ((((unk_0xDF1110AC39C733FE(unk_0x9B0761B4C3EB8BC7()) || unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7())) || unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7())) || unk_0xF1263D4D1D8024EF(unk_0x9B0761B4C3EB8BC7())) || unk_0x167A1D90CE844D68(unk_0x9B0761B4C3EB8BC7()))
						{
							*iParam0 = 0;
						}
					}
					else
					{
						*iParam0 = 0;
					}
				}
			}
			break;
	}
}

void func_338()
{
	if (!unk_0xCE990E643CD9D0E5(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_1, 2))
	{
		unk_0xBE20AB8238688965(&(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_1), 2);
		func_339(1);
	}
}

void func_339(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 7))
		{
			if (((!func_107(unk_0x460153A63B9477BC()) && !func_7(unk_0x460153A63B9477BC())) && !func_163(unk_0x460153A63B9477BC())) && !func_358(unk_0x460153A63B9477BC()))
			{
				if (func_166())
				{
					func_351(2, 0, 1);
					func_350();
				}
				if (func_349(0))
				{
					uVar0 = func_208(2481, -1, 0);
					unk_0xD2459066EA58CE43(&uVar0, 0);
					func_350();
				}
				if (func_349(func_348(func_321(unk_0x460153A63B9477BC()))))
				{
					uVar0 = func_208(2481, -1, 0);
					unk_0xD2459066EA58CE43(&uVar0, func_348(func_321(unk_0x460153A63B9477BC())));
					func_350();
				}
				if (func_347())
				{
					func_350();
				}
				if (func_321(unk_0x460153A63B9477BC()) > -1)
				{
					unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 7);
					if (func_346(unk_0x460153A63B9477BC()))
					{
						func_345();
					}
					func_342(func_344(func_321(unk_0x460153A63B9477BC())));
				}
			}
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 7))
	{
		unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 7);
		func_340();
	}
}

void func_340()
{
	if (func_341())
	{
		unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 17);
	}
}

bool func_341()
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 17);
}

void func_342(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8572)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_343() /*10931*/].f_6175.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312588.f_1[iVar0] == -1)
			{
				Global_1312588.f_1[iVar0] = iParam0;
				Global_1312588 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_343()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_344(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 67;
		
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_345()
{
	if (!func_341())
	{
		Global_2540384.f_6648 = unk_0x6CAAB7E78B5D978A();
		unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 17);
	}
}

int func_346(int iParam0)
{
	if (func_321(iParam0) == 236 || func_321(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_347()
{
	if (Global_2440049.f_1267.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_348(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		case 236:
			return 12;
		
		case 150:
			return 12;
		
		default:
	}
	return Global_262145.f_23647;
}

bool func_349(int iParam0)
{
	var uVar0;
	
	uVar0 = func_208(2481, -1, 0);
	return unk_0xCE990E643CD9D0E5(uVar0, iParam0);
}

void func_350()
{
	if (func_347())
	{
		Global_2440049.f_1267.f_16 = 1;
	}
}

void func_351(int iParam0, int iParam1, bool bParam2)
{
	if (func_166())
	{
		if (iParam1 == 1)
		{
			if (Global_2540384.f_4458 == -1)
			{
				Global_2540384.f_4458 = Global_262145.f_26466;
			}
			func_27(&(Global_2540384.f_4456), 0, 0);
			if (bParam2)
			{
				if (Global_2540384.f_4461 == -1)
				{
					Global_2540384.f_4461 = Global_262145.f_26467;
				}
				func_27(&(Global_2540384.f_4459), 0, 0);
			}
			else
			{
				Global_1312436 = 0;
				Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_8 = 0;
				func_357(1);
			}
		}
		else
		{
			Global_1312436 = 0;
			Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_8 = 0;
			func_357(1);
		}
		if ((!unk_0xFC559366953F62B3() && !func_356()) && !func_352(unk_0x460153A63B9477BC()))
		{
			Global_968396 = 0;
		}
		unk_0x88B39313953E52DA(0, -1, -1, iParam0);
	}
}

int func_352(int iParam0)
{
	if (func_353(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_353(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_354(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_354(int iParam0)
{
	return func_355(iParam0);
}

bool func_355(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

bool func_356()
{
	return Global_2451787.f_838;
}

void func_357(bool bParam0)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		if (!func_166())
		{
			if (func_12(unk_0x460153A63B9477BC(), 1, 0))
			{
				unk_0x7542EFCD7D27E5D2(unk_0x9B0761B4C3EB8BC7(), 1);
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 342, 0);
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 122, 0);
			}
			unk_0x6C017D65D396CE15(unk_0x460153A63B9477BC(), 1f);
			unk_0x74803B5FA5C6AE45(0);
			unk_0x873FC7B9D84F77F0(1);
			if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
			{
				Global_1312436.f_2 = 0;
				if (bParam0)
				{
					unk_0x6543AC06C231023E(0, 0);
				}
			}
		}
		else
		{
			if (func_12(unk_0x460153A63B9477BC(), 1, 1))
			{
				unk_0x7542EFCD7D27E5D2(unk_0x9B0761B4C3EB8BC7(), 0);
				unk_0x69C71C91F56D82B9(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), 1);
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 342, 1);
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 122, 1);
				unk_0x6C017D65D396CE15(unk_0x460153A63B9477BC(), 0.5f);
				if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
				{
					unk_0x6543AC06C231023E(1, 0);
				}
			}
			unk_0x74803B5FA5C6AE45(1);
			unk_0x873FC7B9D84F77F0(0);
		}
	}
}

int func_358(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x25DDB354A40FFCDB())
	{
		return 0;
	}
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		return Global_2515846;
	}
	else
	{
		uVar0 = unk_0x1FA7B77001D60F9D(iParam0);
		if (unk_0xAE06B9E39EBDE049(uVar0))
		{
			iVar1 = unk_0x36FE6D3220816ADA(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_359()
{
	switch (Local_626.f_3)
	{
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

int func_360(int iParam0, int iParam1)
{
	if (Local_626.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_361()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_376())
	{
		if (Local_626.f_3 == 14)
		{
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) && func_375(unk_0x9B0761B4C3EB8BC7(), 0) == -1)
			{
				iVar2 = unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7());
				if ((!func_374(&iVar2, 0) || unk_0x36FE6D3220816ADA(iVar2) != joaat("dodo")) && unk_0xA16974805191D19C(iVar2))
				{
					func_367(Local_626.f_3 != 14, 1, 0);
					if (func_366())
					{
						iVar3 = func_365();
						if (iVar3 >= 0)
						{
							if (!unk_0xCE990E643CD9D0E5(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_8[func_364(iVar3)], func_363(iVar3)))
							{
								iLocal_320++;
								unk_0xBE20AB8238688965(&(Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_8[func_364(iVar3)]), func_363(iVar3));
							}
						}
					}
					iVar0 = iLocal_320;
				}
			}
		}
		else
		{
			iVar0 = func_362();
		}
	}
	else
	{
		unk_0x93F7032840F15813(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = SYSTEM::ROUND(fVar1);
	}
	return unk_0x44F29CF6A0675F4F(iVar0);
}

int func_362()
{
	switch (Local_626.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

int func_363(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_364(iParam0) * 31);
}

int func_364(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_365()
{
	return iLocal_82;
}

int func_366()
{
	if (iLocal_89 == 1)
	{
		iLocal_89 = 0;
		return 1;
	}
	return 0;
}

void func_367(bool bParam0, bool bParam1, int iParam2)
{
	func_369(bParam0, iParam2);
	if (bParam1)
	{
		if (Local_290.f_2 < Local_293.f_2)
		{
			Local_290.f_2 = 0f;
		}
		else
		{
			Local_293.f_2 = 0f;
		}
		if (Local_296.f_2 < Local_299.f_2)
		{
			Local_296.f_2 = 0f;
		}
		else
		{
			Local_299.f_2 = 0f;
		}
	}
	switch (iLocal_83)
	{
		case 0:
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), Local_93[iLocal_82 /*3*/]) < fLocal_289)
				{
					if (unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7()) || unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7()))
					{
						if (unk_0x80FF6C016CDB0FAF(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0))
						{
							if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_290, Local_293, fLocal_302, 0, 1, 0))
							{
								bLocal_84 = true;
								iLocal_83 = 1;
							}
							if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_296, Local_299, fLocal_302, 0, 1, 0))
							{
								bLocal_85 = true;
								iLocal_83 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (!unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7()) && !unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7()))
				{
					func_368();
				}
				else if (!unk_0x80FF6C016CDB0FAF(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0))
				{
					func_368();
				}
				else if (!unk_0xA16974805191D19C(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)) && !bParam1)
				{
					func_368();
				}
				if (bLocal_84)
				{
					if (iLocal_88)
					{
						if (iLocal_87)
						{
							if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_290, Local_293, fLocal_302, 0, 1, 0) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_296, Local_299, fLocal_302, 0, 1, 0))
							{
								func_368();
								iLocal_89 = 1;
							}
						}
						else if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_290, Local_293, fLocal_302, 0, 1, 0) && unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_296, Local_299, fLocal_302, 0, 1, 0))
						{
							iLocal_87 = 1;
						}
						else if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_290, Local_293, fLocal_302, 0, 1, 0) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_296, Local_299, fLocal_302, 0, 1, 0))
						{
							func_368();
						}
					}
					else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_290, Local_293, fLocal_302, 0, 1, 0) && unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_296, Local_299, fLocal_302, 0, 1, 0))
					{
						iLocal_88 = 1;
					}
					else if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_290, Local_293, fLocal_302, 0, 1, 0) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_296, Local_299, fLocal_302, 0, 1, 0))
					{
						func_368();
					}
				}
				else if (bLocal_85)
				{
					if (iLocal_88)
					{
						if (iLocal_86)
						{
							if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_290, Local_293, fLocal_302, 0, 1, 0) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_296, Local_299, fLocal_302, 0, 1, 0))
							{
								func_368();
								iLocal_89 = 1;
							}
						}
						else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_290, Local_293, fLocal_302, 0, 1, 0) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_296, Local_299, fLocal_302, 0, 1, 0))
						{
							iLocal_86 = 1;
						}
						else if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_290, Local_293, fLocal_302, 0, 1, 0) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_296, Local_299, fLocal_302, 0, 1, 0))
						{
							func_368();
						}
					}
					else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_290, Local_293, fLocal_302, 0, 1, 0) && unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_296, Local_299, fLocal_302, 0, 1, 0))
					{
						iLocal_88 = 1;
					}
					else if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_290, Local_293, fLocal_302, 0, 1, 0) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_296, Local_299, fLocal_302, 0, 1, 0))
					{
						func_368();
					}
				}
			}
			break;
	}
}

void func_368()
{
	bLocal_84 = false;
	bLocal_85 = false;
	iLocal_86 = 0;
	iLocal_87 = 0;
	iLocal_88 = 0;
	iLocal_83 = 0;
}

void func_369(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	Local_90 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_373(iVar0)) && (uParam1 || !func_372(iVar0)))
		{
			if (func_371(Local_90, Local_93[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = SYSTEM::VDIST(Local_90, Local_93[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_82 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_370(iLocal_82);
}

void func_370(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Local_290 = { 1103.014f, -233.0374f, 56.13004f };
			Local_293 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_302 = 30f;
			Local_296 = { 1093.589f, -248.5926f, 56.88639f };
			Local_299 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			Local_290 = { 1044.182f, -324.5904f, 49.33408f };
			Local_293 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_302 = 30f;
			Local_296 = { 1007.983f, -320.6159f, 48.4543f };
			Local_299 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_290 = { 916.599f, -419.8782f, 35.62748f };
			Local_293 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_302 = 7f;
			Local_296 = { 912.1362f, -420.5161f, 35.38034f };
			Local_299 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			Local_290 = { 757.7189f, -472.924f, 19.2535f };
			Local_293 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_302 = 20.75f;
			Local_296 = { 744.9114f, -480.7373f, 19.06514f };
			Local_299 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			Local_290 = { 680.3677f, -581.1792f, 14.2145f };
			Local_293 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_302 = 45f;
			Local_296 = { 667.3692f, -610.5356f, 13.85401f };
			Local_299 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			Local_290 = { 644.2497f, -844.7504f, 12.36707f };
			Local_293 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_302 = 25f;
			Local_296 = { 644.3659f, -859.3878f, 12.59677f };
			Local_299 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			Local_290 = { 634.972f, -1011.64f, 10.92594f };
			Local_293 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_302 = 25f;
			Local_296 = { 634.9612f, -1029.123f, 10.61846f };
			Local_299 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			Local_290 = { 645.7223f, -1191.215f, 10.45198f };
			Local_293 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_302 = 50f;
			Local_296 = { 645.7223f, -1228.966f, 10.98015f };
			Local_299 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			Local_290 = { 642.1216f, -1295.73f, 9.005976f };
			Local_293 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_302 = 7f;
			Local_296 = { 644.7772f, -1298.168f, 9.128529f };
			Local_299 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			Local_290 = { 686.5675f, -1444.71f, 9.065001f };
			Local_293 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_302 = 25f;
			Local_296 = { 682.3027f, -1429.872f, 9.890836f };
			Local_299 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			Local_290 = { 718.7617f, -1734.313f, 9.082874f };
			Local_293 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_302 = 30f;
			Local_296 = { 717.5355f, -1748.646f, 9.363478f };
			Local_299 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			Local_290 = { 694.3165f, -2049.806f, 0.009695f };
			Local_293 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_302 = 30f;
			Local_296 = { 693.1836f, -2063.225f, 0.429037f };
			Local_299 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			Local_290 = { 642.6671f, -2494.551f, 0.468485f };
			Local_293 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_302 = 20f;
			Local_296 = { 647.0339f, -2506.202f, 0.583701f };
			Local_299 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			Local_290 = { 691.8235f, -2558.219f, 0.363352f };
			Local_293 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_302 = 10.25f;
			Local_296 = { 695.7928f, -2561.034f, 0.346731f };
			Local_299 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			Local_290 = { 723.6254f, -2562.171f, 0.255647f };
			Local_293 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_302 = 15f;
			Local_296 = { 735.765f, -2561.935f, 0.311182f };
			Local_299 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			Local_290 = { 891.4387f, -2603.12f, 0f };
			Local_293 = { 704.4932f, -2634.793f, 45f };
			fLocal_302 = 20f;
			Local_296 = { 893.2578f, -2616.235f, 0f };
			Local_299 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			Local_290 = { -2669.587f, 2491.96f, 2.043799f };
			Local_293 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_302 = 26.5f;
			Local_296 = { -2687.606f, 2494.868f, 2.608733f };
			Local_299 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			Local_290 = { -1986.173f, 4521.799f, 0f };
			Local_293 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_302 = 17f;
			Local_296 = { -1995.668f, 4531.259f, 0f };
			Local_299 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			Local_290 = { -526.0265f, 4472.442f, 0f };
			Local_293 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_302 = 10f;
			Local_296 = { -519.9281f, 4476.346f, 0f };
			Local_299 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_290 = { 98.1615f, 3384.489f, 45.45169f };
			Local_293 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_302 = 8f;
			Local_296 = { 152.6802f, 3346.793f, 45.02156f };
			Local_299 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			Local_290 = { 147.8606f, 3406.796f, 38.03672f };
			Local_293 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_302 = 14.5f;
			Local_296 = { 130.0916f, 3425.417f, 38.05672f };
			Local_299 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			Local_290 = { 2830.972f, 4967.14f, 34.56013f };
			Local_293 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_302 = 10f;
			Local_296 = { 2826.767f, 4964.185f, 34.10636f };
			Local_299 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			Local_290 = { -151.5764f, 4264.417f, 31.04735f };
			Local_293 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_302 = 10f;
			Local_296 = { -148.3842f, 4261.071f, 31.57409f };
			Local_299 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			Local_290 = { -426.6919f, 2964.272f, 14.848f };
			Local_293 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_302 = 7f;
			Local_296 = { -425.0283f, 2967.861f, 15.22699f };
			Local_299 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			Local_290 = { -192.3414f, 2864.916f, 30.72595f };
			Local_293 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_302 = 10f;
			Local_296 = { -192.0129f, 2871.603f, 29.99943f };
			Local_299 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			Local_290 = { 2539.185f, 2228.772f, 18.6102f };
			Local_293 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_302 = 10f;
			Local_296 = { 2543.708f, 2231.402f, 18.331f };
			Local_299 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			Local_290 = { 2954.087f, 815.7209f, 0.037901f };
			Local_293 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_302 = 35f;
			Local_296 = { 2966.123f, 806.8889f, 0.544056f };
			Local_299 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			Local_290 = { 2329.673f, -459.6648f, 70.24277f };
			Local_293 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_302 = 12f;
			Local_296 = { 2324.752f, -455.5238f, 70.25145f };
			Local_299 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			Local_290 = { 1943.428f, -753.251f, 80.17905f };
			Local_293 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_302 = 7f;
			Local_296 = { 1943.366f, -758.287f, 80.32291f };
			Local_299 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			Local_290 = { -271.2849f, -2414.993f, -10f };
			Local_293 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_302 = 30f;
			Local_296 = { -279.8399f, -2427.212f, -10f };
			Local_299 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 30:
			Local_290 = { -1483f, 2691.428f, -10f };
			Local_293 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_302 = 12f;
			Local_296 = { -1478.152f, 2696.688f, -10f };
			Local_299 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			Local_290 = { 222.1519f, -2343.487f, 0.039199f };
			Local_293 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_302 = 12f;
			Local_296 = { 216.959f, -2343.487f, 0.207734f };
			Local_299 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_290 = { 346.4622f, -2244.374f, 0.159779f };
			Local_293 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_302 = 20f;
			Local_296 = { 359.609f, -2244.468f, 0.129684f };
			Local_299 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			Local_290 = { -1859.68f, -322.6357f, 56.16368f };
			Local_293 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_302 = 7.5f;
			Local_296 = { -1860.27f, -327.8634f, 57.543f };
			Local_299 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			Local_290 = { -680.2632f, -600.818f, 69.11289f };
			Local_293 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_302 = 31.5f;
			Local_296 = { -680.6077f, -618.3658f, 69.27496f };
			Local_299 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			Local_290 = { -1468.096f, -591.7158f, 67.05518f };
			Local_293 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_302 = 11.75f;
			Local_296 = { -1474.903f, -591.1215f, 67.08091f };
			Local_299 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_290 = { -1544.958f, -537.1475f, 72.44347f };
			Local_293 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_302 = 11.75f;
			Local_296 = { -1541.008f, -541.5494f, 71.61972f };
			Local_299 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			Local_290 = { 333.2108f, -2727.274f, 20.71663f };
			Local_293 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_302 = 20f;
			Local_296 = { 343.1127f, -2727.236f, 20.23613f };
			Local_299 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			Local_290 = { 1928.071f, 6228.355f, 43.49398f };
			Local_293 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_302 = 13f;
			Local_296 = { 1931.82f, 6235.634f, 43.37382f };
			Local_299 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			Local_290 = { -736.4309f, -1590.921f, 10.80892f };
			Local_293 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_302 = 15f;
			Local_296 = { -727.2307f, -1585.221f, 11.78027f };
			Local_299 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			Local_290 = { -676.3775f, -1548.553f, 12.33747f };
			Local_293 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_302 = 25f;
			Local_296 = { -654.203f, -1536.146f, 9.191055f };
			Local_299 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			Local_290 = { -624.2344f, -1537.045f, 12.60193f };
			Local_293 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_302 = 8f;
			Local_296 = { -615.4003f, -1536.65f, 12.40271f };
			Local_299 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			Local_290 = { -492.5057f, -1632.457f, 24.3307f };
			Local_293 = { -418.2088f, -1487.452f, 0f };
			fLocal_302 = 25f;
			Local_296 = { -486.2016f, -1636.095f, 24.20805f };
			Local_299 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			Local_290 = { -359.3541f, -1639.693f, 13.13455f };
			Local_293 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_302 = 25f;
			Local_296 = { -378.1518f, -1705.66f, 12.47196f };
			Local_299 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_290 = { -243.4436f, -1814.623f, 25.69465f };
			Local_293 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_302 = 25f;
			Local_296 = { -235.1319f, -1822.094f, 25.86542f };
			Local_299 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			Local_290 = { 84.55537f, -2046.159f, 13.30767f };
			Local_293 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_302 = 25f;
			Local_296 = { 17.90788f, -2035.773f, 12.62706f };
			Local_299 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			Local_290 = { 221.5029f, -2232.766f, 9.88676f };
			Local_293 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_302 = 8f;
			Local_296 = { 218.583f, -2232.766f, 9.886198f };
			Local_299 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			Local_290 = { 221.6518f, -2184.635f, 11.66457f };
			Local_293 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_302 = 8f;
			Local_296 = { 217.8995f, -2184.635f, 11.5405f };
			Local_299 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 48:
			Local_290 = { 2326.57f, 1096.031f, 76.31458f };
			Local_293 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_302 = 21f;
			Local_296 = { 2334.453f, 1103.067f, 76.26603f };
			Local_299 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			Local_290 = { 2379.442f, 1150.776f, 58.79632f };
			Local_293 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_302 = 12f;
			Local_296 = { 2374.064f, 1146.282f, 58.83331f };
			Local_299 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			Local_290 = { -1179.405f, -355.2554f, 56.53003f };
			Local_293 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_302 = 12.5f;
			Local_296 = { -1178.385f, -361.8784f, 56.15081f };
			Local_299 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			Local_290 = { -921.3846f, -384.94f, 137.0181f };
			Local_293 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_302 = 16f;
			Local_296 = { -914.1658f, -387.9444f, 137.0794f };
			Local_299 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			Local_290 = { -740.2564f, 246.4529f, 132.2922f };
			Local_293 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_302 = 22f;
			Local_296 = { -726.6429f, 253.0676f, 132.3319f };
			Local_299 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			Local_290 = { -771.2068f, 268.2729f, 132.1689f };
			Local_293 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_302 = 16f;
			Local_296 = { -770.8035f, 310.8625f, 137.4161f };
			Local_299 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			Local_290 = { 259.2205f, 135.4146f, 136.7083f };
			Local_293 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_302 = 16f;
			Local_296 = { 261.9694f, 142.9676f, 136.6889f };
			Local_299 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			Local_290 = { 393.548f, -30.87166f, 152.6635f };
			Local_293 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_302 = 8f;
			Local_296 = { 390.5358f, -36.08882f, 152.7813f };
			Local_299 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			Local_290 = { 114.3139f, -648.4297f, 261.8488f };
			Local_293 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_302 = 20f;
			Local_296 = { 124.8467f, -646.6575f, 261.8488f };
			Local_299 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			Local_290 = { -215.919f, -823.8436f, 126.0224f };
			Local_293 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_302 = 20f;
			Local_296 = { -225.397f, -820.3937f, 126.0812f };
			Local_299 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_290 = { -296.4725f, -802.0815f, 95.40108f };
			Local_293 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_302 = 20f;
			Local_296 = { -305.4602f, -798.8369f, 95.48194f };
			Local_299 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			Local_290 = { -292.3034f, -823.3569f, 95.37621f };
			Local_293 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_302 = 20f;
			Local_296 = { -288.9206f, -814.022f, 95.37556f };
			Local_299 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			Local_290 = { -256.3589f, -714.7838f, 110.1617f };
			Local_293 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_302 = 20f;
			Local_296 = { -253.7723f, -705.6632f, 110.1736f };
			Local_299 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			Local_290 = { 1808.214f, 1949.246f, 71.73707f };
			Local_293 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_302 = 9.75f;
			Local_296 = { 1802.786f, 1950.262f, 71.74002f };
			Local_299 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			Local_290 = { 2388.733f, 2931.941f, 46.62681f };
			Local_293 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_302 = 10f;
			Local_296 = { 2392.547f, 2934.867f, 46.6268f };
			Local_299 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			Local_290 = { 2700.056f, 4836.381f, 42.07854f };
			Local_293 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_302 = 20.75f;
			Local_296 = { 2685.672f, 4821.653f, 42.18471f };
			Local_299 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			Local_290 = { -1053.446f, 4766.245f, 234.3251f };
			Local_293 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_302 = 5f;
			Local_296 = { -1051.414f, 4767.193f, 234.4293f };
			Local_299 = { -1037.954f, 4738.354f, 204.5282f };
			break;
	}
}

int func_371(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x0D77CDCF403AEBD2((Param0.x - Param3.x)) <= fParam6)
		{
			if (unk_0x0D77CDCF403AEBD2((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x0D77CDCF403AEBD2((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x0D77CDCF403AEBD2((Param0.x - Param3.x)) <= fParam6)
	{
		if (unk_0x0D77CDCF403AEBD2((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 8:
		case 12:
		case 13:
		case 20:
		case 31:
		case 32:
		case 46:
		case 47:
			return 1;
			break;
	}
	return 0;
}

int func_373(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_374(var uParam0, int iParam1)
{
	if (unk_0xAE06B9E39EBDE049(*uParam0))
	{
		if (!unk_0xA59F96B50B97E63C(*uParam0, 0) || iParam1)
		{
			if (unk_0xE72C9284B5143451(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_375(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0x47DBF174A0CB9D55(iParam0, iParam1))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(iParam0, iParam1);
			if (unk_0xAE06B9E39EBDE049(iVar0))
			{
				iVar1 = unk_0x112A81273D7187A5(unk_0x36FE6D3220816ADA(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xB064AF9925F5537B(iVar0, iVar3, 0))
					{
						if (unk_0x10D3F7E169A49C44(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_376()
{
	switch (Local_626.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_377(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_394() < 10)
	{
		iVar0 = func_393();
		func_378(Param0, fParam3, iVar0, iParam4);
	}
	return iVar0;
}

void func_378(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	func_379(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, uParam5);
}

void func_379(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_388(unk_0x460153A63B9477BC()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_387(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_382(Var0))
		{
			Global_2405074.f_45.f_64 = func_381(unk_0x460153A63B9477BC());
			func_380(Var0, iParam8);
		}
	}
}

void func_380(struct<12> Param0, int iParam12)
{
	Global_2405074.f_365[iParam12 /*12*/] = { Param0 };
	Global_2405074.f_365[iParam12 /*12*/].f_9 = 1;
}

int func_381(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_1;
	}
	return 0;
}

int func_382(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2405074.f_45[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_383(Global_2405074.f_45[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_383(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if ((uParam12[iVar0 /*12*/])->f_9)
		{
			switch ((uParam12[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_386(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_384(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_386(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_384(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_384(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_385(Param0, Param3, Var0, Var3);
}

int func_385(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.x >= Param6.x && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.x <= Param9.x) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_386(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((SYSTEM::VMAG(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_387(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.x = *uParam0;
		Var3.x = *uParam1;
	}
	else
	{
		Var0.x = *uParam1;
		Var3.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var3.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var3.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var3.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var3.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var3 };
}

int func_388(int iParam0)
{
	if (((func_391(iParam0, 1) || func_390(iParam0)) || func_113(iParam0, 0)) || func_389(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_389(int iParam0)
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_35;
}

int func_390(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/] != -1;
	}
	return 0;
}

bool func_391(int iParam0, bool bParam1)
{
	if (func_392() != 0)
	{
		return func_381(iParam0) != 0;
	}
	return func_353(iParam0, bParam1, 0);
}

int func_392()
{
	return Global_30968;
}

int func_393()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2405074.f_365[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_394()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405074.f_365[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_395(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x6A826E35A3096ED0(sParam1);
	unk_0x6A826E35A3096ED0(sParam2);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

char* func_396(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0";
		
		case 1:
			return "AMCH_1";
		
		case 2:
			return "AMCH_2";
		
		case 3:
			return "AMCH_3";
		
		case 4:
			return "AMCH_4";
		
		case 5:
			return "AMCH_5";
		
		case 6:
			return "AMCH_6";
		
		case 7:
			return "AMCH_7";
		
		case 8:
			return "AMCH_8";
		
		case 14:
			return "AMCH_9";
		
		case 9:
			return "AMCH_12";
		
		case 10:
			return "AMCH_13";
		
		case 11:
			return "AMCH_15";
		
		case 12:
			return "AMCH_16";
		
		case 15:
			return "AMCH_19";
		
		case 16:
			return "AMCH_20";
		
		case 17:
			return "AMCH_21";
		
		case 18:
			return "AMCH_22";
		
		case 13:
			return "AMCH_23";
		
		default:
	}
	return "";
}

char* func_397(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0SLC";
		
		case 1:
			return "AMCH_1SLC";
		
		case 2:
			return "AMCH_2SLC";
		
		case 3:
			return "AMCH_3SLC";
		
		case 4:
			return "AMCH_4SLC";
		
		case 5:
			return "AMCH_5SLC";
		
		case 6:
			return "AMCH_6SLC";
		
		case 7:
			return "AMCH_7SLC";
		
		case 8:
			return "AMCH_8SLC";
		
		case 14:
			return "AMCH_9SLC";
		
		case 9:
			return "AMCH_12SLC";
		
		case 10:
			return "AMCH_13SLC";
		
		case 11:
			return "AMCH_15SLC";
		
		case 12:
			return "AMCH_16SLC";
		
		case 15:
			return "AMCH_19SLC";
		
		case 16:
			return "AMCH_20SLC";
		
		case 17:
			return "AMCH_21SLC";
		
		case 18:
			return "AMCH_22SLC";
		
		case 13:
			return "AMCH_23SLC";
		
		default:
	}
	return "";
}

char* func_398(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_BIG_0";
		
		case 1:
			return "AMCH_BIG_1";
		
		case 2:
			return "AMCH_BIG_2";
		
		case 3:
			return "AMCH_BIG_3";
		
		case 4:
			return "AMCH_BIG_4";
		
		case 5:
			return "AMCH_BIG_5";
		
		case 6:
			return "AMCH_BIG_6";
		
		case 7:
			return "AMCH_BIG_7";
		
		case 8:
			return "AMCH_BIG_8";
		
		case 14:
			return "AMCH_BIG_9";
		
		case 9:
			return "AMCH_BIG_12";
		
		case 10:
			return "AMCH_BIG_13";
		
		case 11:
			return "AMCH_BIG_15";
		
		case 12:
			return "AMCH_BIG_16";
		
		case 15:
			return "AMCH_BIG_19";
		
		case 16:
			return "AMCH_BIG_20";
		
		case 17:
			return "AMCH_BIG_21";
		
		case 18:
			return "AMCH_BIG_22";
		
		case 13:
			return "AMCH_BIG_23";
		
		default:
	}
	return "";
}

void func_399()
{
	if (!func_156())
	{
		return;
	}
	if (!unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == Global_1312603.f_9)
	{
		return;
	}
	func_152();
}

void func_400(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_373(iVar0) && !func_372(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { Local_93[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_401()
{
	if (!func_376())
	{
		if (Local_626.f_3 == 14)
		{
			func_404();
		}
		Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_4.f_1 = func_362();
	}
	else if ((!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 4) && !unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 5)) && !func_403(unk_0x460153A63B9477BC()))
	{
		func_402();
	}
}

void func_402()
{
	switch (Local_626.f_3)
	{
		case 0:
			unk_0x1D185C0264F25741(8, 2);
			break;
		
		case 1:
			unk_0x1D185C0264F25741(13, 2);
			break;
		
		case 2:
			unk_0x1D185C0264F25741(4, 2);
			break;
		
		case 4:
			unk_0x1D185C0264F25741(1, 2);
			break;
		
		case 3:
			unk_0x1D185C0264F25741(2, 2);
			break;
		
		case 5:
			unk_0x1D185C0264F25741(3, 2);
			break;
		
		case 6:
			unk_0x1D185C0264F25741(11, 3);
			break;
		
		case 7:
			unk_0x1D185C0264F25741(14, 1);
			break;
		
		case 8:
			unk_0x1D185C0264F25741(29, 2);
			break;
		
		case 9:
			unk_0x1D185C0264F25741(12, 2);
			break;
		
		case 10:
			unk_0x1D185C0264F25741(10, 2);
			break;
		
		case 11:
			unk_0x1D185C0264F25741(18, 2);
			break;
		
		case 12:
			unk_0x1D185C0264F25741(20, 2);
			break;
		
		case 13:
			unk_0x1D185C0264F25741(27, 2);
			break;
		
		case 15:
			unk_0x1D185C0264F25741(26, 1);
			break;
		
		case 16:
			unk_0x1D185C0264F25741(25, 1);
			break;
		
		case 17:
			unk_0x1D185C0264F25741(22, 1);
			break;
		
		case 18:
			unk_0x1D185C0264F25741(24, 1);
			break;
	}
	unk_0xBE20AB8238688965(&iLocal_317, 8);
}

bool func_403(int iParam0)
{
	return func_14(iParam0, 0);
}

void func_404()
{
	Local_93[0 /*3*/] = { 1083f, -231f, 60f };
	Local_93[1 /*3*/] = { 1024f, -325f, 60f };
	Local_93[2 /*3*/] = { 910f, -401f, 43f };
	Local_93[3 /*3*/] = { 721f, -457f, 26f };
	Local_93[4 /*3*/] = { 643f, -579f, 26f };
	Local_93[5 /*3*/] = { 590f, -851f, 26f };
	Local_93[6 /*3*/] = { 590f, -1023f, 16f };
	Local_93[7 /*3*/] = { 582f, -1205f, 24f };
	Local_93[8 /*3*/] = { 608f, -1335f, 16f };
	Local_93[9 /*3*/] = { 640f, -1434f, 16f };
	Local_93[10 /*3*/] = { 671f, -1742f, 20f };
	Local_93[11 /*3*/] = { 651f, -2046f, 16f };
	Local_93[12 /*3*/] = { 603f, -2505f, 9f };
	Local_93[13 /*3*/] = { 673f, -2582f, 4f };
	Local_93[14 /*3*/] = { 728f, -2594f, 10f };
	Local_93[15 /*3*/] = { 794f, -2624f, 27f };
	Local_93[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_93[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_93[18 /*3*/] = { -513f, 4427f, 40f };
	Local_93[19 /*3*/] = { 126f, 3366f, 40f };
	Local_93[20 /*3*/] = { 143f, 3418f, 36f };
	Local_93[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_93[22 /*3*/] = { -162f, 4249f, 40f };
	Local_93[23 /*3*/] = { -408f, 2964f, 20f };
	Local_93[24 /*3*/] = { -181f, 2862f, 38f };
	Local_93[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_93[26 /*3*/] = { 2950f, 803f, 8f };
	Local_93[27 /*3*/] = { 2369f, -409f, 80f };
	Local_93[28 /*3*/] = { 1906f, -755f, 84f };
	Local_93[29 /*3*/] = { -403f, -2333f, 40f };
	Local_93[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_93[31 /*3*/] = { 219f, -2315f, 5f };
	Local_93[32 /*3*/] = { 350f, -2315f, 5f };
	Local_93[33 /*3*/] = { -1848f, -333f, 75f };
	Local_93[34 /*3*/] = { -693f, -608f, 69f };
	Local_93[35 /*3*/] = { -1461f, -582f, 53f };
	Local_93[36 /*3*/] = { -1553f, -546f, 59f };
	Local_93[37 /*3*/] = { 338f, -2758f, 23f };
	Local_93[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_93[39 /*3*/] = { -713f, -1538f, 13f };
	Local_93[40 /*3*/] = { -659f, -1518f, 13f };
	Local_93[41 /*3*/] = { -620f, -1502f, 16f };
	Local_93[42 /*3*/] = { -445f, -1575f, 26f };
	Local_93[43 /*3*/] = { -373f, -1680f, 19f };
	Local_93[44 /*3*/] = { -212f, -1805f, 29f };
	Local_93[45 /*3*/] = { 47f, -2040f, 18f };
	Local_93[46 /*3*/] = { 223f, -2240f, 6f };
	Local_93[47 /*3*/] = { 218f, -2189f, 6f };
	Local_93[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_93[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_93[50 /*3*/] = { -1186f, -365f, 46f };
	Local_93[51 /*3*/] = { -916f, -407f, 93f };
	Local_93[52 /*3*/] = { -726f, 235f, 105f };
	Local_93[53 /*3*/] = { -774f, 286f, 112f };
	Local_93[54 /*3*/] = { 271f, 134f, 125f };
	Local_93[55 /*3*/] = { 377f, -28f, 125f };
	Local_93[56 /*3*/] = { 121f, -703f, 150f };
	Local_93[57 /*3*/] = { -204f, -784f, 74f };
	Local_93[58 /*3*/] = { -287f, -774f, 72f };
	Local_93[59 /*3*/] = { -272f, -824f, 71f };
	Local_93[60 /*3*/] = { -230f, -723f, 80f };
	Local_93[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_93[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_93[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_93[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_405(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_212, iParam0))
		{
			unk_0xBE20AB8238688965(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_212), iParam0);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_212, iParam0))
	{
		unk_0xD2459066EA58CE43(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_212), iParam0);
	}
}

void func_406(var uParam0, int iParam1)
{
	if (func_321(unk_0x460153A63B9477BC()) == 133 && iParam1)
	{
		Global_2540384.f_5109 = uParam0;
	}
	else
	{
		Global_2540384.f_5109 = -1;
	}
}

void func_407(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x0C0DE28672975DC3("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x0C0DE28672975DC3("WantedMusicDisabled", 1);
	}
	Global_2540384.f_5035 = -1;
	bVar0 = (func_113(unk_0x460153A63B9477BC(), 0) && func_109(unk_0x460153A63B9477BC()));
	if (bParam6)
	{
		func_405(func_424(iParam0), 1);
	}
	else
	{
		func_423(iParam0, -1);
		if (func_8(unk_0x460153A63B9477BC()))
		{
			Global_1574656.f_3 = iParam0;
		}
		else
		{
			func_422(iParam0);
		}
		Global_1574656.f_4 = -1;
		if (func_8(unk_0x460153A63B9477BC()))
		{
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 5);
		}
		if (((func_166() && !func_165()) || func_164(unk_0x460153A63B9477BC(), 21)) || func_164(unk_0x460153A63B9477BC(), 25))
		{
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 4);
		}
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 17);
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 20);
		if (func_421(iParam0))
		{
			func_420();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_417(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x34FEEAC2548C3789(fParam2);
			if (iParam0 == 146)
			{
				unk_0x53797676AD34A9AA(0);
				unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 0, 0);
				unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
			}
		}
		if (func_415(iParam0))
		{
			unk_0x53797676AD34A9AA(0);
			unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 0, 0);
			unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_413(1);
				if (func_264(0))
				{
					unk_0xBE20AB8238688965(&(Global_1574656.f_1), 9);
				}
				if (!bParam6)
				{
					unk_0xBE20AB8238688965(&(Global_1574656.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_411(1);
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 12);
		}
		if (bParam5)
		{
			func_410();
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_408(iParam0))
			{
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 21);
			}
		}
	}
	Global_2515064 = 1;
}

int func_408(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return 1;
		
		default:
	}
	if (func_409())
	{
		return 1;
	}
	return 0;
}

int func_409()
{
	switch (func_320())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_410()
{
	unk_0xBE20AB8238688965(&(Global_2540384.f_5026), 0);
}

void func_411(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_99007.f_8 = 1;
	}
	else
	{
		Global_99007.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 54)
	{
		func_412(iVar0);
		iVar0++;
	}
}

void func_412(int iParam0)
{
	Global_99007.f_184[iParam0] = 1;
	Global_99007.f_183 = 1;
}

void func_413(int iParam0)
{
	if (func_414() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_414()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_415(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_416(unk_0x460153A63B9477BC()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_416(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 0);
	}
	return 0;
}

void func_417(float fParam0)
{
	float fVar0;
	
	if (unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == func_418())
	{
		return;
	}
	fVar0 = (Global_2540384.f_5183 - fParam0);
	if (unk_0x7FD2BDF03806FD9D(Global_2540384.f_5184))
	{
		if (!Global_2540384.f_5184 == unk_0x354AD085195C5FA6() && unk_0x0D77CDCF403AEBD2(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2540384.f_5183 = fParam0;
	Global_2540384.f_5184 = unk_0x354AD085195C5FA6();
}

int func_418()
{
	switch (func_392())
	{
		case 0:
			return func_419();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_419()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_420()
{
	Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_204 = 0;
	unk_0xD2459066EA58CE43(&(Global_2540384.f_4625), 1);
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_422(int iParam0)
{
	Global_1630317[unk_0x460153A63B9477BC() /*595*/] = iParam0;
}

void func_423(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_349(0) || func_349(func_348(iVar0)))
		{
			unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 2);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 2);
		}
	}
}

int func_424(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

int func_425()
{
	switch (Local_626.f_3)
	{
		case 18:
		case 16:
		case 15:
		case 17:
			return 1;
		
		default:
	}
	return 0;
}

void func_426()
{
	Global_1673529 = 1;
	if (!unk_0xCE990E643CD9D0E5(Global_2549478, 0))
	{
		unk_0xBE20AB8238688965(&Global_2549478, 0);
		unk_0xBE20AB8238688965(&Global_1673530, 0);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2549478, 1))
	{
		unk_0xBE20AB8238688965(&Global_2549478, 1);
		unk_0xBE20AB8238688965(&Global_1673530, 1);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2549478, 5))
	{
		unk_0xBE20AB8238688965(&Global_2549478, 5);
		unk_0xBE20AB8238688965(&Global_1673530, 5);
	}
	if (unk_0x60C47897C07F44B1(-355737150))
	{
		unk_0xDC5C33A98881772F(-355737150, 0, 0, 0);
	}
	if (unk_0x60C47897C07F44B1(-580979506))
	{
		unk_0xDC5C33A98881772F(-580979506, 0, 0, 0);
	}
	if (unk_0x60C47897C07F44B1(-1426452475))
	{
		unk_0xDC5C33A98881772F(-1426452475, 0, 0, 0);
	}
	if (unk_0x60C47897C07F44B1(745417724))
	{
		unk_0xDC5C33A98881772F(745417724, 0, 0, 0);
	}
	if (unk_0x60C47897C07F44B1(-1305304906))
	{
		unk_0xDC5C33A98881772F(-1305304906, 0, 0, 0);
	}
	if (unk_0x60C47897C07F44B1(-1543175077))
	{
		unk_0xDC5C33A98881772F(-1543175077, 0, 0, 0);
	}
	if (unk_0x60C47897C07F44B1(-811770997))
	{
		unk_0xDC5C33A98881772F(-811770997, 0, 0, 0);
	}
}

int func_427()
{
	switch (Local_626.f_3)
	{
		case 1:
		case 6:
		case 11:
		case 12:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

void func_428()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_626.f_3))
	{
		if (Local_626.f_3 == 1 || Local_626.f_3 == 6)
		{
			iVar0 = func_450(unk_0x460153A63B9477BC(), 1);
			iVar1 = func_201(iVar0, 1);
			if (iVar1 < 11)
			{
				if (unk_0x642A35A076CECC5A(unk_0x9B0761B4C3EB8BC7()))
				{
					unk_0x92BD213E6A0E666B(unk_0x9B0761B4C3EB8BC7(), joaat("gadget_parachute"), 1, 0, 0);
					func_429(1);
				}
			}
			else
			{
				unk_0x5FFB9661E6DD4DDB(unk_0x460153A63B9477BC(), 1);
			}
		}
	}
}

void func_429(bool bParam0)
{
	int iVar0;
	
	if (unk_0x3FB4D40A857CEA77(unk_0x9B0761B4C3EB8BC7(), 5) != 0)
	{
		unk_0x8342E6CB98CD545C(unk_0x9B0761B4C3EB8BC7(), 177, 1);
		unk_0xCCBF08403B8F5FE7(unk_0x460153A63B9477BC(), func_208(585, -1, 0));
		if (func_449())
		{
			unk_0xA383674598131A24(unk_0x460153A63B9477BC(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_448())
		{
			unk_0xA383674598131A24(unk_0x460153A63B9477BC(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_445(3610, -1, -1))
		{
		}
		iVar0 = func_208(2041, -1, 0);
		unk_0x7A5A002019151CCC(unk_0x460153A63B9477BC(), func_444(unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC()), iVar0));
		if (func_261(0))
		{
			unk_0xCCBF08403B8F5FE7(unk_0x460153A63B9477BC(), func_208(585, -1, 0));
		}
		else
		{
			unk_0xCCBF08403B8F5FE7(unk_0x460153A63B9477BC(), func_443(Global_2549779));
		}
		func_442(unk_0x460153A63B9477BC(), iVar0);
		unk_0xA853059BD252952D(unk_0x460153A63B9477BC(), 5, func_435(unk_0x9B0761B4C3EB8BC7(), iVar0), func_434(unk_0x9B0761B4C3EB8BC7(), iVar0), 0);
		func_433(func_208(2041, -1, 0), 1);
		Global_2540384.f_287 = 1;
		func_430(unk_0x460153A63B9477BC(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_430(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		func_432();
		if (iParam2 == -1)
		{
			iParam2 = func_208(2041, -1, 0);
		}
		unk_0xA853059BD252952D(iParam0, 5, func_435(unk_0x1FA7B77001D60F9D(iParam0), iParam2), func_434(unk_0x1FA7B77001D60F9D(iParam0), iParam2), 0);
		unk_0x7A5A002019151CCC(iParam0, func_444(unk_0x1FA7B77001D60F9D(iParam0), iParam2));
		unk_0x45F588C0DD767737(unk_0x1FA7B77001D60F9D(iParam0), 5, func_435(unk_0x1FA7B77001D60F9D(iParam0), iParam2), func_434(unk_0x1FA7B77001D60F9D(iParam0), iParam2), func_444(unk_0x1FA7B77001D60F9D(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_208(585, -1, 0);
		}
		if (func_261(1) && func_431(iParam0))
		{
			unk_0xCCBF08403B8F5FE7(iParam0, func_443(Global_2549779));
		}
		else
		{
			unk_0xCCBF08403B8F5FE7(iParam0, iParam1);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_28, 4))
		{
			unk_0xCCBF08403B8F5FE7(iParam0, Global_1574444);
			unk_0xA383674598131A24(iParam0, joaat("xm_prop_x17_para_sp_s"));
		}
		func_442(iParam0, iParam2);
		unk_0x8342E6CB98CD545C(unk_0x1FA7B77001D60F9D(iParam0), 177, 1);
	}
}

bool func_431(int iParam0)
{
	return func_108(iParam0, 10);
}

void func_432()
{
	Global_76808 = 0;
	Global_76809 = -1;
	Global_76810 = -1;
	Global_76811 = -1;
	Global_76812 = -1;
	Global_76813 = -1;
}

void func_433(int iParam0, int iParam1)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		func_432();
		func_199(2041, iParam0, -1, 1, 0);
		unk_0xA853059BD252952D(unk_0x460153A63B9477BC(), 5, func_435(unk_0x9B0761B4C3EB8BC7(), iParam0), func_434(unk_0x9B0761B4C3EB8BC7(), iParam0), 0);
		func_442(unk_0x460153A63B9477BC(), iParam0);
		unk_0x7A5A002019151CCC(unk_0x460153A63B9477BC(), func_444(unk_0x9B0761B4C3EB8BC7(), iParam0));
		if ((iParam1 && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7())) && unk_0x3FB4D40A857CEA77(unk_0x9B0761B4C3EB8BC7(), 5) != 0)
		{
			func_430(unk_0x460153A63B9477BC(), -1, -1);
		}
	}
}

int func_434(var uParam0, int iParam1)
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_435(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0x3FB4D40A857CEA77(uParam0, 9) != false;
	iVar1 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
	iVar2 = unk_0x21A69BE7599CD8B7(iParam0, 11, unk_0x3FB4D40A857CEA77(iParam0, 11), unk_0x79AFA009D186C4FB(iParam0, 11));
	iVar3 = unk_0x21A69BE7599CD8B7(iParam0, 4, unk_0x3FB4D40A857CEA77(iParam0, 4), unk_0x79AFA009D186C4FB(iParam0, 4));
	if ((((!bVar0 == Global_76808 || !iParam1 == Global_76809) || !iVar1 == Global_76810) || !iVar2 == Global_76811) || !iVar3 == Global_76812)
	{
		Global_76808 = bVar0;
		Global_76809 = iParam1;
		Global_76810 = iVar1;
		Global_76811 = iVar2;
		Global_76812 = iVar3;
		Global_76813 = func_436(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC())) == joaat("mp_f_freemode_01"))
			{
				if (Global_76813 == 61)
				{
					Global_76813 = 79;
				}
				else if (Global_76813 == 39)
				{
					Global_76813 = 79;
				}
				else if (Global_76813 == 76)
				{
					Global_76813 = 80;
				}
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC())) == joaat("mp_m_freemode_01"))
			{
				if (Global_76813 == 61)
				{
					Global_76813 = 78;
				}
				else if (Global_76813 == 39)
				{
					Global_76813 = 78;
				}
			}
		}
	}
	return Global_76813;
}

int func_436(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = unk_0x3FB4D40A857CEA77(uParam0, 11);
	if (unk_0x3FB4D40A857CEA77(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x36FE6D3220816ADA(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	uVar4 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
	if (unk_0x4D0432E34C5996D9(uVar4, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_2"), 8) || unk_0x4D0432E34C5996D9(iVar4, 1293534210, 8))
			{
				return (2 + iVar3);
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_3"), 8) || unk_0x4D0432E34C5996D9(iVar4, 1072212384, 8))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (7 + iVar3);
			}
			if ((unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_3"), 8) || unk_0x4D0432E34C5996D9(iVar4, 1072212384, 8)) || unk_0x4D0432E34C5996D9(iVar4, 1293534210, 8))
			{
				return (8 + iVar3);
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		return func_441(iParam0, iParam1);
	}
	if (func_440(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = unk_0x21A69BE7599CD8B7(iParam0, 11, iVar0, unk_0x79AFA009D186C4FB(iParam0, 11));
		if (unk_0x4D0432E34C5996D9(iVar5, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("PILOT_SUIT"), 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_5"), 0))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_32"), 0))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_33"), 0))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_COAT"), 0) && !unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_3"), 0))
		{
			iVar6 = func_439(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_438(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_438(iVar5);
						break;
					}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_437(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_438(iVar5);
					break;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_7"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_8"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x4D0432E34C5996D9(iVar5, joaat("AIR_DRAW_3"), 0))
				{
					return func_441(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0x4D0432E34C5996D9(iVar5, -1086258388, 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_SWEAT"), 0)) || unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_441(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return func_441(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return func_441(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_441(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_441(iParam0, iParam1) + 15;
				}
				else
				{
					return func_441(iParam0, iParam1) + 15;
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return func_441(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_441(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return func_441(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1);
			}
			else
			{
				return func_441(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_441(iParam0, iParam1) + 15;
			}
			else
			{
				return func_441(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((unk_0x4D0432E34C5996D9(iVar5, joaat("SILK_PYJAMAS"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_438(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_437(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_438(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_439(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x4D0432E34C5996D9(uParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_440(int iParam0)
{
	if (unk_0x4D0432E34C5996D9(unk_0x21A69BE7599CD8B7(uParam0, 4, unk_0x3FB4D40A857CEA77(uParam0, 4), unk_0x79AFA009D186C4FB(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_441(var uParam0, int iParam1)
{
	if (iParam1 > 69)
	{
		return 69;
	}
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

void func_442(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("vw_p_para_bag_vine_s"));
	}
	else if (iParam1 > 51)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		unk_0x32ECE704AD6A4E0B(iParam0);
	}
}

int func_443(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_444(var uParam0, int iParam1)
{
	return 0;
}

int func_445(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_447(iParam0, iParam1);
	uVar2 = func_446(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_446(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
	}
	return iVar0;
}

int func_447(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	return iVar0;
}

bool func_448()
{
	return unk_0x95C5B896CB42B20E(1428761799);
}

bool func_449()
{
	return unk_0x95C5B896CB42B20E(-1005876368);
}

int func_450(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_205(iParam0);
}

void func_451()
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	var uVar5;
	float fVar6;
	int iVar7;
	struct<3> Var8;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	var uVar14;
	struct<3> Var15;
	float fVar18;
	
	if ((((!func_7(unk_0x460153A63B9477BC()) && !func_163(unk_0x460153A63B9477BC())) && !func_315()) && !func_463(unk_0x460153A63B9477BC(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_462(unk_0x460153A63B9477BC()))
	{
		if (func_12(unk_0x460153A63B9477BC(), 1, 1))
		{
			fVar6 = 2.147484E+09f;
			iVar7 = -1;
			Var8 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
			bVar11 = func_5(Local_626.f_3);
			bVar12 = unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0);
			bVar13 = func_461();
			iVar4 = 0;
			while (iVar4 < 10)
			{
				uVar14 = Local_626.f_67[iVar4 /*2*/].f_1;
				if (unk_0x3D70CCF2C9B362CD(uVar14) && unk_0x80FF6C016CDB0FAF(unk_0x770D3B2B4702434A(uVar14), 0))
				{
					if (!bVar13 && bVar11)
					{
						if (bVar12 && unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0) == unk_0x770D3B2B4702434A(uVar14))
						{
							func_339(1);
						}
					}
					unk_0xBE20AB8238688965(&uVar5, iVar4);
					if (bVar11 && func_40(Local_626.f_3, iVar4, &Var0, &uVar3))
					{
						Var15 = { unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(uVar14), 1) };
						if (SYSTEM::VDIST(Var15, Var0) <= 10f)
						{
							fVar18 = SYSTEM::VDIST(Var15, Var8);
							if (fVar18 < fVar6)
							{
								fVar6 = fVar18;
								iVar7 = iVar4;
							}
						}
					}
				}
				iVar4++;
			}
			if (func_41(Local_626.f_3))
			{
				unk_0xBE20AB8238688965(&uVar5, 31);
			}
			Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_7 = uVar5;
			if (func_5(Local_626.f_3))
			{
				if ((unk_0x642A35A076CECC5A(unk_0x9B0761B4C3EB8BC7()) || (unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7()) && !unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()))) || func_17(-1, 0))
				{
					if ((fVar6 < 2.147484E+09f && iVar7 >= 0) && iVar7 < 10)
					{
						if (func_40(Local_626.f_3, iVar7, &Var0, &uVar3))
						{
							func_460(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							func_459(Var0, 1, 0);
							func_453(10, 0, 0, 0, 0);
							unk_0xBE20AB8238688965(&iLocal_317, 5);
						}
					}
				}
				else
				{
					func_452();
				}
			}
		}
	}
	else
	{
		func_452();
	}
}

void func_452()
{
	if (unk_0xCE990E643CD9D0E5(iLocal_317, 5))
	{
		func_171();
		func_169();
		unk_0xD2459066EA58CE43(&iLocal_317, 5);
		func_168();
	}
}

void func_453(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2440049.f_2005.f_703.f_16 != func_103())
	{
		if (unk_0xCE990E643CD9D0E5(Global_2425869[Global_2440049.f_2005.f_703.f_16 /*443*/].f_411, 0) && func_454())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412648 = 0;
	}
	Global_2405074.f_487 = iParam0;
	Global_2405074.f_487.f_1 = unk_0x354AD085195C5FA6();
	Global_2405074.f_487.f_2 = iParam1;
	Global_2405074.f_487.f_3 = iParam2;
	Global_2405074.f_487.f_4 = iParam3;
	Global_2405074.f_487.f_5 = iParam4;
}

int func_454()
{
	if ((((((func_220(unk_0x460153A63B9477BC()) == 229 || func_220(unk_0x460153A63B9477BC()) == 191) || func_458()) || func_457()) || func_358(unk_0x460153A63B9477BC())) || Global_2515847.f_227 == 1) || (Global_2405074.f_1747 && func_455(unk_0x460153A63B9477BC())))
	{
		return 0;
	}
	return 1;
}

int func_455(int iParam0)
{
	if (func_456(iParam0))
	{
		return 1;
	}
	if (func_107(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_456(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 7);
	}
	return 0;
}

bool func_457()
{
	return Global_1574411;
}

int func_458()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_459(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405074.f_45.f_49 = { Param0 };
	Global_2405074.f_45.f_52 = iParam3;
	Global_2405074.f_45.f_53 = iParam4;
}

void func_460(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x7FD2BDF03806FD9D(Global_2413905.f_6))
	{
		if (!Global_2413905.f_6 == unk_0x354AD085195C5FA6())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return;
	}
	if (!unk_0x7FD2BDF03806FD9D(Global_2413905.f_6))
	{
		Global_2413905.f_6 = unk_0x354AD085195C5FA6();
	}
	Var0.f_6 = Global_2413905.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_388(unk_0x460153A63B9477BC()))
	{
		if (iParam13 || iParam7)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Var0.f_26 = iParam12;
	Var0.f_27 = iParam14;
	Global_2413905 = { Var0 };
}

int func_461()
{
	if ((((((func_456(unk_0x460153A63B9477BC()) || func_166()) || func_165()) || func_164(unk_0x460153A63B9477BC(), 21)) || func_164(unk_0x460153A63B9477BC(), 25)) || func_8(unk_0x460153A63B9477BC())) || func_7(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	return 0;
}

int func_462(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 14))
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_463(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590682[iParam0 /*883*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_477(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_299(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_476(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_475(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_474(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_473(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_472(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_471(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_470(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_469(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_468(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_467(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_466(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_465(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_464(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_464(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_465(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 16;
			}
		}
	}
	return 0;
}

int func_466(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_467(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_468(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_469(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			uVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
			if (unk_0x36FE6D3220816ADA(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_103())
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_470(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_471(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_472(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_103())
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_473(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_474(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_475(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_476(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_477(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 0;
			}
		}
	}
	return 0;
}

void func_478(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	
	if (func_539())
	{
		if (bParam1)
		{
			iVar0 = unk_0x59E2AD1A8ACEDA31();
			if (func_101(unk_0x460153A63B9477BC()))
			{
				uVar1 = func_325();
				iVar2 = unk_0xE4400E48E081F17A(uVar1);
				if (unk_0x166E920FB00B2DBB(iVar2))
				{
					iVar3 = unk_0x653D75F1BBF766B3(iVar2);
					if (unk_0xBD09DF93F957A0CF(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_538())
				{
					switch (Local_626.f_3)
					{
						case 14:
							if (!func_373(iVar4) && !func_372(iVar4))
							{
								func_535("AMCH_BRIDGE", bParam0, iVar0, iVar4);
							}
							break;
					}
					iVar4++;
				}
			}
		}
	}
	if (func_43())
	{
		iVar5 = 0;
		while (iVar5 < 10)
		{
			if (((!bParam0 && unk_0x3D70CCF2C9B362CD(Local_626.f_67[iVar5 /*2*/].f_1)) && unk_0x80FF6C016CDB0FAF(unk_0x770D3B2B4702434A(Local_626.f_67[iVar5 /*2*/].f_1), 0)) && unk_0xB064AF9925F5537B(unk_0x770D3B2B4702434A(Local_626.f_67[iVar5 /*2*/].f_1), -1, 0))
			{
				if (!unk_0x8F678487EEBD8CE4(uLocal_599[iVar5]))
				{
					uLocal_599[iVar5] = unk_0x2BE000892D65EA2A(unk_0x62D2FF718BC7717D(Local_626.f_67[iVar5 /*2*/].f_1));
					unk_0xE7B8403ABCA0391D(uLocal_599[iVar5], func_534(iVar5));
					unk_0xE346A71235BB8065(uLocal_599[iVar5], 9);
					unk_0xB023F5C66F5716C7(uLocal_599[iVar5], func_533(iVar5));
					func_531(&(uLocal_599[iVar5]), 9);
				}
				else
				{
					if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						Var6 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
						if (SYSTEM::VDIST(Var6, unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(Local_626.f_67[iVar5 /*2*/].f_1), 1)) <= 150f)
						{
							unk_0x3DBD102E8C35EA16(uLocal_599[iVar5], 1);
						}
						else
						{
							unk_0x3DBD102E8C35EA16(uLocal_599[iVar5], 0);
						}
					}
					func_479(uLocal_599[iVar5], 0, 1152319488, 1137180672);
				}
			}
			else if (unk_0x8F678487EEBD8CE4(uLocal_599[iVar5]))
			{
				unk_0x93370FA10F15BE44(&(uLocal_599[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_479(var uParam0, int iParam1, float fParam2, float fParam3)
{
	unk_0xB7F03636BDF7080E(uParam0, func_480(uParam0, iParam1, fParam2, fParam3));
}

int func_480(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	if (!func_530(Global_2440049) && !func_81())
	{
		fVar0 = func_482(uParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_481();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_481()
{
	if (func_391(Global_2440049, 1))
	{
		return 50;
	}
	return 0;
}

float func_482(var uParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	
	iVar0 = Global_2440049;
	Var2 = { func_529(uParam0) };
	Var2.f_2 = 0f;
	if (Global_1319172 || func_525())
	{
		if (func_524(iVar0))
		{
			Var5 = { func_485(iVar0) };
		}
		else if (func_484(iVar0))
		{
			Var5 = { func_483(iVar0) };
		}
	}
	else
	{
		Var5 = { unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iVar0), 0) };
	}
	Var5.f_2 = 0f;
	fVar1 = SYSTEM::VMAG(Var5 - Var2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_483(int iParam0)
{
	var uVar0;
	
	if (func_484(iParam0))
	{
		uVar0 = unk_0x1FA7B77001D60F9D(iParam0);
		if (unk_0xAE06B9E39EBDE049(uVar0))
		{
			return unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_484(int iParam0)
{
	var uVar0;
	
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			uVar0 = unk_0x1FA7B77001D60F9D(iParam0);
			if (unk_0xAE06B9E39EBDE049(uVar0))
			{
				if (unk_0xC2169C00B643278B(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_485(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (iParam0 == func_103())
	{
	}
	if (func_523(iParam0))
	{
		iVar0 = func_522(iParam0);
		if (iVar0 != func_103())
		{
			if (!func_521(iVar0))
			{
				if (unk_0xAE06B9E39EBDE049(Global_2440049.f_673[iVar0 /*3*/][1]))
				{
					return unk_0x3E4D3CCC220BDFB1(Global_2440049.f_673[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2425869[func_522(iParam0) /*443*/].f_314.f_10;
				}
			}
			else
			{
				iVar1 = func_517(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1678288.f_496[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_516(iParam0))
	{
		if (unk_0xAE06B9E39EBDE049(Global_2540384.f_307))
		{
			return unk_0x3E4D3CCC220BDFB1(Global_2540384.f_307, 0);
		}
	}
	else if (func_475(iParam0) && !func_515(iParam0))
	{
		iVar2 = Global_2425869[iParam0 /*443*/].f_314.f_9;
		if (iVar2 != func_103())
		{
			iVar3 = func_517(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1678288.f_496[iVar3 /*3*/];
			}
		}
	}
	else if (func_473(iParam0) && !func_514(iParam0))
	{
		if (func_524(iParam0) && func_513())
		{
			return Global_1678288.f_496[Global_2425869[iParam0 /*443*/].f_314.f_6 /*3*/];
		}
		iVar4 = Global_2425869[iParam0 /*443*/].f_314.f_9;
		if (iVar4 != func_103())
		{
			if (func_512(iVar4))
			{
				iVar5 = func_508(iVar4);
				if (iVar5 != -1)
				{
					return Global_1678288.f_496[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_472(iParam0))
	{
		iVar6 = func_507(iParam0);
		if (iVar6 != func_103())
		{
			if (!func_506(iVar6))
			{
				if (unk_0xAE06B9E39EBDE049(Global_2440049.f_770[iVar6]))
				{
					return unk_0x3E4D3CCC220BDFB1(Global_2440049.f_770[iVar6], 0);
				}
				else
				{
					return Global_2425869[func_507(iParam0) /*443*/].f_314.f_17;
				}
			}
			else
			{
				iVar7 = func_508(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1678288.f_496[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_505(iParam0))
	{
		if (unk_0xAE06B9E39EBDE049(Global_2540384.f_309))
		{
			return unk_0x3E4D3CCC220BDFB1(Global_2540384.f_309, 0);
		}
	}
	else if (func_471(iParam0) && !func_504(iParam0))
	{
		iVar8 = Global_2425869[iParam0 /*443*/].f_314.f_9;
		if (iVar8 != func_103())
		{
			if (func_503(iVar8))
			{
				iVar9 = func_499(iVar8);
				if (iVar9 != -1)
				{
					return func_498(iVar9);
				}
			}
		}
	}
	else if (func_470(iParam0) && !func_497(iParam0))
	{
		iVar10 = Global_2425869[iParam0 /*443*/].f_314.f_9;
		if (iVar10 != func_103())
		{
			if (func_496(iVar10))
			{
				iVar11 = func_492(iVar10);
				if (iVar11 != -1)
				{
					return Global_1678288.f_496[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_469(iParam0, 0))
	{
		iVar12 = func_491(iParam0);
		if (iVar12 != func_103())
		{
			if (!func_490(iVar12))
			{
				if (unk_0xAE06B9E39EBDE049(Global_2440049.f_803[iVar12]))
				{
					return unk_0x3E4D3CCC220BDFB1(Global_2440049.f_803[iVar12], 0);
				}
				else
				{
					return Global_1630317[func_491(iParam0) /*595*/].f_580;
				}
			}
			else
			{
				iVar13 = func_492(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1678288.f_496[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_468(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (func_489(iParam0))
	{
		iVar14 = func_487(iParam0);
		if (iVar14 != func_103())
		{
			if (unk_0xAE06B9E39EBDE049(Global_2440049.f_836[iVar14]))
			{
				return unk_0x3E4D3CCC220BDFB1(Global_2440049.f_836[iVar14], 0);
			}
			else
			{
				return Global_1649358[iVar14 /*93*/].f_50;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_471(iParam0))
	{
		return func_498(Global_2425869[iParam0 /*443*/].f_314.f_6);
	}
	if (func_486(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1678288.f_496[Global_2425869[iParam0 /*443*/].f_314.f_6 /*3*/];
}

int func_486(int iParam0)
{
	if (((func_467(iParam0) || func_465(iParam0)) || func_466(iParam0)) || func_324(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_487(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_103())
	{
		return iParam0;
	}
	if (func_488(iParam0) != -1)
	{
		iVar0 = func_300(func_488(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_89(iParam0, 0))
			{
				return func_88(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_103();
		}
		return Global_2425869[iParam0 /*443*/].f_314.f_9;
	}
	return func_103();
}

int func_488(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6;
		}
		else if (((Global_1312896 || Global_2405074.f_2673) && iParam0 == unk_0x460153A63B9477BC()) && func_12(iParam0, 1, 0))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6;
		}
	}
	return -1;
}

int func_489(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 20;
			}
		}
		else if (((Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_1312896) && iParam0 == unk_0x460153A63B9477BC()) && func_12(iParam0, 1, 0))
		{
			return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 20;
		}
	}
	return 0;
}

int func_490(int iParam0)
{
	if (iParam0 != func_103())
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314.f_3, 4);
	}
	return 0;
}

int func_491(int iParam0)
{
	if (iParam0 == func_103())
	{
		return iParam0;
	}
	return Global_2425869[iParam0 /*443*/].f_314.f_9;
}

int func_492(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_103())
	{
		iVar0 = func_495(iParam0);
		if (iVar0 != 0)
		{
			return func_493(iVar0);
		}
	}
	return -1;
}

int func_493(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_300(iVar0) == 11)
		{
			if (func_494(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_495(int iParam0)
{
	if (iParam0 != func_103())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_281;
	}
	return 0;
}

int func_496(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_281 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_497(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_470(iParam0) && Global_2425869[iParam0 /*443*/].f_314.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_498(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 103:
			return 331.9f, -974.9f, 30f;
		
		case 104:
			return -146f, -1270f, 28.3088f;
		
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 107:
			return -668f, -2431.5f, 12.9444f;
		
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 109:
			return 366.6f, 237.6f, 104.9f;
		
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_1678288.f_496[iParam0 /*3*/];
}

int func_499(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_103())
	{
		iVar0 = func_502(iParam0);
		if (iVar0 != 0)
		{
			return func_500(iVar0);
		}
	}
	return -1;
}

int func_500(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_300(iVar0) == 11)
		{
			if (func_501(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_501(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_502(int iParam0)
{
	if (iParam0 != func_103())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_322;
	}
	return 0;
}

int func_503(int iParam0)
{
	if (iParam0 != func_103())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_322 != 0;
	}
	return 0;
}

int func_504(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_471(iParam0) && Global_2425869[iParam0 /*443*/].f_314.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_505(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_506(int iParam0)
{
	if (iParam0 != func_103())
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314.f_2, 6);
	}
	return 0;
}

int func_507(int iParam0)
{
	if (iParam0 == func_103())
	{
		return iParam0;
	}
	return Global_2425869[iParam0 /*443*/].f_314.f_9;
}

int func_508(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_103())
	{
		return -1;
	}
	iVar0 = func_511(iParam0);
	if (!iVar0 == 0)
	{
		return func_509(iVar0);
	}
	return -1;
}

int func_509(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_300(iVar0) == 9)
		{
			if (func_510(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_510(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_511(int iParam0)
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_271;
}

int func_512(int iParam0)
{
	if (iParam0 != func_103())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_271 != 0;
	}
	return 0;
}

int func_513()
{
	if (unk_0xCE990E643CD9D0E5(Global_1678288.f_2, 13) || Global_1678288.f_3057)
	{
		return 1;
	}
	return 0;
}

int func_514(int iParam0)
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	if (func_473(iParam0) && Global_2425869[iParam0 /*443*/].f_314.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_515(int iParam0)
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	if (func_475(iParam0) && Global_2425869[iParam0 /*443*/].f_314.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_516(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_517(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_103())
	{
		return -1;
	}
	iVar0 = func_520(iParam0);
	if (!iVar0 == 0)
	{
		return func_518(iVar0);
	}
	return -1;
}

int func_518(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_519(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_519(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
			break;
		
		case 71:
			return 22;
			break;
		
		case 72:
			return 23;
			break;
		
		case 73:
			return 24;
			break;
		
		case 74:
			return 25;
			break;
		
		case 75:
			return 26;
			break;
		
		case 76:
			return 27;
			break;
		
		case 77:
			return 28;
			break;
		
		case 78:
			return 29;
			break;
		
		case joaat("MPSV_LP0_31"):
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

int func_520(int iParam0)
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_183[5 /*12*/];
}

int func_521(int iParam0)
{
	if (iParam0 != func_103())
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 6);
	}
	return 0;
}

int func_522(int iParam0)
{
	if (iParam0 == func_103())
	{
		return iParam0;
	}
	return Global_2425869[iParam0 /*443*/].f_314.f_9;
}

int func_523(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_103())
			{
				return func_300(Global_2425869[iParam0 /*443*/].f_314.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_524(int iParam0)
{
	if (iParam0 != func_103())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6 != -1;
		}
		else if ((Global_1312896 && iParam0 == unk_0x460153A63B9477BC()) && func_12(iParam0, 1, 0))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6 != -1;
		}
	}
	return 0;
}

int func_525()
{
	if ((func_528() || func_527()) || func_526(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	return 0;
}

bool func_526(int iParam0)
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1627436[iParam0 /*90*/].f_29, 20);
}

bool func_527()
{
	return unk_0xCE990E643CD9D0E5(Global_1689711, 1);
}

bool func_528()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

Vector3 func_529(var uParam0)
{
	var uVar0;
	
	switch (unk_0x04FA724B68B59AC3(uParam0))
	{
		case 1:
		case 2:
		case 3:
			uVar0 = unk_0x255EBCF840E6A9BB(uParam0);
			if (unk_0xAE06B9E39EBDE049(uVar0))
			{
				return unk_0x3E4D3CCC220BDFB1(iVar0, 0);
			}
			break;
	}
	return unk_0x41A1ED9BB4ED4772(uParam0);
}

int func_530(int iParam0)
{
	if ((unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_71.f_2, 9) && !(unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_71.f_2, 6) && unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_71.f_2, 7))) || ((unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_71.f_2, 6) && !unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_71.f_2, 7)) && !unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_71.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_531(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x8F678487EEBD8CE4(*uParam0))
	{
		uVar0 = func_532(iParam1);
		unk_0xECC9A00CF1181EC2(*uParam0, uVar0);
	}
}

int func_532(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x28DD484BAEAF8437(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

char* func_533(int iParam0)
{
	if (unk_0x442D6659150AF4B3(Local_626.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0xF9C3E2B9AA9E2294(Local_626.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (unk_0x97AFEF6099069369(Local_626.f_67[iParam0 /*2*/]) && !unk_0x0CE6C9C2E6F95026(Local_626.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_534(int iParam0)
{
	if (unk_0x442D6659150AF4B3(Local_626.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (unk_0xF9C3E2B9AA9E2294(Local_626.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (unk_0x97AFEF6099069369(Local_626.f_67[iParam0 /*2*/]) && !unk_0x0CE6C9C2E6F95026(Local_626.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_535(char* sParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!unk_0xCE990E643CD9D0E5(Local_2593[iParam2 /*12*/].f_8[func_364(iParam3)], func_363(iParam3)) && !bParam1)
	{
		Var0 = { func_537(iParam3) };
		if (!unk_0x8F678487EEBD8CE4(uLocal_533[iParam3]))
		{
			if (!func_536(Var0, 0f, 0f, 0f, 0) && !func_536(Var0, 0f, 0f, -2000f, 0))
			{
				uLocal_533[iParam3] = unk_0x6820C712C1DD618A(Var0);
				unk_0xE346A71235BB8065(uLocal_533[iParam3], 9);
				unk_0xB023F5C66F5716C7(uLocal_533[iParam3], sParam0);
				func_479(uLocal_533[iParam3], 25, 1152319488, 1137180672);
				func_531(&(uLocal_533[iParam3]), 12);
				unk_0x3DBD102E8C35EA16(uLocal_533[iParam3], 1);
			}
		}
		else if (unk_0xF0C12886E5C1B20E())
		{
			unk_0xB7F03636BDF7080E(uLocal_533[iParam3], 255);
		}
		else
		{
			func_479(uLocal_533[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (unk_0x8F678487EEBD8CE4(uLocal_533[iParam3]))
	{
		unk_0x93370FA10F15BE44(&(uLocal_533[iParam3]));
		if (!bParam1)
		{
			unk_0xC4CC25B68A91D144(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
		}
	}
}

bool func_536(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_537(int iParam0)
{
	switch (Local_626.f_3)
	{
		case 14:
			return Local_337[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_538()
{
	switch (Local_626.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_539()
{
	switch (Local_626.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_540()
{
	switch (Local_626.f_3)
	{
		case -1:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_541(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_314(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_217(sParam1))
	{
		sVar0 = sParam1;
	}
	func_144(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_542(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x6C5C6B207AA78253();
	return "HUD_STARTING";
	if (unk_0xF005CCA4263DF67F(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0xF005CCA4263DF67F(uVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0xF005CCA4263DF67F(uVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0xF005CCA4263DF67F(uVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0xF005CCA4263DF67F(uVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0xF005CCA4263DF67F(uVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0xF005CCA4263DF67F(uVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0xF005CCA4263DF67F(uVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0xF005CCA4263DF67F(uVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0xF005CCA4263DF67F(uVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0xF005CCA4263DF67F(uVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_543(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_544(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x9E3DAF75EFC49F5B())
	{
		Global_2540384.f_5025 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 1))
		{
			unk_0xC4CC25B68A91D144(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2540384.f_5025 = 0;
			unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 1);
		}
	}
}

int func_545(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x25DDB354A40FFCDB() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0);
		}
		else
		{
			return unk_0x624736CA66E14161(unk_0x29B9AF1CB5B8175D(), *uParam0);
		}
	}
	return unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0);
}

void func_546(int iParam0)
{
	if (!unk_0xEBB78303C505A9D7() && !unk_0x03DB5C6AABF8DA46())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0xCE990E643CD9D0E5(iLocal_610, iParam0))
				{
					if (!unk_0xF0C12886E5C1B20E() && !unk_0xDABD547F0DF2906C())
					{
						if (func_5(Local_626.f_3))
						{
							if (Local_626.f_3 == 12)
							{
								func_296("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_296("AMCH_AIRAV", 30000);
							}
						}
						else if (func_41(Local_626.f_3))
						{
							func_296("AMCH_BIKEAV", 30000);
						}
						func_295(1);
						unk_0xBE20AB8238688965(&iLocal_610, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0xCE990E643CD9D0E5(iLocal_610, iParam0))
				{
					if (!unk_0xF0C12886E5C1B20E())
					{
						func_296("AMCH_BLOW", 30000);
						func_295(1);
						unk_0xBE20AB8238688965(&iLocal_610, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0xCE990E643CD9D0E5(iLocal_610, iParam0))
				{
					if (!unk_0xF0C12886E5C1B20E() && !func_551(63))
					{
						switch (Local_626.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x460153A63B9477BC(), 1, 1))
								{
									if (unk_0x642A35A076CECC5A(unk_0x9B0761B4C3EB8BC7()))
									{
										func_296("AMCH_ALTI", 30000);
										func_295(1);
										unk_0xBE20AB8238688965(&iLocal_610, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(unk_0x460153A63B9477BC(), 1, 1))
								{
									func_296("AMCH_NMIS", 30000);
									func_295(1);
									unk_0xBE20AB8238688965(&iLocal_610, iParam0);
								}
								break;
							
							case 1:
								if (func_12(unk_0x460153A63B9477BC(), 1, 1))
								{
									func_296("AMCH_FRFALL", -1);
									func_295(1);
									unk_0xBE20AB8238688965(&iLocal_610, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(unk_0x460153A63B9477BC(), 1, 1))
								{
									func_296("AMCH_PVPO1", -1);
									func_295(1);
									unk_0xBE20AB8238688965(&iLocal_610, iParam0);
								}
								break;
							
							case 17:
								if (func_12(unk_0x460153A63B9477BC(), 1, 1))
								{
									func_296("AMCH_PVPO2", -1);
									func_295(1);
									unk_0xBE20AB8238688965(&iLocal_610, iParam0);
								}
								break;
							
							case 4:
								if (func_12(unk_0x460153A63B9477BC(), 1, 1))
								{
									func_296("AMCH_WHEELIE", 30000);
									func_295(1);
									unk_0xBE20AB8238688965(&iLocal_610, iParam0);
								}
								break;
							
							case 3:
								if (func_12(unk_0x460153A63B9477BC(), 1, 1))
								{
									func_296("AMCH_STOPPIE", 30000);
									func_295(1);
									unk_0xBE20AB8238688965(&iLocal_610, iParam0);
								}
								break;
							
							case 10:
								if (func_12(unk_0x460153A63B9477BC(), 1, 1))
								{
									func_296("AMCH_LFALL", 30000);
									func_295(1);
									unk_0xBE20AB8238688965(&iLocal_610, iParam0);
								}
								break;
							
							case 6:
								if (func_12(unk_0x460153A63B9477BC(), 1, 1))
								{
									func_296("AMCH_LPARA", 30000);
									func_295(1);
									unk_0xBE20AB8238688965(&iLocal_610, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!unk_0xCE990E643CD9D0E5(iLocal_610, iParam0))
				{
					if ((!unk_0xF0C12886E5C1B20E() && !unk_0xDABD547F0DF2906C()) && !func_551(63))
					{
						switch (Local_626.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x460153A63B9477BC(), 1, 1))
								{
									if (unk_0x642A35A076CECC5A(unk_0x9B0761B4C3EB8BC7()))
									{
										if (func_1(&uLocal_311, 1000, 0))
										{
											func_296("AMCH_OCEAN", 30000);
											func_295(1);
											func_46(&uLocal_311);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!unk_0xCE990E643CD9D0E5(iLocal_610, iParam0))
				{
					if (!unk_0xF0C12886E5C1B20E() && !func_551(63))
					{
						switch (Local_626.f_3)
						{
							case 11:
							case 12:
								if (func_12(unk_0x460153A63B9477BC(), 1, 1))
								{
									if (unk_0x642A35A076CECC5A(unk_0x9B0761B4C3EB8BC7()))
									{
										if (func_530(unk_0x460153A63B9477BC()) && !func_548(unk_0x460153A63B9477BC()))
										{
											func_296("AMCH_ALTIEXP", 30000);
											func_295(1);
											unk_0xBE20AB8238688965(&iLocal_610, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!unk_0xCE990E643CD9D0E5(iLocal_610, iParam0))
				{
					if ((!unk_0xF0C12886E5C1B20E() && !unk_0xDABD547F0DF2906C()) && !func_551(63))
					{
						if (func_1(&uLocal_311, 1000, 0))
						{
							func_296("AMCH_FLYLOW", 30000);
							func_295(1);
							func_46(&uLocal_311);
						}
					}
				}
				break;
			
			case 7:
				if (!unk_0xCE990E643CD9D0E5(iLocal_610, iParam0))
				{
					if (Local_626.f_3 == 7)
					{
						if (iLocal_611 == 0)
						{
							if ((!unk_0xF0C12886E5C1B20E() && !unk_0xDABD547F0DF2906C()) && !func_551(63))
							{
								if (func_12(unk_0x460153A63B9477BC(), 1, 1))
								{
									func_296("AMCH_MVS1", 30000);
									func_295(1);
									iLocal_611 = 1;
								}
							}
						}
						else if ((!unk_0xF0C12886E5C1B20E() && !unk_0xDABD547F0DF2906C()) && !func_551(63))
						{
							if (func_12(unk_0x460153A63B9477BC(), 1, 1))
							{
								func_296("AMCH_MVS2", 30000);
								func_295(1);
								unk_0xBE20AB8238688965(&iLocal_610, iParam0);
							}
						}
					}
					if (Local_626.f_3 == 14)
					{
						if (iLocal_611 == 0)
						{
							if ((!unk_0xF0C12886E5C1B20E() && !unk_0xDABD547F0DF2906C()) && !func_551(63))
							{
								if (func_12(unk_0x460153A63B9477BC(), 1, 1))
								{
									func_296("AMCH_BRBL", 30000);
									func_295(1);
									iLocal_611 = 1;
								}
							}
						}
						else if ((!unk_0xF0C12886E5C1B20E() && !unk_0xDABD547F0DF2906C()) && !func_551(63))
						{
							if (func_12(unk_0x460153A63B9477BC(), 1, 1))
							{
								func_296("AMCH_BRBL2", 30000);
								func_295(1);
								unk_0xBE20AB8238688965(&iLocal_610, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!unk_0xCE990E643CD9D0E5(iLocal_610, iParam0))
				{
					if (!unk_0xF0C12886E5C1B20E() && !unk_0xDABD547F0DF2906C())
					{
						func_547("AMCH_WARN", func_397(Local_626.f_3), func_396(Local_626.f_3), 30000);
						func_295(0);
						Local_2978.f_8 = unk_0x5A002C4821A13338();
						unk_0xC4CC25B68A91D144(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0xBE20AB8238688965(&iLocal_610, iParam0);
					}
				}
				break;
			}
	}
}

void func_547(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x6A826E35A3096ED0(sParam1);
	unk_0x6A826E35A3096ED0(sParam2);
	unk_0x1A169149B3D18FCB(0, 0, 0, iParam3);
}

bool func_548(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_241.f_136[func_550(9) /*33*/][iParam0], func_549(9));
}

int func_549(int iParam0)
{
	return (iParam0 % 32);
}

int func_550(int iParam0)
{
	return (iParam0 / 32);
}

bool func_551(int iParam0)
{
	return Global_2440049.f_2834[0 /*80*/].f_1 == iParam0;
}

void func_552(int iParam0)
{
	Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_3 = iParam0;
}

void func_553(bool bParam0)
{
	if (bParam0)
	{
		unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 4);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 4);
	}
}

int func_554(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_578(unk_0x460153A63B9477BC(), 29))
	{
		return 0;
	}
	if (func_164(unk_0x460153A63B9477BC(), 21))
	{
		return 0;
	}
	if (func_164(unk_0x460153A63B9477BC(), 25))
	{
		return 0;
	}
	if (unk_0xD0E70037A973A810())
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x450A8984AFF05042())
		{
			return 0;
		}
	}
	if (func_352(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_577())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_576(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	if (func_575())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_107(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	else if (func_568(unk_0x460153A63B9477BC()) == 3)
	{
		return 0;
	}
	if (func_567(unk_0x460153A63B9477BC()) != func_103() && func_567(unk_0x460153A63B9477BC()) == func_88(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_566(func_290()) && !func_346(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_565())
	{
		return 0;
	}
	if (func_315())
	{
		return 0;
	}
	if (unk_0xFC559366953F62B3())
	{
		return 0;
	}
	if (func_354(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!func_563())
	{
		return 0;
	}
	if (func_164(unk_0x460153A63B9477BC(), 0) || func_164(unk_0x460153A63B9477BC(), 3))
	{
		return 0;
	}
	if ((func_164(unk_0x460153A63B9477BC(), 12) || func_164(unk_0x460153A63B9477BC(), 14)) || func_164(unk_0x460153A63B9477BC(), 13))
	{
		return 0;
	}
	if (func_562(unk_0x460153A63B9477BC(), 1, 1))
	{
		if (!func_528() && !Global_2515442)
		{
			return 0;
		}
	}
	if (func_561(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_560())
	{
		return 0;
	}
	if (Global_1663771)
	{
		return 0;
	}
	if (func_389(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_559())
	{
		return 0;
	}
	if (func_557(unk_0x460153A63B9477BC()) && Global_1590329.f_171)
	{
		return 0;
	}
	if (func_556())
	{
		return 0;
	}
	if (func_358(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (Global_2539443)
	{
		return 0;
	}
	if (Global_1694999)
	{
		return 0;
	}
	if (!func_456(unk_0x460153A63B9477BC()))
	{
		if (func_555(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	return 1;
}

int func_555(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627436[iVar0 /*90*/].f_77.f_12 != 0;
	}
	return 0;
}

bool func_556()
{
	return Global_1678288.f_482;
}

int func_557(int iParam0)
{
	if (func_558(Global_1590682[iParam0 /*883*/].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

int func_558(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_559()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_560()
{
	return Global_99007.f_352 > 0;
}

bool func_561(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 11);
}

int func_562(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_563()
{
	if (func_564() == 0)
	{
		return 1;
	}
	return 0;
}

int func_564()
{
	return Global_1312485.f_18;
}

bool func_565()
{
	return Global_1312896;
}

int func_566(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_567(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_35;
}

int func_568(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_390(iParam0) && !func_8(iParam0)) && !unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 8));
	bVar2 = func_107(iParam0);
	uVar3 = func_166();
	uVar4 = func_569();
	if ((bVar1 && (func_456(iParam0) || func_416(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_109(iParam0)) && !func_301(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2540384.f_5188.f_217 != iVar0)
	{
		Global_2540384.f_5188.f_217 = iVar0;
	}
	return iVar0;
}

int func_569()
{
	if ((func_108(unk_0x460153A63B9477BC(), 21) || func_108(unk_0x460153A63B9477BC(), 22)) || func_573())
	{
		return 1;
	}
	if (func_571())
	{
		func_570(22);
		return 1;
	}
	return 0;
}

void func_570(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_4), iParam0);
}

int func_571()
{
	if (func_113(unk_0x460153A63B9477BC(), 0))
	{
		if (((func_166() && !func_165()) || func_164(unk_0x460153A63B9477BC(), 21)) || func_164(unk_0x460153A63B9477BC(), 25))
		{
			return 1;
		}
		else
		{
			func_572(27);
		}
	}
	return 0;
}

void func_572(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_4), iParam0);
}

int func_573()
{
	return func_574(377, -1);
}

int func_574(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587834[iParam0 /*3*/][func_204(iParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_575()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 5;
}

int func_576(int iParam0)
{
	if (Global_2425869[iParam0 /*443*/].f_265.f_4 != 0 || Global_2425869[iParam0 /*443*/].f_265.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_577()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 0);
}

bool func_578(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_5, iParam1);
}

void func_579()
{
	func_580(&(Local_714.f_534), &Local_714, 27, &(Local_714.f_1), &(Local_714.f_117), Local_626.f_3, 0, 0);
}

void func_580(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<2> Var57;
	
	if (func_693(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_691() || iParam2 == 28)
	{
		if (func_646(uParam1, iParam2, uParam3, Global_1574191, 0, func_694(), iParam7))
		{
			func_645(1);
			if ((!func_644() && !func_643()) || unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1))
			{
				if (func_642())
				{
					func_641();
				}
				else
				{
					unk_0xFCC7EAA298CE7AC2(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_640(1);
						Global_1574191 = 0;
						iVar54 = -1;
						if (Global_1574412 != 1)
						{
							func_639(uParam1, 0, 0);
							if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 7))
							{
								unk_0xD2459066EA58CE43(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_12(unk_0xF1110FE23C67293A(iVar52), 0, 1))
								{
									iVar35 = unk_0xF1110FE23C67293A(iVar52);
									if (!func_14(iVar35, 0))
									{
										if ((func_635(iVar35) || Global_2425869[iVar35 /*443*/].f_240 != -1) || func_634(iVar35))
										{
											iVar44 = iVar35;
											if (func_90(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_631(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_110(unk_0x460153A63B9477BC(), 0) && func_220(unk_0x460153A63B9477BC()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_630())
							{
								if (func_12(unk_0xF1110FE23C67293A(iVar52), 0, 1))
								{
									iVar35 = unk_0xF1110FE23C67293A(iVar52);
								}
								else
								{
									iVar35 = func_103();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_629(iVar35) && func_626(iVar35, iParam2)) && func_12(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590682[iVar44 /*883*/].f_211.f_6;
								Var38 = { func_621(iVar35) };
								if (iVar35 == unk_0x460153A63B9477BC())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x72C1D3A1AB8CAA5B(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_138(iVar35) };
								iVar37 = func_615(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x3EF2973864CBE5FC(iVar37);
								}
								Global_1574191++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_630())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_613(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_284(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_612(iVar35, 0);
								if (bVar34)
								{
									if (func_89(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_611(iParam5))
								{
									func_610(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_610(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								unk_0xBE20AB8238688965(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0xF1110FE23C67293A(iVar52);
							if (func_12(iVar35, 0, 1) && !unk_0xCE990E643CD9D0E5(iVar49, iVar35))
							{
								iVar35 = unk_0xF1110FE23C67293A(iVar52);
							}
							else
							{
								iVar35 = func_103();
							}
							if (func_629(iVar35))
							{
								if (func_12(unk_0xF1110FE23C67293A(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590682[iVar44 /*883*/].f_211.f_6;
									Var38 = { func_621(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_138(iVar35) };
									iVar37 = func_615(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x3EF2973864CBE5FC(iVar37);
									}
									Global_1574191++;
									iVar51 = func_612(iVar35, 1);
									if (bVar34)
									{
										if (func_89(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_593(iVar35, unk_0x72C1D3A1AB8CAA5B(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 11))
						{
							func_590(uParam3, uParam1, iParam2);
						}
						func_46(&(uParam3->f_21));
						func_589();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xCE990E643CD9D0E5(uParam3->f_33, 7))
						{
							func_588(uParam3, uParam1);
							func_587(uParam1, 0, 1);
							unk_0xBE20AB8238688965(&(uParam3->f_33), 7);
						}
						func_588(uParam3, uParam1);
						if (!unk_0xCE990E643CD9D0E5(uParam3->f_33, 11))
						{
							unk_0xBE20AB8238688965(&(uParam3->f_33), 11);
						}
						if (func_583(uParam3))
						{
							Global_1574412 = 1;
						}
						func_581(uParam3);
						if (Global_1574412 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574412 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x95EF219D38B20CFF(*uParam1))
					{
						unk_0x9D15035C6653D1B1(7);
						unk_0xE6A03BA84586E67B(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x9D15035C6653D1B1(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_589();
			func_640(0);
			if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 7))
			{
				unk_0xD2459066EA58CE43(&(uParam3->f_33), 7);
			}
			if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 10))
			{
				unk_0xD2459066EA58CE43(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x5C64FD27DB62AF7A();
}

void func_581(var uParam0)
{
	if (!func_47(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_46(&(uParam0->f_21));
		func_582(0);
	}
}

void func_582(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574412 != 2)
		{
			Global_1574412 = 2;
		}
	}
	else
	{
		switch (Global_1574412)
		{
			case 0:
				Global_1574412 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_583(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0xF1110FE23C67293A(uParam0->f_37);
	if (iVar15 != func_103() && func_12(iVar15, 0, 1))
	{
		Var2 = { func_138(iVar15) };
		iVar1 = func_586(uParam0, uParam0->f_37);
		if (func_585(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (unk_0x30EE34228B1AF045(&Var2))
						{
							iVar16 = 1;
							func_584(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x7677D662EB0C9C8A(&Var2))
					{
						iVar16 = 1;
						func_584(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (!unk_0x30EE34228B1AF045(&Var2))
						{
							iVar16 = 1;
							func_584(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_584(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (!unk_0x7677D662EB0C9C8A(&Var2))
						{
							iVar16 = 1;
							func_584(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x7677D662EB0C9C8A(&Var2))
					{
						iVar16 = 1;
						func_584(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_584(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_585(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xF6B8932480699645(&uParam0, 13);
}

var func_586(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_587(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x830F007E19C63E14(*uParam0, "COLLAPSE"))
	{
		unk_0xF1B28F753235CE2A(iParam1);
		unk_0xE1FDD153F5858534();
	}
	if (iParam2 == 1)
	{
		if (unk_0x830F007E19C63E14(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE1FDD153F5858534();
		}
	}
}

void func_588(var uParam0, var uParam1)
{
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_33, 10))
	{
		unk_0x830F007E19C63E14(*uParam1, "SET_HIGHLIGHT");
		unk_0xAD291B8F75D737AD(uParam0->f_35);
		unk_0xE1FDD153F5858534();
		unk_0xBE20AB8238688965(&(uParam0->f_33), 10);
	}
}

void func_589()
{
	if (Global_1574412 != 0)
	{
		Global_1574412 = 0;
	}
}

void func_590(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar0);
		if (iVar2 != func_103())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_592(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_591(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590682[iVar0 /*883*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_591(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		if (unk_0x830F007E19C63E14(*uParam0, "SET_ICON"))
		{
			unk_0xAD291B8F75D737AD(iParam1);
			unk_0xAD291B8F75D737AD(iParam2);
			if (iParam2 == 65)
			{
				unk_0xAD291B8F75D737AD(iParam3);
			}
			unk_0xE1FDD153F5858534();
		}
	}
}

int func_592(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_593(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_609() && iParam4 < func_608())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574193)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574412 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x830F007E19C63E14(*uParam2, sVar1))
		{
			unk_0xAD291B8F75D737AD(iParam4);
			if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_607("");
			}
			else
			{
				unk_0xAD291B8F75D737AD(iParam10);
			}
			func_607(sParam1);
			unk_0xAD291B8F75D737AD(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_607("");
			}
			else
			{
				unk_0xAD291B8F75D737AD(65);
			}
			unk_0xAD291B8F75D737AD(-1);
			func_607("");
			if (uParam3->f_108 == 6)
			{
				func_607("");
			}
			else
			{
				func_607(&sParam5);
			}
			func_598(uParam3, iParam0);
			unk_0x4A096F645CED26D9(sParam9);
			unk_0x4A096F645CED26D9(sParam9);
			if (func_597(uParam3))
			{
				func_596("DPAD_FRIEND");
			}
			else if (func_595(uParam3))
			{
				func_596("DPAD_FRIEND");
			}
			else if (func_594(uParam3))
			{
				func_596("DPAD_CREW");
			}
			else
			{
				func_596("");
			}
			unk_0xE1FDD153F5858534();
		}
	}
}

bool func_594(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(uParam0->f_33, 6);
}

bool func_595(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(uParam0->f_33, 5);
}

void func_596(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

int func_597(var uParam0)
{
	if (func_595(uParam0) && func_594(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_598(var uParam0, int iParam1)
{
	if (func_606(iParam1))
	{
		unk_0xAD291B8F75D737AD(121);
	}
	else if (func_602(iParam1))
	{
		unk_0xAD291B8F75D737AD(122);
	}
	else if (((unk_0xCE990E643CD9D0E5(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xCE990E643CD9D0E5(Global_2425869[iParam1 /*443*/].f_420, 0))
	{
		unk_0xAD291B8F75D737AD(123);
	}
	else
	{
		if (func_599())
		{
			uParam0->f_36 = 0;
		}
		unk_0xF1B28F753235CE2A(uParam0->f_36);
	}
}

int func_599()
{
	if (unk_0xFC559366953F62B3())
	{
		if (func_600() || func_95())
		{
			return 1;
		}
	}
	return 0;
}

int func_600()
{
	if (unk_0xFC559366953F62B3())
	{
		return func_95();
	}
	return func_601(Global_4456448.f_82708);
}

int func_601(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4991[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_602(int iParam0)
{
	if ((func_12(iParam0, 0, 1) && func_603()) && func_258(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_603()
{
	if (func_390(unk_0x460153A63B9477BC()) || func_605())
	{
		if (!func_604(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	return 1;
}

int func_604(int iParam0)
{
	if (func_321(iParam0) == 236 || func_321(iParam0) == 150)
	{
		return func_456(iParam0);
	}
	return 0;
}

int func_605()
{
	switch (func_220(unk_0x460153A63B9477BC()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_606(int iParam0)
{
	if (func_599())
	{
		if (func_12(iParam0, 0, 1))
		{
			return func_90(iParam0);
		}
	}
	if ((func_12(iParam0, 0, 1) && func_603()) && func_260(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_607(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

int func_608()
{
	int iVar0;
	
	if (Global_1574193)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_609()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574193)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_610(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_609() && iParam3 < func_608())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574193)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574412 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x95EF219D38B20CFF(*uParam1))
		{
			if (unk_0x830F007E19C63E14(*uParam1, sVar1))
			{
				unk_0xAD291B8F75D737AD(iParam3);
				if (unk_0xCE990E643CD9D0E5(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_607("");
				}
				else
				{
					unk_0xAD291B8F75D737AD(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					func_596(sParam16);
				}
				else
				{
					func_607(&(uParam2->f_1));
				}
				unk_0xAD291B8F75D737AD(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_607("");
				}
				else
				{
					unk_0xAD291B8F75D737AD(65);
				}
				if (iParam12 == 1)
				{
					unk_0xAD291B8F75D737AD(iVar0);
				}
				else
				{
					unk_0xAD291B8F75D737AD(-1);
				}
				if (func_630())
				{
					func_607("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_ONE_INT");
					unk_0x6A826E35A3096ED0(sParam16);
					unk_0x42710E9E08FA375A(iParam17);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 5 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_ONE_INT");
					unk_0x6A826E35A3096ED0(sParam16);
					unk_0x42710E9E08FA375A(iParam17);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 7 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_TWO_INT");
					unk_0x6A826E35A3096ED0(sParam16);
					unk_0x42710E9E08FA375A(iParam17);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 8 && !unk_0x7BCC91F3C1CF24E8(&(uParam2->f_104)))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x5BC8B357341A4FEE(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x42710E9E08FA375A(iParam10);
					}
					unk_0x6A826E35A3096ED0(&(uParam2->f_104));
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0xB23270F3D5E62FDE("FM_AE_CASH");
					unk_0x5181FCFE1210A213(iParam10, 1);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0xB23270F3D5E62FDE("FM_AE_CASH");
						unk_0x5181FCFE1210A213(iParam10, 1);
						unk_0x2042E9CA4306F725();
					}
					else
					{
						unk_0xB23270F3D5E62FDE("FM_NG_CASH");
						unk_0x5181FCFE1210A213(iParam10, 1);
						unk_0x2042E9CA4306F725();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x7BCC91F3C1CF24E8(&(uParam2->f_104)))
					{
						func_596(&(uParam2->f_104));
					}
					else
					{
						func_607("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0xB23270F3D5E62FDE("STRING");
					unk_0x7899A951E85F4B28(iParam14, 6);
					unk_0x2042E9CA4306F725();
				}
				else if (fParam13 != -1f)
				{
					unk_0xB23270F3D5E62FDE("NUMBER");
					unk_0x5BC8B357341A4FEE(fParam13, 1);
					unk_0x2042E9CA4306F725();
				}
				else if (iParam10 != -1)
				{
					unk_0xAD291B8F75D737AD(iParam10);
				}
				else
				{
					func_607("");
				}
				if (uParam2->f_108 == 6)
				{
					func_607("");
				}
				else
				{
					func_607(&sParam4);
				}
				func_598(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x7BCC91F3C1CF24E8(sParam8))
				{
					func_607("");
					func_607("");
				}
				else
				{
					unk_0x4A096F645CED26D9(sParam8);
					unk_0x4A096F645CED26D9(sParam8);
				}
				if (func_597(uParam2))
				{
					func_596("DPAD_FRIEND");
				}
				else if (func_595(uParam2))
				{
					func_596("DPAD_FRIEND");
				}
				else if (func_594(uParam2))
				{
					func_596("DPAD_CREW");
				}
				else
				{
					func_596("");
				}
				unk_0xE1FDD153F5858534();
			}
		}
	}
}

int func_611(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_612(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_390(iParam0)) && !func_107(iParam0))
	{
		iVar0 = func_66();
	}
	iVar1 = func_87(iParam0);
	if (!iVar1 == -1)
	{
		return func_85(iVar1);
	}
	return iVar0;
}

int func_613(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_614(iParam3))
	{
		*fParam1 = (func_286(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_611(iParam3))
	{
		*fParam1 = (func_286(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_614(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_615(int iParam0)
{
	int iVar0;
	
	iVar0 = func_618(iParam0);
	if (iVar0 == -1)
	{
		func_616(iParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_616(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_618(iParam0) != -1)
	{
		return;
	}
	if (Global_1389384)
	{
		if (iParam0 == Global_1389384.f_1)
		{
			return;
		}
	}
	if (func_617(iParam0))
	{
		return;
	}
	if (Global_1389422 >= 32)
	{
		return;
	}
	Global_1389389[Global_1389422] = iParam0;
	Global_1389422++;
	if (bParam1)
	{
	}
}

int func_617(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389422)
	{
		if (Global_1389389[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_618(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389382 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389382)
	{
		if (Global_1389221[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x3F2B70A051A32606(Global_1389221[iVar0 /*5*/].f_2) && unk_0xCA635244223E5D25(Global_1389221[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_619(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_619(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1389382)
	{
		return;
	}
	if (unk_0x3F2B70A051A32606(Global_1389221[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389221[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x3EF2973864CBE5FC(Global_1389221[iParam0 /*5*/].f_2), 64);
			unk_0xC16699C9E79C9231(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x709B7208105825BB(Global_1389221[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389382)
	{
		Global_1389221[iVar32 /*5*/] = { Global_1389221[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_620(&(Global_1389221[iVar32 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_620(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_103();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x25DDB354A40FFCDB())
	{
		uParam0->f_3 = unk_0x6CAAB7E78B5D978A();
	}
}

struct<4> func_621(int iParam0)
{
	struct<4> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2515173 = { func_138(iParam0) };
		if (unk_0xC6C08C02733D02C8())
		{
			if (func_585(Global_2515173))
			{
				if (!unk_0xA20DDBBB15EC6235(&Global_2515173))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xF9A94F315B890564(0))
		{
			return Var0;
		}
		if (func_625(&Global_2515173))
		{
			Global_2515103 = { func_623(iParam0) };
			func_622(&Global_2515103, &Var0);
		}
	}
	return Var0;
}

void func_622(var uParam0, var uParam1)
{
	unk_0xA36843D7CCD081D6(uParam0, 35, uParam1);
}

struct<35> func_623(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_624(iParam0))
	{
		return Global_1312928[unk_0x460153A63B9477BC() /*35*/];
	}
	Var0 = { func_138(iParam0) };
	unk_0x192BD21E18525C69(&Var13, 35, &Var0);
	return Var13;
}

int func_624(int iParam0)
{
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		return 1;
	}
	return 0;
}

int func_625(var uParam0)
{
	if (unk_0xDCA94C1EA9942FBD())
	{
		if (unk_0xE2FBD13450B2DA21() && unk_0xBF9EC1ED7E386622(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_626(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_8(iParam0) || func_628(iParam0)) || func_7(iParam0))
		{
			return 0;
		}
	}
	if (!func_627(iParam0))
	{
		return 0;
	}
	if ((!func_635(iParam0) && Global_2425869[iParam0 /*443*/].f_240 == -1) && !func_634(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_627(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_142, 22);
}

int func_628(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 10) || unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 9));
	}
	return 0;
}

int func_629(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_103())
	{
		return 0;
	}
	if (func_14(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1590682[iVar0 /*883*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_630()
{
	switch (func_220(unk_0x460153A63B9477BC()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_321(unk_0x460153A63B9477BC()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_107(unk_0x460153A63B9477BC()))
	{
		switch (func_220(unk_0x460153A63B9477BC()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_604(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	return 0;
}

void func_631(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0xF1110FE23C67293A(iVar0), 0, 1))
		{
			iVar1 = unk_0xF1110FE23C67293A(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((func_635(iVar1) || Global_2425869[iVar1 /*443*/].f_240 != -1) || func_634(iVar1))
				{
					if (func_632(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_632(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_103())
	{
		if (!bParam2)
		{
			if (func_633(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630317[iParam0 /*595*/].f_11 != func_103())
		{
			return iParam1 == Global_1630317[iParam0 /*595*/].f_11;
		}
	}
	return 0;
}

int func_633(int iParam0, int iParam1)
{
	if (iParam1 != func_103())
	{
		if (iParam0 != func_103())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 != func_103())
			{
				if (Global_1630317[iParam0 /*595*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_634(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_196 != 0;
}

int func_635(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(unk_0x460153A63B9477BC(), 0, 1))
		{
			if (unk_0x56B60AE958412839(iParam0, unk_0x460153A63B9477BC()) || (func_220(iParam0) == 233 && func_636(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_636(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_637(unk_0x460153A63B9477BC());
	bVar1 = func_637(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_637(int iParam0)
{
	return func_638(&(Global_2425869[iParam0 /*443*/].f_429), 0);
}

bool func_638(var uParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, iParam1);
}

void func_639(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		unk_0x830F007E19C63E14(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xAD291B8F75D737AD(iParam1);
		unk_0xAD291B8F75D737AD(iParam2);
		unk_0xE1FDD153F5858534();
	}
}

void func_640(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377233.f_2 == 0)
		{
			Global_1377233.f_2 = 1;
		}
	}
	else if (Global_1377233.f_2 == 1)
	{
		Global_1377233.f_2 = 0;
	}
}

void func_641()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1))
	{
		if (func_302())
		{
			func_289();
		}
	}
}

int func_642()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 0) && func_302())
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1) && func_302())
	{
		return 1;
	}
	return 0;
}

int func_643()
{
	if (func_302())
	{
		if (func_54(Global_2440049.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_644()
{
	if (func_302())
	{
		if (func_67(Global_2440049.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_645(int iParam0)
{
	if (Global_1377233.f_1 != Global_1377233)
	{
		Global_1377233.f_1 = Global_1377233;
	}
	if (Global_1377233 != iParam0)
	{
		Global_1377233 = iParam0;
	}
}

int func_646(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_690(iParam1);
	fVar7 = func_689();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_688())
		{
			if (func_687() > 0 && Global_1574193)
			{
				unk_0xD10328357EA7B9E5();
				unk_0x530DC1525CA60B00(fVar7);
				unk_0x4CB4237D8858ADA6(18);
				if (unk_0xDABD547F0DF2906C())
				{
					unk_0x64083C4199676F44();
				}
				unk_0x4CB4237D8858ADA6(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_676())
		{
			func_675(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 26))
	{
		func_675(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_47(&(uParam2->f_19)))
	{
		if (func_687() == 1)
		{
			func_674(bVar6, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_675(uParam0, uParam2, 0);
			unk_0xBE20AB8238688965(&(Global_2540384.f_4656), 5);
		}
	}
	if (func_47(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xDABD547F0DF2906C())
		{
			unk_0x64083C4199676F44();
		}
		unk_0x4CB4237D8858ADA6(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_687() == 0 && !bParam5))
		{
			func_675(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_673();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xD10328357EA7B9E5();
				}
				unk_0x4CB4237D8858ADA6(18);
			}
			if (!unk_0xCE990E643CD9D0E5(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_673();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xD10328357EA7B9E5();
					}
					unk_0x4CB4237D8858ADA6(18);
				}
				unk_0x530DC1525CA60B00(fVar7);
				if (func_674(bVar6, uParam0, 0))
				{
					func_639(uParam0, 0, 0);
					uVar4 = func_671(iParam1, &(Global_4456448.f_82715), bParam4);
					Var0 = { func_669(iParam1) };
					if (bParam4)
					{
						func_666(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_660(uParam0, func_663(uParam2), func_661(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_654(uParam2);
						if (!unk_0x7BCC91F3C1CF24E8(uParam6))
						{
							sVar9 = sParam6;
						}
						func_652(uParam0, sVar9, func_653(), -1);
					}
					else if (func_599())
					{
						uParam2->f_34 = Global_1574192;
						func_666(uParam0, uVar4, &Var0, 1, -1, Global_1574192, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_647(iParam1);
						uParam2->f_34 = Global_1574192;
						func_666(uParam0, uVar4, "", 0, iVar8, Global_1574192, 1);
					}
					else
					{
						iVar8 = func_647(iParam1);
						func_666(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xBE20AB8238688965(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xCE990E643CD9D0E5(uParam2->f_33, 0))
			{
				Global_1574191 = uParam3;
				Global_1574190 = 1;
				unk_0x530DC1525CA60B00(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574192)
					{
						unk_0xD2459066EA58CE43(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_647(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_651())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_650(unk_0x460153A63B9477BC()))
			{
				iVar0 = 20;
			}
			if (func_649(unk_0x460153A63B9477BC()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_648(unk_0x460153A63B9477BC()))
	{
		iVar0 = 2;
	}
	if (func_221())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_648(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 4;
}

bool func_649(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

bool func_650(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_651()
{
	return Global_4456448.f_1 == 0;
}

void func_652(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		unk_0x830F007E19C63E14(*uParam0, "SET_TITLE");
		if (unk_0x7BCC91F3C1CF24E8(sParam2))
		{
			func_596(sParam1);
		}
		else
		{
			unk_0xB23270F3D5E62FDE("FM_AE_BRACKT");
			unk_0x6A826E35A3096ED0(sParam1);
			unk_0x6A826E35A3096ED0(sParam2);
			unk_0x2042E9CA4306F725();
		}
		func_596("");
		if (iParam3 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam3);
		}
		unk_0xE1FDD153F5858534();
	}
}

char* func_653()
{
	switch (func_220(unk_0x460153A63B9477BC()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_654(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_220(unk_0x460153A63B9477BC()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_656())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_257(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_257(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_655(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_655(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_656()
{
	return (func_659() && func_657(func_658()));
}

int func_657(int iParam0)
{
	return func_260(iParam0, 1);
}

int func_658()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_35;
}

bool func_659()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 148;
}

void func_660(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		unk_0x830F007E19C63E14(*uParam0, "SET_TITLE");
		if (unk_0x7BCC91F3C1CF24E8(uParam2))
		{
			func_596(uParam1);
		}
		else if (func_321(unk_0x460153A63B9477BC()) == 133)
		{
			unk_0xB23270F3D5E62FDE("FM_AE_BRACKT_C");
			unk_0x6A826E35A3096ED0(uParam1);
			unk_0x6A826E35A3096ED0(sParam2);
			unk_0x2042E9CA4306F725();
		}
		else
		{
			unk_0xB23270F3D5E62FDE("FM_AE_BRACKT");
			unk_0x6A826E35A3096ED0(sParam1);
			unk_0x6A826E35A3096ED0(sParam2);
			unk_0x2042E9CA4306F725();
		}
		func_596("");
		if (iParam3 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam3);
		}
		unk_0xE1FDD153F5858534();
	}
}

char* func_661(var uParam0)
{
	int iVar0;
	
	iVar0 = func_321(unk_0x460153A63B9477BC());
	if (func_662())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_320())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

bool func_662()
{
	return Global_1590555;
}

char* func_663(var uParam0)
{
	int iVar0;
	
	iVar0 = func_321(unk_0x460153A63B9477BC());
	if (func_662())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_665() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_665() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_320())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_664() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_664()
{
	return Global_2540384.f_5112;
}

int func_665()
{
	if (func_321(unk_0x460153A63B9477BC()) == 132)
	{
		return Global_2540384.f_5107;
	}
	return -1;
}

void func_666(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		unk_0x830F007E19C63E14(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_607(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xB23270F3D5E62FDE(uParam1);
			unk_0x42710E9E08FA375A(iParam5);
			unk_0x2042E9CA4306F725();
		}
		else
		{
			func_596(sParam1);
		}
		if (func_688() && iParam6)
		{
			if (func_668())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0xB23270F3D5E62FDE("LBD_DPD_CNT");
			unk_0x42710E9E08FA375A(iVar0);
			unk_0x42710E9E08FA375A(iVar1);
			unk_0x2042E9CA4306F725();
		}
		else
		{
			func_596(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam4);
			if (func_667(unk_0x460153A63B9477BC()))
			{
				unk_0xAD291B8F75D737AD(166);
			}
			else if (func_64())
			{
				unk_0xAD291B8F75D737AD(220);
			}
		}
		unk_0xE1FDD153F5858534();
	}
}

int func_667(int iParam0)
{
	if (func_650(iParam0) || func_649(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_668()
{
	return Global_1574193;
}

struct<4> func_669(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_670(unk_0x460153A63B9477BC()) || func_648(unk_0x460153A63B9477BC()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_525, 16);
			break;
	}
	if (func_599() && unk_0xFC559366953F62B3())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_525, 16);
	}
	return Var0;
}

bool func_670(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 5;
}

char* func_671(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_599() || unk_0x7BCC91F3C1CF24E8(uParam1)))
	{
		uVar0 = func_672();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574431 == 0)
		{
			Global_1574431 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		if (Global_1574431 == 1)
		{
			Global_1574431 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574431 == 0)
		{
			Global_1574431 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_672()
{
	if (unk_0x45A083C1167D5EA3())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x8F4B4AF1CA27A518())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xE598AA6FDE2D9C78())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x0287AAEDDA576E74())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_673()
{
	Global_42556 = 1;
}

bool func_674(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x5DEA4192B46CB99B("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x5DEA4192B46CB99B("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x5DEA4192B46CB99B("mp_matchmaking_card");
	}
	return unk_0x95EF219D38B20CFF(*uParam1);
}

void func_675(var uParam0, var uParam1, bool bParam2)
{
	unk_0xD2459066EA58CE43(&(uParam1->f_33), 7);
	Global_1574191 = 0;
	func_589();
	Global_1574190 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_47(&(uParam1->f_19)))
		{
			func_46(&(uParam1->f_19));
			unk_0xD2459066EA58CE43(&(Global_2540384.f_4656), 5);
		}
	}
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		unk_0x2E352DDBBF674246(uParam0);
	}
	if (unk_0xCE990E643CD9D0E5(uParam1->f_33, 0))
	{
		unk_0xD2459066EA58CE43(&(uParam1->f_33), 0);
	}
	unk_0x530DC1525CA60B00(0f);
}

int func_676()
{
	if (func_686())
	{
		return 0;
	}
	if (func_575())
	{
		return 0;
	}
	if (!func_684())
	{
		return 0;
	}
	if (!func_563())
	{
		return 0;
	}
	if (func_683(8, -1))
	{
		return 0;
	}
	if (func_687() == 2)
	{
		return 0;
	}
	if (Global_2540384.f_4607)
	{
		return 0;
	}
	if (func_315())
	{
		return 0;
	}
	else if (!func_353(unk_0x460153A63B9477BC(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_682(1) || func_680(1)) || Global_22411.f_124) || Global_22411)
	{
		return 0;
	}
	if (unk_0xF0C12886E5C1B20E())
	{
		return 0;
	}
	if (func_679() && Global_1696334 == 2)
	{
		return 0;
	}
	if (func_101(unk_0x460153A63B9477BC()) && !func_679())
	{
		return 0;
	}
	if (Global_1663771)
	{
		return 0;
	}
	if (Global_1663776)
	{
		return 0;
	}
	if (func_678(0))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (Global_1370294)
	{
		return 0;
	}
	if ((Global_1690739.f_718.f_5 || Global_1693565.f_718.f_5) || Global_1689767.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1697303.f_724.f_5 || Global_1697303.f_744.f_724.f_5) || Global_1697303.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1704127.f_726.f_5)
	{
		return 0;
	}
	if (func_677(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if ((Global_1370330 || Global_1370331) || Global_1370332)
	{
		return 0;
	}
	return 1;
}

bool func_677(int iParam0)
{
	if (iParam0 == func_103())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314.f_4, 6);
}

bool func_678(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_45, iParam0);
}

bool func_679()
{
	return (unk_0xCE990E643CD9D0E5(Global_4456448.f_30, 12) && unk_0xCE990E643CD9D0E5(Global_1696335, 0));
}

int func_680(bool bParam0)
{
	if (unk_0xDE4629DF35A51BEF())
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (func_681(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0x22D6FB6153F774D3(0, 25) || unk_0x22D6FB6153F774D3(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22411.f_130)
	{
		return 0;
	}
	if (unk_0x22D6FB6153F774D3(0, 19) || (!bParam0 && unk_0xB9C0D9B37277621D(0, 19)))
	{
		return 1;
	}
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (((unk_0x22D6FB6153F774D3(0, 166) || unk_0x22D6FB6153F774D3(0, 167)) || unk_0x22D6FB6153F774D3(0, 168)) || unk_0x22D6FB6153F774D3(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xB9C0D9B37277621D(0, 166) || unk_0xB9C0D9B37277621D(0, 167)) || unk_0xB9C0D9B37277621D(0, 168)) || unk_0xB9C0D9B37277621D(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_681(int iParam0)
{
	int iVar0;
	
	if (unk_0xE8CD061CB2B99F32())
	{
		if (!unk_0x5AEB5DDFFAD43CA5(uParam0))
		{
			unk_0x1386E5E658CE3032(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_682(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22411.f_4 && Global_22411.f_104 == 4);
	}
	return Global_22411.f_4;
}

bool func_683(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_1048, iParam0);
}

int func_684()
{
	if (func_685())
	{
		return 1;
	}
	if (unk_0x03DB5C6AABF8DA46())
	{
		return 0;
	}
	if (unk_0x5DA78AD6801A0523() || unk_0x5B772EFCB84373BE())
	{
		return 0;
	}
	if (unk_0x463040FA7A1E5224())
	{
		return 0;
	}
	return 1;
}

bool func_685()
{
	return Global_1312458;
}

bool func_686()
{
	return unk_0x578C4EF320340AF7() <= Global_22550.f_5878 + 100;
}

int func_687()
{
	return Global_1377236.f_68;
}

int func_688()
{
	if (Global_1574192 > 16)
	{
		return 1;
	}
	return 0;
}

float func_689()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x1D5FD59B82DB8734()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_690(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_691()
{
	if (func_694())
	{
		return 1;
	}
	if (func_7(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_662())
	{
		return 1;
	}
	if (func_390(unk_0x460153A63B9477BC()))
	{
		switch (func_321(unk_0x460153A63B9477BC()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_692(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_692(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_692(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_692(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 4);
}

int func_693(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_390(unk_0x460153A63B9477BC()) && !func_107(unk_0x460153A63B9477BC())) && !func_604(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_113(unk_0x460153A63B9477BC(), 0) && func_107(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
		if (func_568(unk_0x460153A63B9477BC()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_694()
{
	if (func_695(unk_0x460153A63B9477BC()))
	{
		return Global_1319161;
	}
	return 0;
}

int func_695(int iParam0)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		if (func_14(iParam0, 0))
		{
			return unk_0x118E43E714532022(iParam0);
		}
	}
	return 0;
}

void func_696()
{
	if (Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_3 == 3)
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_317, 8))
		{
			if ((!func_7(unk_0x460153A63B9477BC()) && !func_163(unk_0x460153A63B9477BC())) && !func_403(unk_0x460153A63B9477BC()))
			{
				func_402();
			}
		}
		else if (!unk_0xCE990E643CD9D0E5(iLocal_317, 9))
		{
			if ((func_7(unk_0x460153A63B9477BC()) || func_163(unk_0x460153A63B9477BC())) || func_403(unk_0x460153A63B9477BC()))
			{
				unk_0x6150AAC46D67D3FD();
				Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_4 = 0;
				unk_0xBE20AB8238688965(&iLocal_317, 9);
			}
		}
	}
}

void func_697()
{
	int iVar0;
	
	if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iLocal_321)))
	{
		iVar0 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iLocal_321));
		if (unk_0x166E920FB00B2DBB(iVar0))
		{
			func_698(iVar0, 2);
		}
	}
	iLocal_321++;
	if (iLocal_321 >= unk_0xEFA28384DDD283E1())
	{
		iLocal_321 = 0;
	}
}

void func_698(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 0))
	{
		return;
	}
	if (func_47(&(Global_1574656.f_18)))
	{
		return;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1574656.f_2, iParam0))
	{
		if (Global_1574656 < iParam1 && unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 1))
		{
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 0);
			return;
		}
		if (Global_1574656 != 0)
		{
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 1);
		}
		Global_1574656 = 0;
		Global_1574656.f_2 = 0;
	}
	unk_0xBE20AB8238688965(&(Global_1574656.f_2), iParam0);
	bVar0 = true;
	if (func_8(iParam0))
	{
		bVar0 = false;
	}
	if (func_699(iParam0))
	{
		bVar0 = false;
	}
	if (func_14(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_7(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1574656++;
	}
}

bool func_699(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 10);
}

void func_700(int iParam0, int iParam1)
{
	Local_2593[iParam0 /*12*/] = iParam1;
}

int func_701()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_714.f_534[iVar0 /*42*/].f_1 = func_103();
		iVar0++;
	}
	return 1;
}

int func_702()
{
	return Local_626;
}

int func_703(int iParam0)
{
	return Local_2593[iParam0 /*12*/];
}

void func_704()
{
	if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 6))
	{
		func_727();
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 6);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 7))
	{
		if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 4) || unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 16))
		{
			if (((!unk_0xEBB78303C505A9D7() && !unk_0xDABD547F0DF2906C()) && !func_302()) && func_12(unk_0x460153A63B9477BC(), 1, 1))
			{
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 7);
				func_296("FME_PASINT", 30000);
				func_295(1);
			}
		}
		else if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 17))
		{
			if (func_166() && !func_165())
			{
				unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 17);
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 16);
			}
		}
	}
	if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 23))
	{
		if (((((!unk_0xEBB78303C505A9D7() && !unk_0xCE990E643CD9D0E5(Global_2540384.f_833, 2)) && func_12(unk_0x460153A63B9477BC(), 1, 1)) && !Global_74030) && !Global_58898) && !unk_0xDABD547F0DF2906C())
		{
			if (func_725())
			{
				func_296("AMEV_GA_RP", -1);
				if (func_220(unk_0x460153A63B9477BC()) != 200)
				{
					func_295(1);
				}
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 23);
			}
		}
	}
	if (unk_0xF0C12886E5C1B20E() && unk_0xCFB49FF4012D7C68() == 15)
	{
		if (func_416(unk_0x460153A63B9477BC()))
		{
			if (!unk_0x9257D9337B908AFC(1344549371))
			{
				unk_0x16611E08D2E0FBE9(1344549371);
			}
		}
		else if (unk_0x9257D9337B908AFC(1344549371))
		{
			unk_0x9182C03E20E1D981(1344549371);
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 9))
	{
		if (((((!unk_0xEBB78303C505A9D7() && !unk_0xDABD547F0DF2906C()) && !func_302()) && func_12(unk_0x460153A63B9477BC(), 1, 1)) && !func_164(unk_0x460153A63B9477BC(), 21)) && !func_164(unk_0x460153A63B9477BC(), 25))
		{
			unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 9);
			func_724(0);
			func_296("FME_TBL00", -1);
			func_295(1);
		}
	}
	if (func_390(unk_0x460153A63B9477BC()))
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 18))
		{
			if ((func_164(unk_0x460153A63B9477BC(), 21) && unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 20)) && !unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 19))
			{
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 18);
			}
		}
		else if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 18))
		{
			if (((((!unk_0xEBB78303C505A9D7() && !unk_0xDABD547F0DF2906C()) && !func_302()) && func_12(unk_0x460153A63B9477BC(), 1, 1)) && unk_0x87F0CB19476706C3()) && !Global_2540384.f_5121)
			{
				unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 18);
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 19);
				func_296("AMTT_RPAS", -1);
				func_295(1);
			}
		}
	}
	if (((((func_390(unk_0x460153A63B9477BC()) && !func_8(unk_0x460153A63B9477BC())) && func_321(unk_0x460153A63B9477BC()) != 146) && !func_7(unk_0x460153A63B9477BC())) && !func_163(unk_0x460153A63B9477BC())) && !func_714())
	{
		if (func_415(func_321(unk_0x460153A63B9477BC())))
		{
			unk_0xA2FFEA2766563CF9(unk_0x460153A63B9477BC());
		}
		if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 22))
		{
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 22);
		}
		if (func_456(unk_0x460153A63B9477BC()) || func_409())
		{
			if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 10))
			{
				if (func_713(func_321(unk_0x460153A63B9477BC())))
				{
					if (func_264(0) && !Global_2391045)
					{
						unk_0xBE20AB8238688965(&(Global_1574656.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_413(1);
						unk_0xBE20AB8238688965(&(Global_1574656.f_1), 14);
					}
				}
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 10);
			}
		}
		if (func_416(unk_0x460153A63B9477BC()))
		{
			if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 11))
			{
				if (!Global_99007.f_8)
				{
					unk_0xBE20AB8238688965(&(Global_1574656.f_1), 12);
					func_411(1);
				}
				if (!func_712())
				{
					unk_0xBE20AB8238688965(&(Global_1574656.f_1), 13);
					func_410();
				}
				if (!Global_2391045)
				{
					unk_0xBE20AB8238688965(&(Global_1574656.f_1), 14);
					if (func_264(0) && !Global_2391045)
					{
						unk_0xBE20AB8238688965(&(Global_1574656.f_1), 9);
					}
					func_413(1);
				}
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 11);
			}
		}
		else
		{
			func_710(0);
		}
	}
	else
	{
		func_710(1);
	}
	func_705();
	if (func_408(func_321(unk_0x460153A63B9477BC())) && !unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 21))
	{
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 21);
	}
	if (((func_166() && !func_165()) || func_164(unk_0x460153A63B9477BC(), 21)) || func_164(unk_0x460153A63B9477BC(), 25))
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 10))
		{
			unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 10);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 10))
	{
		unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 10);
	}
}

void func_705()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_302())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_551(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 26))
				{
					unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 26);
				}
				func_706(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 26))
	{
		func_46(&(Global_1574656.f_22));
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 26);
	}
}

void func_706(int iParam0, int iParam1)
{
	if (!func_47(&(Global_1574656.f_22)))
	{
		func_2(&(Global_1574656.f_22), 0, 0);
	}
	else if (func_1(&(Global_1574656.f_22), iParam1, 0))
	{
		if (func_687() > 0)
		{
			func_709(iParam0);
			if (func_293("AMEV_LBD_HELP"))
			{
				unk_0xD289B55B6AADBA10(1);
			}
			func_46(&(Global_1574656.f_22));
		}
	}
	else
	{
		func_708(0);
		func_707();
	}
}

void func_707()
{
	Global_2540384.f_4595 = 0;
}

void func_708(int iParam0)
{
	Global_1377236.f_68 = iParam0;
}

void func_709(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			func_104(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_710(int iParam0)
{
	if ((unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 11) || (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 10) && iParam0)) || (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 22) && iParam0))
	{
		if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 12))
		{
			unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 12);
			func_411(0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 13))
		{
			unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 13);
			func_711();
		}
		if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 14) && !func_113(unk_0x460153A63B9477BC(), 0))
		{
			unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 14);
			func_413(0);
		}
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 11);
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 10);
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 22);
	}
}

void func_711()
{
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5026), 0);
}

bool func_712()
{
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5026, 0);
}

int func_713(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_416(unk_0x460153A63B9477BC());
		
		case 133:
			return (func_409() || func_5(func_320()));
		
		default:
	}
	return 0;
}

int func_714()
{
	if (((((((((func_723() || func_722()) || func_721()) || func_315()) || (func_720() && !unk_0xFC559366953F62B3())) || (func_717() && !func_716())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_715() == 2 && !unk_0xFC559366953F62B3()))
	{
		return 1;
	}
	return 0;
}

int func_715()
{
	return Global_968397;
}

bool func_716()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787.f_2, 27);
}

int func_717()
{
	if (func_719() || func_718())
	{
		return Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_98 == 8;
	}
	return 0;
}

var func_718()
{
	return Global_2451787.f_733;
}

bool func_719()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787.f_2, 11);
}

bool func_720()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787, 5);
}

bool func_721()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787, 2);
}

bool func_722()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787, 20);
}

bool func_723()
{
	return Global_2451787.f_696;
}

void func_724(int iParam0)
{
	int iVar0;
	
	iVar0 = func_208(2535, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xCE990E643CD9D0E5(iVar0, 0))
		{
			unk_0xBE20AB8238688965(&iVar0, 0);
		}
		else if (!unk_0xCE990E643CD9D0E5(iVar0, 1))
		{
			unk_0xBE20AB8238688965(&iVar0, 1);
		}
		else if (!unk_0xCE990E643CD9D0E5(iVar0, 2))
		{
			unk_0xBE20AB8238688965(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xCE990E643CD9D0E5(iVar0, 3))
		{
			unk_0xBE20AB8238688965(&iVar0, 3);
		}
		else if (!unk_0xCE990E643CD9D0E5(iVar0, 4))
		{
			unk_0xBE20AB8238688965(&iVar0, 4);
		}
		else if (!unk_0xCE990E643CD9D0E5(iVar0, 5))
		{
			unk_0xBE20AB8238688965(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xCE990E643CD9D0E5(iVar0, 6))
		{
			unk_0xBE20AB8238688965(&iVar0, 6);
		}
		else if (!unk_0xCE990E643CD9D0E5(iVar0, 7))
		{
			unk_0xBE20AB8238688965(&iVar0, 7);
		}
		else if (!unk_0xCE990E643CD9D0E5(iVar0, 8))
		{
			unk_0xBE20AB8238688965(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xCE990E643CD9D0E5(iVar0, 9))
		{
			unk_0xBE20AB8238688965(&iVar0, 9);
		}
		else if (!unk_0xCE990E643CD9D0E5(iVar0, 10))
		{
			unk_0xBE20AB8238688965(&iVar0, 10);
		}
		else if (!unk_0xCE990E643CD9D0E5(iVar0, 11))
		{
			unk_0xBE20AB8238688965(&iVar0, 11);
		}
	}
	func_199(2535, iVar0, -1, 1, 0);
}

int func_725()
{
	int iVar0;
	
	if (!func_47(&(Global_1574656.f_15)))
	{
		func_2(&(Global_1574656.f_15), 0, 0);
		Global_1574656.f_17 = 0;
	}
	else if (func_1(&(Global_1574656.f_15), 1000, 0))
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(Global_1574656.f_17)))
		{
			iVar0 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(Global_1574656.f_17));
			if (unk_0x166E920FB00B2DBB(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_726(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_38(unk_0x460153A63B9477BC()), func_38(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574656.f_17++;
		if (Global_1574656.f_17 >= 32)
		{
			Global_1574656.f_17 = 0;
			func_46(&(Global_1574656.f_15));
		}
	}
	return 0;
}

int func_726(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_392() != 0)
	{
		return 0;
	}
	if (!func_203(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590682[iVar0 /*883*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_727()
{
	unk_0x53797676AD34A9AA(5);
	func_729();
	unk_0x34FEEAC2548C3789(1f);
	unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 8);
	func_728();
}

void func_728()
{
	if (Global_1673529)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1673530, 0))
		{
			unk_0xD2459066EA58CE43(&Global_2549478, 0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_1673530, 1))
		{
			unk_0xD2459066EA58CE43(&Global_2549478, 1);
		}
		if (unk_0xCE990E643CD9D0E5(Global_1673530, 5))
		{
			unk_0xD2459066EA58CE43(&Global_2549478, 5);
		}
		if (unk_0x60C47897C07F44B1(-355737150))
		{
			unk_0xDC5C33A98881772F(-355737150, 1, 0, 0);
		}
		if (unk_0x60C47897C07F44B1(-580979506))
		{
			unk_0xDC5C33A98881772F(-580979506, 1, 0, 0);
		}
		if (unk_0x60C47897C07F44B1(-1426452475))
		{
			unk_0xDC5C33A98881772F(-1426452475, 1, 0, 0);
		}
		if (unk_0x60C47897C07F44B1(745417724))
		{
			unk_0xDC5C33A98881772F(745417724, 1, 0, 0);
		}
		if (unk_0x60C47897C07F44B1(-1305304906))
		{
			unk_0xDC5C33A98881772F(-1305304906, 1, 0, 0);
		}
		if (unk_0x60C47897C07F44B1(-1543175077))
		{
			unk_0xDC5C33A98881772F(-1543175077, 1, 0, 0);
		}
		if (unk_0x60C47897C07F44B1(-811770997))
		{
			unk_0xDC5C33A98881772F(-811770997, 1, 0, 0);
		}
		Global_1673530 = 0;
	}
	Global_1673529 = 0;
}

void func_729()
{
	if (unk_0x7FD2BDF03806FD9D(Global_2540384.f_5184))
	{
		if (!Global_2540384.f_5184 == unk_0x354AD085195C5FA6() && Global_2540384.f_5183 < 1f)
		{
			return;
		}
	}
	Global_2540384.f_5184 = -1;
	Global_2540384.f_5183 = 1f;
}

int func_730()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2540384.f_5024)
	{
		return 0;
	}
	if ((!func_47(&(Local_626.f_39)) && !func_47(&(Local_626.f_41))) && !func_47(&(Local_626.f_43)))
	{
		return 0;
	}
	uVar2 = unk_0x6CAAB7E78B5D978A();
	if (func_47(&(Local_626.f_41)))
	{
		iVar0 = func_731(&uVar2, &(Local_626.f_41));
		iVar1 = 20000;
	}
	else if (func_47(&(Local_626.f_39)))
	{
		iVar0 = func_731(&uVar2, &(Local_626.f_39));
		iVar1 = func_28(0);
	}
	else if (func_47(&(Local_626.f_43)))
	{
		iVar0 = func_731(&uVar2, &(Local_626.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_731(var uParam0, var uParam1)
{
	return unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(*uParam0, *uParam1));
}

int func_732()
{
	if (func_733())
	{
		return 1;
	}
	return 0;
}

bool func_733()
{
	return Global_1574656.f_24;
}

int func_734()
{
	var uVar0;
	
	func_738(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_737())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_736())
	{
		return 1;
	}
	if (func_735(159))
	{
		if (!func_723())
		{
			return 1;
		}
	}
	if (func_735(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_418() != 0)
	{
		if (unk_0x7B70881748D166CD(func_418()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_735(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_736()
{
	return Global_2462250;
}

bool func_737()
{
	return Global_2451787.f_691;
}

void func_738(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2AC1C68C7CCA90E5(1))
	{
		iVar1 = unk_0x39BE1B4CEB4DAEC8(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x477FAFFE21935947(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1035596089:
					func_739(iVar0);
					break;
				
				case 1120313136:
					unk_0x477FAFFE21935947(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 397890833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_739(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(uVar3))
			{
				if (unk_0x47DBF174A0CB9D55(iVar3, 0))
				{
					uVar4 = unk_0xA5D5B1042E8F47BD(iVar3, 0);
					if (unk_0x292280AF1BBBD6AC(uVar4, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_740(uVar4, &bVar5))
						{
							unk_0xADCDA8AF77C0D19D(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE730EAF558C97567(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_740(int iParam0, var uParam1)
{
	if (unk_0xAE06B9E39EBDE049(uParam0))
	{
		if (!unk_0x1758275D343D5BA3(iParam0))
		{
			if (unk_0x38CC98C4A0688263(iParam0))
			{
				if (!unk_0xCA6AF782C906AC86(unk_0x36FE6D3220816ADA(iParam0)))
				{
					unk_0x4F3C4F457D44BB0F(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x1D2A3118784C0272(iParam0, 0))
		{
			if (unk_0xAA5B806352173DEA(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_741()
{
	SYSTEM::WAIT(0);
}

void func_742()
{
	int iVar0;
	
	if (func_734())
	{
		Local_2978.f_5 = 5;
	}
	else if (unk_0xCE990E643CD9D0E5(Local_626.f_2, 0))
	{
		Local_2978.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_2978.f_5 = 1;
	}
	else
	{
		Local_2978.f_5 = 2;
	}
	Local_2978 = Local_626.f_52;
	Local_2978.f_1 = Local_626.f_53;
	Local_2978.f_4 = Local_626.f_66;
	Local_2978.f_3 = Local_626.f_51;
	Local_2978.f_10 = (unk_0x5A002C4821A13338() - Local_2978.f_9);
	if (!Global_262145.f_11508)
	{
		if (Local_2978.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		if (unk_0x59E2AD1A8ACEDA31() != -1)
		{
			func_778(Local_2978, Local_626.f_3, Local_2593[unk_0x59E2AD1A8ACEDA31() /*12*/].f_4, iVar0, -1, -1, -1);
		}
	}
	if (unk_0xCE990E643CD9D0E5(iLocal_317, 4))
	{
		unk_0xC5E5600D1CF5CEF9(iLocal_325);
		unk_0xD2459066EA58CE43(&iLocal_317, 4);
	}
	unk_0xADB6EEE689FE86DE(iLocal_325);
	unk_0xADB6EEE689FE86DE(iLocal_326);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((unk_0xCE990E643CD9D0E5(iLocal_612, iVar0) && iLocal_613[iVar0] != -1) && !unk_0x046706CBB367B768(iLocal_613[iVar0]))
		{
			unk_0xC5E5600D1CF5CEF9(iLocal_613[iVar0]);
			unk_0xADB6EEE689FE86DE(iLocal_613[iVar0]);
		}
		iVar0++;
	}
	func_399();
	func_478(1, 1);
	unk_0xFB7DCD4289A91C1E(0);
	func_553(0);
	func_406(Local_626.f_3, 0);
	func_743(133, 0, Local_626.f_37 == 6);
	func_405(23, 0);
	if (func_307() >= 0f)
	{
		unk_0xDFC7A4B191C8D46C(0f, 0, 21);
	}
	if (!unk_0xCE990E643CD9D0E5(iLocal_317, 9))
	{
		unk_0x6150AAC46D67D3FD();
	}
	unk_0xD39E529EBE5DB04F();
}

void func_743(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x460153A63B9477BC() != -1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 13))
		{
			unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 13);
		}
		if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 14))
		{
			unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 14);
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 21))
	{
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 21);
	}
	func_774();
	unk_0x0C0DE28672975DC3("DisableFlightMusic", 0);
	unk_0x0C0DE28672975DC3("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_773(func_321(unk_0x460153A63B9477BC()));
		func_405(func_424(iParam0), 0);
	}
	else
	{
		if ((bParam2 && unk_0x460153A63B9477BC() != -1) && func_772(unk_0x460153A63B9477BC()) >= 12)
		{
			func_771(2547, -1);
			iVar1 = func_208(2547, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xBE20AB8238688965(&Global_1574682, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xBE20AB8238688965(&Global_1574682, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xBE20AB8238688965(&Global_1574682, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xBE20AB8238688965(&Global_1574682, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xBE20AB8238688965(&Global_1574682, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xBE20AB8238688965(&Global_1574682, 5);
			}
		}
		func_770();
		func_769();
		func_768();
		if ((!func_109(unk_0x460153A63B9477BC()) && !func_301(unk_0x460153A63B9477BC())) && !func_457())
		{
			func_752();
		}
		func_751();
		if (!unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 0) && !unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 1))
		{
			func_727();
		}
		func_750();
		unk_0xD2459066EA58CE43(&(Global_2540384.f_1807), 2);
		func_749();
		func_168();
	}
	if (unk_0x9257D9337B908AFC(1344549371))
	{
		unk_0x9182C03E20E1D981(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((unk_0x460153A63B9477BC() != -1 && !func_164(unk_0x460153A63B9477BC(), 21)) && !func_164(unk_0x460153A63B9477BC(), 25)) && !func_113(unk_0x460153A63B9477BC(), 0))
		{
			func_413(0);
			func_411(0);
			if (!bParam1)
			{
				func_748();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_50(26, -1))
		{
			Global_2464425 = -1;
			func_48(26, -1);
		}
	}
	if (!func_744())
	{
		Global_2515064 = 1;
	}
}

int func_744()
{
	if ((((((!func_667(unk_0x460153A63B9477BC()) && !func_648(unk_0x460153A63B9477BC())) && func_321(unk_0x460153A63B9477BC()) != 146) && !func_747()) && !func_746()) && !func_745(Global_4456448.f_129348)) && !func_93())
	{
		return 0;
	}
	return 1;
}

bool func_745(int iParam0)
{
	return iParam0 == 57;
}

int func_746()
{
	if (Global_4456448.f_82708 == Global_262145.f_9598)
	{
		return 1;
	}
	return 0;
}

int func_747()
{
	if ((Global_4456448 == 0 && unk_0xFC559366953F62B3()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_129348 > 0) || unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 15)) || unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 18)) || unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 19)) || unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 29)) || unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 28)) || unk_0xCE990E643CD9D0E5(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_748()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0xCE990E643CD9D0E5(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xCE990E643CD9D0E5(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				unk_0xD2459066EA58CE43(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_749()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 1))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_5025), 1);
	}
	if (Global_2540384.f_5025 > 0)
	{
		unk_0x21723EF7B2FCC4CC("FM_COUNTDOWN_30S_KILL");
		unk_0x21723EF7B2FCC4CC("FM_COUNTDOWN_30S_FIRA");
		unk_0xFA07F8BEBDAAFBA8("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x96F763331D19ED14(1);
		Global_2540384.f_5025 = 0;
		unk_0x0C0DE28672975DC3("DisableFlightMusic", 0);
		unk_0x0C0DE28672975DC3("WantedMusicDisabled", 0);
		unk_0x0C0DE28672975DC3("AllowScoreAndRadio", 0);
		if (!unk_0xF005CCA4263DF67F(unk_0x6C5C6B207AA78253(), "am_pi_menu"))
		{
			if (Global_2540384.f_5035 > -1)
			{
				unk_0xADB6EEE689FE86DE(Global_2540384.f_5035);
				Global_2540384.f_5035 = -1;
			}
		}
	}
}

void func_750()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574656 = { Var0 };
}

void func_751()
{
	var uVar0;
	
	Global_1319161 = uVar0;
}

void func_752()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_24), &Global_2409333, 2);
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_26), &Global_2409335, 19);
	func_766();
	func_755(1, 1, 0);
	func_753();
}

void func_753()
{
	func_754(0, 0);
}

void func_754(int iParam0, int iParam1)
{
	Global_2405074.f_22 = iParam0;
	Global_2405074.f_23 = iParam1;
}

void func_755(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x13AF25746D6C3CA9(&(Global_2405074.f_45), &Global_2409354, 320);
	}
	else
	{
		Global_2405074.f_45 = { Global_2409354 };
		Global_2405074.f_45.f_49 = { Global_2409354.f_49 };
		Global_2405074.f_45.f_52 = Global_2409354.f_52;
		Global_2405074.f_45.f_53 = Global_2409354.f_53;
	}
	if (bParam0)
	{
		func_765();
	}
	if (!bParam2)
	{
		func_757(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_756(0);
	func_171();
}

void func_756(bool bParam0)
{
	if (bParam0)
	{
		Global_2405074.f_707 = 0;
	}
	else
	{
		Global_2405074.f_707 = 1;
	}
}

void func_757(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_764())
		{
			func_763();
		}
		Global_2405074.f_708.f_518 = unk_0x354AD085195C5FA6();
		Global_2405074.f_708.f_504 = iParam1;
		Global_2405074.f_708.f_505 = iParam2;
		Global_2405074.f_708.f_506 = iParam10;
		func_761();
		func_453(8, 0, 0, 0, 0);
		Global_2405074.f_708.f_507 = iParam11;
		Global_2405074.f_708.f_512 = iParam3;
		Global_2405074.f_708.f_513 = iParam4;
		Global_2405074.f_708.f_510 = iParam5;
		Global_2405074.f_708.f_511 = iParam6;
		Global_2405074.f_708.f_514 = iParam7;
		Global_2405074.f_708.f_515 = iParam8;
		Global_2405074.f_708.f_516 = iParam9;
		Global_2405074.f_708.f_517 = iParam14;
		Global_2405074.f_708.f_508 = iParam12;
		Global_2405074.f_708.f_509 = iParam13;
		Global_2405074.f_1747 = 1;
	}
	else
	{
		func_758();
	}
}

void func_758()
{
	if (func_764() && !func_760())
	{
		func_763();
	}
	if (func_760())
	{
		func_759();
	}
	else
	{
		func_761();
		func_453(0, 0, 0, 0, 0);
		Global_2405074.f_1747 = 0;
		Global_2405074.f_1746 = 0;
	}
}

void func_759()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_708), &(Global_2405074.f_1227), 519);
	Global_2405074.f_487 = { Global_2405074.f_493 };
	if (unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518)
	{
		Global_2405074.f_1746 = 0;
	}
}

int func_760()
{
	if ((Global_2405074.f_1746 && !unk_0x354AD085195C5FA6() == Global_2405074.f_1227.f_518) && unk_0x7FD2BDF03806FD9D(Global_2405074.f_1227.f_518))
	{
		return 1;
	}
	return 0;
}

void func_761()
{
	if (func_764() && !func_760())
	{
		func_763();
	}
	func_762();
	Global_2405074.f_708 = 0;
}

void func_762()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405074.f_708.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_763()
{
	if (func_760())
	{
		if (Global_2405074.f_708.f_518 == Global_2405074.f_1227.f_518)
		{
			return;
		}
	}
	if (!unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518)
	{
		unk_0x13AF25746D6C3CA9(&(Global_2405074.f_1227), &(Global_2405074.f_708), 519);
		Global_2405074.f_493 = { Global_2405074.f_487 };
		Global_2405074.f_1746 = 1;
	}
}

int func_764()
{
	if ((Global_2405074.f_1747 && !unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518) && unk_0x7FD2BDF03806FD9D(Global_2405074.f_708.f_518))
	{
		return 1;
	}
	return 0;
}

void func_765()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_365), &Global_2409674, 121);
}

void func_766()
{
	func_767();
}

void func_767()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405074.f_2257[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405074.f_2256 = 0;
}

void func_768()
{
	Global_2540384.f_5026 = 0;
}

void func_769()
{
	if (unk_0x460153A63B9477BC() != -1)
	{
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1 = 0;
	}
}

void func_770()
{
	int iVar0;
	
	iVar0 = unk_0x460153A63B9477BC();
	if (iVar0 != -1)
	{
		Global_1630317[iVar0 /*595*/] = -1;
	}
}

void func_771(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_208(iParam0, func_204(iParam1), 0);
	iVar0++;
	if (!func_207(iParam0))
	{
		func_199(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_200(iParam0, iVar0, iParam1, 1);
	}
}

int func_772(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_211.f_6;
}

int func_773(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_416(unk_0x460153A63B9477BC()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_774()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_1795, 3) || unk_0xCE990E643CD9D0E5(Global_2540384.f_1795, 4))
	{
		if (unk_0x03DB5C6AABF8DA46() || unk_0x5DA78AD6801A0523())
		{
			unk_0xFD45D90342D2A0CD(800);
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_1795, 5))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_1795), 5);
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_1795, 3))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_1795), 3);
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_1795, 4))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_1795), 4);
	}
	func_777(0);
	func_776(0);
	func_775(0);
}

void func_775(int iParam0)
{
	if (Global_2540384.f_4583 != iParam0)
	{
		Global_2540384.f_4583 = iParam0;
	}
}

void func_776(bool bParam0)
{
	if (Global_2540384.f_4582 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2540384.f_4582 = bParam0;
	}
}

void func_777(int iParam0)
{
	if (Global_2540384.f_4580 != iParam0)
	{
		Global_2540384.f_4580 = iParam0;
	}
}

void func_778(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	var uVar0;
	struct<13> Var1;
	struct<14> Var14;
	struct<18> Var28;
	struct<14> Var52;
	struct<13> Var66;
	struct<14> Var79;
	struct<14> Var93;
	struct<16> Var107;
	struct<13> Var123;
	struct<14> Var136;
	struct<14> Var150;
	struct<13> Var164;
	
	uVar0 = unk_0x6C5C6B207AA78253();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_76833)
	{
		if (unk_0xF005CCA4263DF67F(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x7A1FE8774C6CCDB2(&Var1);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, func_779()))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x707C34C133F50E05(&Var14);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x61C2147DC67E7638(&Var28);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = SYSTEM::TO_FLOAT(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0xC022C2B135B742F0(&Var52);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "am_penned_in"))
		{
			unk_0x7073A8DA2E39CB33(&Param0);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0xFA977DAD2F5E152B(&Var66);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x576C97A880B1C7BB(&Var79);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0xB13914A146D1D7EC(&Var93);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x2596209CA815D28C(&Var107);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0x8205D6ABC67C4813(&Var123);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x7D2F115EE19C1884(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0xE20893E626B564CC(&Var150);
			}
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0xD1843280A6D1A0F0(&Var164);
		}
	}
}

char* func_779()
{
	switch (Global_2464595)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_780(struct<21> Param0)
{
	int iVar0;
	
	func_789(func_790(Param0), Param0);
	unk_0xDF803FB4BC52CAF6(func_788(9));
	unk_0x628BF6B677C62F7E(func_787(9));
	func_784(0, -1, 0);
	func_782(133);
	unk_0x97D2F2E2C92FD519(&Local_626, 88);
	unk_0xBB96A3ECD45D0317(&Local_2593, 385);
	if (!func_781())
	{
		func_742();
	}
	if (unk_0xAFF96FDC3971E7EA())
	{
		unk_0xF73A2DAF57FFFE87(&(Local_626.f_52), &(Local_626.f_53));
	}
	Local_2978.f_2 = unk_0xDD3720600B3FC529();
	unk_0x3A396632EB359434(0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_613[iVar0] = -1;
		iVar0++;
	}
	return 1;
}

int func_781()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 0;
		}
		if (unk_0x331F7CFA5515B989())
		{
			return 1;
		}
		if (func_737())
		{
			return 0;
		}
		if (func_735(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_782(int iParam0)
{
	func_750();
	func_783();
	func_768();
	Global_1574656.f_4 = iParam0;
	Global_1574656.f_5 = iParam0;
	func_423(iParam0, -1);
	func_27(&(Global_1574656.f_18), 0, 0);
	Global_2540384.f_4652 = 0;
	Global_2463318[0] = func_103();
	Global_2463318[1] = func_103();
	Global_2463318[2] = func_103();
	Global_2463318[3] = func_103();
	Global_2463318[4] = func_103();
	func_168();
	if (!func_566(func_290()))
	{
		func_289();
	}
	if (func_166() && !func_165())
	{
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 16);
	}
	else
	{
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 17);
	}
}

void func_783()
{
	var uVar0;
	
	Global_1574681 = uVar0;
}

int func_784(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x361B374A50D875B4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_786();
			}
			else
			{
				return 0;
			}
		}
		if (!func_785())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x25DDB354A40FFCDB())
				{
					if (!bParam2)
					{
						func_786();
					}
					else
					{
						return 0;
					}
				}
				if (func_737())
				{
					if (!bParam2)
					{
						func_786();
					}
					else
					{
						return 0;
					}
				}
				if (func_735(157))
				{
					if (!bParam2)
					{
						func_786();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x3BF0BB5923982C0D())
			{
				if (!bParam2)
				{
					func_786();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = unk_0x361B374A50D875B4();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			if (!bParam2)
			{
				func_786();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x3BF0BB5923982C0D())
	{
		if (!bParam2)
		{
			func_786();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_785()
{
	return Global_1312872;
}

void func_786()
{
	unk_0xD39E529EBE5DB04F();
}

int func_787(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		default:
	}
	return 0;
}

int func_788(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		default:
	}
	return 0;
}

void func_789(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		func_786();
	}
	unk_0xA88557896B79E30D(uParam0, 0, Param1.f_16);
}

int func_790(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("MPSV_LP0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 8;
		
		case 131:
			return 8;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 141:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 150:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 2;
		
		case 157:
			return 1;
		
		case 153:
			return 2;
		
		case 154:
			return 4;
		
		case 155:
			return 2;
		
		case 156:
			return 2;
		
		case 138:
			return 1;
		
		case 158:
			return 2;
		
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
			return 0;
		
		case 180:
			return 1;
		
		case 165:
			return 4;
		
		case 168:
			return 4;
		
		case 169:
			return 1;
		
		case 170:
			return 1;
		
		case 176:
			return 1;
		
		case 172:
			return 2;
		
		case 177:
			return 1;
		
		case 173:
			return 1;
		
		case 171:
			return 2;
		
		case 174:
			return 8;
		
		case 175:
			return 8;
		
		case 178:
			return 1;
		
		case 179:
			return 2;
		
		case 166:
			return 16;
		
		case 167:
			return 32;
		
		default:
	}
	return 0;
}

