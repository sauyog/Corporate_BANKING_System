
include config.mk
SRC_HOME = $(PROGRAM_HOME)/SRC

SOURCES = Model AppClasses/Customer Controller/CustomerController  UI/CustomerUIAppClasses/Login   Controller/LoginController  UI/LoginUI AppClasses/Account Controller/AccountController UI/AccountUI  Main UI/MainUI AppClasses/Bank  Controller/BankController AppClasses/Transaction   UI/BankUI  Validation

CONTROLLER_OBJECT =  $(BUILD)/LoginController.o  $(BUILD)/AccountController.o  $(BUILD)/CustomerController.o  $(BUILD)/BankController.o
MODEL_OBJECT = $(BUILD)/DB.o
MAIN_OBJECT = $(BUILD)/nikmain.o
APP_OBJECT = $(BUILD)/Login.o $(BUILD)/Customer.o $(BUILD)/Account.o $(BUILD)/Bank.o
Validation_OBJECT= $(BUILD)/Validation.o
OBJECTS= $(MODEL_OBJECT) $(CONTROLLER_OBJECT) $(UI_OBJECT) $(APP_OBJECT) $(MAIN_OBJECT) $(Validation_OBJECT)
all:COMPILE LINK
COMPILE:$(SOURCES) 
for d in $(SOURCES);
     do \
                $(MAKE) --directory=$$d ; \
                done

LINK: $(CC) -o $(BIN) $(OBJECTS) -lclntsh -L $(ORACLE_HOME)/lib

clean:
	for d in $(SOURCES); \
        do \
        $(MAKE) --directory=$$d clean; \
        done
	rm -f $(BUILD)/*




