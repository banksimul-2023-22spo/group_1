-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `mydb` DEFAULT CHARACTER SET utf8mb3 ;
USE `mydb` ;

-- -----------------------------------------------------
-- Table `mydb`.`omistaja`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`omistaja` (
  `idomistaja` INT NOT NULL AUTO_INCREMENT,
  `etunimi` VARCHAR(45) NOT NULL,
  `sukunimi` VARCHAR(45) NOT NULL,
  `osoite` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`idomistaja`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb3;


-- -----------------------------------------------------
-- Table `mydb`.`tili`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`tili` (
  `idtili` INT NOT NULL,
  `creditSaldo` FLOAT NULL DEFAULT NULL,
  `creditTilinumero` INT NULL DEFAULT NULL,
  `debitSaldo` FLOAT NULL DEFAULT NULL,
  `debitTilinumero` INT NULL DEFAULT NULL,
  `luottoraja` FLOAT NULL DEFAULT NULL,
  PRIMARY KEY (`idtili`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb3;


-- -----------------------------------------------------
-- Table `mydb`.`kortti`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`kortti` (
  `idkortti` INT NOT NULL,
  `pinkoodi` VARCHAR(45) NOT NULL,
  `id_omistaja` INT NOT NULL,
  `id_tili` INT NOT NULL,
  PRIMARY KEY (`idkortti`),
  INDEX `fk_kortti_omistaja_idx` (`id_omistaja` ASC) VISIBLE,
  INDEX `fk_kortti_tili1_idx` (`id_tili` ASC) VISIBLE,
  CONSTRAINT `fk_kortti_omistaja`
    FOREIGN KEY (`id_omistaja`)
    REFERENCES `mydb`.`omistaja` (`idomistaja`),
  CONSTRAINT `fk_kortti_tili1`
    FOREIGN KEY (`id_tili`)
    REFERENCES `mydb`.`tili` (`idtili`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb3;


-- -----------------------------------------------------
-- Table `mydb`.`tilitapahtumat`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`tilitapahtumat` (
  `idtilitapahtumat` INT NOT NULL,
  `aika` DATETIME NULL DEFAULT NULL,
  `summa` FLOAT NULL DEFAULT NULL,
  `tili_idtili` INT NOT NULL,
  PRIMARY KEY (`idtilitapahtumat`),
  INDEX `fk_tilitapahtumat_tili1_idx` (`tili_idtili` ASC) VISIBLE,
  CONSTRAINT `fk_tilitapahtumat_tili1`
    FOREIGN KEY (`tili_idtili`)
    REFERENCES `mydb`.`tili` (`idtili`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb3;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
