CREATE DATABASE  IF NOT EXISTS `mydb` /*!40100 DEFAULT CHARACTER SET utf8mb3 */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `mydb`;
-- MySQL dump 10.13  Distrib 8.0.31, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: mydb
-- ------------------------------------------------------
-- Server version	8.0.30

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `kortti`
--

DROP TABLE IF EXISTS `kortti`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `kortti` (
  `idkortti` varchar(45) NOT NULL,
  `pinkoodi` varchar(255) NOT NULL,
  `idomistaja` int NOT NULL,
  PRIMARY KEY (`idkortti`),
  KEY `fk_kortti_omistaja_idx` (`idomistaja`),
  CONSTRAINT `fk_kortti_omistaja` FOREIGN KEY (`idomistaja`) REFERENCES `omistaja` (`idomistaja`) ON DELETE RESTRICT ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `kortti`
--

LOCK TABLES `kortti` WRITE;
/*!40000 ALTER TABLE `kortti` DISABLE KEYS */;
/*!40000 ALTER TABLE `kortti` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `omistaja`
--

DROP TABLE IF EXISTS `omistaja`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `omistaja` (
  `idomistaja` int NOT NULL AUTO_INCREMENT,
  `etunimi` varchar(45) NOT NULL,
  `sukunimi` varchar(45) NOT NULL,
  `osoite` varchar(45) NOT NULL,
  PRIMARY KEY (`idomistaja`),
  UNIQUE KEY `idomistaja_UNIQUE` (`idomistaja`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `omistaja`
--

LOCK TABLES `omistaja` WRITE;
/*!40000 ALTER TABLE `omistaja` DISABLE KEYS */;
/*!40000 ALTER TABLE `omistaja` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tili`
--

DROP TABLE IF EXISTS `tili`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tili` (
  `idtili` varchar(45) NOT NULL,
  `credit` float NOT NULL,
  `saldo` float NOT NULL,
  `idkortti` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`idtili`),
  UNIQUE KEY `idtili_UNIQUE` (`idtili`),
  KEY `fk_tili_kortti1_idx` (`idkortti`),
  CONSTRAINT `fk_tili_kortti1` FOREIGN KEY (`idkortti`) REFERENCES `kortti` (`idkortti`) ON DELETE RESTRICT ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tili`
--

LOCK TABLES `tili` WRITE;
/*!40000 ALTER TABLE `tili` DISABLE KEYS */;
/*!40000 ALTER TABLE `tili` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tilitapahtumat`
--

DROP TABLE IF EXISTS `tilitapahtumat`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tilitapahtumat` (
  `idtilitapahtumat` int NOT NULL AUTO_INCREMENT,
  `aika` datetime DEFAULT NULL,
  `summa` float DEFAULT NULL,
  `idtili` varchar(45) NOT NULL,
  PRIMARY KEY (`idtilitapahtumat`),
  UNIQUE KEY `idtilitapahtumat_UNIQUE` (`idtilitapahtumat`),
  KEY `fk_tilitapahtumat_tili1_idx` (`idtili`),
  CONSTRAINT `fk_tilitapahtumat_tili1` FOREIGN KEY (`idtili`) REFERENCES `tili` (`idtili`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilitapahtumat`
--

LOCK TABLES `tilitapahtumat` WRITE;
/*!40000 ALTER TABLE `tilitapahtumat` DISABLE KEYS */;
/*!40000 ALTER TABLE `tilitapahtumat` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2023-03-25 13:20:26
