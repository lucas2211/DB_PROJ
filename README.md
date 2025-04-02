DB/
├── src/                     # Código-fonte do sistema operacional
│   ├── model/              # (MODEL) Lógica de negócio e estado do sistema
│   │   ├── hardware.c       # Detecta CPU, RAM, arquitetura, UID
│   │   ├── config.c         # Armazena e manipula configurações
│   │   ├── drivers.c        # Drivers de baixo nível (ex: GPIO, I/O)
│   │   ├── license.c        # Lógica de licenciamento
│   │   └── security.c       # Funções de segurança adaptativa
│   ├── controller/         # (CONTROLLER) Controle do fluxo do sistema
│   │   ├── main.c           # Ponto de entrada principal
│   │   ├── system.c         # Gerenciador do ciclo de boot
│   │   ├── init.c           # Inicialização dos componentes
│   │   └── interface.c      # Decide qual view carregar
│   └── view/               # (VIEW) Interface com o usuário
│       ├── menu_asm.S       # Menu super leve em Assembly
│       ├── menu_cli.c       # Interface de texto (modo seguro)
│       ├── gui_lite.c       # GUI leve por framebuffer (se disponível)
│       └── gui_full.c       # GUI completa (hardware mais potente)
│
├── security/               # Criptografia, UID e validação
│   ├── uid.c                # Leitura de ID único do chip
│   ├── sha256_hmac.c        # Verificação de integridade
│   ├── ed25519_verify.c     # Verificação de assinatura digital
│   └── security_level.c     # Define qual proteção aplicar
│
├── include/                # Headers (declarações de funções)
│   ├── system.h
│   ├── hardware.h
│   ├── interface.h
│   └── security.h
│
├── arch/                   # Código específico por arquitetura
│   ├── arm/
│   ├── avr/
│   ├── riscv/
│   └── x86/
│
├── build/                  # Scripts e arquivos para compilação
│   ├── Makefile             # Instruções de build
│   └── linker.ld            # Script de linkagem para o kernel
│
├── tests/                  # Testes de unidade e integração
│   ├── test_hardware.c
│   └── test_security.c
│
├── .vscode/                # Configuração do Visual Studio Code
│   ├── tasks.json           # Comandos de build automatizados
│   ├── launch.json          # Configuração de execução/debug
│   └── c_cpp_properties.json# Paths e IntelliSense
│
└── README.md               # Documentação inicial do projeto
