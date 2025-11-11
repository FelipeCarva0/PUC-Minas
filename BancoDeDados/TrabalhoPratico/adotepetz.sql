-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 11/11/2025 às 21:43
-- Versão do servidor: 10.4.32-MariaDB
-- Versão do PHP: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `adotepetz`
--

-- --------------------------------------------------------

--
-- Estrutura para tabela `adocao`
--

CREATE TABLE `adocao` (
  `id_adocao` int(11) NOT NULL,
  `id_animal` int(11) NOT NULL,
  `cpf_receptor` char(11) NOT NULL,
  `data_adocao` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `alojamento`
--

CREATE TABLE `alojamento` (
  `id_animal` int(11) NOT NULL,
  `id_unidade` int(11) NOT NULL,
  `data_alojamento` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `animal`
--

CREATE TABLE `animal` (
  `id_animal` int(11) NOT NULL,
  `nome` varchar(100) DEFAULT NULL,
  `especie` varchar(50) DEFAULT NULL,
  `raca` varchar(50) DEFAULT NULL,
  `sexo` enum('M','F') DEFAULT NULL,
  `idade` int(11) DEFAULT NULL,
  `status_atual` varchar(50) DEFAULT NULL,
  `id_org` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `captura`
--

CREATE TABLE `captura` (
  `id_captura` int(11) NOT NULL,
  `cpf_capturador` char(11) NOT NULL,
  `id_animal` int(11) NOT NULL,
  `data_captura` date NOT NULL,
  `local_captura` varchar(150) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `capturador`
--

CREATE TABLE `capturador` (
  `cpf` char(11) NOT NULL,
  `nome` varchar(100) NOT NULL,
  `telefone` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `feira_adocao`
--

CREATE TABLE `feira_adocao` (
  `id_feira` int(11) NOT NULL,
  `nome` varchar(100) NOT NULL,
  `data_evento` date NOT NULL,
  `cidade` varchar(60) DEFAULT NULL,
  `estado` char(2) DEFAULT NULL,
  `id_org` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `feira_animal`
--

CREATE TABLE `feira_animal` (
  `id_feira` int(11) NOT NULL,
  `id_animal` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `feira_voluntario`
--

CREATE TABLE `feira_voluntario` (
  `id_feira` int(11) NOT NULL,
  `cpf_voluntario` char(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `historico_saude`
--

CREATE TABLE `historico_saude` (
  `id_historico` int(11) NOT NULL,
  `id_animal` int(11) NOT NULL,
  `data_registro` date NOT NULL,
  `procedimento` varchar(100) DEFAULT NULL,
  `descricao` text DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `organizacao`
--

CREATE TABLE `organizacao` (
  `id_org` int(11) NOT NULL,
  `nome` varchar(100) NOT NULL,
  `telefone` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `organizacao_unidade`
--

CREATE TABLE `organizacao_unidade` (
  `id_org` int(11) NOT NULL,
  `id_unidade` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `receptor`
--

CREATE TABLE `receptor` (
  `cpf` char(11) NOT NULL,
  `nome` varchar(100) NOT NULL,
  `data_nascimento` date DEFAULT NULL,
  `telefone` varchar(20) DEFAULT NULL,
  `logradouro` varchar(150) DEFAULT NULL,
  `numero` varchar(10) DEFAULT NULL,
  `bairro` varchar(60) DEFAULT NULL,
  `cidade` varchar(60) DEFAULT NULL,
  `estado` char(2) DEFAULT NULL,
  `cep` varchar(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `unidade`
--

CREATE TABLE `unidade` (
  `id_unidade` int(11) NOT NULL,
  `nome` varchar(100) NOT NULL,
  `capacidade_max` int(11) NOT NULL,
  `espaco_dedicado` varchar(100) DEFAULT NULL,
  `logradouro` varchar(150) DEFAULT NULL,
  `numero` varchar(10) DEFAULT NULL,
  `bairro` varchar(60) DEFAULT NULL,
  `cidade` varchar(60) DEFAULT NULL,
  `estado` char(2) DEFAULT NULL,
  `cep` varchar(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura para tabela `voluntario`
--

CREATE TABLE `voluntario` (
  `cpf` char(11) NOT NULL,
  `nome` varchar(100) NOT NULL,
  `telefone` varchar(20) DEFAULT NULL,
  `funcao` varchar(50) DEFAULT NULL,
  `disponibilidade` varchar(100) DEFAULT NULL,
  `id_org` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Índices para tabelas despejadas
--

--
-- Índices de tabela `adocao`
--
ALTER TABLE `adocao`
  ADD PRIMARY KEY (`id_adocao`),
  ADD KEY `id_animal` (`id_animal`),
  ADD KEY `cpf_receptor` (`cpf_receptor`);

--
-- Índices de tabela `alojamento`
--
ALTER TABLE `alojamento`
  ADD PRIMARY KEY (`id_animal`,`id_unidade`,`data_alojamento`),
  ADD KEY `id_unidade` (`id_unidade`);

--
-- Índices de tabela `animal`
--
ALTER TABLE `animal`
  ADD PRIMARY KEY (`id_animal`),
  ADD KEY `id_org` (`id_org`);

--
-- Índices de tabela `captura`
--
ALTER TABLE `captura`
  ADD PRIMARY KEY (`id_captura`),
  ADD KEY `cpf_capturador` (`cpf_capturador`),
  ADD KEY `id_animal` (`id_animal`);

--
-- Índices de tabela `capturador`
--
ALTER TABLE `capturador`
  ADD PRIMARY KEY (`cpf`);

--
-- Índices de tabela `feira_adocao`
--
ALTER TABLE `feira_adocao`
  ADD PRIMARY KEY (`id_feira`),
  ADD UNIQUE KEY `nome` (`nome`),
  ADD KEY `id_org` (`id_org`);

--
-- Índices de tabela `feira_animal`
--
ALTER TABLE `feira_animal`
  ADD PRIMARY KEY (`id_feira`,`id_animal`),
  ADD KEY `id_animal` (`id_animal`);

--
-- Índices de tabela `feira_voluntario`
--
ALTER TABLE `feira_voluntario`
  ADD PRIMARY KEY (`id_feira`,`cpf_voluntario`),
  ADD KEY `cpf_voluntario` (`cpf_voluntario`);

--
-- Índices de tabela `historico_saude`
--
ALTER TABLE `historico_saude`
  ADD PRIMARY KEY (`id_historico`),
  ADD KEY `id_animal` (`id_animal`);

--
-- Índices de tabela `organizacao`
--
ALTER TABLE `organizacao`
  ADD PRIMARY KEY (`id_org`),
  ADD UNIQUE KEY `nome` (`nome`);

--
-- Índices de tabela `organizacao_unidade`
--
ALTER TABLE `organizacao_unidade`
  ADD PRIMARY KEY (`id_org`,`id_unidade`),
  ADD KEY `id_unidade` (`id_unidade`);

--
-- Índices de tabela `receptor`
--
ALTER TABLE `receptor`
  ADD PRIMARY KEY (`cpf`);

--
-- Índices de tabela `unidade`
--
ALTER TABLE `unidade`
  ADD PRIMARY KEY (`id_unidade`),
  ADD UNIQUE KEY `nome` (`nome`);

--
-- Índices de tabela `voluntario`
--
ALTER TABLE `voluntario`
  ADD PRIMARY KEY (`cpf`),
  ADD KEY `id_org` (`id_org`);

--
-- AUTO_INCREMENT para tabelas despejadas
--

--
-- AUTO_INCREMENT de tabela `adocao`
--
ALTER TABLE `adocao`
  MODIFY `id_adocao` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `animal`
--
ALTER TABLE `animal`
  MODIFY `id_animal` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `captura`
--
ALTER TABLE `captura`
  MODIFY `id_captura` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `feira_adocao`
--
ALTER TABLE `feira_adocao`
  MODIFY `id_feira` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `historico_saude`
--
ALTER TABLE `historico_saude`
  MODIFY `id_historico` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `organizacao`
--
ALTER TABLE `organizacao`
  MODIFY `id_org` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `unidade`
--
ALTER TABLE `unidade`
  MODIFY `id_unidade` int(11) NOT NULL AUTO_INCREMENT;

--
-- Restrições para tabelas despejadas
--

--
-- Restrições para tabelas `adocao`
--
ALTER TABLE `adocao`
  ADD CONSTRAINT `adocao_ibfk_1` FOREIGN KEY (`id_animal`) REFERENCES `animal` (`id_animal`),
  ADD CONSTRAINT `adocao_ibfk_2` FOREIGN KEY (`cpf_receptor`) REFERENCES `receptor` (`cpf`);

--
-- Restrições para tabelas `alojamento`
--
ALTER TABLE `alojamento`
  ADD CONSTRAINT `alojamento_ibfk_1` FOREIGN KEY (`id_animal`) REFERENCES `animal` (`id_animal`),
  ADD CONSTRAINT `alojamento_ibfk_2` FOREIGN KEY (`id_unidade`) REFERENCES `unidade` (`id_unidade`);

--
-- Restrições para tabelas `animal`
--
ALTER TABLE `animal`
  ADD CONSTRAINT `animal_ibfk_1` FOREIGN KEY (`id_org`) REFERENCES `organizacao` (`id_org`);

--
-- Restrições para tabelas `captura`
--
ALTER TABLE `captura`
  ADD CONSTRAINT `captura_ibfk_1` FOREIGN KEY (`cpf_capturador`) REFERENCES `capturador` (`cpf`),
  ADD CONSTRAINT `captura_ibfk_2` FOREIGN KEY (`id_animal`) REFERENCES `animal` (`id_animal`);

--
-- Restrições para tabelas `feira_adocao`
--
ALTER TABLE `feira_adocao`
  ADD CONSTRAINT `feira_adocao_ibfk_1` FOREIGN KEY (`id_org`) REFERENCES `organizacao` (`id_org`);

--
-- Restrições para tabelas `feira_animal`
--
ALTER TABLE `feira_animal`
  ADD CONSTRAINT `feira_animal_ibfk_1` FOREIGN KEY (`id_feira`) REFERENCES `feira_adocao` (`id_feira`),
  ADD CONSTRAINT `feira_animal_ibfk_2` FOREIGN KEY (`id_animal`) REFERENCES `animal` (`id_animal`);

--
-- Restrições para tabelas `feira_voluntario`
--
ALTER TABLE `feira_voluntario`
  ADD CONSTRAINT `feira_voluntario_ibfk_1` FOREIGN KEY (`id_feira`) REFERENCES `feira_adocao` (`id_feira`),
  ADD CONSTRAINT `feira_voluntario_ibfk_2` FOREIGN KEY (`cpf_voluntario`) REFERENCES `voluntario` (`cpf`);

--
-- Restrições para tabelas `historico_saude`
--
ALTER TABLE `historico_saude`
  ADD CONSTRAINT `historico_saude_ibfk_1` FOREIGN KEY (`id_animal`) REFERENCES `animal` (`id_animal`);

--
-- Restrições para tabelas `organizacao_unidade`
--
ALTER TABLE `organizacao_unidade`
  ADD CONSTRAINT `organizacao_unidade_ibfk_1` FOREIGN KEY (`id_org`) REFERENCES `organizacao` (`id_org`),
  ADD CONSTRAINT `organizacao_unidade_ibfk_2` FOREIGN KEY (`id_unidade`) REFERENCES `unidade` (`id_unidade`);

--
-- Restrições para tabelas `voluntario`
--
ALTER TABLE `voluntario`
  ADD CONSTRAINT `voluntario_ibfk_1` FOREIGN KEY (`id_org`) REFERENCES `organizacao` (`id_org`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
