#ifndef _CLI_HPP_
#define _CLI_HPP_

class Token {
  public:
    Token(std::string name) : _name(name), _consumed(false) {
      
    }

    virtual bool isConsumed() const {
      return this->_consumed;
    }

    virtual std::string name() const { 
      return this->_name;
    }


    virtual bool accepts(Token * nextToken) const = 0;
    virtual void consume(Token * nextToken) const = 0;

  private:
    bool _consumed;
    std::string _name;
};

class ConfigToken : public Token {
  public:
    ConfigToken() : Token("Config") {}

    bool accepts(Token * nextToken) const override {
      if (nextToken->name() == "Cool stuff") {
        return true;
      }
      return false;
    }

    void consume(Token * nextToken) const override {
      std::cout << nextToken->name() << std::endl;
    }
};

class CoolStuffToken : public Token {
  public:
    CoolStuffToken() : Token("Cool stuff") {}
  
  protected:
    bool accepts(Token * nextToken) const override {
      if (nextToken->name() == "Cool stuff") {
        return true;
      }
      return false;
    }

    void consume(Token * nextToken) const override {
      std::cout << nextToken->name() << std::endl;
    }
};

/*
class CLI {
  private:
    char ** _arguments;
    char * _currentArgument;
    char * _nextArgument;
    int _nCurrentArgument;
    int _nNextArgument;

};
*/

#endif