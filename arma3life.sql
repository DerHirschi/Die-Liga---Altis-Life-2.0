/*
Navicat MySQL Data Transfer

Source Server         : HServer
Source Server Version : 50722
Source Host           : 192.168.178.100:3306
Source Database       : arma3life

Target Server Type    : MYSQL
Target Server Version : 50722
File Encoding         : 65001

Date: 2018-05-02 08:12:49
*/

SET FOREIGN_KEY_CHECKS=0;
-- ----------------------------
-- Table structure for `baulog`
-- ----------------------------
DROP TABLE IF EXISTS `baulog`;
CREATE TABLE `baulog` (
  `uid` varchar(50) NOT NULL,
  `spplatten_a5` int(16) NOT NULL,
  `sttraeger_stt` int(16) NOT NULL,
  `cement` int(16) NOT NULL,
  `glass` int(16) NOT NULL,
  `gesamtmenge` text,
  `timestamp` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP
) ENGINE=InnoDB DEFAULT CHARSET=utf8 ROW_FORMAT=COMPACT;

-- ----------------------------
-- Records of baulog
-- ----------------------------

-- ----------------------------
-- Table structure for `baustelle`
-- ----------------------------
DROP TABLE IF EXISTS `baustelle`;
CREATE TABLE `baustelle` (
  `typ` varchar(12) NOT NULL DEFAULT '0',
  `ist` int(32) DEFAULT NULL,
  `beschreibeung` varchar(12) DEFAULT NULL,
  PRIMARY KEY (`typ`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of baustelle
-- ----------------------------
INSERT INTO `baustelle` VALUES ('a5', '40110', 'Spanplatten');
INSERT INTO `baustelle` VALUES ('cement', '25002', 'Zement');
INSERT INTO `baustelle` VALUES ('glass', '20445', 'Glass');
INSERT INTO `baustelle` VALUES ('stt', '13458', 'Stahträger');

-- ----------------------------
-- Table structure for `exp`
-- ----------------------------
DROP TABLE IF EXISTS `exp`;
CREATE TABLE `exp` (
  `id` int(6) NOT NULL AUTO_INCREMENT,
  `name` varchar(32) DEFAULT NULL,
  `uid` varchar(17) NOT NULL,
  `exp_level` int(11) NOT NULL DEFAULT '0',
  `exp_total` int(11) NOT NULL DEFAULT '0',
  `exp_perkPoints` int(11) NOT NULL DEFAULT '0',
  `exp_perks` text,
  `playtime` varchar(32) NOT NULL DEFAULT '',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of exp
-- ----------------------------

-- ----------------------------
-- Table structure for `gangs`
-- ----------------------------
DROP TABLE IF EXISTS `gangs`;
CREATE TABLE `gangs` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `owner` varchar(32) DEFAULT NULL,
  `name` varchar(32) DEFAULT NULL,
  `members` text,
  `maxmembers` int(2) DEFAULT '8',
  `bank` int(100) DEFAULT '0',
  `active` tinyint(4) DEFAULT '1',
  PRIMARY KEY (`id`),
  UNIQUE KEY `name_UNIQUE` (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of gangs
-- ----------------------------

-- ----------------------------
-- Table structure for `houses`
-- ----------------------------
DROP TABLE IF EXISTS `houses`;
CREATE TABLE `houses` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `pid` varchar(32) NOT NULL,
  `pos` varchar(64) DEFAULT NULL,
  `class` text,
  `inventory` text,
  `containers` text,
  `owned` tinyint(4) DEFAULT '0',
  `timestamp` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`,`pid`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of houses
-- ----------------------------

-- ----------------------------
-- Table structure for `laden`
-- ----------------------------
DROP TABLE IF EXISTS `laden`;
CREATE TABLE `laden` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `pid` varchar(32) NOT NULL,
  `pos` varchar(64) DEFAULT NULL,
  `class` text,
  `inventory` text,
  `preistabelle` text,
  `kassen` text,
  `upgrade` text,
  `owned` tinyint(4) DEFAULT '0',
  `timestamp` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`,`pid`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of laden
-- ----------------------------

-- ----------------------------
-- Table structure for `ligawh`
-- ----------------------------
DROP TABLE IF EXISTS `ligawh`;
CREATE TABLE `ligawh` (
  `ID` int(32) NOT NULL AUTO_INCREMENT,
  `whid` varchar(128) NOT NULL,
  `bestand` varchar(1024) NOT NULL,
  `Timestamp` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of ligawh
-- ----------------------------
INSERT INTO `ligawh` VALUES ('1', 'liga_wh_1', '[[\"mull\",16],[\"a0\",2195],[\"apple\",3878]]', '2017-06-10 01:58:54');
INSERT INTO `ligawh` VALUES ('2', 'liga_wh_2', '[]', '2017-03-07 03:51:56');
INSERT INTO `ligawh` VALUES ('3', 'liga_wh_3', '[]', '2017-03-07 03:51:47');
INSERT INTO `ligawh` VALUES ('4', 'liga_wh_4', '[[\"ben\",0],[\"di\",0],[\"rib\",0],[\"c2\",0],[\"c3\",0]]', '2017-06-05 16:32:19');

-- ----------------------------
-- Table structure for `ligaworld`
-- ----------------------------
DROP TABLE IF EXISTS `ligaworld`;
CREATE TABLE `ligaworld` (
  `StaaKass` int(32) NOT NULL DEFAULT '0',
  `ADACKass` int(32) NOT NULL,
  `DRKKass` int(32) NOT NULL,
  `leim` int(32) NOT NULL,
  `tankstaat` int(32) NOT NULL,
  `tankciv` int(32) NOT NULL,
  `lottopod` int(128) NOT NULL,
  `lottoday` int(32) NOT NULL,
  PRIMARY KEY (`StaaKass`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of ligaworld
-- ----------------------------
INSERT INTO `ligaworld` VALUES ('1', '2', '3', '1260', '5', '6', '10059300', '2');

-- ----------------------------
-- Table structure for `lotto`
-- ----------------------------
DROP TABLE IF EXISTS `lotto`;
CREATE TABLE `lotto` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `pid` varchar(32) NOT NULL,
  `zahlen` varchar(64) NOT NULL DEFAULT '[]',
  `count` int(8) NOT NULL DEFAULT '0',
  `timestamp` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`,`pid`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of lotto
-- ----------------------------

-- ----------------------------
-- Table structure for `messages`
-- ----------------------------
DROP TABLE IF EXISTS `messages`;
CREATE TABLE `messages` (
  `uid` int(12) NOT NULL AUTO_INCREMENT,
  `fromID` varchar(50) NOT NULL,
  `toID` varchar(50) NOT NULL,
  `message` text,
  `fromName` varchar(32) NOT NULL,
  `toName` varchar(32) NOT NULL,
  `time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`uid`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of messages
-- ----------------------------

-- ----------------------------
-- Table structure for `players`
-- ----------------------------
DROP TABLE IF EXISTS `players`;
CREATE TABLE `players` (
  `uid` int(6) NOT NULL AUTO_INCREMENT,
  `name` varchar(32) DEFAULT '',
  `playerid` varchar(17) NOT NULL,
  `cash` int(100) NOT NULL DEFAULT '0',
  `bankacc` int(100) NOT NULL DEFAULT '0',
  `aliases` text,
  `coplevel` enum('0','1','2','3','4','5','6','7','8','9','10','11') NOT NULL DEFAULT '0',
  `mediclevel` enum('0','1','2','3','4','5','6','7','8') NOT NULL DEFAULT '0',
  `adaclevel` enum('0','1','2','3','4','5','6','7') NOT NULL DEFAULT '0',
  `donatorlvl` enum('0','1','2','3','4','5') NOT NULL DEFAULT '0',
  `adminlevel` enum('0','1','2','3','4','5','6') NOT NULL DEFAULT '0',
  `arrested` tinyint(1) NOT NULL DEFAULT '0',
  `jail_time` int(11) NOT NULL DEFAULT '0',
  `blacklist` enum('0','1','2','3','4','5') NOT NULL DEFAULT '0',
  `cop_licenses` text,
  `civ_licenses` text,
  `med_licenses` text,
  `cop_gear` text,
  `med_gear` text,
  `civ_gear` text,
  `adac_gear` text,
  `adac_licenses` text,
  `LastSeen` varchar(128) DEFAULT NULL,
  `Timestamp` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`uid`),
  UNIQUE KEY `playerid` (`playerid`),
  KEY `blacklist` (`blacklist`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of players
-- ----------------------------

-- ----------------------------
-- Table structure for `resources`
-- ----------------------------
DROP TABLE IF EXISTS `resources`;
CREATE TABLE `resources` (
  `resource` varchar(12) NOT NULL,
  `price` int(5) NOT NULL,
  `selltimes` int(16) NOT NULL,
  PRIMARY KEY (`resource`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of resources
-- ----------------------------
INSERT INTO `resources` VALUES ('21', '4636', '1');
INSERT INTO `resources` VALUES ('a6', '10707', '1');
INSERT INTO `resources` VALUES ('ben', '6470', '1');
INSERT INTO `resources` VALUES ('cement', '2493', '38');
INSERT INTO `resources` VALUES ('cocainep', '6032', '1');
INSERT INTO `resources` VALUES ('copperr', '979', '224');
INSERT INTO `resources` VALUES ('di', '8945', '1');
INSERT INTO `resources` VALUES ('diamondc', '2993', '1');
INSERT INTO `resources` VALUES ('ggn', '10412', '1');
INSERT INTO `resources` VALUES ('gl', '20645', '1');
INSERT INTO `resources` VALUES ('glass', '2095', '1');
INSERT INTO `resources` VALUES ('goatrawfp', '12782', '1');
INSERT INTO `resources` VALUES ('gsm', '21769', '1');
INSERT INTO `resources` VALUES ('gsn', '4000', '1');
INSERT INTO `resources` VALUES ('heroinp', '6903', '1');
INSERT INTO `resources` VALUES ('ironr', '3404', '-2');
INSERT INTO `resources` VALUES ('iuranium', '38227', '1');
INSERT INTO `resources` VALUES ('lsdp', '8756', '1');
INSERT INTO `resources` VALUES ('marijuana', '8733', '1');
INSERT INTO `resources` VALUES ('methp', '7054', '1');
INSERT INTO `resources` VALUES ('oilp', '3145', '1');
INSERT INTO `resources` VALUES ('rabbitfp', '14914', '1');
INSERT INTO `resources` VALUES ('saltr', '1732', '1');
INSERT INTO `resources` VALUES ('sig', '9700', '1');
INSERT INTO `resources` VALUES ('turtle', '47667', '1');
INSERT INTO `resources` VALUES ('uranium', '31136', '1');

-- ----------------------------
-- Table structure for `tankstell`
-- ----------------------------
DROP TABLE IF EXISTS `tankstell`;
CREATE TABLE `tankstell` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `pid` varchar(32) NOT NULL,
  `pos` varchar(64) DEFAULT NULL,
  `inventory` varchar(1024) DEFAULT NULL,
  `preise` text,
  `kasse` int(11) DEFAULT NULL,
  `keysa` varchar(1024) DEFAULT NULL,
  `owned` tinyint(4) DEFAULT '0',
  `mahnungcount` int(16) DEFAULT NULL,
  `timestamp` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`,`pid`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of tankstell
-- ----------------------------

-- ----------------------------
-- Table structure for `vehicles`
-- ----------------------------
DROP TABLE IF EXISTS `vehicles`;
CREATE TABLE `vehicles` (
  `id` int(12) NOT NULL AUTO_INCREMENT,
  `side` varchar(15) NOT NULL,
  `classname` varchar(32) NOT NULL,
  `type` varchar(12) NOT NULL,
  `pid` varchar(32) NOT NULL,
  `alive` tinyint(1) NOT NULL DEFAULT '1',
  `active` tinyint(1) NOT NULL DEFAULT '0',
  `plate` int(20) NOT NULL,
  `color` int(20) NOT NULL,
  `damage` text,
  `tuv` int(16) NOT NULL DEFAULT '0',
  `repcount` int(32) NOT NULL DEFAULT '0',
  `delcount` int(32) NOT NULL DEFAULT '0',
  `timestamp` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  `inventory` text NOT NULL,
  `cargo` text NOT NULL,
  PRIMARY KEY (`id`),
  KEY `side` (`side`),
  KEY `pid` (`pid`),
  KEY `type` (`type`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of vehicles
-- ----------------------------

-- ----------------------------
-- Table structure for `wanted`
-- ----------------------------
DROP TABLE IF EXISTS `wanted`;
CREATE TABLE `wanted` (
  `wantedID` varchar(50) NOT NULL,
  `wantedName` varchar(52) NOT NULL,
  `wantedCrimes` varchar(9000) NOT NULL,
  `wantedBounty` int(64) NOT NULL,
  `active` tinyint(8) NOT NULL,
  PRIMARY KEY (`wantedID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of wanted
-- ----------------------------

-- ----------------------------
-- Procedure structure for `countLigaVehicles`
-- ----------------------------
DROP PROCEDURE IF EXISTS `countLigaVehicles`;
DELIMITER ;;
CREATE DEFINER=`dbuser`@`%` PROCEDURE `countLigaVehicles`()
BEGIN
	UPDATE `vehicles` SET `active` = `active`   + 1 WHERE `active` > 1 ;

END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `countLottoSchein`
-- ----------------------------
DROP PROCEDURE IF EXISTS `countLottoSchein`;
DELIMITER ;;
CREATE DEFINER=`dbuser`@`%` PROCEDURE `countLottoSchein`()
BEGIN
	UPDATE `lotto` SET `count` = `count`  - 1 WHERE `count` > 0 ;

END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `deleteDeadVehicles`
-- ----------------------------
DROP PROCEDURE IF EXISTS `deleteDeadVehicles`;
DELIMITER ;;
CREATE DEFINER=`dbuser`@`%` PROCEDURE `deleteDeadVehicles`()
BEGIN
	DELETE FROM `vehicles` WHERE `alive` = 0 OR `active` > 7;

END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `deleteLottoSchein`
-- ----------------------------
DROP PROCEDURE IF EXISTS `deleteLottoSchein`;
DELIMITER ;;
CREATE DEFINER=`dbuser`@`%` PROCEDURE `deleteLottoSchein`()
BEGIN
	DELETE FROM `lotto` WHERE `count` = 0;

END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `deleteOldGangs`
-- ----------------------------
DROP PROCEDURE IF EXISTS `deleteOldGangs`;
DELIMITER ;;
CREATE DEFINER=`dbuser`@`%` PROCEDURE `deleteOldGangs`()
BEGIN
	DELETE FROM `gangs` WHERE `active` = 0;

END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `deleteOldHouses`
-- ----------------------------
DROP PROCEDURE IF EXISTS `deleteOldHouses`;
DELIMITER ;;
CREATE DEFINER=`dbuser`@`%` PROCEDURE `deleteOldHouses`()
BEGIN
	DELETE FROM `houses` WHERE `owned` = 0;

END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `deleteOldLaden`
-- ----------------------------
DROP PROCEDURE IF EXISTS `deleteOldLaden`;
DELIMITER ;;
CREATE DEFINER=`dbuser`@`%` PROCEDURE `deleteOldLaden`()
BEGIN
	DELETE FROM `laden` WHERE `owned` = 0;

END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `deleteOldTanks`
-- ----------------------------
DROP PROCEDURE IF EXISTS `deleteOldTanks`;
DELIMITER ;;
CREATE DEFINER=`dbuser`@`%` PROCEDURE `deleteOldTanks`()
BEGIN
	UPDATE `tankstell` SET `owned` = 0  WHERE `mahnungcount` > 3 ;
	 DELETE FROM `tankstell` WHERE `owned` = 0;

END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `deleteOldWanted`
-- ----------------------------
DROP PROCEDURE IF EXISTS `deleteOldWanted`;
DELIMITER ;;
CREATE DEFINER=`dbuser`@`%` PROCEDURE `deleteOldWanted`()
BEGIN
	DELETE FROM `wanted` WHERE `active` = 0;

END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `resetLifeVehicles`
-- ----------------------------
DROP PROCEDURE IF EXISTS `resetLifeVehicles`;
DELIMITER ;;
CREATE DEFINER=`dbuser`@`%` PROCEDURE `resetLifeVehicles`()
BEGIN
	UPDATE vehicles SET `active`= 0;

END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for `resetLigaVehicles`
-- ----------------------------
DROP PROCEDURE IF EXISTS `resetLigaVehicles`;
DELIMITER ;;
CREATE DEFINER=`dbuser`@`%` PROCEDURE `resetLigaVehicles`()
BEGIN
	UPDATE `vehicles` SET `active`= 0 WHERE `active` < 2 AND `active` != 0;
END
;;
DELIMITER ;
