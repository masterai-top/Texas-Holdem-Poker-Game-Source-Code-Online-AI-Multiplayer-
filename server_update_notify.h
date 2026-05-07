#ifndef __SERVER_UPDATE_NOTIFY_H__
#define __SERVER_UPDATE_NOTIFY_H__
class ServerUpdateNotifyRequest
{
    friend class ServerUpdateNotifyResponse;
public:
    ServerUpdateNotifyRequest() {}
    ServerUpdateNotifyRequest(const string &json)
    {
        this->Deserialize(json);
    }
    template <typename Writer>
    void Serialize(Writer &writer) const
    {
        writer.StartObject();
        SERIALIZE_MEMBER(writer, iTime);
        writer.EndObject();
    }

    void toString(std::string &json)
    {
        StringBuffer sb;
        Writer<StringBuffer> writer(sb);
        Serialize(writer);
        json = sb.GetString();
    }

    void Deserialize(const string &json)
    {
        try
        {
            Document d;
            if (d.Parse(json.c_str()).HasParseError())
            {
                throw logic_error("parse json error. raw data : " + json);
            }
            SET_DOC_MEMBER(d, iTime);
        }
        catch (const std::exception &e)
        {
            std::string errInfo = ::toString(__FILE__, ":", __LINE__, ":ServerUpdateNotifyRequest decode error!");
            throw logic_error(errInfo);
        }
    }

    static tars::Int32 handler(const vector<tars::Char> &reqBuf, const map<std::string, std::string> &extraInfo, vector<tars::Char> &rspBuf)
    {
        return 0;
    }

private:
    CInteger _iTime;  //更新时间(分钟)

};
class ServerUpdateNotifyResponse
{
public:
    ServerUpdateNotifyResponse() {}
    ServerUpdateNotifyResponse(const string &json)
    {
        this->Deserialize(json);
    }
    template <typename Writer>
    void Serialize(Writer &writer) const
    {
        writer.StartObject();
        SERIALIZE_MEMBER(writer, iTime);
        writer.EndObject();
    }

    void toString(std::string &json)
    {
        StringBuffer sb;
        Writer<StringBuffer> writer(sb);
        Serialize(writer);
        json = sb.GetString();
    }

    void Deserialize(const string &json)
    {
        Document d;
        if (d.Parse(json.c_str()).HasParseError())
        {
            throw logic_error("parse json error. raw data : " + json);
        }
        SET_DOC_MEMBER(d, iTime);
    }

    static tars::Int32 handler(const vector<tars::Char> &reqBuf, const map<std::string, std::string> &extraInfo, vector<tars::Char> &rspBuf)
    {
        // STEP1 解码
        ServerUpdateNotifyRequest request;
        decode(reqBuf, request);

        // STEP2 具体业务处理
        int64_t resultCode = RESULT_CODE_SUCCESS;
        int iRet = g_app.getOuterFactoryPtr()->getPushServerPrx(request._iTime)->serverUpdateNotifyAll(request._iTime);
        if (iRet != 0)
        {
            ROLLLOG_ERROR << "serverUpdateNotifyAll failed, iRet:" << iRet << ", request._iTime:" << request._iTime << endl;
            resultCode = RESULT_CODE_FAIL;
        }

        // STEP3 填充数据
        encode(resultCode, request, rspBuf);
        return 0;
    }

private:

    static void encode(int64_t resultCode, ServerUpdateNotifyRequest &request, vector<tars::Char> &rspBuf)
    {
        ServerUpdateNotifyResponse  response;
        response._iTime.assign(request._iTime);

        // resultData是数组
        std::string json;
        response.toString(json);
        std::string resultData = "[" + json + "]";

        int64_t totalItems = 1;  //总条数
        int64_t totalPages = 1;  //总页数
        GMResponse rsp(resultCode, "", resultData, totalItems, totalPages);
        std::string resultJson;
        rsp.toString(resultJson);
        rspBuf.assign(resultJson.begin(), resultJson.end());
    }

private:
    CInteger _iTime;  //更新时间(分钟)

};
#endif