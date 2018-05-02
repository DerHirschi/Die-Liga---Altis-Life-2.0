/*
Navicat MySQL Data Transfer

Source Server         : HServer
Source Server Version : 50722
Source Host           : 192.168.178.100:3306
Source Database       : skylog

Target Server Type    : MYSQL
Target Server Version : 50722
File Encoding         : 65001

Date: 2018-05-02 08:12:06
*/

SET FOREIGN_KEY_CHECKS=0;
-- ----------------------------
-- Table structure for `adminlog`
-- ----------------------------
DROP TABLE IF EXISTS `adminlog`;
CREATE TABLE `adminlog` (
  `ID` int(128) NOT NULL AUTO_INCREMENT,
  `Ereigniss` varchar(50) NOT NULL,
  `UID` varchar(50) NOT NULL,
  `Name` varchar(50) NOT NULL,
  `NetID` int(16) NOT NULL,
  `Notiz` varchar(300) DEFAULT NULL,
  `Timestamp` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of adminlog
-- ----------------------------

-- ----------------------------
-- Table structure for `ahlog`
-- ----------------------------
DROP TABLE IF EXISTS `ahlog`;
CREATE TABLE `ahlog` (
  `ID` int(128) NOT NULL AUTO_INCREMENT,
  `Spieler` varchar(50) NOT NULL,
  `UID` varchar(50) NOT NULL,
  `Grund` varchar(300) DEFAULT NULL,
  `Details` varchar(300) DEFAULT NULL,
  `Output2` varchar(300) DEFAULT NULL,
  `Timestamp` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of ahlog
-- ----------------------------

-- ----------------------------
-- Table structure for `bismp`
-- ----------------------------
DROP TABLE IF EXISTS `bismp`;
CREATE TABLE `bismp` (
  `ID` int(128) NOT NULL AUTO_INCREMENT,
  `1` varchar(3000) DEFAULT NULL,
  `2` varchar(3000) DEFAULT NULL,
  `3` varchar(3000) DEFAULT NULL,
  `4` varchar(3000) DEFAULT NULL,
  `Timestamp` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of bismp
-- ----------------------------

-- ----------------------------
-- Table structure for `brett`
-- ----------------------------
DROP TABLE IF EXISTS `brett`;
CREATE TABLE `brett` (
  `uid` int(12) NOT NULL AUTO_INCREMENT,
  `fromID` varchar(50) NOT NULL,
  `fromName` text NOT NULL,
  `Header` text NOT NULL,
  `message` text NOT NULL,
  `active` varchar(2) NOT NULL DEFAULT '1',
  `time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`uid`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of brett
-- ----------------------------

-- ----------------------------
-- Table structure for `diagserver`
-- ----------------------------
DROP TABLE IF EXISTS `diagserver`;
CREATE TABLE `diagserver` (
  `ID` int(128) NOT NULL AUTO_INCREMENT,
  `beschr` varchar(100) DEFAULT NULL,
  `aSQF` varchar(10) DEFAULT NULL,
  `FPS` varchar(20) DEFAULT NULL,
  `minFPS` varchar(20) DEFAULT NULL,
  `Spieler` varchar(10) DEFAULT NULL,
  `Timestamp` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of diagserver
-- ----------------------------
