CREATE DATABASE  IF NOT EXISTS `atmdb` /*!40100 DEFAULT CHARACTER SET utf8mb3 */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `atmdb`;
-- MySQL dump 10.13  Distrib 8.0.31, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: atmdb
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
-- Table structure for table `creditkortti`
--

DROP TABLE IF EXISTS `creditkortti`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `creditkortti` (
  `idCreditKortti` int NOT NULL AUTO_INCREMENT,
  `PIN` varchar(45) DEFAULT NULL,
  `idOmistaja` int NOT NULL,
  `idTili` int NOT NULL,
  PRIMARY KEY (`idCreditKortti`),
  KEY `CreditKortti_Omistaja_idx` (`idOmistaja`),
  KEY `CreditKortti_CreditTili_idx` (`idTili`),
  CONSTRAINT `CreditKortti_CreditTili` FOREIGN KEY (`idTili`) REFERENCES `credittili` (`idCreditTili`) ON DELETE RESTRICT ON UPDATE CASCADE,
  CONSTRAINT `CreditKortti_Omistaja` FOREIGN KEY (`idOmistaja`) REFERENCES `omistaja` (`idOmistaja`) ON DELETE RESTRICT ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `creditkortti`
--

LOCK TABLES `creditkortti` WRITE;
/*!40000 ALTER TABLE `creditkortti` DISABLE KEYS */;
/*!40000 ALTER TABLE `creditkortti` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `debitkortti`
--

DROP TABLE IF EXISTS `debitkortti`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `debitkortti` (
  `idDebitKortti` int NOT NULL AUTO_INCREMENT,
  `PIN` varchar(45) DEFAULT NULL,
  `idOmistaja` int NOT NULL,
  `idTili` int NOT NULL,
  PRIMARY KEY (`idDebitKortti`),
  KEY `Kortti_Omistaja_idx` (`idOmistaja`),
  KEY `Kortti_Tili_idx` (`idTili`),
  CONSTRAINT `DebitKortti_Omistaja` FOREIGN KEY (`idOmistaja`) REFERENCES `omistaja` (`idOmistaja`) ON DELETE RESTRICT ON UPDATE CASCADE,
  CONSTRAINT `DebitKortti_Tili` FOREIGN KEY (`idTili`) REFERENCES `tili` (`idTili`) ON DELETE RESTRICT ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `debitkortti`
--

LOCK TABLES `debitkortti` WRITE;
/*!40000 ALTER TABLE `debitkortti` DISABLE KEYS */;
/*!40000 ALTER TABLE `debitkortti` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `omistaja`
--

DROP TABLE IF EXISTS `omistaja`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `omistaja` (
  `idOmistaja` int NOT NULL AUTO_INCREMENT,
  `Etunimi` varchar(45) DEFAULT NULL,
  `sukunimi` varchar(45) DEFAULT NULL,
  `Osoite` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`idOmistaja`)
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
  `idTili` int NOT NULL AUTO_INCREMENT,
  `Tilinumero` varchar(255) DEFAULT NULL,
  `Saldo` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`idTili`)
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
  `idTiliTapahtumat` int NOT NULL AUTO_INCREMENT,
  `Päivämäärä` date DEFAULT NULL,
  `Kelloaika` time DEFAULT NULL,
  `Summa` int DEFAULT NULL,
  `idTili` int DEFAULT NULL,
  `idCreditTili` int DEFAULT NULL,
  PRIMARY KEY (`idTiliTapahtumat`),
  KEY `Tilitapahtuma_Tili_idx` (`idTili`),
  KEY `TiliTapahtuma_CreditTili_idx` (`idCreditTili`),
  CONSTRAINT `TiliTapahtuma_CreditTili` FOREIGN KEY (`idCreditTili`) REFERENCES `credittili` (`idCreditTili`) ON DELETE RESTRICT ON UPDATE CASCADE,
  CONSTRAINT `Tilitapahtuma_Tili` FOREIGN KEY (`idTili`) REFERENCES `tili` (`idTili`) ON DELETE RESTRICT ON UPDATE CASCADE
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

-- Dump completed on 2023-03-16 17:45:16
