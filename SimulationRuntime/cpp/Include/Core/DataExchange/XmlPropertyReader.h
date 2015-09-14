#pragma once




class IContinuous;

class XmlPropertyReader : public IPropertyReader
{
  public:
    XmlPropertyReader(std::string propertyFile);
    ~XmlPropertyReader();

    void readInitialValues(IContinuous& system, boost::shared_ptr<ISimVars> sim_vars);

    std::string getPropertyFile();
    void setPropertyFile(std::string file);

  private:
    std::string propertyFile;
};
