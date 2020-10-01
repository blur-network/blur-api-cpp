/**
 * This file is generated by jsonrpcstub, DO NOT CHANGE IT MANUALLY!
 */

#ifndef JSONRPC_CPP_STUB_ABSTRACTSTUBSERVER_H_
#define JSONRPC_CPP_STUB_ABSTRACTSTUBSERVER_H_

#include <jsonrpccpp/server.h>

class AbstractStubServer : public jsonrpc::AbstractServer<AbstractStubServer>
{
    public:
        AbstractStubServer(jsonrpc::AbstractServerConnector &conn, jsonrpc::serverVersion_t type = jsonrpc::JSONRPC_SERVER_V2) : jsonrpc::AbstractServer<AbstractStubServer>(conn, type)
        {
            this->bindAndAddMethod(jsonrpc::Procedure("getblockchaininfo", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT,  NULL), &AbstractStubServer::getblockchaininfoI);
            this->bindAndAddMethod(jsonrpc::Procedure("getblock", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param01",jsonrpc::JSON_STRING, NULL), &AbstractStubServer::getblockI);
            this->bindAndAddMethod(jsonrpc::Procedure("sendrawtransaction", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param01",jsonrpc::JSON_STRING, NULL), &AbstractStubServer::sendrawtransactionI);
            this->bindAndAddMethod(jsonrpc::Procedure("signrawtransaction", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param01",jsonrpc::JSON_STRING,"param02",jsonrpc::JSON_ARRAY, NULL), &AbstractStubServer::signrawtransactionI);
            this->bindAndAddMethod(jsonrpc::Procedure("getinfo", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT,  NULL), &AbstractStubServer::getinfoI);
            this->bindAndAddMethod(jsonrpc::Procedure("get_notarization_data", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT,  NULL), &AbstractStubServer::get_notarization_dataI);
            this->bindAndAddMethod(jsonrpc::Procedure("validateaddress", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param01",jsonrpc::JSON_STRING, NULL), &AbstractStubServer::validateaddressI);
            this->bindAndAddMethod(jsonrpc::Procedure("getbestblockhash", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_STRING,  NULL), &AbstractStubServer::getbestblockhashI);
            this->bindAndAddMethod(jsonrpc::Procedure("getblockhash", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param01",jsonrpc::JSON_INTEGER, NULL), &AbstractStubServer::getblockhashI);
            this->bindAndAddMethod(jsonrpc::Procedure("calc_MoM", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_OBJECT, "param01",jsonrpc::JSON_INTEGER,"param02",jsonrpc::JSON_INTEGER, NULL), &AbstractStubServer::calc_MoMI);
            this->bindAndAddMethod(jsonrpc::Procedure("listunspent", jsonrpc::PARAMS_BY_POSITION, jsonrpc::JSON_ARRAY, "param01",jsonrpc::JSON_INTEGER,"param02",jsonrpc::JSON_INTEGER,"param03",jsonrpc::JSON_ARRAY, NULL), &AbstractStubServer::listunspentI);
            this->bindAndAddNotification(jsonrpc::Procedure("notifyServer", jsonrpc::PARAMS_BY_NAME,  NULL), &AbstractStubServer::notifyServerI);
        }

        inline virtual void getblockchaininfoI(const Json::Value &/*request*/, Json::Value &response)
        {
            response = this->getblockchaininfo();
        }
        inline virtual void getblockI(const Json::Value &request, Json::Value &response)
        {
            response = this->getblock(request[0u].asString());
        }
        inline virtual void sendrawtransactionI(const Json::Value &request, Json::Value &response)
        {
            response = this->sendrawtransaction(request[0u].asString());
        }
        inline virtual void signrawtransactionI(const Json::Value &request, Json::Value &response)
        {
            response = this->signrawtransaction(request[0u].asString(), request[1u]);
        }
        inline virtual void getinfoI(const Json::Value &/*request*/, Json::Value &response)
        {
            response = this->getinfo();
        }
        inline virtual void get_notarization_dataI(const Json::Value &/*request*/, Json::Value &response)
        {
            response = this->get_notarization_data();
        }
        inline virtual void validateaddressI(const Json::Value &request, Json::Value &response)
        {
            response = this->validateaddress(request[0u].asString());
        }
        inline virtual void getbestblockhashI(const Json::Value &/*request*/, Json::Value &response)
        {
            response = this->getbestblockhash();
        }
        inline virtual void getblockhashI(const Json::Value &request, Json::Value &response)
        {
            response = this->getblockhash(request[0u].asInt());
        }
        inline virtual void calc_MoMI(const Json::Value &request, Json::Value &response)
        {
            response = this->calc_MoM(request[0u].asInt(), request[1u].asInt());
        }
        inline virtual void listunspentI(const Json::Value &request, Json::Value &response)
        {
            response = this->listunspent(request[0u].asInt(), request[1u].asInt(), request[2u]);
        }
        inline virtual void notifyServerI(const Json::Value &/*request*/)
        {
            this->notifyServer();
        }
        virtual Json::Value getblockchaininfo() = 0;
        virtual Json::Value getblock(const std::string& param01) = 0;
        virtual Json::Value sendrawtransaction(const std::string& param01) = 0;
        virtual Json::Value signrawtransaction(const std::string& param01, const Json::Value& param02) = 0;
        virtual Json::Value getinfo() = 0;
        virtual Json::Value get_notarization_data() = 0;
        virtual Json::Value validateaddress(const std::string& param01) = 0;
        virtual std::string getbestblockhash() = 0;
        virtual Json::Value getblockhash(int param01) = 0;
        virtual Json::Value calc_MoM(int param01, int param02) = 0;
        virtual Json::Value listunspent(int param01, int param02, const Json::Value& param03) = 0;
        virtual void notifyServer() = 0;
};

#endif //JSONRPC_CPP_STUB_ABSTRACTSTUBSERVER_H_
