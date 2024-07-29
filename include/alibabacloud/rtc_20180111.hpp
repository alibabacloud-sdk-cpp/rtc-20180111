// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_RTC20180111_H_
#define ALIBABACLOUD_RTC20180111_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Rtc20180111 {
class AddRecordTemplateRequestBackgrounds : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  AddRecordTemplateRequestBackgrounds() {}

  explicit AddRecordTemplateRequestBackgrounds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~AddRecordTemplateRequestBackgrounds() = default;
};
class AddRecordTemplateRequestClockWidgets : public Darabonba::Model {
public:
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  AddRecordTemplateRequestClockWidgets() {}

  explicit AddRecordTemplateRequestClockWidgets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~AddRecordTemplateRequestClockWidgets() = default;
};
class AddRecordTemplateRequestWatermarks : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  AddRecordTemplateRequestWatermarks() {}

  explicit AddRecordTemplateRequestWatermarks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~AddRecordTemplateRequestWatermarks() = default;
};
class AddRecordTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> backgroundColor{};
  shared_ptr<vector<AddRecordTemplateRequestBackgrounds>> backgrounds{};
  shared_ptr<vector<AddRecordTemplateRequestClockWidgets>> clockWidgets{};
  shared_ptr<long> delayStopTime{};
  shared_ptr<bool> enableM3u8DateTime{};
  shared_ptr<long> fileSplitInterval{};
  shared_ptr<vector<string>> formats{};
  shared_ptr<string> httpCallbackUrl{};
  shared_ptr<vector<long>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<string> mnsQueue{};
  shared_ptr<string> name{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> ossFilePrefix{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> taskProfile{};
  shared_ptr<vector<AddRecordTemplateRequestWatermarks>> watermarks{};

  AddRecordTemplateRequest() {}

  explicit AddRecordTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (backgroundColor) {
      res["BackgroundColor"] = boost::any(*backgroundColor);
    }
    if (backgrounds) {
      vector<boost::any> temp1;
      for(auto item1:*backgrounds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backgrounds"] = boost::any(temp1);
    }
    if (clockWidgets) {
      vector<boost::any> temp1;
      for(auto item1:*clockWidgets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClockWidgets"] = boost::any(temp1);
    }
    if (delayStopTime) {
      res["DelayStopTime"] = boost::any(*delayStopTime);
    }
    if (enableM3u8DateTime) {
      res["EnableM3u8DateTime"] = boost::any(*enableM3u8DateTime);
    }
    if (fileSplitInterval) {
      res["FileSplitInterval"] = boost::any(*fileSplitInterval);
    }
    if (formats) {
      res["Formats"] = boost::any(*formats);
    }
    if (httpCallbackUrl) {
      res["HttpCallbackUrl"] = boost::any(*httpCallbackUrl);
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (mnsQueue) {
      res["MnsQueue"] = boost::any(*mnsQueue);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (ossFilePrefix) {
      res["OssFilePrefix"] = boost::any(*ossFilePrefix);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (taskProfile) {
      res["TaskProfile"] = boost::any(*taskProfile);
    }
    if (watermarks) {
      vector<boost::any> temp1;
      for(auto item1:*watermarks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Watermarks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BackgroundColor") != m.end() && !m["BackgroundColor"].empty()) {
      backgroundColor = make_shared<long>(boost::any_cast<long>(m["BackgroundColor"]));
    }
    if (m.find("Backgrounds") != m.end() && !m["Backgrounds"].empty()) {
      if (typeid(vector<boost::any>) == m["Backgrounds"].type()) {
        vector<AddRecordTemplateRequestBackgrounds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backgrounds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddRecordTemplateRequestBackgrounds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backgrounds = make_shared<vector<AddRecordTemplateRequestBackgrounds>>(expect1);
      }
    }
    if (m.find("ClockWidgets") != m.end() && !m["ClockWidgets"].empty()) {
      if (typeid(vector<boost::any>) == m["ClockWidgets"].type()) {
        vector<AddRecordTemplateRequestClockWidgets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClockWidgets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddRecordTemplateRequestClockWidgets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clockWidgets = make_shared<vector<AddRecordTemplateRequestClockWidgets>>(expect1);
      }
    }
    if (m.find("DelayStopTime") != m.end() && !m["DelayStopTime"].empty()) {
      delayStopTime = make_shared<long>(boost::any_cast<long>(m["DelayStopTime"]));
    }
    if (m.find("EnableM3u8DateTime") != m.end() && !m["EnableM3u8DateTime"].empty()) {
      enableM3u8DateTime = make_shared<bool>(boost::any_cast<bool>(m["EnableM3u8DateTime"]));
    }
    if (m.find("FileSplitInterval") != m.end() && !m["FileSplitInterval"].empty()) {
      fileSplitInterval = make_shared<long>(boost::any_cast<long>(m["FileSplitInterval"]));
    }
    if (m.find("Formats") != m.end() && !m["Formats"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Formats"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Formats"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      formats = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HttpCallbackUrl") != m.end() && !m["HttpCallbackUrl"].empty()) {
      httpCallbackUrl = make_shared<string>(boost::any_cast<string>(m["HttpCallbackUrl"]));
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      layoutIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("MnsQueue") != m.end() && !m["MnsQueue"].empty()) {
      mnsQueue = make_shared<string>(boost::any_cast<string>(m["MnsQueue"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("OssFilePrefix") != m.end() && !m["OssFilePrefix"].empty()) {
      ossFilePrefix = make_shared<string>(boost::any_cast<string>(m["OssFilePrefix"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TaskProfile") != m.end() && !m["TaskProfile"].empty()) {
      taskProfile = make_shared<string>(boost::any_cast<string>(m["TaskProfile"]));
    }
    if (m.find("Watermarks") != m.end() && !m["Watermarks"].empty()) {
      if (typeid(vector<boost::any>) == m["Watermarks"].type()) {
        vector<AddRecordTemplateRequestWatermarks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Watermarks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddRecordTemplateRequestWatermarks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        watermarks = make_shared<vector<AddRecordTemplateRequestWatermarks>>(expect1);
      }
    }
  }


  virtual ~AddRecordTemplateRequest() = default;
};
class AddRecordTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};

  AddRecordTemplateResponseBody() {}

  explicit AddRecordTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~AddRecordTemplateResponseBody() = default;
};
class AddRecordTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddRecordTemplateResponseBody> body{};

  AddRecordTemplateResponse() {}

  explicit AddRecordTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddRecordTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddRecordTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~AddRecordTemplateResponse() = default;
};
class CreateAppRecordTemplateRequestRecordTemplate : public Darabonba::Model {
public:
  shared_ptr<long> delayStopTime{};
  shared_ptr<string> filePrefix{};
  shared_ptr<long> fileSplitInterval{};
  shared_ptr<vector<string>> formats{};
  shared_ptr<vector<string>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<string> name{};

  CreateAppRecordTemplateRequestRecordTemplate() {}

  explicit CreateAppRecordTemplateRequestRecordTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delayStopTime) {
      res["DelayStopTime"] = boost::any(*delayStopTime);
    }
    if (filePrefix) {
      res["FilePrefix"] = boost::any(*filePrefix);
    }
    if (fileSplitInterval) {
      res["FileSplitInterval"] = boost::any(*fileSplitInterval);
    }
    if (formats) {
      res["Formats"] = boost::any(*formats);
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DelayStopTime") != m.end() && !m["DelayStopTime"].empty()) {
      delayStopTime = make_shared<long>(boost::any_cast<long>(m["DelayStopTime"]));
    }
    if (m.find("FilePrefix") != m.end() && !m["FilePrefix"].empty()) {
      filePrefix = make_shared<string>(boost::any_cast<string>(m["FilePrefix"]));
    }
    if (m.find("FileSplitInterval") != m.end() && !m["FileSplitInterval"].empty()) {
      fileSplitInterval = make_shared<long>(boost::any_cast<long>(m["FileSplitInterval"]));
    }
    if (m.find("Formats") != m.end() && !m["Formats"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Formats"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Formats"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      formats = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      layoutIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateAppRecordTemplateRequestRecordTemplate() = default;
};
class CreateAppRecordTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};
  shared_ptr<CreateAppRecordTemplateRequestRecordTemplate> recordTemplate{};

  CreateAppRecordTemplateRequest() {}

  explicit CreateAppRecordTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (recordTemplate) {
      res["RecordTemplate"] = recordTemplate ? boost::any(recordTemplate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RecordTemplate") != m.end() && !m["RecordTemplate"].empty()) {
      if (typeid(map<string, boost::any>) == m["RecordTemplate"].type()) {
        CreateAppRecordTemplateRequestRecordTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RecordTemplate"]));
        recordTemplate = make_shared<CreateAppRecordTemplateRequestRecordTemplate>(model1);
      }
    }
  }


  virtual ~CreateAppRecordTemplateRequest() = default;
};
class CreateAppRecordTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> recordTemplateShrink{};

  CreateAppRecordTemplateShrinkRequest() {}

  explicit CreateAppRecordTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (recordTemplateShrink) {
      res["RecordTemplate"] = boost::any(*recordTemplateShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RecordTemplate") != m.end() && !m["RecordTemplate"].empty()) {
      recordTemplateShrink = make_shared<string>(boost::any_cast<string>(m["RecordTemplate"]));
    }
  }


  virtual ~CreateAppRecordTemplateShrinkRequest() = default;
};
class CreateAppRecordTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};

  CreateAppRecordTemplateResponseBody() {}

  explicit CreateAppRecordTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~CreateAppRecordTemplateResponseBody() = default;
};
class CreateAppRecordTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppRecordTemplateResponseBody> body{};

  CreateAppRecordTemplateResponse() {}

  explicit CreateAppRecordTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAppRecordTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppRecordTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppRecordTemplateResponse() = default;
};
class CreateAppStreamingOutTemplateRequestStreamingOutTemplate : public Darabonba::Model {
public:
  shared_ptr<vector<string>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<string> name{};

  CreateAppStreamingOutTemplateRequestStreamingOutTemplate() {}

  explicit CreateAppStreamingOutTemplateRequestStreamingOutTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      layoutIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateAppStreamingOutTemplateRequestStreamingOutTemplate() = default;
};
class CreateAppStreamingOutTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<CreateAppStreamingOutTemplateRequestStreamingOutTemplate> streamingOutTemplate{};

  CreateAppStreamingOutTemplateRequest() {}

  explicit CreateAppStreamingOutTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (streamingOutTemplate) {
      res["StreamingOutTemplate"] = streamingOutTemplate ? boost::any(streamingOutTemplate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("StreamingOutTemplate") != m.end() && !m["StreamingOutTemplate"].empty()) {
      if (typeid(map<string, boost::any>) == m["StreamingOutTemplate"].type()) {
        CreateAppStreamingOutTemplateRequestStreamingOutTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StreamingOutTemplate"]));
        streamingOutTemplate = make_shared<CreateAppStreamingOutTemplateRequestStreamingOutTemplate>(model1);
      }
    }
  }


  virtual ~CreateAppStreamingOutTemplateRequest() = default;
};
class CreateAppStreamingOutTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> streamingOutTemplateShrink{};

  CreateAppStreamingOutTemplateShrinkRequest() {}

  explicit CreateAppStreamingOutTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (streamingOutTemplateShrink) {
      res["StreamingOutTemplate"] = boost::any(*streamingOutTemplateShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("StreamingOutTemplate") != m.end() && !m["StreamingOutTemplate"].empty()) {
      streamingOutTemplateShrink = make_shared<string>(boost::any_cast<string>(m["StreamingOutTemplate"]));
    }
  }


  virtual ~CreateAppStreamingOutTemplateShrinkRequest() = default;
};
class CreateAppStreamingOutTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};

  CreateAppStreamingOutTemplateResponseBody() {}

  explicit CreateAppStreamingOutTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~CreateAppStreamingOutTemplateResponseBody() = default;
};
class CreateAppStreamingOutTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppStreamingOutTemplateResponseBody> body{};

  CreateAppStreamingOutTemplateResponse() {}

  explicit CreateAppStreamingOutTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAppStreamingOutTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppStreamingOutTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppStreamingOutTemplateResponse() = default;
};
class CreateAutoLiveStreamRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callBack{};
  shared_ptr<vector<string>> channelIdPrefixes{};
  shared_ptr<vector<string>> channelIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> playDomain{};
  shared_ptr<string> ruleName{};

  CreateAutoLiveStreamRuleRequest() {}

  explicit CreateAutoLiveStreamRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callBack) {
      res["CallBack"] = boost::any(*callBack);
    }
    if (channelIdPrefixes) {
      res["ChannelIdPrefixes"] = boost::any(*channelIdPrefixes);
    }
    if (channelIds) {
      res["ChannelIds"] = boost::any(*channelIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (playDomain) {
      res["PlayDomain"] = boost::any(*playDomain);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CallBack") != m.end() && !m["CallBack"].empty()) {
      callBack = make_shared<string>(boost::any_cast<string>(m["CallBack"]));
    }
    if (m.find("ChannelIdPrefixes") != m.end() && !m["ChannelIdPrefixes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelIdPrefixes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelIdPrefixes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channelIdPrefixes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ChannelIds") != m.end() && !m["ChannelIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channelIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlayDomain") != m.end() && !m["PlayDomain"].empty()) {
      playDomain = make_shared<string>(boost::any_cast<string>(m["PlayDomain"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~CreateAutoLiveStreamRuleRequest() = default;
};
class CreateAutoLiveStreamRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> ruleId{};

  CreateAutoLiveStreamRuleResponseBody() {}

  explicit CreateAutoLiveStreamRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~CreateAutoLiveStreamRuleResponseBody() = default;
};
class CreateAutoLiveStreamRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAutoLiveStreamRuleResponseBody> body{};

  CreateAutoLiveStreamRuleResponse() {}

  explicit CreateAutoLiveStreamRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAutoLiveStreamRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAutoLiveStreamRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAutoLiveStreamRuleResponse() = default;
};
class CreateEventSubscribeRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> channelId{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> events{};
  shared_ptr<bool> needCallbackAuth{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> role{};
  shared_ptr<vector<string>> users{};

  CreateEventSubscribeRequest() {}

  explicit CreateEventSubscribeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (events) {
      res["Events"] = boost::any(*events);
    }
    if (needCallbackAuth) {
      res["NeedCallbackAuth"] = boost::any(*needCallbackAuth);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Events"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      events = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NeedCallbackAuth") != m.end() && !m["NeedCallbackAuth"].empty()) {
      needCallbackAuth = make_shared<bool>(boost::any_cast<bool>(m["NeedCallbackAuth"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<long>(boost::any_cast<long>(m["Role"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Users"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      users = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateEventSubscribeRequest() = default;
};
class CreateEventSubscribeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> subscribeId{};

  CreateEventSubscribeResponseBody() {}

  explicit CreateEventSubscribeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subscribeId) {
      res["SubscribeId"] = boost::any(*subscribeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubscribeId") != m.end() && !m["SubscribeId"].empty()) {
      subscribeId = make_shared<string>(boost::any_cast<string>(m["SubscribeId"]));
    }
  }


  virtual ~CreateEventSubscribeResponseBody() = default;
};
class CreateEventSubscribeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEventSubscribeResponseBody> body{};

  CreateEventSubscribeResponse() {}

  explicit CreateEventSubscribeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateEventSubscribeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEventSubscribeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEventSubscribeResponse() = default;
};
class CreateMPULayoutRequestPanes : public Darabonba::Model {
public:
  shared_ptr<double> height{};
  shared_ptr<long> majorPane{};
  shared_ptr<long> paneId{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  CreateMPULayoutRequestPanes() {}

  explicit CreateMPULayoutRequestPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (majorPane) {
      res["MajorPane"] = boost::any(*majorPane);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("MajorPane") != m.end() && !m["MajorPane"].empty()) {
      majorPane = make_shared<long>(boost::any_cast<long>(m["MajorPane"]));
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~CreateMPULayoutRequestPanes() = default;
};
class CreateMPULayoutRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> audioMixCount{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<CreateMPULayoutRequestPanes>> panes{};

  CreateMPULayoutRequest() {}

  explicit CreateMPULayoutRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (audioMixCount) {
      res["AudioMixCount"] = boost::any(*audioMixCount);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (panes) {
      vector<boost::any> temp1;
      for(auto item1:*panes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Panes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AudioMixCount") != m.end() && !m["AudioMixCount"].empty()) {
      audioMixCount = make_shared<long>(boost::any_cast<long>(m["AudioMixCount"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Panes") != m.end() && !m["Panes"].empty()) {
      if (typeid(vector<boost::any>) == m["Panes"].type()) {
        vector<CreateMPULayoutRequestPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Panes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMPULayoutRequestPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        panes = make_shared<vector<CreateMPULayoutRequestPanes>>(expect1);
      }
    }
  }


  virtual ~CreateMPULayoutRequest() = default;
};
class CreateMPULayoutResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> layoutId{};
  shared_ptr<string> requestId{};

  CreateMPULayoutResponseBody() {}

  explicit CreateMPULayoutResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layoutId) {
      res["LayoutId"] = boost::any(*layoutId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LayoutId") != m.end() && !m["LayoutId"].empty()) {
      layoutId = make_shared<long>(boost::any_cast<long>(m["LayoutId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateMPULayoutResponseBody() = default;
};
class CreateMPULayoutResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMPULayoutResponseBody> body{};

  CreateMPULayoutResponse() {}

  explicit CreateMPULayoutResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateMPULayoutResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMPULayoutResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMPULayoutResponse() = default;
};
class DeleteAppRecordTemplateRequestTemplate : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};

  DeleteAppRecordTemplateRequestTemplate() {}

  explicit DeleteAppRecordTemplateRequestTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DeleteAppRecordTemplateRequestTemplate() = default;
};
class DeleteAppRecordTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};
  shared_ptr<DeleteAppRecordTemplateRequestTemplate> template_{};

  DeleteAppRecordTemplateRequest() {}

  explicit DeleteAppRecordTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (template_) {
      res["Template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      if (typeid(map<string, boost::any>) == m["Template"].type()) {
        DeleteAppRecordTemplateRequestTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<DeleteAppRecordTemplateRequestTemplate>(model1);
      }
    }
  }


  virtual ~DeleteAppRecordTemplateRequest() = default;
};
class DeleteAppRecordTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> templateShrink{};

  DeleteAppRecordTemplateShrinkRequest() {}

  explicit DeleteAppRecordTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (templateShrink) {
      res["Template"] = boost::any(*templateShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      templateShrink = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
  }


  virtual ~DeleteAppRecordTemplateShrinkRequest() = default;
};
class DeleteAppRecordTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAppRecordTemplateResponseBody() {}

  explicit DeleteAppRecordTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAppRecordTemplateResponseBody() = default;
};
class DeleteAppRecordTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppRecordTemplateResponseBody> body{};

  DeleteAppRecordTemplateResponse() {}

  explicit DeleteAppRecordTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAppRecordTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppRecordTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppRecordTemplateResponse() = default;
};
class DeleteAppStreamingOutTemplateRequestStreamingOutTemplate : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};

  DeleteAppStreamingOutTemplateRequestStreamingOutTemplate() {}

  explicit DeleteAppStreamingOutTemplateRequestStreamingOutTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DeleteAppStreamingOutTemplateRequestStreamingOutTemplate() = default;
};
class DeleteAppStreamingOutTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<DeleteAppStreamingOutTemplateRequestStreamingOutTemplate> streamingOutTemplate{};

  DeleteAppStreamingOutTemplateRequest() {}

  explicit DeleteAppStreamingOutTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (streamingOutTemplate) {
      res["StreamingOutTemplate"] = streamingOutTemplate ? boost::any(streamingOutTemplate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("StreamingOutTemplate") != m.end() && !m["StreamingOutTemplate"].empty()) {
      if (typeid(map<string, boost::any>) == m["StreamingOutTemplate"].type()) {
        DeleteAppStreamingOutTemplateRequestStreamingOutTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StreamingOutTemplate"]));
        streamingOutTemplate = make_shared<DeleteAppStreamingOutTemplateRequestStreamingOutTemplate>(model1);
      }
    }
  }


  virtual ~DeleteAppStreamingOutTemplateRequest() = default;
};
class DeleteAppStreamingOutTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> streamingOutTemplateShrink{};

  DeleteAppStreamingOutTemplateShrinkRequest() {}

  explicit DeleteAppStreamingOutTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (streamingOutTemplateShrink) {
      res["StreamingOutTemplate"] = boost::any(*streamingOutTemplateShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("StreamingOutTemplate") != m.end() && !m["StreamingOutTemplate"].empty()) {
      streamingOutTemplateShrink = make_shared<string>(boost::any_cast<string>(m["StreamingOutTemplate"]));
    }
  }


  virtual ~DeleteAppStreamingOutTemplateShrinkRequest() = default;
};
class DeleteAppStreamingOutTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAppStreamingOutTemplateResponseBody() {}

  explicit DeleteAppStreamingOutTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAppStreamingOutTemplateResponseBody() = default;
};
class DeleteAppStreamingOutTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppStreamingOutTemplateResponseBody> body{};

  DeleteAppStreamingOutTemplateResponse() {}

  explicit DeleteAppStreamingOutTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAppStreamingOutTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppStreamingOutTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppStreamingOutTemplateResponse() = default;
};
class DeleteAutoLiveStreamRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> ruleId{};

  DeleteAutoLiveStreamRuleRequest() {}

  explicit DeleteAutoLiveStreamRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~DeleteAutoLiveStreamRuleRequest() = default;
};
class DeleteAutoLiveStreamRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAutoLiveStreamRuleResponseBody() {}

  explicit DeleteAutoLiveStreamRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAutoLiveStreamRuleResponseBody() = default;
};
class DeleteAutoLiveStreamRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAutoLiveStreamRuleResponseBody> body{};

  DeleteAutoLiveStreamRuleResponse() {}

  explicit DeleteAutoLiveStreamRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAutoLiveStreamRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAutoLiveStreamRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAutoLiveStreamRuleResponse() = default;
};
class DeleteChannelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> ownerId{};

  DeleteChannelRequest() {}

  explicit DeleteChannelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DeleteChannelRequest() = default;
};
class DeleteChannelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteChannelResponseBody() {}

  explicit DeleteChannelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteChannelResponseBody() = default;
};
class DeleteChannelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteChannelResponseBody> body{};

  DeleteChannelResponse() {}

  explicit DeleteChannelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteChannelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteChannelResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteChannelResponse() = default;
};
class DeleteEventSubscribeRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> subscribeId{};

  DeleteEventSubscribeRequest() {}

  explicit DeleteEventSubscribeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (subscribeId) {
      res["SubscribeId"] = boost::any(*subscribeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SubscribeId") != m.end() && !m["SubscribeId"].empty()) {
      subscribeId = make_shared<string>(boost::any_cast<string>(m["SubscribeId"]));
    }
  }


  virtual ~DeleteEventSubscribeRequest() = default;
};
class DeleteEventSubscribeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteEventSubscribeResponseBody() {}

  explicit DeleteEventSubscribeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteEventSubscribeResponseBody() = default;
};
class DeleteEventSubscribeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEventSubscribeResponseBody> body{};

  DeleteEventSubscribeResponse() {}

  explicit DeleteEventSubscribeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEventSubscribeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEventSubscribeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEventSubscribeResponse() = default;
};
class DeleteMPULayoutRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> layoutId{};
  shared_ptr<long> ownerId{};

  DeleteMPULayoutRequest() {}

  explicit DeleteMPULayoutRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (layoutId) {
      res["LayoutId"] = boost::any(*layoutId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LayoutId") != m.end() && !m["LayoutId"].empty()) {
      layoutId = make_shared<long>(boost::any_cast<long>(m["LayoutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DeleteMPULayoutRequest() = default;
};
class DeleteMPULayoutResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteMPULayoutResponseBody() {}

  explicit DeleteMPULayoutResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteMPULayoutResponseBody() = default;
};
class DeleteMPULayoutResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMPULayoutResponseBody> body{};

  DeleteMPULayoutResponse() {}

  explicit DeleteMPULayoutResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteMPULayoutResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMPULayoutResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMPULayoutResponse() = default;
};
class DeleteRecordTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> templateId{};

  DeleteRecordTemplateRequest() {}

  explicit DeleteRecordTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DeleteRecordTemplateRequest() = default;
};
class DeleteRecordTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRecordTemplateResponseBody() {}

  explicit DeleteRecordTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteRecordTemplateResponseBody() = default;
};
class DeleteRecordTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRecordTemplateResponseBody> body{};

  DeleteRecordTemplateResponse() {}

  explicit DeleteRecordTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRecordTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRecordTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRecordTemplateResponse() = default;
};
class DescribeAllCallbackResponseBodyCallbacksSubEvent : public Darabonba::Model {
public:
  shared_ptr<long> event{};
  shared_ptr<string> eventName{};
  shared_ptr<long> type{};

  DescribeAllCallbackResponseBodyCallbacksSubEvent() {}

  explicit DescribeAllCallbackResponseBodyCallbacksSubEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (event) {
      res["Event"] = boost::any(*event);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Event") != m.end() && !m["Event"].empty()) {
      event = make_shared<long>(boost::any_cast<long>(m["Event"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~DescribeAllCallbackResponseBodyCallbacksSubEvent() = default;
};
class DescribeAllCallbackResponseBodyCallbacks : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeAllCallbackResponseBodyCallbacksSubEvent>> subEvent{};

  DescribeAllCallbackResponseBodyCallbacks() {}

  explicit DescribeAllCallbackResponseBodyCallbacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (subEvent) {
      vector<boost::any> temp1;
      for(auto item1:*subEvent){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubEvent"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SubEvent") != m.end() && !m["SubEvent"].empty()) {
      if (typeid(vector<boost::any>) == m["SubEvent"].type()) {
        vector<DescribeAllCallbackResponseBodyCallbacksSubEvent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubEvent"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAllCallbackResponseBodyCallbacksSubEvent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subEvent = make_shared<vector<DescribeAllCallbackResponseBodyCallbacksSubEvent>>(expect1);
      }
    }
  }


  virtual ~DescribeAllCallbackResponseBodyCallbacks() = default;
};
class DescribeAllCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAllCallbackResponseBodyCallbacks>> callbacks{};
  shared_ptr<string> requestId{};

  DescribeAllCallbackResponseBody() {}

  explicit DescribeAllCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbacks) {
      vector<boost::any> temp1;
      for(auto item1:*callbacks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Callbacks"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Callbacks") != m.end() && !m["Callbacks"].empty()) {
      if (typeid(vector<boost::any>) == m["Callbacks"].type()) {
        vector<DescribeAllCallbackResponseBodyCallbacks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Callbacks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAllCallbackResponseBodyCallbacks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        callbacks = make_shared<vector<DescribeAllCallbackResponseBodyCallbacks>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAllCallbackResponseBody() = default;
};
class DescribeAllCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAllCallbackResponseBody> body{};

  DescribeAllCallbackResponse() {}

  explicit DescribeAllCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAllCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAllCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAllCallbackResponse() = default;
};
class DescribeAppCallStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  DescribeAppCallStatusRequest() {}

  explicit DescribeAppCallStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~DescribeAppCallStatusRequest() = default;
};
class DescribeAppCallStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  DescribeAppCallStatusResponseBody() {}

  explicit DescribeAppCallStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~DescribeAppCallStatusResponseBody() = default;
};
class DescribeAppCallStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppCallStatusResponseBody> body{};

  DescribeAppCallStatusResponse() {}

  explicit DescribeAppCallStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppCallStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppCallStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppCallStatusResponse() = default;
};
class DescribeAppCallbackSecretKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  DescribeAppCallbackSecretKeyRequest() {}

  explicit DescribeAppCallbackSecretKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~DescribeAppCallbackSecretKeyRequest() = default;
};
class DescribeAppCallbackSecretKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> callbackSecretKey{};
  shared_ptr<string> requestId{};

  DescribeAppCallbackSecretKeyResponseBody() {}

  explicit DescribeAppCallbackSecretKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackSecretKey) {
      res["CallbackSecretKey"] = boost::any(*callbackSecretKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackSecretKey") != m.end() && !m["CallbackSecretKey"].empty()) {
      callbackSecretKey = make_shared<string>(boost::any_cast<string>(m["CallbackSecretKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAppCallbackSecretKeyResponseBody() = default;
};
class DescribeAppCallbackSecretKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppCallbackSecretKeyResponseBody> body{};

  DescribeAppCallbackSecretKeyResponse() {}

  explicit DescribeAppCallbackSecretKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppCallbackSecretKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppCallbackSecretKeyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppCallbackSecretKeyResponse() = default;
};
class DescribeAppKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};

  DescribeAppKeyRequest() {}

  explicit DescribeAppKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DescribeAppKeyRequest() = default;
};
class DescribeAppKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> requestId{};

  DescribeAppKeyResponseBody() {}

  explicit DescribeAppKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAppKeyResponseBody() = default;
};
class DescribeAppKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppKeyResponseBody> body{};

  DescribeAppKeyResponse() {}

  explicit DescribeAppKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppKeyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppKeyResponse() = default;
};
class DescribeAppLayoutsRequestCondition : public Darabonba::Model {
public:
  shared_ptr<string> layoutId{};
  shared_ptr<string> name{};

  DescribeAppLayoutsRequestCondition() {}

  explicit DescribeAppLayoutsRequestCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layoutId) {
      res["LayoutId"] = boost::any(*layoutId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LayoutId") != m.end() && !m["LayoutId"].empty()) {
      layoutId = make_shared<string>(boost::any_cast<string>(m["LayoutId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeAppLayoutsRequestCondition() = default;
};
class DescribeAppLayoutsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<DescribeAppLayoutsRequestCondition> condition{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeAppLayoutsRequest() {}

  explicit DescribeAppLayoutsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (condition) {
      res["Condition"] = condition ? boost::any(condition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      if (typeid(map<string, boost::any>) == m["Condition"].type()) {
        DescribeAppLayoutsRequestCondition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Condition"]));
        condition = make_shared<DescribeAppLayoutsRequestCondition>(model1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeAppLayoutsRequest() = default;
};
class DescribeAppLayoutsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> conditionShrink{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeAppLayoutsShrinkRequest() {}

  explicit DescribeAppLayoutsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (conditionShrink) {
      res["Condition"] = boost::any(*conditionShrink);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      conditionShrink = make_shared<string>(boost::any_cast<string>(m["Condition"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeAppLayoutsShrinkRequest() = default;
};
class DescribeAppLayoutsResponseBodyLayoutsPanes : public Darabonba::Model {
public:
  shared_ptr<double> height{};
  shared_ptr<long> paneId{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  DescribeAppLayoutsResponseBodyLayoutsPanes() {}

  explicit DescribeAppLayoutsResponseBodyLayoutsPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~DescribeAppLayoutsResponseBodyLayoutsPanes() = default;
};
class DescribeAppLayoutsResponseBodyLayouts : public Darabonba::Model {
public:
  shared_ptr<string> layoutId{};
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeAppLayoutsResponseBodyLayoutsPanes>> panes{};

  DescribeAppLayoutsResponseBodyLayouts() {}

  explicit DescribeAppLayoutsResponseBodyLayouts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layoutId) {
      res["LayoutId"] = boost::any(*layoutId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (panes) {
      vector<boost::any> temp1;
      for(auto item1:*panes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Panes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LayoutId") != m.end() && !m["LayoutId"].empty()) {
      layoutId = make_shared<string>(boost::any_cast<string>(m["LayoutId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Panes") != m.end() && !m["Panes"].empty()) {
      if (typeid(vector<boost::any>) == m["Panes"].type()) {
        vector<DescribeAppLayoutsResponseBodyLayoutsPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Panes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppLayoutsResponseBodyLayoutsPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        panes = make_shared<vector<DescribeAppLayoutsResponseBodyLayoutsPanes>>(expect1);
      }
    }
  }


  virtual ~DescribeAppLayoutsResponseBodyLayouts() = default;
};
class DescribeAppLayoutsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAppLayoutsResponseBodyLayouts>> layouts{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};

  DescribeAppLayoutsResponseBody() {}

  explicit DescribeAppLayoutsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layouts) {
      vector<boost::any> temp1;
      for(auto item1:*layouts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Layouts"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Layouts") != m.end() && !m["Layouts"].empty()) {
      if (typeid(vector<boost::any>) == m["Layouts"].type()) {
        vector<DescribeAppLayoutsResponseBodyLayouts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Layouts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppLayoutsResponseBodyLayouts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        layouts = make_shared<vector<DescribeAppLayoutsResponseBodyLayouts>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeAppLayoutsResponseBody() = default;
};
class DescribeAppLayoutsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppLayoutsResponseBody> body{};

  DescribeAppLayoutsResponse() {}

  explicit DescribeAppLayoutsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppLayoutsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppLayoutsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppLayoutsResponse() = default;
};
class DescribeAppLiveStreamStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};

  DescribeAppLiveStreamStatusRequest() {}

  explicit DescribeAppLiveStreamStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~DescribeAppLiveStreamStatusRequest() = default;
};
class DescribeAppLiveStreamStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  DescribeAppLiveStreamStatusResponseBody() {}

  explicit DescribeAppLiveStreamStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~DescribeAppLiveStreamStatusResponseBody() = default;
};
class DescribeAppLiveStreamStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppLiveStreamStatusResponseBody> body{};

  DescribeAppLiveStreamStatusResponse() {}

  explicit DescribeAppLiveStreamStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppLiveStreamStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppLiveStreamStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppLiveStreamStatusResponse() = default;
};
class DescribeAppRecordStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};

  DescribeAppRecordStatusRequest() {}

  explicit DescribeAppRecordStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~DescribeAppRecordStatusRequest() = default;
};
class DescribeAppRecordStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  DescribeAppRecordStatusResponseBody() {}

  explicit DescribeAppRecordStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~DescribeAppRecordStatusResponseBody() = default;
};
class DescribeAppRecordStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppRecordStatusResponseBody> body{};

  DescribeAppRecordStatusResponse() {}

  explicit DescribeAppRecordStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppRecordStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppRecordStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppRecordStatusResponse() = default;
};
class DescribeAppRecordTemplatesRequestCondition : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> templateId{};

  DescribeAppRecordTemplatesRequestCondition() {}

  explicit DescribeAppRecordTemplatesRequestCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DescribeAppRecordTemplatesRequestCondition() = default;
};
class DescribeAppRecordTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};
  shared_ptr<DescribeAppRecordTemplatesRequestCondition> condition{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeAppRecordTemplatesRequest() {}

  explicit DescribeAppRecordTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (condition) {
      res["Condition"] = condition ? boost::any(condition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      if (typeid(map<string, boost::any>) == m["Condition"].type()) {
        DescribeAppRecordTemplatesRequestCondition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Condition"]));
        condition = make_shared<DescribeAppRecordTemplatesRequestCondition>(model1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeAppRecordTemplatesRequest() = default;
};
class DescribeAppRecordTemplatesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> conditionShrink{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeAppRecordTemplatesShrinkRequest() {}

  explicit DescribeAppRecordTemplatesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (conditionShrink) {
      res["Condition"] = boost::any(*conditionShrink);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      conditionShrink = make_shared<string>(boost::any_cast<string>(m["Condition"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeAppRecordTemplatesShrinkRequest() = default;
};
class DescribeAppRecordTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<vector<uint8_t>> createTime{};
  shared_ptr<long> delayStopTime{};
  shared_ptr<string> filePrefix{};
  shared_ptr<long> fileSplitInterval{};
  shared_ptr<vector<string>> formats{};
  shared_ptr<vector<long>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<string> name{};
  shared_ptr<string> templateId{};

  DescribeAppRecordTemplatesResponseBodyTemplates() {}

  explicit DescribeAppRecordTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (delayStopTime) {
      res["DelayStopTime"] = boost::any(*delayStopTime);
    }
    if (filePrefix) {
      res["FilePrefix"] = boost::any(*filePrefix);
    }
    if (fileSplitInterval) {
      res["FileSplitInterval"] = boost::any(*fileSplitInterval);
    }
    if (formats) {
      res["Formats"] = boost::any(*formats);
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["CreateTime"]));
    }
    if (m.find("DelayStopTime") != m.end() && !m["DelayStopTime"].empty()) {
      delayStopTime = make_shared<long>(boost::any_cast<long>(m["DelayStopTime"]));
    }
    if (m.find("FilePrefix") != m.end() && !m["FilePrefix"].empty()) {
      filePrefix = make_shared<string>(boost::any_cast<string>(m["FilePrefix"]));
    }
    if (m.find("FileSplitInterval") != m.end() && !m["FileSplitInterval"].empty()) {
      fileSplitInterval = make_shared<long>(boost::any_cast<long>(m["FileSplitInterval"]));
    }
    if (m.find("Formats") != m.end() && !m["Formats"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Formats"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Formats"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      formats = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      layoutIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DescribeAppRecordTemplatesResponseBodyTemplates() = default;
};
class DescribeAppRecordTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeAppRecordTemplatesResponseBodyTemplates>> templates{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};

  DescribeAppRecordTemplatesResponseBody() {}

  explicit DescribeAppRecordTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Templates"] = boost::any(temp1);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<DescribeAppRecordTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppRecordTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<DescribeAppRecordTemplatesResponseBodyTemplates>>(expect1);
      }
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeAppRecordTemplatesResponseBody() = default;
};
class DescribeAppRecordTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppRecordTemplatesResponseBody> body{};

  DescribeAppRecordTemplatesResponse() {}

  explicit DescribeAppRecordTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppRecordTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppRecordTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppRecordTemplatesResponse() = default;
};
class DescribeAppRecordingFilesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTs{};
  shared_ptr<vector<string>> taskIds{};

  DescribeAppRecordingFilesRequest() {}

  explicit DescribeAppRecordingFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    if (taskIds) {
      res["TaskIds"] = boost::any(*taskIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
    if (m.find("TaskIds") != m.end() && !m["TaskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAppRecordingFilesRequest() = default;
};
class DescribeAppRecordingFilesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTs{};
  shared_ptr<string> taskIdsShrink{};

  DescribeAppRecordingFilesShrinkRequest() {}

  explicit DescribeAppRecordingFilesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    if (taskIdsShrink) {
      res["TaskIds"] = boost::any(*taskIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
    if (m.find("TaskIds") != m.end() && !m["TaskIds"].empty()) {
      taskIdsShrink = make_shared<string>(boost::any_cast<string>(m["TaskIds"]));
    }
  }


  virtual ~DescribeAppRecordingFilesShrinkRequest() = default;
};
class DescribeAppRecordingFilesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> channelId{};
  shared_ptr<long> fileCreateTs{};
  shared_ptr<long> fileDuration{};
  shared_ptr<string> filePath{};
  shared_ptr<long> fileSize{};
  shared_ptr<long> region{};
  shared_ptr<long> startTs{};
  shared_ptr<string> taskId{};
  shared_ptr<long> vendor{};

  DescribeAppRecordingFilesResponseBodyItems() {}

  explicit DescribeAppRecordingFilesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (fileCreateTs) {
      res["FileCreateTs"] = boost::any(*fileCreateTs);
    }
    if (fileDuration) {
      res["FileDuration"] = boost::any(*fileDuration);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("FileCreateTs") != m.end() && !m["FileCreateTs"].empty()) {
      fileCreateTs = make_shared<long>(boost::any_cast<long>(m["FileCreateTs"]));
    }
    if (m.find("FileDuration") != m.end() && !m["FileDuration"].empty()) {
      fileDuration = make_shared<long>(boost::any_cast<long>(m["FileDuration"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<long>(boost::any_cast<long>(m["Region"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<long>(boost::any_cast<long>(m["Vendor"]));
    }
  }


  virtual ~DescribeAppRecordingFilesResponseBodyItems() = default;
};
class DescribeAppRecordingFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAppRecordingFilesResponseBodyItems>> items{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCnt{};

  DescribeAppRecordingFilesResponseBody() {}

  explicit DescribeAppRecordingFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCnt) {
      res["TotalCnt"] = boost::any(*totalCnt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeAppRecordingFilesResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppRecordingFilesResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeAppRecordingFilesResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCnt") != m.end() && !m["TotalCnt"].empty()) {
      totalCnt = make_shared<long>(boost::any_cast<long>(m["TotalCnt"]));
    }
  }


  virtual ~DescribeAppRecordingFilesResponseBody() = default;
};
class DescribeAppRecordingFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppRecordingFilesResponseBody> body{};

  DescribeAppRecordingFilesResponse() {}

  explicit DescribeAppRecordingFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppRecordingFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppRecordingFilesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppRecordingFilesResponse() = default;
};
class DescribeAppStreamingOutTemplatesRequestCondition : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> templateId{};

  DescribeAppStreamingOutTemplatesRequestCondition() {}

  explicit DescribeAppStreamingOutTemplatesRequestCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DescribeAppStreamingOutTemplatesRequestCondition() = default;
};
class DescribeAppStreamingOutTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<DescribeAppStreamingOutTemplatesRequestCondition> condition{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeAppStreamingOutTemplatesRequest() {}

  explicit DescribeAppStreamingOutTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (condition) {
      res["Condition"] = condition ? boost::any(condition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      if (typeid(map<string, boost::any>) == m["Condition"].type()) {
        DescribeAppStreamingOutTemplatesRequestCondition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Condition"]));
        condition = make_shared<DescribeAppStreamingOutTemplatesRequestCondition>(model1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeAppStreamingOutTemplatesRequest() = default;
};
class DescribeAppStreamingOutTemplatesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> conditionShrink{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeAppStreamingOutTemplatesShrinkRequest() {}

  explicit DescribeAppStreamingOutTemplatesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (conditionShrink) {
      res["Condition"] = boost::any(*conditionShrink);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Condition") != m.end() && !m["Condition"].empty()) {
      conditionShrink = make_shared<string>(boost::any_cast<string>(m["Condition"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeAppStreamingOutTemplatesShrinkRequest() = default;
};
class DescribeAppStreamingOutTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<vector<string>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<string> name{};
  shared_ptr<string> templateId{};

  DescribeAppStreamingOutTemplatesResponseBodyTemplates() {}

  explicit DescribeAppStreamingOutTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      layoutIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DescribeAppStreamingOutTemplatesResponseBodyTemplates() = default;
};
class DescribeAppStreamingOutTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeAppStreamingOutTemplatesResponseBodyTemplates>> templates{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};

  DescribeAppStreamingOutTemplatesResponseBody() {}

  explicit DescribeAppStreamingOutTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Templates"] = boost::any(temp1);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<DescribeAppStreamingOutTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppStreamingOutTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<DescribeAppStreamingOutTemplatesResponseBodyTemplates>>(expect1);
      }
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeAppStreamingOutTemplatesResponseBody() = default;
};
class DescribeAppStreamingOutTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppStreamingOutTemplatesResponseBody> body{};

  DescribeAppStreamingOutTemplatesResponse() {}

  explicit DescribeAppStreamingOutTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppStreamingOutTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppStreamingOutTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppStreamingOutTemplatesResponse() = default;
};
class DescribeAppsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> order{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  DescribeAppsRequest() {}

  explicit DescribeAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeAppsRequest() = default;
};
class DescribeAppsResponseBodyAppListAppServiceAreas : public Darabonba::Model {
public:
  shared_ptr<vector<string>> serviceArea{};

  DescribeAppsResponseBodyAppListAppServiceAreas() {}

  explicit DescribeAppsResponseBodyAppListAppServiceAreas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServiceArea"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServiceArea"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serviceArea = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAppsResponseBodyAppListAppServiceAreas() = default;
};
class DescribeAppsResponseBodyAppListApp : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> billType{};
  shared_ptr<string> createTime{};
  shared_ptr<DescribeAppsResponseBodyAppListAppServiceAreas> serviceAreas{};
  shared_ptr<long> status{};
  shared_ptr<string> version{};

  DescribeAppsResponseBodyAppListApp() {}

  explicit DescribeAppsResponseBodyAppListApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (billType) {
      res["BillType"] = boost::any(*billType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (serviceAreas) {
      res["ServiceAreas"] = serviceAreas ? boost::any(serviceAreas->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("BillType") != m.end() && !m["BillType"].empty()) {
      billType = make_shared<string>(boost::any_cast<string>(m["BillType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ServiceAreas") != m.end() && !m["ServiceAreas"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceAreas"].type()) {
        DescribeAppsResponseBodyAppListAppServiceAreas model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceAreas"]));
        serviceAreas = make_shared<DescribeAppsResponseBodyAppListAppServiceAreas>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeAppsResponseBodyAppListApp() = default;
};
class DescribeAppsResponseBodyAppList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAppsResponseBodyAppListApp>> app{};

  DescribeAppsResponseBodyAppList() {}

  explicit DescribeAppsResponseBodyAppList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      vector<boost::any> temp1;
      for(auto item1:*app){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["App"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(vector<boost::any>) == m["App"].type()) {
        vector<DescribeAppsResponseBodyAppListApp> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["App"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppsResponseBodyAppListApp model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        app = make_shared<vector<DescribeAppsResponseBodyAppListApp>>(expect1);
      }
    }
  }


  virtual ~DescribeAppsResponseBodyAppList() = default;
};
class DescribeAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAppsResponseBodyAppList> appList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};

  DescribeAppsResponseBody() {}

  explicit DescribeAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appList) {
      res["AppList"] = appList ? boost::any(appList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppList") != m.end() && !m["AppList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppList"].type()) {
        DescribeAppsResponseBodyAppList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppList"]));
        appList = make_shared<DescribeAppsResponseBodyAppList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeAppsResponseBody() = default;
};
class DescribeAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppsResponseBody> body{};

  DescribeAppsResponse() {}

  explicit DescribeAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppsResponse() = default;
};
class DescribeAutoLiveStreamRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};

  DescribeAutoLiveStreamRuleRequest() {}

  explicit DescribeAutoLiveStreamRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DescribeAutoLiveStreamRuleRequest() = default;
};
class DescribeAutoLiveStreamRuleResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<string> callBack{};
  shared_ptr<vector<string>> channelIdPrefixes{};
  shared_ptr<vector<string>> channelIds{};
  shared_ptr<string> createTime{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<string> playDomain{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> status{};

  DescribeAutoLiveStreamRuleResponseBodyRules() {}

  explicit DescribeAutoLiveStreamRuleResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callBack) {
      res["CallBack"] = boost::any(*callBack);
    }
    if (channelIdPrefixes) {
      res["ChannelIdPrefixes"] = boost::any(*channelIdPrefixes);
    }
    if (channelIds) {
      res["ChannelIds"] = boost::any(*channelIds);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (playDomain) {
      res["PlayDomain"] = boost::any(*playDomain);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallBack") != m.end() && !m["CallBack"].empty()) {
      callBack = make_shared<string>(boost::any_cast<string>(m["CallBack"]));
    }
    if (m.find("ChannelIdPrefixes") != m.end() && !m["ChannelIdPrefixes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelIdPrefixes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelIdPrefixes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channelIdPrefixes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ChannelIds") != m.end() && !m["ChannelIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channelIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("PlayDomain") != m.end() && !m["PlayDomain"].empty()) {
      playDomain = make_shared<string>(boost::any_cast<string>(m["PlayDomain"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeAutoLiveStreamRuleResponseBodyRules() = default;
};
class DescribeAutoLiveStreamRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeAutoLiveStreamRuleResponseBodyRules>> rules{};

  DescribeAutoLiveStreamRuleResponseBody() {}

  explicit DescribeAutoLiveStreamRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<DescribeAutoLiveStreamRuleResponseBodyRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAutoLiveStreamRuleResponseBodyRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<DescribeAutoLiveStreamRuleResponseBodyRules>>(expect1);
      }
    }
  }


  virtual ~DescribeAutoLiveStreamRuleResponseBody() = default;
};
class DescribeAutoLiveStreamRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAutoLiveStreamRuleResponseBody> body{};

  DescribeAutoLiveStreamRuleResponse() {}

  explicit DescribeAutoLiveStreamRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAutoLiveStreamRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAutoLiveStreamRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAutoLiveStreamRuleResponse() = default;
};
class DescribeCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<string> extDataType{};
  shared_ptr<bool> queryExpInfo{};

  DescribeCallRequest() {}

  explicit DescribeCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (extDataType) {
      res["ExtDataType"] = boost::any(*extDataType);
    }
    if (queryExpInfo) {
      res["QueryExpInfo"] = boost::any(*queryExpInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("ExtDataType") != m.end() && !m["ExtDataType"].empty()) {
      extDataType = make_shared<string>(boost::any_cast<string>(m["ExtDataType"]));
    }
    if (m.find("QueryExpInfo") != m.end() && !m["QueryExpInfo"].empty()) {
      queryExpInfo = make_shared<bool>(boost::any_cast<bool>(m["QueryExpInfo"]));
    }
  }


  virtual ~DescribeCallRequest() = default;
};
class DescribeCallResponseBodyCallInfo : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};

  DescribeCallResponseBodyCallInfo() {}

  explicit DescribeCallResponseBodyCallInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
  }


  virtual ~DescribeCallResponseBodyCallInfo() = default;
};
class DescribeCallResponseBodyUserDetailListDurMetricStatData : public Darabonba::Model {
public:
  shared_ptr<long> pubAudio{};
  shared_ptr<long> pubVideo1080{};
  shared_ptr<long> pubVideo360{};
  shared_ptr<long> pubVideo720{};
  shared_ptr<long> pubVideoScreenShare{};
  shared_ptr<long> subAudio{};
  shared_ptr<long> subVideo1080{};
  shared_ptr<long> subVideo360{};
  shared_ptr<long> subVideo720{};
  shared_ptr<long> subVideoScreenShare{};

  DescribeCallResponseBodyUserDetailListDurMetricStatData() {}

  explicit DescribeCallResponseBodyUserDetailListDurMetricStatData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pubAudio) {
      res["PubAudio"] = boost::any(*pubAudio);
    }
    if (pubVideo1080) {
      res["PubVideo1080"] = boost::any(*pubVideo1080);
    }
    if (pubVideo360) {
      res["PubVideo360"] = boost::any(*pubVideo360);
    }
    if (pubVideo720) {
      res["PubVideo720"] = boost::any(*pubVideo720);
    }
    if (pubVideoScreenShare) {
      res["PubVideoScreenShare"] = boost::any(*pubVideoScreenShare);
    }
    if (subAudio) {
      res["SubAudio"] = boost::any(*subAudio);
    }
    if (subVideo1080) {
      res["SubVideo1080"] = boost::any(*subVideo1080);
    }
    if (subVideo360) {
      res["SubVideo360"] = boost::any(*subVideo360);
    }
    if (subVideo720) {
      res["SubVideo720"] = boost::any(*subVideo720);
    }
    if (subVideoScreenShare) {
      res["SubVideoScreenShare"] = boost::any(*subVideoScreenShare);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PubAudio") != m.end() && !m["PubAudio"].empty()) {
      pubAudio = make_shared<long>(boost::any_cast<long>(m["PubAudio"]));
    }
    if (m.find("PubVideo1080") != m.end() && !m["PubVideo1080"].empty()) {
      pubVideo1080 = make_shared<long>(boost::any_cast<long>(m["PubVideo1080"]));
    }
    if (m.find("PubVideo360") != m.end() && !m["PubVideo360"].empty()) {
      pubVideo360 = make_shared<long>(boost::any_cast<long>(m["PubVideo360"]));
    }
    if (m.find("PubVideo720") != m.end() && !m["PubVideo720"].empty()) {
      pubVideo720 = make_shared<long>(boost::any_cast<long>(m["PubVideo720"]));
    }
    if (m.find("PubVideoScreenShare") != m.end() && !m["PubVideoScreenShare"].empty()) {
      pubVideoScreenShare = make_shared<long>(boost::any_cast<long>(m["PubVideoScreenShare"]));
    }
    if (m.find("SubAudio") != m.end() && !m["SubAudio"].empty()) {
      subAudio = make_shared<long>(boost::any_cast<long>(m["SubAudio"]));
    }
    if (m.find("SubVideo1080") != m.end() && !m["SubVideo1080"].empty()) {
      subVideo1080 = make_shared<long>(boost::any_cast<long>(m["SubVideo1080"]));
    }
    if (m.find("SubVideo360") != m.end() && !m["SubVideo360"].empty()) {
      subVideo360 = make_shared<long>(boost::any_cast<long>(m["SubVideo360"]));
    }
    if (m.find("SubVideo720") != m.end() && !m["SubVideo720"].empty()) {
      subVideo720 = make_shared<long>(boost::any_cast<long>(m["SubVideo720"]));
    }
    if (m.find("SubVideoScreenShare") != m.end() && !m["SubVideoScreenShare"].empty()) {
      subVideoScreenShare = make_shared<long>(boost::any_cast<long>(m["SubVideoScreenShare"]));
    }
  }


  virtual ~DescribeCallResponseBodyUserDetailListDurMetricStatData() = default;
};
class DescribeCallResponseBodyUserDetailListOnlinePeriods : public Darabonba::Model {
public:
  shared_ptr<long> joinTs{};
  shared_ptr<long> leaveTs{};

  DescribeCallResponseBodyUserDetailListOnlinePeriods() {}

  explicit DescribeCallResponseBodyUserDetailListOnlinePeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joinTs) {
      res["JoinTs"] = boost::any(*joinTs);
    }
    if (leaveTs) {
      res["LeaveTs"] = boost::any(*leaveTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JoinTs") != m.end() && !m["JoinTs"].empty()) {
      joinTs = make_shared<long>(boost::any_cast<long>(m["JoinTs"]));
    }
    if (m.find("LeaveTs") != m.end() && !m["LeaveTs"].empty()) {
      leaveTs = make_shared<long>(boost::any_cast<long>(m["LeaveTs"]));
    }
  }


  virtual ~DescribeCallResponseBodyUserDetailListOnlinePeriods() = default;
};
class DescribeCallResponseBodyUserDetailList : public Darabonba::Model {
public:
  shared_ptr<string> callExp{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<DescribeCallResponseBodyUserDetailListDurMetricStatData> durMetricStatData{};
  shared_ptr<long> duration{};
  shared_ptr<string> location{};
  shared_ptr<string> network{};
  shared_ptr<vector<string>> networkList{};
  shared_ptr<long> onlineDuration{};
  shared_ptr<vector<DescribeCallResponseBodyUserDetailListOnlinePeriods>> onlinePeriods{};
  shared_ptr<string> os{};
  shared_ptr<vector<string>> osList{};
  shared_ptr<vector<string>> roles{};
  shared_ptr<string> sdkVersion{};
  shared_ptr<vector<string>> sdkVersionList{};
  shared_ptr<string> userId{};

  DescribeCallResponseBodyUserDetailList() {}

  explicit DescribeCallResponseBodyUserDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callExp) {
      res["CallExp"] = boost::any(*callExp);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (durMetricStatData) {
      res["DurMetricStatData"] = durMetricStatData ? boost::any(durMetricStatData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (networkList) {
      res["NetworkList"] = boost::any(*networkList);
    }
    if (onlineDuration) {
      res["OnlineDuration"] = boost::any(*onlineDuration);
    }
    if (onlinePeriods) {
      vector<boost::any> temp1;
      for(auto item1:*onlinePeriods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnlinePeriods"] = boost::any(temp1);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (osList) {
      res["OsList"] = boost::any(*osList);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (sdkVersion) {
      res["SdkVersion"] = boost::any(*sdkVersion);
    }
    if (sdkVersionList) {
      res["SdkVersionList"] = boost::any(*sdkVersionList);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallExp") != m.end() && !m["CallExp"].empty()) {
      callExp = make_shared<string>(boost::any_cast<string>(m["CallExp"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("DurMetricStatData") != m.end() && !m["DurMetricStatData"].empty()) {
      if (typeid(map<string, boost::any>) == m["DurMetricStatData"].type()) {
        DescribeCallResponseBodyUserDetailListDurMetricStatData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DurMetricStatData"]));
        durMetricStatData = make_shared<DescribeCallResponseBodyUserDetailListDurMetricStatData>(model1);
      }
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("NetworkList") != m.end() && !m["NetworkList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NetworkList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NetworkList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      networkList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OnlineDuration") != m.end() && !m["OnlineDuration"].empty()) {
      onlineDuration = make_shared<long>(boost::any_cast<long>(m["OnlineDuration"]));
    }
    if (m.find("OnlinePeriods") != m.end() && !m["OnlinePeriods"].empty()) {
      if (typeid(vector<boost::any>) == m["OnlinePeriods"].type()) {
        vector<DescribeCallResponseBodyUserDetailListOnlinePeriods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnlinePeriods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCallResponseBodyUserDetailListOnlinePeriods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onlinePeriods = make_shared<vector<DescribeCallResponseBodyUserDetailListOnlinePeriods>>(expect1);
      }
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("OsList") != m.end() && !m["OsList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OsList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OsList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      osList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Roles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SdkVersion") != m.end() && !m["SdkVersion"].empty()) {
      sdkVersion = make_shared<string>(boost::any_cast<string>(m["SdkVersion"]));
    }
    if (m.find("SdkVersionList") != m.end() && !m["SdkVersionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SdkVersionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SdkVersionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sdkVersionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeCallResponseBodyUserDetailList() = default;
};
class DescribeCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCallResponseBodyCallInfo> callInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeCallResponseBodyUserDetailList>> userDetailList{};

  DescribeCallResponseBody() {}

  explicit DescribeCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callInfo) {
      res["CallInfo"] = callInfo ? boost::any(callInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*userDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserDetailList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallInfo") != m.end() && !m["CallInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallInfo"].type()) {
        DescribeCallResponseBodyCallInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallInfo"]));
        callInfo = make_shared<DescribeCallResponseBodyCallInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserDetailList") != m.end() && !m["UserDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserDetailList"].type()) {
        vector<DescribeCallResponseBodyUserDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCallResponseBodyUserDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userDetailList = make_shared<vector<DescribeCallResponseBodyUserDetailList>>(expect1);
      }
    }
  }


  virtual ~DescribeCallResponseBody() = default;
};
class DescribeCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCallResponseBody> body{};

  DescribeCallResponse() {}

  explicit DescribeCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCallResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCallResponse() = default;
};
class DescribeCallListRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> endTs{};
  shared_ptr<string> orderBy{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryMode{};
  shared_ptr<long> startTs{};
  shared_ptr<string> userId{};

  DescribeCallListRequest() {}

  explicit DescribeCallListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryMode) {
      res["QueryMode"] = boost::any(*queryMode);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryMode") != m.end() && !m["QueryMode"].empty()) {
      queryMode = make_shared<string>(boost::any_cast<string>(m["QueryMode"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeCallListRequest() = default;
};
class DescribeCallListResponseBodyCallList : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> badExpUserCnt{};
  shared_ptr<string> callStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};
  shared_ptr<long> userCnt{};

  DescribeCallListResponseBodyCallList() {}

  explicit DescribeCallListResponseBodyCallList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (badExpUserCnt) {
      res["BadExpUserCnt"] = boost::any(*badExpUserCnt);
    }
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (userCnt) {
      res["UserCnt"] = boost::any(*userCnt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BadExpUserCnt") != m.end() && !m["BadExpUserCnt"].empty()) {
      badExpUserCnt = make_shared<long>(boost::any_cast<long>(m["BadExpUserCnt"]));
    }
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("UserCnt") != m.end() && !m["UserCnt"].empty()) {
      userCnt = make_shared<long>(boost::any_cast<long>(m["UserCnt"]));
    }
  }


  virtual ~DescribeCallListResponseBodyCallList() = default;
};
class DescribeCallListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCallListResponseBodyCallList>> callList{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCnt{};

  DescribeCallListResponseBody() {}

  explicit DescribeCallListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callList) {
      vector<boost::any> temp1;
      for(auto item1:*callList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CallList"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCnt) {
      res["TotalCnt"] = boost::any(*totalCnt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallList") != m.end() && !m["CallList"].empty()) {
      if (typeid(vector<boost::any>) == m["CallList"].type()) {
        vector<DescribeCallListResponseBodyCallList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CallList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCallListResponseBodyCallList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        callList = make_shared<vector<DescribeCallListResponseBodyCallList>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCnt") != m.end() && !m["TotalCnt"].empty()) {
      totalCnt = make_shared<long>(boost::any_cast<long>(m["TotalCnt"]));
    }
  }


  virtual ~DescribeCallListResponseBody() = default;
};
class DescribeCallListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCallListResponseBody> body{};

  DescribeCallListResponse() {}

  explicit DescribeCallListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCallListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCallListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCallListResponse() = default;
};
class DescribeCallbacksRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  DescribeCallbacksRequest() {}

  explicit DescribeCallbacksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~DescribeCallbacksRequest() = default;
};
class DescribeCallbacksResponseBodyCallbacks : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> checkStatus{};
  shared_ptr<string> code{};
  shared_ptr<string> conf{};
  shared_ptr<string> msg{};
  shared_ptr<long> status{};
  shared_ptr<vector<long>> subEvent{};

  DescribeCallbacksResponseBodyCallbacks() {}

  explicit DescribeCallbacksResponseBodyCallbacks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (conf) {
      res["Conf"] = boost::any(*conf);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subEvent) {
      res["SubEvent"] = boost::any(*subEvent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Conf") != m.end() && !m["Conf"].empty()) {
      conf = make_shared<string>(boost::any_cast<string>(m["Conf"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SubEvent") != m.end() && !m["SubEvent"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SubEvent"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubEvent"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      subEvent = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~DescribeCallbacksResponseBodyCallbacks() = default;
};
class DescribeCallbacksResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCallbacksResponseBodyCallbacks>> callbacks{};
  shared_ptr<string> requestId{};

  DescribeCallbacksResponseBody() {}

  explicit DescribeCallbacksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbacks) {
      vector<boost::any> temp1;
      for(auto item1:*callbacks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Callbacks"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Callbacks") != m.end() && !m["Callbacks"].empty()) {
      if (typeid(vector<boost::any>) == m["Callbacks"].type()) {
        vector<DescribeCallbacksResponseBodyCallbacks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Callbacks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCallbacksResponseBodyCallbacks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        callbacks = make_shared<vector<DescribeCallbacksResponseBodyCallbacks>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCallbacksResponseBody() = default;
};
class DescribeCallbacksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCallbacksResponseBody> body{};

  DescribeCallbacksResponse() {}

  explicit DescribeCallbacksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCallbacksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCallbacksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCallbacksResponse() = default;
};
class DescribeChannelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};

  DescribeChannelRequest() {}

  explicit DescribeChannelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
  }


  virtual ~DescribeChannelRequest() = default;
};
class DescribeChannelResponseBodyChannel : public Darabonba::Model {
public:
  shared_ptr<string> channelId{};
  shared_ptr<long> startTime{};

  DescribeChannelResponseBodyChannel() {}

  explicit DescribeChannelResponseBodyChannel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~DescribeChannelResponseBodyChannel() = default;
};
class DescribeChannelResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeChannelResponseBodyChannel> channel{};
  shared_ptr<bool> channelExist{};
  shared_ptr<string> requestId{};

  DescribeChannelResponseBody() {}

  explicit DescribeChannelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = channel ? boost::any(channel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (channelExist) {
      res["ChannelExist"] = boost::any(*channelExist);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      if (typeid(map<string, boost::any>) == m["Channel"].type()) {
        DescribeChannelResponseBodyChannel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Channel"]));
        channel = make_shared<DescribeChannelResponseBodyChannel>(model1);
      }
    }
    if (m.find("ChannelExist") != m.end() && !m["ChannelExist"].empty()) {
      channelExist = make_shared<bool>(boost::any_cast<bool>(m["ChannelExist"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeChannelResponseBody() = default;
};
class DescribeChannelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelResponseBody> body{};

  DescribeChannelResponse() {}

  explicit DescribeChannelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeChannelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelResponse() = default;
};
class DescribeChannelAllUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};

  DescribeChannelAllUsersRequest() {}

  explicit DescribeChannelAllUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
  }


  virtual ~DescribeChannelAllUsersRequest() = default;
};
class DescribeChannelAllUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  DescribeChannelAllUsersResponseBodyUsers() {}

  explicit DescribeChannelAllUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeChannelAllUsersResponseBodyUsers() = default;
};
class DescribeChannelAllUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> channelExist{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeChannelAllUsersResponseBodyUsers>> users{};

  DescribeChannelAllUsersResponseBody() {}

  explicit DescribeChannelAllUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelExist) {
      res["ChannelExist"] = boost::any(*channelExist);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelExist") != m.end() && !m["ChannelExist"].empty()) {
      channelExist = make_shared<bool>(boost::any_cast<bool>(m["ChannelExist"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<DescribeChannelAllUsersResponseBodyUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelAllUsersResponseBodyUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<DescribeChannelAllUsersResponseBodyUsers>>(expect1);
      }
    }
  }


  virtual ~DescribeChannelAllUsersResponseBody() = default;
};
class DescribeChannelAllUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelAllUsersResponseBody> body{};

  DescribeChannelAllUsersResponse() {}

  explicit DescribeChannelAllUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeChannelAllUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelAllUsersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelAllUsersResponse() = default;
};
class DescribeChannelAreaDistributionStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<string> parentArea{};

  DescribeChannelAreaDistributionStatDataRequest() {}

  explicit DescribeChannelAreaDistributionStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (parentArea) {
      res["ParentArea"] = boost::any(*parentArea);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("ParentArea") != m.end() && !m["ParentArea"].empty()) {
      parentArea = make_shared<string>(boost::any_cast<string>(m["ParentArea"]));
    }
  }


  virtual ~DescribeChannelAreaDistributionStatDataRequest() = default;
};
class DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList : public Darabonba::Model {
public:
  shared_ptr<string> areaName{};
  shared_ptr<long> callUserCount{};
  shared_ptr<string> highQualityTransmissionRate{};
  shared_ptr<long> pubUserCount{};
  shared_ptr<long> subUserCount{};

  DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList() {}

  explicit DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (areaName) {
      res["AreaName"] = boost::any(*areaName);
    }
    if (callUserCount) {
      res["CallUserCount"] = boost::any(*callUserCount);
    }
    if (highQualityTransmissionRate) {
      res["HighQualityTransmissionRate"] = boost::any(*highQualityTransmissionRate);
    }
    if (pubUserCount) {
      res["PubUserCount"] = boost::any(*pubUserCount);
    }
    if (subUserCount) {
      res["SubUserCount"] = boost::any(*subUserCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AreaName") != m.end() && !m["AreaName"].empty()) {
      areaName = make_shared<string>(boost::any_cast<string>(m["AreaName"]));
    }
    if (m.find("CallUserCount") != m.end() && !m["CallUserCount"].empty()) {
      callUserCount = make_shared<long>(boost::any_cast<long>(m["CallUserCount"]));
    }
    if (m.find("HighQualityTransmissionRate") != m.end() && !m["HighQualityTransmissionRate"].empty()) {
      highQualityTransmissionRate = make_shared<string>(boost::any_cast<string>(m["HighQualityTransmissionRate"]));
    }
    if (m.find("PubUserCount") != m.end() && !m["PubUserCount"].empty()) {
      pubUserCount = make_shared<long>(boost::any_cast<long>(m["PubUserCount"]));
    }
    if (m.find("SubUserCount") != m.end() && !m["SubUserCount"].empty()) {
      subUserCount = make_shared<long>(boost::any_cast<long>(m["SubUserCount"]));
    }
  }


  virtual ~DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList() = default;
};
class DescribeChannelAreaDistributionStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList>> areaStatList{};
  shared_ptr<string> requestId{};

  DescribeChannelAreaDistributionStatDataResponseBody() {}

  explicit DescribeChannelAreaDistributionStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (areaStatList) {
      vector<boost::any> temp1;
      for(auto item1:*areaStatList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AreaStatList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AreaStatList") != m.end() && !m["AreaStatList"].empty()) {
      if (typeid(vector<boost::any>) == m["AreaStatList"].type()) {
        vector<DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AreaStatList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        areaStatList = make_shared<vector<DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeChannelAreaDistributionStatDataResponseBody() = default;
};
class DescribeChannelAreaDistributionStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelAreaDistributionStatDataResponseBody> body{};

  DescribeChannelAreaDistributionStatDataResponse() {}

  explicit DescribeChannelAreaDistributionStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeChannelAreaDistributionStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelAreaDistributionStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelAreaDistributionStatDataResponse() = default;
};
class DescribeChannelDistributionStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<string> statDim{};

  DescribeChannelDistributionStatDataRequest() {}

  explicit DescribeChannelDistributionStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (statDim) {
      res["StatDim"] = boost::any(*statDim);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("StatDim") != m.end() && !m["StatDim"].empty()) {
      statDim = make_shared<string>(boost::any_cast<string>(m["StatDim"]));
    }
  }


  virtual ~DescribeChannelDistributionStatDataRequest() = default;
};
class DescribeChannelDistributionStatDataResponseBodyStatList : public Darabonba::Model {
public:
  shared_ptr<long> callUserCount{};
  shared_ptr<string> callUserRatio{};
  shared_ptr<string> name{};

  DescribeChannelDistributionStatDataResponseBodyStatList() {}

  explicit DescribeChannelDistributionStatDataResponseBodyStatList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callUserCount) {
      res["CallUserCount"] = boost::any(*callUserCount);
    }
    if (callUserRatio) {
      res["CallUserRatio"] = boost::any(*callUserRatio);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallUserCount") != m.end() && !m["CallUserCount"].empty()) {
      callUserCount = make_shared<long>(boost::any_cast<long>(m["CallUserCount"]));
    }
    if (m.find("CallUserRatio") != m.end() && !m["CallUserRatio"].empty()) {
      callUserRatio = make_shared<string>(boost::any_cast<string>(m["CallUserRatio"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeChannelDistributionStatDataResponseBodyStatList() = default;
};
class DescribeChannelDistributionStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeChannelDistributionStatDataResponseBodyStatList>> statList{};

  DescribeChannelDistributionStatDataResponseBody() {}

  explicit DescribeChannelDistributionStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statList) {
      vector<boost::any> temp1;
      for(auto item1:*statList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StatList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StatList") != m.end() && !m["StatList"].empty()) {
      if (typeid(vector<boost::any>) == m["StatList"].type()) {
        vector<DescribeChannelDistributionStatDataResponseBodyStatList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StatList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelDistributionStatDataResponseBodyStatList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statList = make_shared<vector<DescribeChannelDistributionStatDataResponseBodyStatList>>(expect1);
      }
    }
  }


  virtual ~DescribeChannelDistributionStatDataResponseBody() = default;
};
class DescribeChannelDistributionStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelDistributionStatDataResponseBody> body{};

  DescribeChannelDistributionStatDataResponse() {}

  explicit DescribeChannelDistributionStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeChannelDistributionStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelDistributionStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelDistributionStatDataResponse() = default;
};
class DescribeChannelOverallDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};

  DescribeChannelOverallDataRequest() {}

  explicit DescribeChannelOverallDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
  }


  virtual ~DescribeChannelOverallDataRequest() = default;
};
class DescribeChannelOverallDataResponseBodyCallInfo : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};

  DescribeChannelOverallDataResponseBodyCallInfo() {}

  explicit DescribeChannelOverallDataResponseBodyCallInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
  }


  virtual ~DescribeChannelOverallDataResponseBodyCallInfo() = default;
};
class DescribeChannelOverallDataResponseBodyMetricDatasNodes : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeChannelOverallDataResponseBodyMetricDatasNodes() {}

  explicit DescribeChannelOverallDataResponseBodyMetricDatasNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeChannelOverallDataResponseBodyMetricDatasNodes() = default;
};
class DescribeChannelOverallDataResponseBodyMetricDatas : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeChannelOverallDataResponseBodyMetricDatasNodes>> nodes{};
  shared_ptr<string> type{};

  DescribeChannelOverallDataResponseBodyMetricDatas() {}

  explicit DescribeChannelOverallDataResponseBodyMetricDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeChannelOverallDataResponseBodyMetricDatasNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelOverallDataResponseBodyMetricDatasNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeChannelOverallDataResponseBodyMetricDatasNodes>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeChannelOverallDataResponseBodyMetricDatas() = default;
};
class DescribeChannelOverallDataResponseBodyOverallData : public Darabonba::Model {
public:
  shared_ptr<double> connAvgTime{};
  shared_ptr<double> fiveSecJoinRate{};
  shared_ptr<double> totalAudioStuckRate{};
  shared_ptr<double> totalVideoStuckRate{};
  shared_ptr<double> totalVideoVagueRate{};

  DescribeChannelOverallDataResponseBodyOverallData() {}

  explicit DescribeChannelOverallDataResponseBodyOverallData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAvgTime) {
      res["ConnAvgTime"] = boost::any(*connAvgTime);
    }
    if (fiveSecJoinRate) {
      res["FiveSecJoinRate"] = boost::any(*fiveSecJoinRate);
    }
    if (totalAudioStuckRate) {
      res["TotalAudioStuckRate"] = boost::any(*totalAudioStuckRate);
    }
    if (totalVideoStuckRate) {
      res["TotalVideoStuckRate"] = boost::any(*totalVideoStuckRate);
    }
    if (totalVideoVagueRate) {
      res["TotalVideoVagueRate"] = boost::any(*totalVideoVagueRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAvgTime") != m.end() && !m["ConnAvgTime"].empty()) {
      connAvgTime = make_shared<double>(boost::any_cast<double>(m["ConnAvgTime"]));
    }
    if (m.find("FiveSecJoinRate") != m.end() && !m["FiveSecJoinRate"].empty()) {
      fiveSecJoinRate = make_shared<double>(boost::any_cast<double>(m["FiveSecJoinRate"]));
    }
    if (m.find("TotalAudioStuckRate") != m.end() && !m["TotalAudioStuckRate"].empty()) {
      totalAudioStuckRate = make_shared<double>(boost::any_cast<double>(m["TotalAudioStuckRate"]));
    }
    if (m.find("TotalVideoStuckRate") != m.end() && !m["TotalVideoStuckRate"].empty()) {
      totalVideoStuckRate = make_shared<double>(boost::any_cast<double>(m["TotalVideoStuckRate"]));
    }
    if (m.find("TotalVideoVagueRate") != m.end() && !m["TotalVideoVagueRate"].empty()) {
      totalVideoVagueRate = make_shared<double>(boost::any_cast<double>(m["TotalVideoVagueRate"]));
    }
  }


  virtual ~DescribeChannelOverallDataResponseBodyOverallData() = default;
};
class DescribeChannelOverallDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeChannelOverallDataResponseBodyCallInfo> callInfo{};
  shared_ptr<vector<DescribeChannelOverallDataResponseBodyMetricDatas>> metricDatas{};
  shared_ptr<DescribeChannelOverallDataResponseBodyOverallData> overallData{};
  shared_ptr<string> requestId{};

  DescribeChannelOverallDataResponseBody() {}

  explicit DescribeChannelOverallDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callInfo) {
      res["CallInfo"] = callInfo ? boost::any(callInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (metricDatas) {
      vector<boost::any> temp1;
      for(auto item1:*metricDatas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MetricDatas"] = boost::any(temp1);
    }
    if (overallData) {
      res["OverallData"] = overallData ? boost::any(overallData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallInfo") != m.end() && !m["CallInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallInfo"].type()) {
        DescribeChannelOverallDataResponseBodyCallInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallInfo"]));
        callInfo = make_shared<DescribeChannelOverallDataResponseBodyCallInfo>(model1);
      }
    }
    if (m.find("MetricDatas") != m.end() && !m["MetricDatas"].empty()) {
      if (typeid(vector<boost::any>) == m["MetricDatas"].type()) {
        vector<DescribeChannelOverallDataResponseBodyMetricDatas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MetricDatas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelOverallDataResponseBodyMetricDatas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metricDatas = make_shared<vector<DescribeChannelOverallDataResponseBodyMetricDatas>>(expect1);
      }
    }
    if (m.find("OverallData") != m.end() && !m["OverallData"].empty()) {
      if (typeid(map<string, boost::any>) == m["OverallData"].type()) {
        DescribeChannelOverallDataResponseBodyOverallData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OverallData"]));
        overallData = make_shared<DescribeChannelOverallDataResponseBodyOverallData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeChannelOverallDataResponseBody() = default;
};
class DescribeChannelOverallDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelOverallDataResponseBody> body{};

  DescribeChannelOverallDataResponse() {}

  explicit DescribeChannelOverallDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeChannelOverallDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelOverallDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelOverallDataResponse() = default;
};
class DescribeChannelParticipantsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<string> order{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeChannelParticipantsRequest() {}

  explicit DescribeChannelParticipantsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeChannelParticipantsRequest() = default;
};
class DescribeChannelParticipantsResponseBodyUserList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> user{};

  DescribeChannelParticipantsResponseBodyUserList() {}

  explicit DescribeChannelParticipantsResponseBodyUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("User") != m.end() && !m["User"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["User"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["User"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      user = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeChannelParticipantsResponseBodyUserList() = default;
};
class DescribeChannelParticipantsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> timestamp{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};
  shared_ptr<DescribeChannelParticipantsResponseBodyUserList> userList{};

  DescribeChannelParticipantsResponseBody() {}

  explicit DescribeChannelParticipantsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    if (userList) {
      res["UserList"] = userList ? boost::any(userList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
    if (m.find("UserList") != m.end() && !m["UserList"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserList"].type()) {
        DescribeChannelParticipantsResponseBodyUserList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserList"]));
        userList = make_shared<DescribeChannelParticipantsResponseBodyUserList>(model1);
      }
    }
  }


  virtual ~DescribeChannelParticipantsResponseBody() = default;
};
class DescribeChannelParticipantsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelParticipantsResponseBody> body{};

  DescribeChannelParticipantsResponse() {}

  explicit DescribeChannelParticipantsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeChannelParticipantsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelParticipantsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelParticipantsResponse() = default;
};
class DescribeChannelTopPubUserListRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};

  DescribeChannelTopPubUserListRequest() {}

  explicit DescribeChannelTopPubUserListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
  }


  virtual ~DescribeChannelTopPubUserListRequest() = default;
};
class DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods : public Darabonba::Model {
public:
  shared_ptr<long> joinTs{};
  shared_ptr<long> leaveTs{};

  DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods() {}

  explicit DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joinTs) {
      res["JoinTs"] = boost::any(*joinTs);
    }
    if (leaveTs) {
      res["LeaveTs"] = boost::any(*leaveTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JoinTs") != m.end() && !m["JoinTs"].empty()) {
      joinTs = make_shared<long>(boost::any_cast<long>(m["JoinTs"]));
    }
    if (m.find("LeaveTs") != m.end() && !m["LeaveTs"].empty()) {
      leaveTs = make_shared<long>(boost::any_cast<long>(m["LeaveTs"]));
    }
  }


  virtual ~DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods() = default;
};
class DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList : public Darabonba::Model {
public:
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};
  shared_ptr<string> location{};
  shared_ptr<long> onlineDuration{};
  shared_ptr<vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods>> onlinePeriods{};
  shared_ptr<string> userId{};

  DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList() {}

  explicit DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (onlineDuration) {
      res["OnlineDuration"] = boost::any(*onlineDuration);
    }
    if (onlinePeriods) {
      vector<boost::any> temp1;
      for(auto item1:*onlinePeriods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnlinePeriods"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("OnlineDuration") != m.end() && !m["OnlineDuration"].empty()) {
      onlineDuration = make_shared<long>(boost::any_cast<long>(m["OnlineDuration"]));
    }
    if (m.find("OnlinePeriods") != m.end() && !m["OnlinePeriods"].empty()) {
      if (typeid(vector<boost::any>) == m["OnlinePeriods"].type()) {
        vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnlinePeriods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onlinePeriods = make_shared<vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList() = default;
};
class DescribeChannelTopPubUserListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList>> topPubUserDetailList{};

  DescribeChannelTopPubUserListResponseBody() {}

  explicit DescribeChannelTopPubUserListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (topPubUserDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*topPubUserDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TopPubUserDetailList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TopPubUserDetailList") != m.end() && !m["TopPubUserDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["TopPubUserDetailList"].type()) {
        vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TopPubUserDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topPubUserDetailList = make_shared<vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList>>(expect1);
      }
    }
  }


  virtual ~DescribeChannelTopPubUserListResponseBody() = default;
};
class DescribeChannelTopPubUserListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelTopPubUserListResponseBody> body{};

  DescribeChannelTopPubUserListResponse() {}

  explicit DescribeChannelTopPubUserListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeChannelTopPubUserListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelTopPubUserListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelTopPubUserListResponse() = default;
};
class DescribeChannelUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<string> userId{};

  DescribeChannelUserRequest() {}

  explicit DescribeChannelUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeChannelUserRequest() = default;
};
class DescribeChannelUserResponseBodySessions : public Darabonba::Model {
public:
  shared_ptr<long> joined{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> userId{};

  DescribeChannelUserResponseBodySessions() {}

  explicit DescribeChannelUserResponseBodySessions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joined) {
      res["Joined"] = boost::any(*joined);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Joined") != m.end() && !m["Joined"].empty()) {
      joined = make_shared<long>(boost::any_cast<long>(m["Joined"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeChannelUserResponseBodySessions() = default;
};
class DescribeChannelUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> channelExist{};
  shared_ptr<bool> inChannel{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeChannelUserResponseBodySessions>> sessions{};

  DescribeChannelUserResponseBody() {}

  explicit DescribeChannelUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelExist) {
      res["ChannelExist"] = boost::any(*channelExist);
    }
    if (inChannel) {
      res["InChannel"] = boost::any(*inChannel);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sessions) {
      vector<boost::any> temp1;
      for(auto item1:*sessions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sessions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelExist") != m.end() && !m["ChannelExist"].empty()) {
      channelExist = make_shared<bool>(boost::any_cast<bool>(m["ChannelExist"]));
    }
    if (m.find("InChannel") != m.end() && !m["InChannel"].empty()) {
      inChannel = make_shared<bool>(boost::any_cast<bool>(m["InChannel"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Sessions") != m.end() && !m["Sessions"].empty()) {
      if (typeid(vector<boost::any>) == m["Sessions"].type()) {
        vector<DescribeChannelUserResponseBodySessions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sessions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelUserResponseBodySessions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sessions = make_shared<vector<DescribeChannelUserResponseBodySessions>>(expect1);
      }
    }
  }


  virtual ~DescribeChannelUserResponseBody() = default;
};
class DescribeChannelUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelUserResponseBody> body{};

  DescribeChannelUserResponse() {}

  explicit DescribeChannelUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeChannelUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelUserResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelUserResponse() = default;
};
class DescribeChannelUserMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};

  DescribeChannelUserMetricsRequest() {}

  explicit DescribeChannelUserMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
  }


  virtual ~DescribeChannelUserMetricsRequest() = default;
};
class DescribeChannelUserMetricsResponseBodyMetricDatasNodes : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeChannelUserMetricsResponseBodyMetricDatasNodes() {}

  explicit DescribeChannelUserMetricsResponseBodyMetricDatasNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeChannelUserMetricsResponseBodyMetricDatasNodes() = default;
};
class DescribeChannelUserMetricsResponseBodyMetricDatas : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeChannelUserMetricsResponseBodyMetricDatasNodes>> nodes{};
  shared_ptr<string> type{};

  DescribeChannelUserMetricsResponseBodyMetricDatas() {}

  explicit DescribeChannelUserMetricsResponseBodyMetricDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeChannelUserMetricsResponseBodyMetricDatasNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelUserMetricsResponseBodyMetricDatasNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeChannelUserMetricsResponseBodyMetricDatasNodes>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeChannelUserMetricsResponseBodyMetricDatas() = default;
};
class DescribeChannelUserMetricsResponseBodyOverallData : public Darabonba::Model {
public:
  shared_ptr<long> totalBadExpNum{};
  shared_ptr<long> totalJoinFailNum{};
  shared_ptr<long> totalPubUserNum{};
  shared_ptr<long> totalSubUserNum{};
  shared_ptr<long> totalUserNum{};

  DescribeChannelUserMetricsResponseBodyOverallData() {}

  explicit DescribeChannelUserMetricsResponseBodyOverallData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalBadExpNum) {
      res["TotalBadExpNum"] = boost::any(*totalBadExpNum);
    }
    if (totalJoinFailNum) {
      res["TotalJoinFailNum"] = boost::any(*totalJoinFailNum);
    }
    if (totalPubUserNum) {
      res["TotalPubUserNum"] = boost::any(*totalPubUserNum);
    }
    if (totalSubUserNum) {
      res["TotalSubUserNum"] = boost::any(*totalSubUserNum);
    }
    if (totalUserNum) {
      res["TotalUserNum"] = boost::any(*totalUserNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalBadExpNum") != m.end() && !m["TotalBadExpNum"].empty()) {
      totalBadExpNum = make_shared<long>(boost::any_cast<long>(m["TotalBadExpNum"]));
    }
    if (m.find("TotalJoinFailNum") != m.end() && !m["TotalJoinFailNum"].empty()) {
      totalJoinFailNum = make_shared<long>(boost::any_cast<long>(m["TotalJoinFailNum"]));
    }
    if (m.find("TotalPubUserNum") != m.end() && !m["TotalPubUserNum"].empty()) {
      totalPubUserNum = make_shared<long>(boost::any_cast<long>(m["TotalPubUserNum"]));
    }
    if (m.find("TotalSubUserNum") != m.end() && !m["TotalSubUserNum"].empty()) {
      totalSubUserNum = make_shared<long>(boost::any_cast<long>(m["TotalSubUserNum"]));
    }
    if (m.find("TotalUserNum") != m.end() && !m["TotalUserNum"].empty()) {
      totalUserNum = make_shared<long>(boost::any_cast<long>(m["TotalUserNum"]));
    }
  }


  virtual ~DescribeChannelUserMetricsResponseBodyOverallData() = default;
};
class DescribeChannelUserMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeChannelUserMetricsResponseBodyMetricDatas>> metricDatas{};
  shared_ptr<DescribeChannelUserMetricsResponseBodyOverallData> overallData{};
  shared_ptr<string> requestId{};

  DescribeChannelUserMetricsResponseBody() {}

  explicit DescribeChannelUserMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricDatas) {
      vector<boost::any> temp1;
      for(auto item1:*metricDatas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MetricDatas"] = boost::any(temp1);
    }
    if (overallData) {
      res["OverallData"] = overallData ? boost::any(overallData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricDatas") != m.end() && !m["MetricDatas"].empty()) {
      if (typeid(vector<boost::any>) == m["MetricDatas"].type()) {
        vector<DescribeChannelUserMetricsResponseBodyMetricDatas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MetricDatas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelUserMetricsResponseBodyMetricDatas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metricDatas = make_shared<vector<DescribeChannelUserMetricsResponseBodyMetricDatas>>(expect1);
      }
    }
    if (m.find("OverallData") != m.end() && !m["OverallData"].empty()) {
      if (typeid(map<string, boost::any>) == m["OverallData"].type()) {
        DescribeChannelUserMetricsResponseBodyOverallData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OverallData"]));
        overallData = make_shared<DescribeChannelUserMetricsResponseBodyOverallData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeChannelUserMetricsResponseBody() = default;
};
class DescribeChannelUserMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelUserMetricsResponseBody> body{};

  DescribeChannelUserMetricsResponse() {}

  explicit DescribeChannelUserMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeChannelUserMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelUserMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelUserMetricsResponse() = default;
};
class DescribeChannelUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> ownerId{};

  DescribeChannelUsersRequest() {}

  explicit DescribeChannelUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~DescribeChannelUsersRequest() = default;
};
class DescribeChannelUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> channelProfile{};
  shared_ptr<long> commTotalNum{};
  shared_ptr<vector<string>> interactiveUserList{};
  shared_ptr<long> interactiveUserNum{};
  shared_ptr<bool> isChannelExist{};
  shared_ptr<vector<string>> liveUserList{};
  shared_ptr<long> liveUserNum{};
  shared_ptr<string> requestId{};
  shared_ptr<long> timestamp{};
  shared_ptr<vector<string>> userList{};

  DescribeChannelUsersResponseBody() {}

  explicit DescribeChannelUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelProfile) {
      res["ChannelProfile"] = boost::any(*channelProfile);
    }
    if (commTotalNum) {
      res["CommTotalNum"] = boost::any(*commTotalNum);
    }
    if (interactiveUserList) {
      res["InteractiveUserList"] = boost::any(*interactiveUserList);
    }
    if (interactiveUserNum) {
      res["InteractiveUserNum"] = boost::any(*interactiveUserNum);
    }
    if (isChannelExist) {
      res["IsChannelExist"] = boost::any(*isChannelExist);
    }
    if (liveUserList) {
      res["LiveUserList"] = boost::any(*liveUserList);
    }
    if (liveUserNum) {
      res["LiveUserNum"] = boost::any(*liveUserNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (userList) {
      res["UserList"] = boost::any(*userList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelProfile") != m.end() && !m["ChannelProfile"].empty()) {
      channelProfile = make_shared<long>(boost::any_cast<long>(m["ChannelProfile"]));
    }
    if (m.find("CommTotalNum") != m.end() && !m["CommTotalNum"].empty()) {
      commTotalNum = make_shared<long>(boost::any_cast<long>(m["CommTotalNum"]));
    }
    if (m.find("InteractiveUserList") != m.end() && !m["InteractiveUserList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InteractiveUserList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InteractiveUserList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      interactiveUserList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InteractiveUserNum") != m.end() && !m["InteractiveUserNum"].empty()) {
      interactiveUserNum = make_shared<long>(boost::any_cast<long>(m["InteractiveUserNum"]));
    }
    if (m.find("IsChannelExist") != m.end() && !m["IsChannelExist"].empty()) {
      isChannelExist = make_shared<bool>(boost::any_cast<bool>(m["IsChannelExist"]));
    }
    if (m.find("LiveUserList") != m.end() && !m["LiveUserList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LiveUserList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LiveUserList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      liveUserList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LiveUserNum") != m.end() && !m["LiveUserNum"].empty()) {
      liveUserNum = make_shared<long>(boost::any_cast<long>(m["LiveUserNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("UserList") != m.end() && !m["UserList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeChannelUsersResponseBody() = default;
};
class DescribeChannelUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelUsersResponseBody> body{};

  DescribeChannelUsersResponse() {}

  explicit DescribeChannelUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeChannelUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelUsersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelUsersResponse() = default;
};
class DescribeChannelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  DescribeChannelsRequest() {}

  explicit DescribeChannelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeChannelsRequest() = default;
};
class DescribeChannelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> records{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCnt{};

  DescribeChannelsResponseBody() {}

  explicit DescribeChannelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (records) {
      res["Records"] = boost::any(*records);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCnt) {
      res["TotalCnt"] = boost::any(*totalCnt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Records"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      records = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCnt") != m.end() && !m["TotalCnt"].empty()) {
      totalCnt = make_shared<long>(boost::any_cast<long>(m["TotalCnt"]));
    }
  }


  virtual ~DescribeChannelsResponseBody() = default;
};
class DescribeChannelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelsResponseBody> body{};

  DescribeChannelsResponse() {}

  explicit DescribeChannelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeChannelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelsResponse() = default;
};
class DescribeEndPointEventListRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<string> userIdList{};

  DescribeEndPointEventListRequest() {}

  explicit DescribeEndPointEventListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (userIdList) {
      res["UserIdList"] = boost::any(*userIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("UserIdList") != m.end() && !m["UserIdList"].empty()) {
      userIdList = make_shared<string>(boost::any_cast<string>(m["UserIdList"]));
    }
  }


  virtual ~DescribeEndPointEventListRequest() = default;
};
class DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList : public Darabonba::Model {
public:
  shared_ptr<string> eventName{};
  shared_ptr<string> eventType{};
  shared_ptr<long> ts{};
  shared_ptr<string> tsInMs{};

  DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList() {}

  explicit DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (ts) {
      res["Ts"] = boost::any(*ts);
    }
    if (tsInMs) {
      res["TsInMs"] = boost::any(*tsInMs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("Ts") != m.end() && !m["Ts"].empty()) {
      ts = make_shared<long>(boost::any_cast<long>(m["Ts"]));
    }
    if (m.find("TsInMs") != m.end() && !m["TsInMs"].empty()) {
      tsInMs = make_shared<string>(boost::any_cast<string>(m["TsInMs"]));
    }
  }


  virtual ~DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList() = default;
};
class DescribeEndPointEventListResponseBodyNodesEventDataItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList>> eventList{};
  shared_ptr<long> ts{};

  DescribeEndPointEventListResponseBodyNodesEventDataItems() {}

  explicit DescribeEndPointEventListResponseBodyNodesEventDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventList) {
      vector<boost::any> temp1;
      for(auto item1:*eventList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventList"] = boost::any(temp1);
    }
    if (ts) {
      res["Ts"] = boost::any(*ts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventList") != m.end() && !m["EventList"].empty()) {
      if (typeid(vector<boost::any>) == m["EventList"].type()) {
        vector<DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventList = make_shared<vector<DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList>>(expect1);
      }
    }
    if (m.find("Ts") != m.end() && !m["Ts"].empty()) {
      ts = make_shared<long>(boost::any_cast<long>(m["Ts"]));
    }
  }


  virtual ~DescribeEndPointEventListResponseBodyNodesEventDataItems() = default;
};
class DescribeEndPointEventListResponseBodyNodes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEndPointEventListResponseBodyNodesEventDataItems>> eventDataItems{};
  shared_ptr<string> userId{};

  DescribeEndPointEventListResponseBodyNodes() {}

  explicit DescribeEndPointEventListResponseBodyNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventDataItems) {
      vector<boost::any> temp1;
      for(auto item1:*eventDataItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventDataItems"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventDataItems") != m.end() && !m["EventDataItems"].empty()) {
      if (typeid(vector<boost::any>) == m["EventDataItems"].type()) {
        vector<DescribeEndPointEventListResponseBodyNodesEventDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventDataItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndPointEventListResponseBodyNodesEventDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventDataItems = make_shared<vector<DescribeEndPointEventListResponseBodyNodesEventDataItems>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeEndPointEventListResponseBodyNodes() = default;
};
class DescribeEndPointEventListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEndPointEventListResponseBodyNodes>> nodes{};
  shared_ptr<string> requestId{};

  DescribeEndPointEventListResponseBody() {}

  explicit DescribeEndPointEventListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeEndPointEventListResponseBodyNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndPointEventListResponseBodyNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeEndPointEventListResponseBodyNodes>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeEndPointEventListResponseBody() = default;
};
class DescribeEndPointEventListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEndPointEventListResponseBody> body{};

  DescribeEndPointEventListResponse() {}

  explicit DescribeEndPointEventListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeEndPointEventListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEndPointEventListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEndPointEventListResponse() = default;
};
class DescribeEndPointMetricDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<string> metrics{};
  shared_ptr<string> pubCallIdList{};
  shared_ptr<string> pubUserId{};
  shared_ptr<string> subUserId{};

  DescribeEndPointMetricDataRequest() {}

  explicit DescribeEndPointMetricDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (pubCallIdList) {
      res["PubCallIdList"] = boost::any(*pubCallIdList);
    }
    if (pubUserId) {
      res["PubUserId"] = boost::any(*pubUserId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      metrics = make_shared<string>(boost::any_cast<string>(m["Metrics"]));
    }
    if (m.find("PubCallIdList") != m.end() && !m["PubCallIdList"].empty()) {
      pubCallIdList = make_shared<string>(boost::any_cast<string>(m["PubCallIdList"]));
    }
    if (m.find("PubUserId") != m.end() && !m["PubUserId"].empty()) {
      pubUserId = make_shared<string>(boost::any_cast<string>(m["PubUserId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~DescribeEndPointMetricDataRequest() = default;
};
class DescribeEndPointMetricDataResponseBodyPubMetricsNodes : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeEndPointMetricDataResponseBodyPubMetricsNodes() {}

  explicit DescribeEndPointMetricDataResponseBodyPubMetricsNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeEndPointMetricDataResponseBodyPubMetricsNodes() = default;
};
class DescribeEndPointMetricDataResponseBodyPubMetrics : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEndPointMetricDataResponseBodyPubMetricsNodes>> nodes{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};

  DescribeEndPointMetricDataResponseBodyPubMetrics() {}

  explicit DescribeEndPointMetricDataResponseBodyPubMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeEndPointMetricDataResponseBodyPubMetricsNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndPointMetricDataResponseBodyPubMetricsNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeEndPointMetricDataResponseBodyPubMetricsNodes>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeEndPointMetricDataResponseBodyPubMetrics() = default;
};
class DescribeEndPointMetricDataResponseBodySubMetricsNodes : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeEndPointMetricDataResponseBodySubMetricsNodes() {}

  explicit DescribeEndPointMetricDataResponseBodySubMetricsNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeEndPointMetricDataResponseBodySubMetricsNodes() = default;
};
class DescribeEndPointMetricDataResponseBodySubMetrics : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEndPointMetricDataResponseBodySubMetricsNodes>> nodes{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};

  DescribeEndPointMetricDataResponseBodySubMetrics() {}

  explicit DescribeEndPointMetricDataResponseBodySubMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeEndPointMetricDataResponseBodySubMetricsNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndPointMetricDataResponseBodySubMetricsNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeEndPointMetricDataResponseBodySubMetricsNodes>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeEndPointMetricDataResponseBodySubMetrics() = default;
};
class DescribeEndPointMetricDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEndPointMetricDataResponseBodyPubMetrics>> pubMetrics{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeEndPointMetricDataResponseBodySubMetrics>> subMetrics{};

  DescribeEndPointMetricDataResponseBody() {}

  explicit DescribeEndPointMetricDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pubMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*pubMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PubMetrics"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*subMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubMetrics"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PubMetrics") != m.end() && !m["PubMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["PubMetrics"].type()) {
        vector<DescribeEndPointMetricDataResponseBodyPubMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PubMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndPointMetricDataResponseBodyPubMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pubMetrics = make_shared<vector<DescribeEndPointMetricDataResponseBodyPubMetrics>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubMetrics") != m.end() && !m["SubMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["SubMetrics"].type()) {
        vector<DescribeEndPointMetricDataResponseBodySubMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndPointMetricDataResponseBodySubMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subMetrics = make_shared<vector<DescribeEndPointMetricDataResponseBodySubMetrics>>(expect1);
      }
    }
  }


  virtual ~DescribeEndPointMetricDataResponseBody() = default;
};
class DescribeEndPointMetricDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEndPointMetricDataResponseBody> body{};

  DescribeEndPointMetricDataResponse() {}

  explicit DescribeEndPointMetricDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeEndPointMetricDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEndPointMetricDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEndPointMetricDataResponse() = default;
};
class DescribeFaultDiagnosisFactorDistributionStatRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> startTs{};

  DescribeFaultDiagnosisFactorDistributionStatRequest() {}

  explicit DescribeFaultDiagnosisFactorDistributionStatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
  }


  virtual ~DescribeFaultDiagnosisFactorDistributionStatRequest() = default;
};
class DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList : public Darabonba::Model {
public:
  shared_ptr<string> factorId{};
  shared_ptr<long> userCount{};
  shared_ptr<double> userRatio{};

  DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList() {}

  explicit DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (factorId) {
      res["FactorId"] = boost::any(*factorId);
    }
    if (userCount) {
      res["UserCount"] = boost::any(*userCount);
    }
    if (userRatio) {
      res["UserRatio"] = boost::any(*userRatio);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FactorId") != m.end() && !m["FactorId"].empty()) {
      factorId = make_shared<string>(boost::any_cast<string>(m["FactorId"]));
    }
    if (m.find("UserCount") != m.end() && !m["UserCount"].empty()) {
      userCount = make_shared<long>(boost::any_cast<long>(m["UserCount"]));
    }
    if (m.find("UserRatio") != m.end() && !m["UserRatio"].empty()) {
      userRatio = make_shared<double>(boost::any_cast<double>(m["UserRatio"]));
    }
  }


  virtual ~DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList() = default;
};
class DescribeFaultDiagnosisFactorDistributionStatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList>> statList{};

  DescribeFaultDiagnosisFactorDistributionStatResponseBody() {}

  explicit DescribeFaultDiagnosisFactorDistributionStatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statList) {
      vector<boost::any> temp1;
      for(auto item1:*statList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StatList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StatList") != m.end() && !m["StatList"].empty()) {
      if (typeid(vector<boost::any>) == m["StatList"].type()) {
        vector<DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StatList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statList = make_shared<vector<DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList>>(expect1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisFactorDistributionStatResponseBody() = default;
};
class DescribeFaultDiagnosisFactorDistributionStatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFaultDiagnosisFactorDistributionStatResponseBody> body{};

  DescribeFaultDiagnosisFactorDistributionStatResponse() {}

  explicit DescribeFaultDiagnosisFactorDistributionStatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeFaultDiagnosisFactorDistributionStatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFaultDiagnosisFactorDistributionStatResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisFactorDistributionStatResponse() = default;
};
class DescribeFaultDiagnosisOverallDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> startTs{};
  shared_ptr<string> statDim{};

  DescribeFaultDiagnosisOverallDataRequest() {}

  explicit DescribeFaultDiagnosisOverallDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    if (statDim) {
      res["StatDim"] = boost::any(*statDim);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
    if (m.find("StatDim") != m.end() && !m["StatDim"].empty()) {
      statDim = make_shared<string>(boost::any_cast<string>(m["StatDim"]));
    }
  }


  virtual ~DescribeFaultDiagnosisOverallDataRequest() = default;
};
class DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes() {}

  explicit DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes() = default;
};
class DescribeFaultDiagnosisOverallDataResponseBodyMetricData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes>> nodes{};

  DescribeFaultDiagnosisOverallDataResponseBodyMetricData() {}

  explicit DescribeFaultDiagnosisOverallDataResponseBodyMetricData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes>>(expect1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisOverallDataResponseBodyMetricData() = default;
};
class DescribeFaultDiagnosisOverallDataResponseBodyOverallData : public Darabonba::Model {
public:
  shared_ptr<long> faultUserCount{};
  shared_ptr<double> faultUserRatio{};
  shared_ptr<long> totalUserCount{};

  DescribeFaultDiagnosisOverallDataResponseBodyOverallData() {}

  explicit DescribeFaultDiagnosisOverallDataResponseBodyOverallData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faultUserCount) {
      res["FaultUserCount"] = boost::any(*faultUserCount);
    }
    if (faultUserRatio) {
      res["FaultUserRatio"] = boost::any(*faultUserRatio);
    }
    if (totalUserCount) {
      res["TotalUserCount"] = boost::any(*totalUserCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaultUserCount") != m.end() && !m["FaultUserCount"].empty()) {
      faultUserCount = make_shared<long>(boost::any_cast<long>(m["FaultUserCount"]));
    }
    if (m.find("FaultUserRatio") != m.end() && !m["FaultUserRatio"].empty()) {
      faultUserRatio = make_shared<double>(boost::any_cast<double>(m["FaultUserRatio"]));
    }
    if (m.find("TotalUserCount") != m.end() && !m["TotalUserCount"].empty()) {
      totalUserCount = make_shared<long>(boost::any_cast<long>(m["TotalUserCount"]));
    }
  }


  virtual ~DescribeFaultDiagnosisOverallDataResponseBodyOverallData() = default;
};
class DescribeFaultDiagnosisOverallDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeFaultDiagnosisOverallDataResponseBodyMetricData> metricData{};
  shared_ptr<DescribeFaultDiagnosisOverallDataResponseBodyOverallData> overallData{};
  shared_ptr<string> requestId{};

  DescribeFaultDiagnosisOverallDataResponseBody() {}

  explicit DescribeFaultDiagnosisOverallDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricData) {
      res["MetricData"] = metricData ? boost::any(metricData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (overallData) {
      res["OverallData"] = overallData ? boost::any(overallData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricData") != m.end() && !m["MetricData"].empty()) {
      if (typeid(map<string, boost::any>) == m["MetricData"].type()) {
        DescribeFaultDiagnosisOverallDataResponseBodyMetricData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MetricData"]));
        metricData = make_shared<DescribeFaultDiagnosisOverallDataResponseBodyMetricData>(model1);
      }
    }
    if (m.find("OverallData") != m.end() && !m["OverallData"].empty()) {
      if (typeid(map<string, boost::any>) == m["OverallData"].type()) {
        DescribeFaultDiagnosisOverallDataResponseBodyOverallData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OverallData"]));
        overallData = make_shared<DescribeFaultDiagnosisOverallDataResponseBodyOverallData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeFaultDiagnosisOverallDataResponseBody() = default;
};
class DescribeFaultDiagnosisOverallDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFaultDiagnosisOverallDataResponseBody> body{};

  DescribeFaultDiagnosisOverallDataResponse() {}

  explicit DescribeFaultDiagnosisOverallDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeFaultDiagnosisOverallDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFaultDiagnosisOverallDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisOverallDataResponse() = default;
};
class DescribeFaultDiagnosisUserDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<string> faultType{};
  shared_ptr<bool> queryCallUserInfo{};
  shared_ptr<string> userId{};

  DescribeFaultDiagnosisUserDetailRequest() {}

  explicit DescribeFaultDiagnosisUserDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (faultType) {
      res["FaultType"] = boost::any(*faultType);
    }
    if (queryCallUserInfo) {
      res["QueryCallUserInfo"] = boost::any(*queryCallUserInfo);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("FaultType") != m.end() && !m["FaultType"].empty()) {
      faultType = make_shared<string>(boost::any_cast<string>(m["FaultType"]));
    }
    if (m.find("QueryCallUserInfo") != m.end() && !m["QueryCallUserInfo"].empty()) {
      queryCallUserInfo = make_shared<bool>(boost::any_cast<bool>(m["QueryCallUserInfo"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailRequest() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyCallInfo : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};

  DescribeFaultDiagnosisUserDetailResponseBodyCallInfo() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyCallInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyCallInfo() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList : public Darabonba::Model {
public:
  shared_ptr<string> eventName{};
  shared_ptr<string> eventType{};
  shared_ptr<long> ts{};

  DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (ts) {
      res["Ts"] = boost::any(*ts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("Ts") != m.end() && !m["Ts"].empty()) {
      ts = make_shared<long>(boost::any_cast<long>(m["Ts"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList>> eventList{};
  shared_ptr<long> ts{};

  DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventList) {
      vector<boost::any> temp1;
      for(auto item1:*eventList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventList"] = boost::any(temp1);
    }
    if (ts) {
      res["Ts"] = boost::any(*ts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventList") != m.end() && !m["EventList"].empty()) {
      if (typeid(vector<boost::any>) == m["EventList"].type()) {
        vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventList = make_shared<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList>>(expect1);
      }
    }
    if (m.find("Ts") != m.end() && !m["Ts"].empty()) {
      ts = make_shared<long>(boost::any_cast<long>(m["Ts"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems>> eventDataItems{};
  shared_ptr<string> role{};
  shared_ptr<string> userId{};

  DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventDataItems) {
      vector<boost::any> temp1;
      for(auto item1:*eventDataItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventDataItems"] = boost::any(temp1);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventDataItems") != m.end() && !m["EventDataItems"].empty()) {
      if (typeid(vector<boost::any>) == m["EventDataItems"].type()) {
        vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventDataItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventDataItems = make_shared<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems>>(expect1);
      }
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes>> nodes{};
  shared_ptr<string> role{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};

  DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes>>(expect1);
      }
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyFactorList : public Darabonba::Model {
public:
  shared_ptr<string> factorId{};
  shared_ptr<string> faultSource{};
  shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas>> relatedEventDatas{};
  shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas>> relatedMetricDatas{};

  DescribeFaultDiagnosisUserDetailResponseBodyFactorList() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyFactorList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (factorId) {
      res["FactorId"] = boost::any(*factorId);
    }
    if (faultSource) {
      res["FaultSource"] = boost::any(*faultSource);
    }
    if (relatedEventDatas) {
      vector<boost::any> temp1;
      for(auto item1:*relatedEventDatas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelatedEventDatas"] = boost::any(temp1);
    }
    if (relatedMetricDatas) {
      vector<boost::any> temp1;
      for(auto item1:*relatedMetricDatas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelatedMetricDatas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FactorId") != m.end() && !m["FactorId"].empty()) {
      factorId = make_shared<string>(boost::any_cast<string>(m["FactorId"]));
    }
    if (m.find("FaultSource") != m.end() && !m["FaultSource"].empty()) {
      faultSource = make_shared<string>(boost::any_cast<string>(m["FaultSource"]));
    }
    if (m.find("RelatedEventDatas") != m.end() && !m["RelatedEventDatas"].empty()) {
      if (typeid(vector<boost::any>) == m["RelatedEventDatas"].type()) {
        vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelatedEventDatas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedEventDatas = make_shared<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas>>(expect1);
      }
    }
    if (m.find("RelatedMetricDatas") != m.end() && !m["RelatedMetricDatas"].empty()) {
      if (typeid(vector<boost::any>) == m["RelatedMetricDatas"].type()) {
        vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelatedMetricDatas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedMetricDatas = make_shared<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas>>(expect1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFactorList() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes : public Darabonba::Model {
public:
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes>> nodes{};

  DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes>>(expect1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods : public Darabonba::Model {
public:
  shared_ptr<long> joinTs{};
  shared_ptr<long> leaveTs{};

  DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joinTs) {
      res["JoinTs"] = boost::any(*joinTs);
    }
    if (leaveTs) {
      res["LeaveTs"] = boost::any(*leaveTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JoinTs") != m.end() && !m["JoinTs"].empty()) {
      joinTs = make_shared<long>(boost::any_cast<long>(m["JoinTs"]));
    }
    if (m.find("LeaveTs") != m.end() && !m["LeaveTs"].empty()) {
      leaveTs = make_shared<long>(boost::any_cast<long>(m["LeaveTs"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyUserDetail : public Darabonba::Model {
public:
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};
  shared_ptr<string> location{};
  shared_ptr<string> network{};
  shared_ptr<long> onlineDuration{};
  shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods>> onlinePeriods{};
  shared_ptr<string> os{};
  shared_ptr<string> sdkVersion{};
  shared_ptr<string> userId{};

  DescribeFaultDiagnosisUserDetailResponseBodyUserDetail() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyUserDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (onlineDuration) {
      res["OnlineDuration"] = boost::any(*onlineDuration);
    }
    if (onlinePeriods) {
      vector<boost::any> temp1;
      for(auto item1:*onlinePeriods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnlinePeriods"] = boost::any(temp1);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (sdkVersion) {
      res["SdkVersion"] = boost::any(*sdkVersion);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("OnlineDuration") != m.end() && !m["OnlineDuration"].empty()) {
      onlineDuration = make_shared<long>(boost::any_cast<long>(m["OnlineDuration"]));
    }
    if (m.find("OnlinePeriods") != m.end() && !m["OnlinePeriods"].empty()) {
      if (typeid(vector<boost::any>) == m["OnlinePeriods"].type()) {
        vector<DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnlinePeriods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onlinePeriods = make_shared<vector<DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods>>(expect1);
      }
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("SdkVersion") != m.end() && !m["SdkVersion"].empty()) {
      sdkVersion = make_shared<string>(boost::any_cast<string>(m["SdkVersion"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyUserDetail() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeFaultDiagnosisUserDetailResponseBodyCallInfo> callInfo{};
  shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorList>> factorList{};
  shared_ptr<DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData> faultMetricData{};
  shared_ptr<vector<string>> networkOperators{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeFaultDiagnosisUserDetailResponseBodyUserDetail> userDetail{};

  DescribeFaultDiagnosisUserDetailResponseBody() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callInfo) {
      res["CallInfo"] = callInfo ? boost::any(callInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (factorList) {
      vector<boost::any> temp1;
      for(auto item1:*factorList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FactorList"] = boost::any(temp1);
    }
    if (faultMetricData) {
      res["FaultMetricData"] = faultMetricData ? boost::any(faultMetricData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (networkOperators) {
      res["NetworkOperators"] = boost::any(*networkOperators);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userDetail) {
      res["UserDetail"] = userDetail ? boost::any(userDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallInfo") != m.end() && !m["CallInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallInfo"].type()) {
        DescribeFaultDiagnosisUserDetailResponseBodyCallInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallInfo"]));
        callInfo = make_shared<DescribeFaultDiagnosisUserDetailResponseBodyCallInfo>(model1);
      }
    }
    if (m.find("FactorList") != m.end() && !m["FactorList"].empty()) {
      if (typeid(vector<boost::any>) == m["FactorList"].type()) {
        vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FactorList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserDetailResponseBodyFactorList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        factorList = make_shared<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorList>>(expect1);
      }
    }
    if (m.find("FaultMetricData") != m.end() && !m["FaultMetricData"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaultMetricData"].type()) {
        DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaultMetricData"]));
        faultMetricData = make_shared<DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData>(model1);
      }
    }
    if (m.find("NetworkOperators") != m.end() && !m["NetworkOperators"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NetworkOperators"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NetworkOperators"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      networkOperators = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserDetail") != m.end() && !m["UserDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserDetail"].type()) {
        DescribeFaultDiagnosisUserDetailResponseBodyUserDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserDetail"]));
        userDetail = make_shared<DescribeFaultDiagnosisUserDetailResponseBodyUserDetail>(model1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBody() = default;
};
class DescribeFaultDiagnosisUserDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFaultDiagnosisUserDetailResponseBody> body{};

  DescribeFaultDiagnosisUserDetailResponse() {}

  explicit DescribeFaultDiagnosisUserDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeFaultDiagnosisUserDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFaultDiagnosisUserDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponse() = default;
};
class DescribeFaultDiagnosisUserListRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> endTs{};
  shared_ptr<string> faultTypes{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTs{};
  shared_ptr<string> userId{};

  DescribeFaultDiagnosisUserListRequest() {}

  explicit DescribeFaultDiagnosisUserListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (faultTypes) {
      res["FaultTypes"] = boost::any(*faultTypes);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("FaultTypes") != m.end() && !m["FaultTypes"].empty()) {
      faultTypes = make_shared<string>(boost::any_cast<string>(m["FaultTypes"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserListRequest() = default;
};
class DescribeFaultDiagnosisUserListResponseBodyUserListFaultList : public Darabonba::Model {
public:
  shared_ptr<string> faultType{};

  DescribeFaultDiagnosisUserListResponseBodyUserListFaultList() {}

  explicit DescribeFaultDiagnosisUserListResponseBodyUserListFaultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faultType) {
      res["FaultType"] = boost::any(*faultType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaultType") != m.end() && !m["FaultType"].empty()) {
      faultType = make_shared<string>(boost::any_cast<string>(m["FaultType"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserListResponseBodyUserListFaultList() = default;
};
class DescribeFaultDiagnosisUserListResponseBodyUserList : public Darabonba::Model {
public:
  shared_ptr<long> channelCreatedTs{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<vector<DescribeFaultDiagnosisUserListResponseBodyUserListFaultList>> faultList{};
  shared_ptr<string> userId{};

  DescribeFaultDiagnosisUserListResponseBodyUserList() {}

  explicit DescribeFaultDiagnosisUserListResponseBodyUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelCreatedTs) {
      res["ChannelCreatedTs"] = boost::any(*channelCreatedTs);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (faultList) {
      vector<boost::any> temp1;
      for(auto item1:*faultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaultList"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelCreatedTs") != m.end() && !m["ChannelCreatedTs"].empty()) {
      channelCreatedTs = make_shared<long>(boost::any_cast<long>(m["ChannelCreatedTs"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("FaultList") != m.end() && !m["FaultList"].empty()) {
      if (typeid(vector<boost::any>) == m["FaultList"].type()) {
        vector<DescribeFaultDiagnosisUserListResponseBodyUserListFaultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserListResponseBodyUserListFaultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faultList = make_shared<vector<DescribeFaultDiagnosisUserListResponseBodyUserListFaultList>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserListResponseBodyUserList() = default;
};
class DescribeFaultDiagnosisUserListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCnt{};
  shared_ptr<vector<DescribeFaultDiagnosisUserListResponseBodyUserList>> userList{};

  DescribeFaultDiagnosisUserListResponseBody() {}

  explicit DescribeFaultDiagnosisUserListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCnt) {
      res["TotalCnt"] = boost::any(*totalCnt);
    }
    if (userList) {
      vector<boost::any> temp1;
      for(auto item1:*userList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCnt") != m.end() && !m["TotalCnt"].empty()) {
      totalCnt = make_shared<long>(boost::any_cast<long>(m["TotalCnt"]));
    }
    if (m.find("UserList") != m.end() && !m["UserList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserList"].type()) {
        vector<DescribeFaultDiagnosisUserListResponseBodyUserList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserListResponseBodyUserList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userList = make_shared<vector<DescribeFaultDiagnosisUserListResponseBodyUserList>>(expect1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisUserListResponseBody() = default;
};
class DescribeFaultDiagnosisUserListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFaultDiagnosisUserListResponseBody> body{};

  DescribeFaultDiagnosisUserListResponse() {}

  explicit DescribeFaultDiagnosisUserListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeFaultDiagnosisUserListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFaultDiagnosisUserListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisUserListResponse() = default;
};
class DescribeMPULayoutInfoListRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> layoutId{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeMPULayoutInfoListRequest() {}

  explicit DescribeMPULayoutInfoListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (layoutId) {
      res["LayoutId"] = boost::any(*layoutId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("LayoutId") != m.end() && !m["LayoutId"].empty()) {
      layoutId = make_shared<long>(boost::any_cast<long>(m["LayoutId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeMPULayoutInfoListRequest() = default;
};
class DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes : public Darabonba::Model {
public:
  shared_ptr<double> height{};
  shared_ptr<long> majorPane{};
  shared_ptr<long> paneId{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes() {}

  explicit DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (majorPane) {
      res["MajorPane"] = boost::any(*majorPane);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("MajorPane") != m.end() && !m["MajorPane"].empty()) {
      majorPane = make_shared<long>(boost::any_cast<long>(m["MajorPane"]));
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes() = default;
};
class DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes>> panes{};

  DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes() {}

  explicit DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (panes) {
      vector<boost::any> temp1;
      for(auto item1:*panes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Panes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Panes") != m.end() && !m["Panes"].empty()) {
      if (typeid(vector<boost::any>) == m["Panes"].type()) {
        vector<DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Panes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        panes = make_shared<vector<DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanesPanes>>(expect1);
      }
    }
  }


  virtual ~DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes() = default;
};
class DescribeMPULayoutInfoListResponseBodyLayoutsLayout : public Darabonba::Model {
public:
  shared_ptr<long> audioMixCount{};
  shared_ptr<long> layoutId{};
  shared_ptr<string> name{};
  shared_ptr<DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes> panes{};

  DescribeMPULayoutInfoListResponseBodyLayoutsLayout() {}

  explicit DescribeMPULayoutInfoListResponseBodyLayoutsLayout(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioMixCount) {
      res["AudioMixCount"] = boost::any(*audioMixCount);
    }
    if (layoutId) {
      res["LayoutId"] = boost::any(*layoutId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (panes) {
      res["Panes"] = panes ? boost::any(panes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioMixCount") != m.end() && !m["AudioMixCount"].empty()) {
      audioMixCount = make_shared<long>(boost::any_cast<long>(m["AudioMixCount"]));
    }
    if (m.find("LayoutId") != m.end() && !m["LayoutId"].empty()) {
      layoutId = make_shared<long>(boost::any_cast<long>(m["LayoutId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Panes") != m.end() && !m["Panes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Panes"].type()) {
        DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Panes"]));
        panes = make_shared<DescribeMPULayoutInfoListResponseBodyLayoutsLayoutPanes>(model1);
      }
    }
  }


  virtual ~DescribeMPULayoutInfoListResponseBodyLayoutsLayout() = default;
};
class DescribeMPULayoutInfoListResponseBodyLayouts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMPULayoutInfoListResponseBodyLayoutsLayout>> layout{};

  DescribeMPULayoutInfoListResponseBodyLayouts() {}

  explicit DescribeMPULayoutInfoListResponseBodyLayouts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layout) {
      vector<boost::any> temp1;
      for(auto item1:*layout){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Layout"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Layout") != m.end() && !m["Layout"].empty()) {
      if (typeid(vector<boost::any>) == m["Layout"].type()) {
        vector<DescribeMPULayoutInfoListResponseBodyLayoutsLayout> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Layout"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMPULayoutInfoListResponseBodyLayoutsLayout model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        layout = make_shared<vector<DescribeMPULayoutInfoListResponseBodyLayoutsLayout>>(expect1);
      }
    }
  }


  virtual ~DescribeMPULayoutInfoListResponseBodyLayouts() = default;
};
class DescribeMPULayoutInfoListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeMPULayoutInfoListResponseBodyLayouts> layouts{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};

  DescribeMPULayoutInfoListResponseBody() {}

  explicit DescribeMPULayoutInfoListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layouts) {
      res["Layouts"] = layouts ? boost::any(layouts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Layouts") != m.end() && !m["Layouts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Layouts"].type()) {
        DescribeMPULayoutInfoListResponseBodyLayouts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Layouts"]));
        layouts = make_shared<DescribeMPULayoutInfoListResponseBodyLayouts>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeMPULayoutInfoListResponseBody() = default;
};
class DescribeMPULayoutInfoListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMPULayoutInfoListResponseBody> body{};

  DescribeMPULayoutInfoListResponse() {}

  explicit DescribeMPULayoutInfoListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeMPULayoutInfoListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMPULayoutInfoListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMPULayoutInfoListResponse() = default;
};
class DescribePubUserListBySubUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<string> subUserId{};

  DescribePubUserListBySubUserRequest() {}

  explicit DescribePubUserListBySubUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~DescribePubUserListBySubUserRequest() = default;
};
class DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods : public Darabonba::Model {
public:
  shared_ptr<long> joinTs{};
  shared_ptr<long> leaveTs{};

  DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods() {}

  explicit DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joinTs) {
      res["JoinTs"] = boost::any(*joinTs);
    }
    if (leaveTs) {
      res["LeaveTs"] = boost::any(*leaveTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JoinTs") != m.end() && !m["JoinTs"].empty()) {
      joinTs = make_shared<long>(boost::any_cast<long>(m["JoinTs"]));
    }
    if (m.find("LeaveTs") != m.end() && !m["LeaveTs"].empty()) {
      leaveTs = make_shared<long>(boost::any_cast<long>(m["LeaveTs"]));
    }
  }


  virtual ~DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods() = default;
};
class DescribePubUserListBySubUserResponseBodyPubUserDetailList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> callIdList{};
  shared_ptr<string> clientType{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};
  shared_ptr<string> location{};
  shared_ptr<string> network{};
  shared_ptr<vector<string>> networkList{};
  shared_ptr<long> onlineDuration{};
  shared_ptr<vector<DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods>> onlinePeriods{};
  shared_ptr<string> os{};
  shared_ptr<vector<string>> osList{};
  shared_ptr<vector<string>> roles{};
  shared_ptr<string> sdkVersion{};
  shared_ptr<vector<string>> sdkVersionList{};
  shared_ptr<string> userId{};
  shared_ptr<string> userIdAlias{};

  DescribePubUserListBySubUserResponseBodyPubUserDetailList() {}

  explicit DescribePubUserListBySubUserResponseBodyPubUserDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callIdList) {
      res["CallIdList"] = boost::any(*callIdList);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (networkList) {
      res["NetworkList"] = boost::any(*networkList);
    }
    if (onlineDuration) {
      res["OnlineDuration"] = boost::any(*onlineDuration);
    }
    if (onlinePeriods) {
      vector<boost::any> temp1;
      for(auto item1:*onlinePeriods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnlinePeriods"] = boost::any(temp1);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (osList) {
      res["OsList"] = boost::any(*osList);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (sdkVersion) {
      res["SdkVersion"] = boost::any(*sdkVersion);
    }
    if (sdkVersionList) {
      res["SdkVersionList"] = boost::any(*sdkVersionList);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userIdAlias) {
      res["UserIdAlias"] = boost::any(*userIdAlias);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallIdList") != m.end() && !m["CallIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CallIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CallIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      callIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("NetworkList") != m.end() && !m["NetworkList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NetworkList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NetworkList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      networkList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OnlineDuration") != m.end() && !m["OnlineDuration"].empty()) {
      onlineDuration = make_shared<long>(boost::any_cast<long>(m["OnlineDuration"]));
    }
    if (m.find("OnlinePeriods") != m.end() && !m["OnlinePeriods"].empty()) {
      if (typeid(vector<boost::any>) == m["OnlinePeriods"].type()) {
        vector<DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnlinePeriods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onlinePeriods = make_shared<vector<DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods>>(expect1);
      }
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("OsList") != m.end() && !m["OsList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OsList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OsList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      osList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Roles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SdkVersion") != m.end() && !m["SdkVersion"].empty()) {
      sdkVersion = make_shared<string>(boost::any_cast<string>(m["SdkVersion"]));
    }
    if (m.find("SdkVersionList") != m.end() && !m["SdkVersionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SdkVersionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SdkVersionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sdkVersionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserIdAlias") != m.end() && !m["UserIdAlias"].empty()) {
      userIdAlias = make_shared<string>(boost::any_cast<string>(m["UserIdAlias"]));
    }
  }


  virtual ~DescribePubUserListBySubUserResponseBodyPubUserDetailList() = default;
};
class DescribePubUserListBySubUserResponseBodySubUserDetailOnlinePeriods : public Darabonba::Model {
public:
  shared_ptr<long> joinTs{};
  shared_ptr<long> leaveTs{};

  DescribePubUserListBySubUserResponseBodySubUserDetailOnlinePeriods() {}

  explicit DescribePubUserListBySubUserResponseBodySubUserDetailOnlinePeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joinTs) {
      res["JoinTs"] = boost::any(*joinTs);
    }
    if (leaveTs) {
      res["LeaveTs"] = boost::any(*leaveTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JoinTs") != m.end() && !m["JoinTs"].empty()) {
      joinTs = make_shared<long>(boost::any_cast<long>(m["JoinTs"]));
    }
    if (m.find("LeaveTs") != m.end() && !m["LeaveTs"].empty()) {
      leaveTs = make_shared<long>(boost::any_cast<long>(m["LeaveTs"]));
    }
  }


  virtual ~DescribePubUserListBySubUserResponseBodySubUserDetailOnlinePeriods() = default;
};
class DescribePubUserListBySubUserResponseBodySubUserDetail : public Darabonba::Model {
public:
  shared_ptr<string> clientType{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};
  shared_ptr<string> location{};
  shared_ptr<string> network{};
  shared_ptr<vector<string>> networkList{};
  shared_ptr<long> onlineDuration{};
  shared_ptr<vector<DescribePubUserListBySubUserResponseBodySubUserDetailOnlinePeriods>> onlinePeriods{};
  shared_ptr<string> os{};
  shared_ptr<vector<string>> osList{};
  shared_ptr<vector<string>> roles{};
  shared_ptr<string> sdkVersion{};
  shared_ptr<vector<string>> sdkVersionList{};
  shared_ptr<string> userId{};
  shared_ptr<string> userIdAlias{};

  DescribePubUserListBySubUserResponseBodySubUserDetail() {}

  explicit DescribePubUserListBySubUserResponseBodySubUserDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (networkList) {
      res["NetworkList"] = boost::any(*networkList);
    }
    if (onlineDuration) {
      res["OnlineDuration"] = boost::any(*onlineDuration);
    }
    if (onlinePeriods) {
      vector<boost::any> temp1;
      for(auto item1:*onlinePeriods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnlinePeriods"] = boost::any(temp1);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (osList) {
      res["OsList"] = boost::any(*osList);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (sdkVersion) {
      res["SdkVersion"] = boost::any(*sdkVersion);
    }
    if (sdkVersionList) {
      res["SdkVersionList"] = boost::any(*sdkVersionList);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userIdAlias) {
      res["UserIdAlias"] = boost::any(*userIdAlias);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("NetworkList") != m.end() && !m["NetworkList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NetworkList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NetworkList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      networkList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OnlineDuration") != m.end() && !m["OnlineDuration"].empty()) {
      onlineDuration = make_shared<long>(boost::any_cast<long>(m["OnlineDuration"]));
    }
    if (m.find("OnlinePeriods") != m.end() && !m["OnlinePeriods"].empty()) {
      if (typeid(vector<boost::any>) == m["OnlinePeriods"].type()) {
        vector<DescribePubUserListBySubUserResponseBodySubUserDetailOnlinePeriods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnlinePeriods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePubUserListBySubUserResponseBodySubUserDetailOnlinePeriods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onlinePeriods = make_shared<vector<DescribePubUserListBySubUserResponseBodySubUserDetailOnlinePeriods>>(expect1);
      }
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("OsList") != m.end() && !m["OsList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OsList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OsList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      osList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Roles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SdkVersion") != m.end() && !m["SdkVersion"].empty()) {
      sdkVersion = make_shared<string>(boost::any_cast<string>(m["SdkVersion"]));
    }
    if (m.find("SdkVersionList") != m.end() && !m["SdkVersionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SdkVersionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SdkVersionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sdkVersionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserIdAlias") != m.end() && !m["UserIdAlias"].empty()) {
      userIdAlias = make_shared<string>(boost::any_cast<string>(m["UserIdAlias"]));
    }
  }


  virtual ~DescribePubUserListBySubUserResponseBodySubUserDetail() = default;
};
class DescribePubUserListBySubUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> callStatus{};
  shared_ptr<vector<DescribePubUserListBySubUserResponseBodyPubUserDetailList>> pubUserDetailList{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribePubUserListBySubUserResponseBodySubUserDetail> subUserDetail{};

  DescribePubUserListBySubUserResponseBody() {}

  explicit DescribePubUserListBySubUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (pubUserDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*pubUserDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PubUserDetailList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subUserDetail) {
      res["SubUserDetail"] = subUserDetail ? boost::any(subUserDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("PubUserDetailList") != m.end() && !m["PubUserDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["PubUserDetailList"].type()) {
        vector<DescribePubUserListBySubUserResponseBodyPubUserDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PubUserDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePubUserListBySubUserResponseBodyPubUserDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pubUserDetailList = make_shared<vector<DescribePubUserListBySubUserResponseBodyPubUserDetailList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubUserDetail") != m.end() && !m["SubUserDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubUserDetail"].type()) {
        DescribePubUserListBySubUserResponseBodySubUserDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubUserDetail"]));
        subUserDetail = make_shared<DescribePubUserListBySubUserResponseBodySubUserDetail>(model1);
      }
    }
  }


  virtual ~DescribePubUserListBySubUserResponseBody() = default;
};
class DescribePubUserListBySubUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePubUserListBySubUserResponseBody> body{};

  DescribePubUserListBySubUserResponse() {}

  explicit DescribePubUserListBySubUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePubUserListBySubUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePubUserListBySubUserResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePubUserListBySubUserResponse() = default;
};
class DescribeQoeMetricDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<string> userId{};

  DescribeQoeMetricDataRequest() {}

  explicit DescribeQoeMetricDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeQoeMetricDataRequest() = default;
};
class DescribeQoeMetricDataResponseBodyAudioDataNodes : public Darabonba::Model {
public:
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeQoeMetricDataResponseBodyAudioDataNodes() {}

  explicit DescribeQoeMetricDataResponseBodyAudioDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeQoeMetricDataResponseBodyAudioDataNodes() = default;
};
class DescribeQoeMetricDataResponseBodyAudioData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeQoeMetricDataResponseBodyAudioDataNodes>> nodes{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};

  DescribeQoeMetricDataResponseBodyAudioData() {}

  explicit DescribeQoeMetricDataResponseBodyAudioData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeQoeMetricDataResponseBodyAudioDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQoeMetricDataResponseBodyAudioDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeQoeMetricDataResponseBodyAudioDataNodes>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeQoeMetricDataResponseBodyAudioData() = default;
};
class DescribeQoeMetricDataResponseBodyVideoDataNodes : public Darabonba::Model {
public:
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeQoeMetricDataResponseBodyVideoDataNodes() {}

  explicit DescribeQoeMetricDataResponseBodyVideoDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeQoeMetricDataResponseBodyVideoDataNodes() = default;
};
class DescribeQoeMetricDataResponseBodyVideoData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeQoeMetricDataResponseBodyVideoDataNodes>> nodes{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};

  DescribeQoeMetricDataResponseBodyVideoData() {}

  explicit DescribeQoeMetricDataResponseBodyVideoData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeQoeMetricDataResponseBodyVideoDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQoeMetricDataResponseBodyVideoDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeQoeMetricDataResponseBodyVideoDataNodes>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeQoeMetricDataResponseBodyVideoData() = default;
};
class DescribeQoeMetricDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeQoeMetricDataResponseBodyAudioData>> audioData{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeQoeMetricDataResponseBodyVideoData>> videoData{};

  DescribeQoeMetricDataResponseBody() {}

  explicit DescribeQoeMetricDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioData) {
      vector<boost::any> temp1;
      for(auto item1:*audioData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AudioData"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (videoData) {
      vector<boost::any> temp1;
      for(auto item1:*videoData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VideoData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioData") != m.end() && !m["AudioData"].empty()) {
      if (typeid(vector<boost::any>) == m["AudioData"].type()) {
        vector<DescribeQoeMetricDataResponseBodyAudioData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AudioData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQoeMetricDataResponseBodyAudioData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        audioData = make_shared<vector<DescribeQoeMetricDataResponseBodyAudioData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VideoData") != m.end() && !m["VideoData"].empty()) {
      if (typeid(vector<boost::any>) == m["VideoData"].type()) {
        vector<DescribeQoeMetricDataResponseBodyVideoData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VideoData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQoeMetricDataResponseBodyVideoData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoData = make_shared<vector<DescribeQoeMetricDataResponseBodyVideoData>>(expect1);
      }
    }
  }


  virtual ~DescribeQoeMetricDataResponseBody() = default;
};
class DescribeQoeMetricDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeQoeMetricDataResponseBody> body{};

  DescribeQoeMetricDataResponse() {}

  explicit DescribeQoeMetricDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeQoeMetricDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeQoeMetricDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeQoeMetricDataResponse() = default;
};
class DescribeQualityAreaDistributionStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endDate{};
  shared_ptr<string> parentArea{};
  shared_ptr<long> startDate{};

  DescribeQualityAreaDistributionStatDataRequest() {}

  explicit DescribeQualityAreaDistributionStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (parentArea) {
      res["ParentArea"] = boost::any(*parentArea);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("ParentArea") != m.end() && !m["ParentArea"].empty()) {
      parentArea = make_shared<string>(boost::any_cast<string>(m["ParentArea"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
  }


  virtual ~DescribeQualityAreaDistributionStatDataRequest() = default;
};
class DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList : public Darabonba::Model {
public:
  shared_ptr<long> audioDelay{};
  shared_ptr<string> audioHighQualityTransmissionRate{};
  shared_ptr<string> audioStuckRate{};
  shared_ptr<string> callDurationRatio{};
  shared_ptr<string> joinChannelSucFiveSecRate{};
  shared_ptr<string> joinChannelSucRate{};
  shared_ptr<string> name{};
  shared_ptr<long> videoDelay{};
  shared_ptr<long> videoFirstPicDuration{};
  shared_ptr<string> videoHighQualityTransmissionRate{};
  shared_ptr<string> videoStuckRate{};

  DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList() {}

  explicit DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioDelay) {
      res["AudioDelay"] = boost::any(*audioDelay);
    }
    if (audioHighQualityTransmissionRate) {
      res["AudioHighQualityTransmissionRate"] = boost::any(*audioHighQualityTransmissionRate);
    }
    if (audioStuckRate) {
      res["AudioStuckRate"] = boost::any(*audioStuckRate);
    }
    if (callDurationRatio) {
      res["CallDurationRatio"] = boost::any(*callDurationRatio);
    }
    if (joinChannelSucFiveSecRate) {
      res["JoinChannelSucFiveSecRate"] = boost::any(*joinChannelSucFiveSecRate);
    }
    if (joinChannelSucRate) {
      res["JoinChannelSucRate"] = boost::any(*joinChannelSucRate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (videoDelay) {
      res["VideoDelay"] = boost::any(*videoDelay);
    }
    if (videoFirstPicDuration) {
      res["VideoFirstPicDuration"] = boost::any(*videoFirstPicDuration);
    }
    if (videoHighQualityTransmissionRate) {
      res["VideoHighQualityTransmissionRate"] = boost::any(*videoHighQualityTransmissionRate);
    }
    if (videoStuckRate) {
      res["VideoStuckRate"] = boost::any(*videoStuckRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioDelay") != m.end() && !m["AudioDelay"].empty()) {
      audioDelay = make_shared<long>(boost::any_cast<long>(m["AudioDelay"]));
    }
    if (m.find("AudioHighQualityTransmissionRate") != m.end() && !m["AudioHighQualityTransmissionRate"].empty()) {
      audioHighQualityTransmissionRate = make_shared<string>(boost::any_cast<string>(m["AudioHighQualityTransmissionRate"]));
    }
    if (m.find("AudioStuckRate") != m.end() && !m["AudioStuckRate"].empty()) {
      audioStuckRate = make_shared<string>(boost::any_cast<string>(m["AudioStuckRate"]));
    }
    if (m.find("CallDurationRatio") != m.end() && !m["CallDurationRatio"].empty()) {
      callDurationRatio = make_shared<string>(boost::any_cast<string>(m["CallDurationRatio"]));
    }
    if (m.find("JoinChannelSucFiveSecRate") != m.end() && !m["JoinChannelSucFiveSecRate"].empty()) {
      joinChannelSucFiveSecRate = make_shared<string>(boost::any_cast<string>(m["JoinChannelSucFiveSecRate"]));
    }
    if (m.find("JoinChannelSucRate") != m.end() && !m["JoinChannelSucRate"].empty()) {
      joinChannelSucRate = make_shared<string>(boost::any_cast<string>(m["JoinChannelSucRate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("VideoDelay") != m.end() && !m["VideoDelay"].empty()) {
      videoDelay = make_shared<long>(boost::any_cast<long>(m["VideoDelay"]));
    }
    if (m.find("VideoFirstPicDuration") != m.end() && !m["VideoFirstPicDuration"].empty()) {
      videoFirstPicDuration = make_shared<long>(boost::any_cast<long>(m["VideoFirstPicDuration"]));
    }
    if (m.find("VideoHighQualityTransmissionRate") != m.end() && !m["VideoHighQualityTransmissionRate"].empty()) {
      videoHighQualityTransmissionRate = make_shared<string>(boost::any_cast<string>(m["VideoHighQualityTransmissionRate"]));
    }
    if (m.find("VideoStuckRate") != m.end() && !m["VideoStuckRate"].empty()) {
      videoStuckRate = make_shared<string>(boost::any_cast<string>(m["VideoStuckRate"]));
    }
  }


  virtual ~DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList() = default;
};
class DescribeQualityAreaDistributionStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList>> qualityStatDataList{};
  shared_ptr<string> requestId{};

  DescribeQualityAreaDistributionStatDataResponseBody() {}

  explicit DescribeQualityAreaDistributionStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualityStatDataList) {
      vector<boost::any> temp1;
      for(auto item1:*qualityStatDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QualityStatDataList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QualityStatDataList") != m.end() && !m["QualityStatDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["QualityStatDataList"].type()) {
        vector<DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QualityStatDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qualityStatDataList = make_shared<vector<DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeQualityAreaDistributionStatDataResponseBody() = default;
};
class DescribeQualityAreaDistributionStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeQualityAreaDistributionStatDataResponseBody> body{};

  DescribeQualityAreaDistributionStatDataResponse() {}

  explicit DescribeQualityAreaDistributionStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeQualityAreaDistributionStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeQualityAreaDistributionStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeQualityAreaDistributionStatDataResponse() = default;
};
class DescribeQualityDistributionStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> statDim{};

  DescribeQualityDistributionStatDataRequest() {}

  explicit DescribeQualityDistributionStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (statDim) {
      res["StatDim"] = boost::any(*statDim);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("StatDim") != m.end() && !m["StatDim"].empty()) {
      statDim = make_shared<string>(boost::any_cast<string>(m["StatDim"]));
    }
  }


  virtual ~DescribeQualityDistributionStatDataRequest() = default;
};
class DescribeQualityDistributionStatDataResponseBodyQualityStatDataList : public Darabonba::Model {
public:
  shared_ptr<long> audioDelay{};
  shared_ptr<string> audioHighQualityTransmissionRate{};
  shared_ptr<string> audioStuckRate{};
  shared_ptr<string> callDurationRatio{};
  shared_ptr<string> joinChannelSucFiveSecRate{};
  shared_ptr<string> joinChannelSucRate{};
  shared_ptr<string> name{};
  shared_ptr<long> videoDelay{};
  shared_ptr<long> videoFirstPicDuration{};
  shared_ptr<string> videoHighQualityTransmissionRate{};
  shared_ptr<string> videoStuckRate{};

  DescribeQualityDistributionStatDataResponseBodyQualityStatDataList() {}

  explicit DescribeQualityDistributionStatDataResponseBodyQualityStatDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioDelay) {
      res["AudioDelay"] = boost::any(*audioDelay);
    }
    if (audioHighQualityTransmissionRate) {
      res["AudioHighQualityTransmissionRate"] = boost::any(*audioHighQualityTransmissionRate);
    }
    if (audioStuckRate) {
      res["AudioStuckRate"] = boost::any(*audioStuckRate);
    }
    if (callDurationRatio) {
      res["CallDurationRatio"] = boost::any(*callDurationRatio);
    }
    if (joinChannelSucFiveSecRate) {
      res["JoinChannelSucFiveSecRate"] = boost::any(*joinChannelSucFiveSecRate);
    }
    if (joinChannelSucRate) {
      res["JoinChannelSucRate"] = boost::any(*joinChannelSucRate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (videoDelay) {
      res["VideoDelay"] = boost::any(*videoDelay);
    }
    if (videoFirstPicDuration) {
      res["VideoFirstPicDuration"] = boost::any(*videoFirstPicDuration);
    }
    if (videoHighQualityTransmissionRate) {
      res["VideoHighQualityTransmissionRate"] = boost::any(*videoHighQualityTransmissionRate);
    }
    if (videoStuckRate) {
      res["VideoStuckRate"] = boost::any(*videoStuckRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioDelay") != m.end() && !m["AudioDelay"].empty()) {
      audioDelay = make_shared<long>(boost::any_cast<long>(m["AudioDelay"]));
    }
    if (m.find("AudioHighQualityTransmissionRate") != m.end() && !m["AudioHighQualityTransmissionRate"].empty()) {
      audioHighQualityTransmissionRate = make_shared<string>(boost::any_cast<string>(m["AudioHighQualityTransmissionRate"]));
    }
    if (m.find("AudioStuckRate") != m.end() && !m["AudioStuckRate"].empty()) {
      audioStuckRate = make_shared<string>(boost::any_cast<string>(m["AudioStuckRate"]));
    }
    if (m.find("CallDurationRatio") != m.end() && !m["CallDurationRatio"].empty()) {
      callDurationRatio = make_shared<string>(boost::any_cast<string>(m["CallDurationRatio"]));
    }
    if (m.find("JoinChannelSucFiveSecRate") != m.end() && !m["JoinChannelSucFiveSecRate"].empty()) {
      joinChannelSucFiveSecRate = make_shared<string>(boost::any_cast<string>(m["JoinChannelSucFiveSecRate"]));
    }
    if (m.find("JoinChannelSucRate") != m.end() && !m["JoinChannelSucRate"].empty()) {
      joinChannelSucRate = make_shared<string>(boost::any_cast<string>(m["JoinChannelSucRate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("VideoDelay") != m.end() && !m["VideoDelay"].empty()) {
      videoDelay = make_shared<long>(boost::any_cast<long>(m["VideoDelay"]));
    }
    if (m.find("VideoFirstPicDuration") != m.end() && !m["VideoFirstPicDuration"].empty()) {
      videoFirstPicDuration = make_shared<long>(boost::any_cast<long>(m["VideoFirstPicDuration"]));
    }
    if (m.find("VideoHighQualityTransmissionRate") != m.end() && !m["VideoHighQualityTransmissionRate"].empty()) {
      videoHighQualityTransmissionRate = make_shared<string>(boost::any_cast<string>(m["VideoHighQualityTransmissionRate"]));
    }
    if (m.find("VideoStuckRate") != m.end() && !m["VideoStuckRate"].empty()) {
      videoStuckRate = make_shared<string>(boost::any_cast<string>(m["VideoStuckRate"]));
    }
  }


  virtual ~DescribeQualityDistributionStatDataResponseBodyQualityStatDataList() = default;
};
class DescribeQualityDistributionStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeQualityDistributionStatDataResponseBodyQualityStatDataList>> qualityStatDataList{};
  shared_ptr<string> requestId{};

  DescribeQualityDistributionStatDataResponseBody() {}

  explicit DescribeQualityDistributionStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualityStatDataList) {
      vector<boost::any> temp1;
      for(auto item1:*qualityStatDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QualityStatDataList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QualityStatDataList") != m.end() && !m["QualityStatDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["QualityStatDataList"].type()) {
        vector<DescribeQualityDistributionStatDataResponseBodyQualityStatDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QualityStatDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQualityDistributionStatDataResponseBodyQualityStatDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qualityStatDataList = make_shared<vector<DescribeQualityDistributionStatDataResponseBodyQualityStatDataList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeQualityDistributionStatDataResponseBody() = default;
};
class DescribeQualityDistributionStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeQualityDistributionStatDataResponseBody> body{};

  DescribeQualityDistributionStatDataResponse() {}

  explicit DescribeQualityDistributionStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeQualityDistributionStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeQualityDistributionStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeQualityDistributionStatDataResponse() = default;
};
class DescribeQualityOsSdkVersionDistributionStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};

  DescribeQualityOsSdkVersionDistributionStatDataRequest() {}

  explicit DescribeQualityOsSdkVersionDistributionStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
  }


  virtual ~DescribeQualityOsSdkVersionDistributionStatDataRequest() = default;
};
class DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList : public Darabonba::Model {
public:
  shared_ptr<long> audioDelay{};
  shared_ptr<string> audioHighQualityTransmissionRate{};
  shared_ptr<string> audioStuckRate{};
  shared_ptr<string> callDurationRatio{};
  shared_ptr<string> joinChannelSucFiveSecRate{};
  shared_ptr<string> joinChannelSucRate{};
  shared_ptr<string> name{};
  shared_ptr<string> os{};
  shared_ptr<long> videoDelay{};
  shared_ptr<long> videoFirstPicDuration{};
  shared_ptr<string> videoHighQualityTransmissionRate{};
  shared_ptr<string> videoStuckRate{};

  DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList() {}

  explicit DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioDelay) {
      res["AudioDelay"] = boost::any(*audioDelay);
    }
    if (audioHighQualityTransmissionRate) {
      res["AudioHighQualityTransmissionRate"] = boost::any(*audioHighQualityTransmissionRate);
    }
    if (audioStuckRate) {
      res["AudioStuckRate"] = boost::any(*audioStuckRate);
    }
    if (callDurationRatio) {
      res["CallDurationRatio"] = boost::any(*callDurationRatio);
    }
    if (joinChannelSucFiveSecRate) {
      res["JoinChannelSucFiveSecRate"] = boost::any(*joinChannelSucFiveSecRate);
    }
    if (joinChannelSucRate) {
      res["JoinChannelSucRate"] = boost::any(*joinChannelSucRate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (videoDelay) {
      res["VideoDelay"] = boost::any(*videoDelay);
    }
    if (videoFirstPicDuration) {
      res["VideoFirstPicDuration"] = boost::any(*videoFirstPicDuration);
    }
    if (videoHighQualityTransmissionRate) {
      res["VideoHighQualityTransmissionRate"] = boost::any(*videoHighQualityTransmissionRate);
    }
    if (videoStuckRate) {
      res["VideoStuckRate"] = boost::any(*videoStuckRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioDelay") != m.end() && !m["AudioDelay"].empty()) {
      audioDelay = make_shared<long>(boost::any_cast<long>(m["AudioDelay"]));
    }
    if (m.find("AudioHighQualityTransmissionRate") != m.end() && !m["AudioHighQualityTransmissionRate"].empty()) {
      audioHighQualityTransmissionRate = make_shared<string>(boost::any_cast<string>(m["AudioHighQualityTransmissionRate"]));
    }
    if (m.find("AudioStuckRate") != m.end() && !m["AudioStuckRate"].empty()) {
      audioStuckRate = make_shared<string>(boost::any_cast<string>(m["AudioStuckRate"]));
    }
    if (m.find("CallDurationRatio") != m.end() && !m["CallDurationRatio"].empty()) {
      callDurationRatio = make_shared<string>(boost::any_cast<string>(m["CallDurationRatio"]));
    }
    if (m.find("JoinChannelSucFiveSecRate") != m.end() && !m["JoinChannelSucFiveSecRate"].empty()) {
      joinChannelSucFiveSecRate = make_shared<string>(boost::any_cast<string>(m["JoinChannelSucFiveSecRate"]));
    }
    if (m.find("JoinChannelSucRate") != m.end() && !m["JoinChannelSucRate"].empty()) {
      joinChannelSucRate = make_shared<string>(boost::any_cast<string>(m["JoinChannelSucRate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("VideoDelay") != m.end() && !m["VideoDelay"].empty()) {
      videoDelay = make_shared<long>(boost::any_cast<long>(m["VideoDelay"]));
    }
    if (m.find("VideoFirstPicDuration") != m.end() && !m["VideoFirstPicDuration"].empty()) {
      videoFirstPicDuration = make_shared<long>(boost::any_cast<long>(m["VideoFirstPicDuration"]));
    }
    if (m.find("VideoHighQualityTransmissionRate") != m.end() && !m["VideoHighQualityTransmissionRate"].empty()) {
      videoHighQualityTransmissionRate = make_shared<string>(boost::any_cast<string>(m["VideoHighQualityTransmissionRate"]));
    }
    if (m.find("VideoStuckRate") != m.end() && !m["VideoStuckRate"].empty()) {
      videoStuckRate = make_shared<string>(boost::any_cast<string>(m["VideoStuckRate"]));
    }
  }


  virtual ~DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList() = default;
};
class DescribeQualityOsSdkVersionDistributionStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList>> qualityOsSdkVersionStatDataList{};
  shared_ptr<string> requestId{};

  DescribeQualityOsSdkVersionDistributionStatDataResponseBody() {}

  explicit DescribeQualityOsSdkVersionDistributionStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualityOsSdkVersionStatDataList) {
      vector<boost::any> temp1;
      for(auto item1:*qualityOsSdkVersionStatDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QualityOsSdkVersionStatDataList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QualityOsSdkVersionStatDataList") != m.end() && !m["QualityOsSdkVersionStatDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["QualityOsSdkVersionStatDataList"].type()) {
        vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QualityOsSdkVersionStatDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qualityOsSdkVersionStatDataList = make_shared<vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeQualityOsSdkVersionDistributionStatDataResponseBody() = default;
};
class DescribeQualityOsSdkVersionDistributionStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeQualityOsSdkVersionDistributionStatDataResponseBody> body{};

  DescribeQualityOsSdkVersionDistributionStatDataResponse() {}

  explicit DescribeQualityOsSdkVersionDistributionStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeQualityOsSdkVersionDistributionStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeQualityOsSdkVersionDistributionStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeQualityOsSdkVersionDistributionStatDataResponse() = default;
};
class DescribeQualityOverallDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> types{};

  DescribeQualityOverallDataRequest() {}

  explicit DescribeQualityOverallDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (types) {
      res["Types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      types = make_shared<string>(boost::any_cast<string>(m["Types"]));
    }
  }


  virtual ~DescribeQualityOverallDataRequest() = default;
};
class DescribeQualityOverallDataResponseBodyQualityOverallDataNodes : public Darabonba::Model {
public:
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeQualityOverallDataResponseBodyQualityOverallDataNodes() {}

  explicit DescribeQualityOverallDataResponseBodyQualityOverallDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeQualityOverallDataResponseBodyQualityOverallDataNodes() = default;
};
class DescribeQualityOverallDataResponseBodyQualityOverallData : public Darabonba::Model {
public:
  shared_ptr<string> average{};
  shared_ptr<vector<DescribeQualityOverallDataResponseBodyQualityOverallDataNodes>> nodes{};
  shared_ptr<string> type{};

  DescribeQualityOverallDataResponseBodyQualityOverallData() {}

  explicit DescribeQualityOverallDataResponseBodyQualityOverallData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (average) {
      res["Average"] = boost::any(*average);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Average") != m.end() && !m["Average"].empty()) {
      average = make_shared<string>(boost::any_cast<string>(m["Average"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeQualityOverallDataResponseBodyQualityOverallDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQualityOverallDataResponseBodyQualityOverallDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeQualityOverallDataResponseBodyQualityOverallDataNodes>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeQualityOverallDataResponseBodyQualityOverallData() = default;
};
class DescribeQualityOverallDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeQualityOverallDataResponseBodyQualityOverallData>> qualityOverallData{};
  shared_ptr<string> requestId{};

  DescribeQualityOverallDataResponseBody() {}

  explicit DescribeQualityOverallDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualityOverallData) {
      vector<boost::any> temp1;
      for(auto item1:*qualityOverallData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QualityOverallData"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QualityOverallData") != m.end() && !m["QualityOverallData"].empty()) {
      if (typeid(vector<boost::any>) == m["QualityOverallData"].type()) {
        vector<DescribeQualityOverallDataResponseBodyQualityOverallData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QualityOverallData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQualityOverallDataResponseBodyQualityOverallData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qualityOverallData = make_shared<vector<DescribeQualityOverallDataResponseBodyQualityOverallData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeQualityOverallDataResponseBody() = default;
};
class DescribeQualityOverallDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeQualityOverallDataResponseBody> body{};

  DescribeQualityOverallDataResponse() {}

  explicit DescribeQualityOverallDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeQualityOverallDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeQualityOverallDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeQualityOverallDataResponse() = default;
};
class DescribeRecordFilesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<vector<string>> taskIds{};

  DescribeRecordFilesRequest() {}

  explicit DescribeRecordFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskIds) {
      res["TaskIds"] = boost::any(*taskIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskIds") != m.end() && !m["TaskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRecordFilesRequest() = default;
};
class DescribeRecordFilesResponseBodyRecordFiles : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<string> createTime{};
  shared_ptr<double> duration{};
  shared_ptr<string> startTime{};
  shared_ptr<string> stopTime{};
  shared_ptr<string> taskId{};
  shared_ptr<string> url{};

  DescribeRecordFilesResponseBodyRecordFiles() {}

  explicit DescribeRecordFilesResponseBodyRecordFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (stopTime) {
      res["StopTime"] = boost::any(*stopTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("StopTime") != m.end() && !m["StopTime"].empty()) {
      stopTime = make_shared<string>(boost::any_cast<string>(m["StopTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeRecordFilesResponseBodyRecordFiles() = default;
};
class DescribeRecordFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRecordFilesResponseBodyRecordFiles>> recordFiles{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};

  DescribeRecordFilesResponseBody() {}

  explicit DescribeRecordFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordFiles) {
      vector<boost::any> temp1;
      for(auto item1:*recordFiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RecordFiles"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecordFiles") != m.end() && !m["RecordFiles"].empty()) {
      if (typeid(vector<boost::any>) == m["RecordFiles"].type()) {
        vector<DescribeRecordFilesResponseBodyRecordFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RecordFiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRecordFilesResponseBodyRecordFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recordFiles = make_shared<vector<DescribeRecordFilesResponseBodyRecordFiles>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeRecordFilesResponseBody() = default;
};
class DescribeRecordFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRecordFilesResponseBody> body{};

  DescribeRecordFilesResponse() {}

  explicit DescribeRecordFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRecordFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRecordFilesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRecordFilesResponse() = default;
};
class DescribeRecordTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> templateIds{};

  DescribeRecordTemplatesRequest() {}

  explicit DescribeRecordTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (templateIds) {
      res["TemplateIds"] = boost::any(*templateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TemplateIds") != m.end() && !m["TemplateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TemplateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TemplateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      templateIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRecordTemplatesRequest() = default;
};
class DescribeRecordTemplatesResponseBodyTemplatesBackgrounds : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  DescribeRecordTemplatesResponseBodyTemplatesBackgrounds() {}

  explicit DescribeRecordTemplatesResponseBodyTemplatesBackgrounds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~DescribeRecordTemplatesResponseBodyTemplatesBackgrounds() = default;
};
class DescribeRecordTemplatesResponseBodyTemplatesClockWidgets : public Darabonba::Model {
public:
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  DescribeRecordTemplatesResponseBodyTemplatesClockWidgets() {}

  explicit DescribeRecordTemplatesResponseBodyTemplatesClockWidgets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~DescribeRecordTemplatesResponseBodyTemplatesClockWidgets() = default;
};
class DescribeRecordTemplatesResponseBodyTemplatesWatermarks : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  DescribeRecordTemplatesResponseBodyTemplatesWatermarks() {}

  explicit DescribeRecordTemplatesResponseBodyTemplatesWatermarks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~DescribeRecordTemplatesResponseBodyTemplatesWatermarks() = default;
};
class DescribeRecordTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<long> backgroundColor{};
  shared_ptr<vector<DescribeRecordTemplatesResponseBodyTemplatesBackgrounds>> backgrounds{};
  shared_ptr<vector<DescribeRecordTemplatesResponseBodyTemplatesClockWidgets>> clockWidgets{};
  shared_ptr<string> createTime{};
  shared_ptr<long> delayStopTime{};
  shared_ptr<bool> enableM3u8DateTime{};
  shared_ptr<long> fileSplitInterval{};
  shared_ptr<vector<string>> formats{};
  shared_ptr<string> httpCallbackUrl{};
  shared_ptr<vector<long>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<string> mnsQueue{};
  shared_ptr<string> name{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossFilePrefix{};
  shared_ptr<string> taskProfile{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<DescribeRecordTemplatesResponseBodyTemplatesWatermarks>> watermarks{};

  DescribeRecordTemplatesResponseBodyTemplates() {}

  explicit DescribeRecordTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backgroundColor) {
      res["BackgroundColor"] = boost::any(*backgroundColor);
    }
    if (backgrounds) {
      vector<boost::any> temp1;
      for(auto item1:*backgrounds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backgrounds"] = boost::any(temp1);
    }
    if (clockWidgets) {
      vector<boost::any> temp1;
      for(auto item1:*clockWidgets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClockWidgets"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (delayStopTime) {
      res["DelayStopTime"] = boost::any(*delayStopTime);
    }
    if (enableM3u8DateTime) {
      res["EnableM3u8DateTime"] = boost::any(*enableM3u8DateTime);
    }
    if (fileSplitInterval) {
      res["FileSplitInterval"] = boost::any(*fileSplitInterval);
    }
    if (formats) {
      res["Formats"] = boost::any(*formats);
    }
    if (httpCallbackUrl) {
      res["HttpCallbackUrl"] = boost::any(*httpCallbackUrl);
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (mnsQueue) {
      res["MnsQueue"] = boost::any(*mnsQueue);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossFilePrefix) {
      res["OssFilePrefix"] = boost::any(*ossFilePrefix);
    }
    if (taskProfile) {
      res["TaskProfile"] = boost::any(*taskProfile);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (watermarks) {
      vector<boost::any> temp1;
      for(auto item1:*watermarks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Watermarks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackgroundColor") != m.end() && !m["BackgroundColor"].empty()) {
      backgroundColor = make_shared<long>(boost::any_cast<long>(m["BackgroundColor"]));
    }
    if (m.find("Backgrounds") != m.end() && !m["Backgrounds"].empty()) {
      if (typeid(vector<boost::any>) == m["Backgrounds"].type()) {
        vector<DescribeRecordTemplatesResponseBodyTemplatesBackgrounds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backgrounds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRecordTemplatesResponseBodyTemplatesBackgrounds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backgrounds = make_shared<vector<DescribeRecordTemplatesResponseBodyTemplatesBackgrounds>>(expect1);
      }
    }
    if (m.find("ClockWidgets") != m.end() && !m["ClockWidgets"].empty()) {
      if (typeid(vector<boost::any>) == m["ClockWidgets"].type()) {
        vector<DescribeRecordTemplatesResponseBodyTemplatesClockWidgets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClockWidgets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRecordTemplatesResponseBodyTemplatesClockWidgets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clockWidgets = make_shared<vector<DescribeRecordTemplatesResponseBodyTemplatesClockWidgets>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DelayStopTime") != m.end() && !m["DelayStopTime"].empty()) {
      delayStopTime = make_shared<long>(boost::any_cast<long>(m["DelayStopTime"]));
    }
    if (m.find("EnableM3u8DateTime") != m.end() && !m["EnableM3u8DateTime"].empty()) {
      enableM3u8DateTime = make_shared<bool>(boost::any_cast<bool>(m["EnableM3u8DateTime"]));
    }
    if (m.find("FileSplitInterval") != m.end() && !m["FileSplitInterval"].empty()) {
      fileSplitInterval = make_shared<long>(boost::any_cast<long>(m["FileSplitInterval"]));
    }
    if (m.find("Formats") != m.end() && !m["Formats"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Formats"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Formats"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      formats = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HttpCallbackUrl") != m.end() && !m["HttpCallbackUrl"].empty()) {
      httpCallbackUrl = make_shared<string>(boost::any_cast<string>(m["HttpCallbackUrl"]));
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      layoutIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("MnsQueue") != m.end() && !m["MnsQueue"].empty()) {
      mnsQueue = make_shared<string>(boost::any_cast<string>(m["MnsQueue"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssFilePrefix") != m.end() && !m["OssFilePrefix"].empty()) {
      ossFilePrefix = make_shared<string>(boost::any_cast<string>(m["OssFilePrefix"]));
    }
    if (m.find("TaskProfile") != m.end() && !m["TaskProfile"].empty()) {
      taskProfile = make_shared<string>(boost::any_cast<string>(m["TaskProfile"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Watermarks") != m.end() && !m["Watermarks"].empty()) {
      if (typeid(vector<boost::any>) == m["Watermarks"].type()) {
        vector<DescribeRecordTemplatesResponseBodyTemplatesWatermarks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Watermarks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRecordTemplatesResponseBodyTemplatesWatermarks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        watermarks = make_shared<vector<DescribeRecordTemplatesResponseBodyTemplatesWatermarks>>(expect1);
      }
    }
  }


  virtual ~DescribeRecordTemplatesResponseBodyTemplates() = default;
};
class DescribeRecordTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRecordTemplatesResponseBodyTemplates>> templates{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};

  DescribeRecordTemplatesResponseBody() {}

  explicit DescribeRecordTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Templates"] = boost::any(temp1);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<DescribeRecordTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRecordTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<DescribeRecordTemplatesResponseBodyTemplates>>(expect1);
      }
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeRecordTemplatesResponseBody() = default;
};
class DescribeRecordTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRecordTemplatesResponseBody> body{};

  DescribeRecordTemplatesResponse() {}

  explicit DescribeRecordTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRecordTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRecordTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRecordTemplatesResponse() = default;
};
class DescribeRtcChannelListRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> serviceArea{};
  shared_ptr<string> sortType{};
  shared_ptr<string> timePoint{};
  shared_ptr<string> userId{};

  DescribeRtcChannelListRequest() {}

  explicit DescribeRtcChannelListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (sortType) {
      res["SortType"] = boost::any(*sortType);
    }
    if (timePoint) {
      res["TimePoint"] = boost::any(*timePoint);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("SortType") != m.end() && !m["SortType"].empty()) {
      sortType = make_shared<string>(boost::any_cast<string>(m["SortType"]));
    }
    if (m.find("TimePoint") != m.end() && !m["TimePoint"].empty()) {
      timePoint = make_shared<string>(boost::any_cast<string>(m["TimePoint"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeRtcChannelListRequest() = default;
};
class DescribeRtcChannelListResponseBodyChannelListChannelListCallArea : public Darabonba::Model {
public:
  shared_ptr<vector<string>> callArea{};

  DescribeRtcChannelListResponseBodyChannelListChannelListCallArea() {}

  explicit DescribeRtcChannelListResponseBodyChannelListChannelListCallArea(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callArea) {
      res["CallArea"] = boost::any(*callArea);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallArea") != m.end() && !m["CallArea"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CallArea"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CallArea"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      callArea = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeRtcChannelListResponseBodyChannelListChannelListCallArea() = default;
};
class DescribeRtcChannelListResponseBodyChannelListChannelList : public Darabonba::Model {
public:
  shared_ptr<DescribeRtcChannelListResponseBodyChannelListChannelListCallArea> callArea{};
  shared_ptr<string> channelId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<long> totalUserCnt{};

  DescribeRtcChannelListResponseBodyChannelListChannelList() {}

  explicit DescribeRtcChannelListResponseBodyChannelListChannelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callArea) {
      res["CallArea"] = callArea ? boost::any(callArea->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (totalUserCnt) {
      res["TotalUserCnt"] = boost::any(*totalUserCnt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallArea") != m.end() && !m["CallArea"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallArea"].type()) {
        DescribeRtcChannelListResponseBodyChannelListChannelListCallArea model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallArea"]));
        callArea = make_shared<DescribeRtcChannelListResponseBodyChannelListChannelListCallArea>(model1);
      }
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TotalUserCnt") != m.end() && !m["TotalUserCnt"].empty()) {
      totalUserCnt = make_shared<long>(boost::any_cast<long>(m["TotalUserCnt"]));
    }
  }


  virtual ~DescribeRtcChannelListResponseBodyChannelListChannelList() = default;
};
class DescribeRtcChannelListResponseBodyChannelList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRtcChannelListResponseBodyChannelListChannelList>> channelList{};

  DescribeRtcChannelListResponseBodyChannelList() {}

  explicit DescribeRtcChannelListResponseBodyChannelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelList) {
      vector<boost::any> temp1;
      for(auto item1:*channelList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChannelList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelList") != m.end() && !m["ChannelList"].empty()) {
      if (typeid(vector<boost::any>) == m["ChannelList"].type()) {
        vector<DescribeRtcChannelListResponseBodyChannelListChannelList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChannelList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRtcChannelListResponseBodyChannelListChannelList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        channelList = make_shared<vector<DescribeRtcChannelListResponseBodyChannelListChannelList>>(expect1);
      }
    }
  }


  virtual ~DescribeRtcChannelListResponseBodyChannelList() = default;
};
class DescribeRtcChannelListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRtcChannelListResponseBodyChannelList> channelList{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCnt{};

  DescribeRtcChannelListResponseBody() {}

  explicit DescribeRtcChannelListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelList) {
      res["ChannelList"] = channelList ? boost::any(channelList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCnt) {
      res["TotalCnt"] = boost::any(*totalCnt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelList") != m.end() && !m["ChannelList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChannelList"].type()) {
        DescribeRtcChannelListResponseBodyChannelList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChannelList"]));
        channelList = make_shared<DescribeRtcChannelListResponseBodyChannelList>(model1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCnt") != m.end() && !m["TotalCnt"].empty()) {
      totalCnt = make_shared<long>(boost::any_cast<long>(m["TotalCnt"]));
    }
  }


  virtual ~DescribeRtcChannelListResponseBody() = default;
};
class DescribeRtcChannelListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRtcChannelListResponseBody> body{};

  DescribeRtcChannelListResponse() {}

  explicit DescribeRtcChannelListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRtcChannelListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRtcChannelListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRtcChannelListResponse() = default;
};
class DescribeRtcChannelMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> timePoint{};

  DescribeRtcChannelMetricRequest() {}

  explicit DescribeRtcChannelMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (timePoint) {
      res["TimePoint"] = boost::any(*timePoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TimePoint") != m.end() && !m["TimePoint"].empty()) {
      timePoint = make_shared<string>(boost::any_cast<string>(m["TimePoint"]));
    }
  }


  virtual ~DescribeRtcChannelMetricRequest() = default;
};
class DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric : public Darabonba::Model {
public:
  shared_ptr<string> channelId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pubUserCount{};
  shared_ptr<string> startTime{};
  shared_ptr<long> subUserCount{};
  shared_ptr<long> userCount{};

  DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric() {}

  explicit DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pubUserCount) {
      res["PubUserCount"] = boost::any(*pubUserCount);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (subUserCount) {
      res["SubUserCount"] = boost::any(*subUserCount);
    }
    if (userCount) {
      res["UserCount"] = boost::any(*userCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PubUserCount") != m.end() && !m["PubUserCount"].empty()) {
      pubUserCount = make_shared<long>(boost::any_cast<long>(m["PubUserCount"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("SubUserCount") != m.end() && !m["SubUserCount"].empty()) {
      subUserCount = make_shared<long>(boost::any_cast<long>(m["SubUserCount"]));
    }
    if (m.find("UserCount") != m.end() && !m["UserCount"].empty()) {
      userCount = make_shared<long>(boost::any_cast<long>(m["UserCount"]));
    }
  }


  virtual ~DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric() = default;
};
class DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration : public Darabonba::Model {
public:
  shared_ptr<long> audio{};
  shared_ptr<long> content{};
  shared_ptr<long> video1080{};
  shared_ptr<long> video360{};
  shared_ptr<long> video720{};

  DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration() {}

  explicit DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audio) {
      res["Audio"] = boost::any(*audio);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (video1080) {
      res["Video1080"] = boost::any(*video1080);
    }
    if (video360) {
      res["Video360"] = boost::any(*video360);
    }
    if (video720) {
      res["Video720"] = boost::any(*video720);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Audio") != m.end() && !m["Audio"].empty()) {
      audio = make_shared<long>(boost::any_cast<long>(m["Audio"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<long>(boost::any_cast<long>(m["Content"]));
    }
    if (m.find("Video1080") != m.end() && !m["Video1080"].empty()) {
      video1080 = make_shared<long>(boost::any_cast<long>(m["Video1080"]));
    }
    if (m.find("Video360") != m.end() && !m["Video360"].empty()) {
      video360 = make_shared<long>(boost::any_cast<long>(m["Video360"]));
    }
    if (m.find("Video720") != m.end() && !m["Video720"].empty()) {
      video720 = make_shared<long>(boost::any_cast<long>(m["Video720"]));
    }
  }


  virtual ~DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration() = default;
};
class DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration : public Darabonba::Model {
public:
  shared_ptr<long> audio{};
  shared_ptr<long> content{};
  shared_ptr<long> video1080{};
  shared_ptr<long> video360{};
  shared_ptr<long> video720{};

  DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration() {}

  explicit DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audio) {
      res["Audio"] = boost::any(*audio);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (video1080) {
      res["Video1080"] = boost::any(*video1080);
    }
    if (video360) {
      res["Video360"] = boost::any(*video360);
    }
    if (video720) {
      res["Video720"] = boost::any(*video720);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Audio") != m.end() && !m["Audio"].empty()) {
      audio = make_shared<long>(boost::any_cast<long>(m["Audio"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<long>(boost::any_cast<long>(m["Content"]));
    }
    if (m.find("Video1080") != m.end() && !m["Video1080"].empty()) {
      video1080 = make_shared<long>(boost::any_cast<long>(m["Video1080"]));
    }
    if (m.find("Video360") != m.end() && !m["Video360"].empty()) {
      video360 = make_shared<long>(boost::any_cast<long>(m["Video360"]));
    }
    if (m.find("Video720") != m.end() && !m["Video720"].empty()) {
      video720 = make_shared<long>(boost::any_cast<long>(m["Video720"]));
    }
  }


  virtual ~DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration() = default;
};
class DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration : public Darabonba::Model {
public:
  shared_ptr<DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration> pubDuration{};
  shared_ptr<DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration> subDuration{};

  DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration() {}

  explicit DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pubDuration) {
      res["PubDuration"] = pubDuration ? boost::any(pubDuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subDuration) {
      res["SubDuration"] = subDuration ? boost::any(subDuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PubDuration") != m.end() && !m["PubDuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["PubDuration"].type()) {
        DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PubDuration"]));
        pubDuration = make_shared<DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationPubDuration>(model1);
      }
    }
    if (m.find("SubDuration") != m.end() && !m["SubDuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubDuration"].type()) {
        DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubDuration"]));
        subDuration = make_shared<DescribeRtcChannelMetricResponseBodyChannelMetricInfoDurationSubDuration>(model1);
      }
    }
  }


  virtual ~DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration() = default;
};
class DescribeRtcChannelMetricResponseBodyChannelMetricInfo : public Darabonba::Model {
public:
  shared_ptr<DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric> channelMetric{};
  shared_ptr<DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration> duration{};

  DescribeRtcChannelMetricResponseBodyChannelMetricInfo() {}

  explicit DescribeRtcChannelMetricResponseBodyChannelMetricInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelMetric) {
      res["ChannelMetric"] = channelMetric ? boost::any(channelMetric->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (duration) {
      res["Duration"] = duration ? boost::any(duration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelMetric") != m.end() && !m["ChannelMetric"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChannelMetric"].type()) {
        DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChannelMetric"]));
        channelMetric = make_shared<DescribeRtcChannelMetricResponseBodyChannelMetricInfoChannelMetric>(model1);
      }
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      if (typeid(map<string, boost::any>) == m["Duration"].type()) {
        DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Duration"]));
        duration = make_shared<DescribeRtcChannelMetricResponseBodyChannelMetricInfoDuration>(model1);
      }
    }
  }


  virtual ~DescribeRtcChannelMetricResponseBodyChannelMetricInfo() = default;
};
class DescribeRtcChannelMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRtcChannelMetricResponseBodyChannelMetricInfo> channelMetricInfo{};
  shared_ptr<string> requestId{};

  DescribeRtcChannelMetricResponseBody() {}

  explicit DescribeRtcChannelMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelMetricInfo) {
      res["ChannelMetricInfo"] = channelMetricInfo ? boost::any(channelMetricInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelMetricInfo") != m.end() && !m["ChannelMetricInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ChannelMetricInfo"].type()) {
        DescribeRtcChannelMetricResponseBodyChannelMetricInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ChannelMetricInfo"]));
        channelMetricInfo = make_shared<DescribeRtcChannelMetricResponseBodyChannelMetricInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRtcChannelMetricResponseBody() = default;
};
class DescribeRtcChannelMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRtcChannelMetricResponseBody> body{};

  DescribeRtcChannelMetricResponse() {}

  explicit DescribeRtcChannelMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRtcChannelMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRtcChannelMetricResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRtcChannelMetricResponse() = default;
};
class DescribeRtcDurationDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> serviceArea{};
  shared_ptr<string> startTime{};

  DescribeRtcDurationDataRequest() {}

  explicit DescribeRtcDurationDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeRtcDurationDataRequest() = default;
};
class DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule : public Darabonba::Model {
public:
  shared_ptr<long> audioDuration{};
  shared_ptr<long> contentDuration{};
  shared_ptr<string> timeStamp{};
  shared_ptr<long> totalDuration{};
  shared_ptr<long> v1080Duration{};
  shared_ptr<long> v360Duration{};
  shared_ptr<long> v720Duration{};

  DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule() {}

  explicit DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioDuration) {
      res["AudioDuration"] = boost::any(*audioDuration);
    }
    if (contentDuration) {
      res["ContentDuration"] = boost::any(*contentDuration);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    if (totalDuration) {
      res["TotalDuration"] = boost::any(*totalDuration);
    }
    if (v1080Duration) {
      res["V1080Duration"] = boost::any(*v1080Duration);
    }
    if (v360Duration) {
      res["V360Duration"] = boost::any(*v360Duration);
    }
    if (v720Duration) {
      res["V720Duration"] = boost::any(*v720Duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioDuration") != m.end() && !m["AudioDuration"].empty()) {
      audioDuration = make_shared<long>(boost::any_cast<long>(m["AudioDuration"]));
    }
    if (m.find("ContentDuration") != m.end() && !m["ContentDuration"].empty()) {
      contentDuration = make_shared<long>(boost::any_cast<long>(m["ContentDuration"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
    if (m.find("TotalDuration") != m.end() && !m["TotalDuration"].empty()) {
      totalDuration = make_shared<long>(boost::any_cast<long>(m["TotalDuration"]));
    }
    if (m.find("V1080Duration") != m.end() && !m["V1080Duration"].empty()) {
      v1080Duration = make_shared<long>(boost::any_cast<long>(m["V1080Duration"]));
    }
    if (m.find("V360Duration") != m.end() && !m["V360Duration"].empty()) {
      v360Duration = make_shared<long>(boost::any_cast<long>(m["V360Duration"]));
    }
    if (m.find("V720Duration") != m.end() && !m["V720Duration"].empty()) {
      v720Duration = make_shared<long>(boost::any_cast<long>(m["V720Duration"]));
    }
  }


  virtual ~DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule() = default;
};
class DescribeRtcDurationDataResponseBodyDurationDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule>> durationModule{};

  DescribeRtcDurationDataResponseBodyDurationDataPerInterval() {}

  explicit DescribeRtcDurationDataResponseBodyDurationDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationModule) {
      vector<boost::any> temp1;
      for(auto item1:*durationModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DurationModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DurationModule") != m.end() && !m["DurationModule"].empty()) {
      if (typeid(vector<boost::any>) == m["DurationModule"].type()) {
        vector<DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DurationModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        durationModule = make_shared<vector<DescribeRtcDurationDataResponseBodyDurationDataPerIntervalDurationModule>>(expect1);
      }
    }
  }


  virtual ~DescribeRtcDurationDataResponseBodyDurationDataPerInterval() = default;
};
class DescribeRtcDurationDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRtcDurationDataResponseBodyDurationDataPerInterval> durationDataPerInterval{};
  shared_ptr<string> requestId{};

  DescribeRtcDurationDataResponseBody() {}

  explicit DescribeRtcDurationDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationDataPerInterval) {
      res["DurationDataPerInterval"] = durationDataPerInterval ? boost::any(durationDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DurationDataPerInterval") != m.end() && !m["DurationDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["DurationDataPerInterval"].type()) {
        DescribeRtcDurationDataResponseBodyDurationDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DurationDataPerInterval"]));
        durationDataPerInterval = make_shared<DescribeRtcDurationDataResponseBodyDurationDataPerInterval>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRtcDurationDataResponseBody() = default;
};
class DescribeRtcDurationDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRtcDurationDataResponseBody> body{};

  DescribeRtcDurationDataResponse() {}

  explicit DescribeRtcDurationDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRtcDurationDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRtcDurationDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRtcDurationDataResponse() = default;
};
class DescribeRtcPeakChannelCntDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> serviceArea{};
  shared_ptr<string> startTime{};

  DescribeRtcPeakChannelCntDataRequest() {}

  explicit DescribeRtcPeakChannelCntDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeRtcPeakChannelCntDataRequest() = default;
};
class DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule : public Darabonba::Model {
public:
  shared_ptr<long> activeChannelPeak{};
  shared_ptr<string> activeChannelPeakTime{};
  shared_ptr<string> timeStamp{};

  DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule() {}

  explicit DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeChannelPeak) {
      res["ActiveChannelPeak"] = boost::any(*activeChannelPeak);
    }
    if (activeChannelPeakTime) {
      res["ActiveChannelPeakTime"] = boost::any(*activeChannelPeakTime);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveChannelPeak") != m.end() && !m["ActiveChannelPeak"].empty()) {
      activeChannelPeak = make_shared<long>(boost::any_cast<long>(m["ActiveChannelPeak"]));
    }
    if (m.find("ActiveChannelPeakTime") != m.end() && !m["ActiveChannelPeakTime"].empty()) {
      activeChannelPeakTime = make_shared<string>(boost::any_cast<string>(m["ActiveChannelPeakTime"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule() = default;
};
class DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule>> peakChannelCntModule{};

  DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval() {}

  explicit DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (peakChannelCntModule) {
      vector<boost::any> temp1;
      for(auto item1:*peakChannelCntModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PeakChannelCntModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeakChannelCntModule") != m.end() && !m["PeakChannelCntModule"].empty()) {
      if (typeid(vector<boost::any>) == m["PeakChannelCntModule"].type()) {
        vector<DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PeakChannelCntModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        peakChannelCntModule = make_shared<vector<DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule>>(expect1);
      }
    }
  }


  virtual ~DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval() = default;
};
class DescribeRtcPeakChannelCntDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval> peakChannelCntDataPerInterval{};
  shared_ptr<string> requestId{};

  DescribeRtcPeakChannelCntDataResponseBody() {}

  explicit DescribeRtcPeakChannelCntDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (peakChannelCntDataPerInterval) {
      res["PeakChannelCntDataPerInterval"] = peakChannelCntDataPerInterval ? boost::any(peakChannelCntDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeakChannelCntDataPerInterval") != m.end() && !m["PeakChannelCntDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["PeakChannelCntDataPerInterval"].type()) {
        DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PeakChannelCntDataPerInterval"]));
        peakChannelCntDataPerInterval = make_shared<DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRtcPeakChannelCntDataResponseBody() = default;
};
class DescribeRtcPeakChannelCntDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRtcPeakChannelCntDataResponseBody> body{};

  DescribeRtcPeakChannelCntDataResponse() {}

  explicit DescribeRtcPeakChannelCntDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRtcPeakChannelCntDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRtcPeakChannelCntDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRtcPeakChannelCntDataResponse() = default;
};
class DescribeRtcUserCntDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> interval{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> serviceArea{};
  shared_ptr<string> startTime{};

  DescribeRtcUserCntDataRequest() {}

  explicit DescribeRtcUserCntDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (serviceArea) {
      res["ServiceArea"] = boost::any(*serviceArea);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["Interval"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ServiceArea") != m.end() && !m["ServiceArea"].empty()) {
      serviceArea = make_shared<string>(boost::any_cast<string>(m["ServiceArea"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeRtcUserCntDataRequest() = default;
};
class DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule : public Darabonba::Model {
public:
  shared_ptr<long> activeUserCnt{};
  shared_ptr<string> timeStamp{};

  DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule() {}

  explicit DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeUserCnt) {
      res["ActiveUserCnt"] = boost::any(*activeUserCnt);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveUserCnt") != m.end() && !m["ActiveUserCnt"].empty()) {
      activeUserCnt = make_shared<long>(boost::any_cast<long>(m["ActiveUserCnt"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule() = default;
};
class DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule>> userCntModule{};

  DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval() {}

  explicit DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userCntModule) {
      vector<boost::any> temp1;
      for(auto item1:*userCntModule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserCntModule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserCntModule") != m.end() && !m["UserCntModule"].empty()) {
      if (typeid(vector<boost::any>) == m["UserCntModule"].type()) {
        vector<DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserCntModule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userCntModule = make_shared<vector<DescribeRtcUserCntDataResponseBodyUserCntDataPerIntervalUserCntModule>>(expect1);
      }
    }
  }


  virtual ~DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval() = default;
};
class DescribeRtcUserCntDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval> userCntDataPerInterval{};

  DescribeRtcUserCntDataResponseBody() {}

  explicit DescribeRtcUserCntDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userCntDataPerInterval) {
      res["UserCntDataPerInterval"] = userCntDataPerInterval ? boost::any(userCntDataPerInterval->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserCntDataPerInterval") != m.end() && !m["UserCntDataPerInterval"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserCntDataPerInterval"].type()) {
        DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserCntDataPerInterval"]));
        userCntDataPerInterval = make_shared<DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval>(model1);
      }
    }
  }


  virtual ~DescribeRtcUserCntDataResponseBody() = default;
};
class DescribeRtcUserCntDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRtcUserCntDataResponseBody> body{};

  DescribeRtcUserCntDataResponse() {}

  explicit DescribeRtcUserCntDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRtcUserCntDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRtcUserCntDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRtcUserCntDataResponse() = default;
};
class DescribeStreamingOutStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<string> taskId{};

  DescribeStreamingOutStatusRequest() {}

  explicit DescribeStreamingOutStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeStreamingOutStatusRequest() = default;
};
class DescribeStreamingOutStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};

  DescribeStreamingOutStatusResponseBody() {}

  explicit DescribeStreamingOutStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeStreamingOutStatusResponseBody() = default;
};
class DescribeStreamingOutStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeStreamingOutStatusResponseBody> body{};

  DescribeStreamingOutStatusResponse() {}

  explicit DescribeStreamingOutStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeStreamingOutStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStreamingOutStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStreamingOutStatusResponse() = default;
};
class DescribeSystemLayoutListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeSystemLayoutListRequest() {}

  explicit DescribeSystemLayoutListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeSystemLayoutListRequest() = default;
};
class DescribeSystemLayoutListResponseBodyLayoutsLayoutPanesPanes : public Darabonba::Model {
public:
  shared_ptr<double> height{};
  shared_ptr<long> majorPane{};
  shared_ptr<long> paneId{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  DescribeSystemLayoutListResponseBodyLayoutsLayoutPanesPanes() {}

  explicit DescribeSystemLayoutListResponseBodyLayoutsLayoutPanesPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (majorPane) {
      res["MajorPane"] = boost::any(*majorPane);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("MajorPane") != m.end() && !m["MajorPane"].empty()) {
      majorPane = make_shared<long>(boost::any_cast<long>(m["MajorPane"]));
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~DescribeSystemLayoutListResponseBodyLayoutsLayoutPanesPanes() = default;
};
class DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSystemLayoutListResponseBodyLayoutsLayoutPanesPanes>> panes{};

  DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes() {}

  explicit DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (panes) {
      vector<boost::any> temp1;
      for(auto item1:*panes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Panes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Panes") != m.end() && !m["Panes"].empty()) {
      if (typeid(vector<boost::any>) == m["Panes"].type()) {
        vector<DescribeSystemLayoutListResponseBodyLayoutsLayoutPanesPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Panes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSystemLayoutListResponseBodyLayoutsLayoutPanesPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        panes = make_shared<vector<DescribeSystemLayoutListResponseBodyLayoutsLayoutPanesPanes>>(expect1);
      }
    }
  }


  virtual ~DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes() = default;
};
class DescribeSystemLayoutListResponseBodyLayoutsLayout : public Darabonba::Model {
public:
  shared_ptr<long> audioMixCount{};
  shared_ptr<long> layoutId{};
  shared_ptr<string> name{};
  shared_ptr<DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes> panes{};

  DescribeSystemLayoutListResponseBodyLayoutsLayout() {}

  explicit DescribeSystemLayoutListResponseBodyLayoutsLayout(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioMixCount) {
      res["AudioMixCount"] = boost::any(*audioMixCount);
    }
    if (layoutId) {
      res["LayoutId"] = boost::any(*layoutId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (panes) {
      res["Panes"] = panes ? boost::any(panes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioMixCount") != m.end() && !m["AudioMixCount"].empty()) {
      audioMixCount = make_shared<long>(boost::any_cast<long>(m["AudioMixCount"]));
    }
    if (m.find("LayoutId") != m.end() && !m["LayoutId"].empty()) {
      layoutId = make_shared<long>(boost::any_cast<long>(m["LayoutId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Panes") != m.end() && !m["Panes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Panes"].type()) {
        DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Panes"]));
        panes = make_shared<DescribeSystemLayoutListResponseBodyLayoutsLayoutPanes>(model1);
      }
    }
  }


  virtual ~DescribeSystemLayoutListResponseBodyLayoutsLayout() = default;
};
class DescribeSystemLayoutListResponseBodyLayouts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSystemLayoutListResponseBodyLayoutsLayout>> layout{};

  DescribeSystemLayoutListResponseBodyLayouts() {}

  explicit DescribeSystemLayoutListResponseBodyLayouts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layout) {
      vector<boost::any> temp1;
      for(auto item1:*layout){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Layout"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Layout") != m.end() && !m["Layout"].empty()) {
      if (typeid(vector<boost::any>) == m["Layout"].type()) {
        vector<DescribeSystemLayoutListResponseBodyLayoutsLayout> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Layout"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSystemLayoutListResponseBodyLayoutsLayout model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        layout = make_shared<vector<DescribeSystemLayoutListResponseBodyLayoutsLayout>>(expect1);
      }
    }
  }


  virtual ~DescribeSystemLayoutListResponseBodyLayouts() = default;
};
class DescribeSystemLayoutListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeSystemLayoutListResponseBodyLayouts> layouts{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPage{};

  DescribeSystemLayoutListResponseBody() {}

  explicit DescribeSystemLayoutListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layouts) {
      res["Layouts"] = layouts ? boost::any(layouts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Layouts") != m.end() && !m["Layouts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Layouts"].type()) {
        DescribeSystemLayoutListResponseBodyLayouts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Layouts"]));
        layouts = make_shared<DescribeSystemLayoutListResponseBodyLayouts>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeSystemLayoutListResponseBody() = default;
};
class DescribeSystemLayoutListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSystemLayoutListResponseBody> body{};

  DescribeSystemLayoutListResponse() {}

  explicit DescribeSystemLayoutListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSystemLayoutListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSystemLayoutListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSystemLayoutListResponse() = default;
};
class DescribeUsageAreaDistributionStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> endDate{};
  shared_ptr<string> parentArea{};
  shared_ptr<string> startDate{};

  DescribeUsageAreaDistributionStatDataRequest() {}

  explicit DescribeUsageAreaDistributionStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (parentArea) {
      res["ParentArea"] = boost::any(*parentArea);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ParentArea") != m.end() && !m["ParentArea"].empty()) {
      parentArea = make_shared<string>(boost::any_cast<string>(m["ParentArea"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~DescribeUsageAreaDistributionStatDataRequest() = default;
};
class DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList : public Darabonba::Model {
public:
  shared_ptr<long> audioCallDuration{};
  shared_ptr<string> name{};
  shared_ptr<long> totalCallDuration{};
  shared_ptr<long> videoCallDuration{};

  DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList() {}

  explicit DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioCallDuration) {
      res["AudioCallDuration"] = boost::any(*audioCallDuration);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (totalCallDuration) {
      res["TotalCallDuration"] = boost::any(*totalCallDuration);
    }
    if (videoCallDuration) {
      res["VideoCallDuration"] = boost::any(*videoCallDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioCallDuration") != m.end() && !m["AudioCallDuration"].empty()) {
      audioCallDuration = make_shared<long>(boost::any_cast<long>(m["AudioCallDuration"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TotalCallDuration") != m.end() && !m["TotalCallDuration"].empty()) {
      totalCallDuration = make_shared<long>(boost::any_cast<long>(m["TotalCallDuration"]));
    }
    if (m.find("VideoCallDuration") != m.end() && !m["VideoCallDuration"].empty()) {
      videoCallDuration = make_shared<long>(boost::any_cast<long>(m["VideoCallDuration"]));
    }
  }


  virtual ~DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList() = default;
};
class DescribeUsageAreaDistributionStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList>> usageAreaStatList{};

  DescribeUsageAreaDistributionStatDataResponseBody() {}

  explicit DescribeUsageAreaDistributionStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (usageAreaStatList) {
      vector<boost::any> temp1;
      for(auto item1:*usageAreaStatList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageAreaStatList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UsageAreaStatList") != m.end() && !m["UsageAreaStatList"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageAreaStatList"].type()) {
        vector<DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageAreaStatList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageAreaStatList = make_shared<vector<DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList>>(expect1);
      }
    }
  }


  virtual ~DescribeUsageAreaDistributionStatDataResponseBody() = default;
};
class DescribeUsageAreaDistributionStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUsageAreaDistributionStatDataResponseBody> body{};

  DescribeUsageAreaDistributionStatDataResponse() {}

  explicit DescribeUsageAreaDistributionStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeUsageAreaDistributionStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUsageAreaDistributionStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUsageAreaDistributionStatDataResponse() = default;
};
class DescribeUsageDistributionStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> statDim{};

  DescribeUsageDistributionStatDataRequest() {}

  explicit DescribeUsageDistributionStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (statDim) {
      res["StatDim"] = boost::any(*statDim);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("StatDim") != m.end() && !m["StatDim"].empty()) {
      statDim = make_shared<string>(boost::any_cast<string>(m["StatDim"]));
    }
  }


  virtual ~DescribeUsageDistributionStatDataRequest() = default;
};
class DescribeUsageDistributionStatDataResponseBodyUsageStatList : public Darabonba::Model {
public:
  shared_ptr<long> audioCallDuration{};
  shared_ptr<string> callDurationRatio{};
  shared_ptr<string> name{};
  shared_ptr<long> totalCallDuration{};
  shared_ptr<long> videoCallDuration{};

  DescribeUsageDistributionStatDataResponseBodyUsageStatList() {}

  explicit DescribeUsageDistributionStatDataResponseBodyUsageStatList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioCallDuration) {
      res["AudioCallDuration"] = boost::any(*audioCallDuration);
    }
    if (callDurationRatio) {
      res["CallDurationRatio"] = boost::any(*callDurationRatio);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (totalCallDuration) {
      res["TotalCallDuration"] = boost::any(*totalCallDuration);
    }
    if (videoCallDuration) {
      res["VideoCallDuration"] = boost::any(*videoCallDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioCallDuration") != m.end() && !m["AudioCallDuration"].empty()) {
      audioCallDuration = make_shared<long>(boost::any_cast<long>(m["AudioCallDuration"]));
    }
    if (m.find("CallDurationRatio") != m.end() && !m["CallDurationRatio"].empty()) {
      callDurationRatio = make_shared<string>(boost::any_cast<string>(m["CallDurationRatio"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TotalCallDuration") != m.end() && !m["TotalCallDuration"].empty()) {
      totalCallDuration = make_shared<long>(boost::any_cast<long>(m["TotalCallDuration"]));
    }
    if (m.find("VideoCallDuration") != m.end() && !m["VideoCallDuration"].empty()) {
      videoCallDuration = make_shared<long>(boost::any_cast<long>(m["VideoCallDuration"]));
    }
  }


  virtual ~DescribeUsageDistributionStatDataResponseBodyUsageStatList() = default;
};
class DescribeUsageDistributionStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeUsageDistributionStatDataResponseBodyUsageStatList>> usageStatList{};

  DescribeUsageDistributionStatDataResponseBody() {}

  explicit DescribeUsageDistributionStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (usageStatList) {
      vector<boost::any> temp1;
      for(auto item1:*usageStatList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageStatList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UsageStatList") != m.end() && !m["UsageStatList"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageStatList"].type()) {
        vector<DescribeUsageDistributionStatDataResponseBodyUsageStatList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageStatList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsageDistributionStatDataResponseBodyUsageStatList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageStatList = make_shared<vector<DescribeUsageDistributionStatDataResponseBodyUsageStatList>>(expect1);
      }
    }
  }


  virtual ~DescribeUsageDistributionStatDataResponseBody() = default;
};
class DescribeUsageDistributionStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUsageDistributionStatDataResponseBody> body{};

  DescribeUsageDistributionStatDataResponse() {}

  explicit DescribeUsageDistributionStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeUsageDistributionStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUsageDistributionStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUsageDistributionStatDataResponse() = default;
};
class DescribeUsageOsSdkVersionDistributionStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};

  DescribeUsageOsSdkVersionDistributionStatDataRequest() {}

  explicit DescribeUsageOsSdkVersionDistributionStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
  }


  virtual ~DescribeUsageOsSdkVersionDistributionStatDataRequest() = default;
};
class DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList : public Darabonba::Model {
public:
  shared_ptr<long> audioCallDuration{};
  shared_ptr<string> callDurationRatio{};
  shared_ptr<string> name{};
  shared_ptr<string> os{};
  shared_ptr<long> totalCallDuration{};
  shared_ptr<long> videoCallDuration{};

  DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList() {}

  explicit DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioCallDuration) {
      res["AudioCallDuration"] = boost::any(*audioCallDuration);
    }
    if (callDurationRatio) {
      res["CallDurationRatio"] = boost::any(*callDurationRatio);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (totalCallDuration) {
      res["TotalCallDuration"] = boost::any(*totalCallDuration);
    }
    if (videoCallDuration) {
      res["VideoCallDuration"] = boost::any(*videoCallDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioCallDuration") != m.end() && !m["AudioCallDuration"].empty()) {
      audioCallDuration = make_shared<long>(boost::any_cast<long>(m["AudioCallDuration"]));
    }
    if (m.find("CallDurationRatio") != m.end() && !m["CallDurationRatio"].empty()) {
      callDurationRatio = make_shared<string>(boost::any_cast<string>(m["CallDurationRatio"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("TotalCallDuration") != m.end() && !m["TotalCallDuration"].empty()) {
      totalCallDuration = make_shared<long>(boost::any_cast<long>(m["TotalCallDuration"]));
    }
    if (m.find("VideoCallDuration") != m.end() && !m["VideoCallDuration"].empty()) {
      videoCallDuration = make_shared<long>(boost::any_cast<long>(m["VideoCallDuration"]));
    }
  }


  virtual ~DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList() = default;
};
class DescribeUsageOsSdkVersionDistributionStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList>> usageOsSdkVersionStatList{};

  DescribeUsageOsSdkVersionDistributionStatDataResponseBody() {}

  explicit DescribeUsageOsSdkVersionDistributionStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (usageOsSdkVersionStatList) {
      vector<boost::any> temp1;
      for(auto item1:*usageOsSdkVersionStatList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageOsSdkVersionStatList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UsageOsSdkVersionStatList") != m.end() && !m["UsageOsSdkVersionStatList"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageOsSdkVersionStatList"].type()) {
        vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageOsSdkVersionStatList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageOsSdkVersionStatList = make_shared<vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList>>(expect1);
      }
    }
  }


  virtual ~DescribeUsageOsSdkVersionDistributionStatDataResponseBody() = default;
};
class DescribeUsageOsSdkVersionDistributionStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUsageOsSdkVersionDistributionStatDataResponseBody> body{};

  DescribeUsageOsSdkVersionDistributionStatDataResponse() {}

  explicit DescribeUsageOsSdkVersionDistributionStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeUsageOsSdkVersionDistributionStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUsageOsSdkVersionDistributionStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUsageOsSdkVersionDistributionStatDataResponse() = default;
};
class DescribeUsageOverallDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> types{};

  DescribeUsageOverallDataRequest() {}

  explicit DescribeUsageOverallDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (types) {
      res["Types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      types = make_shared<string>(boost::any_cast<string>(m["Types"]));
    }
  }


  virtual ~DescribeUsageOverallDataRequest() = default;
};
class DescribeUsageOverallDataResponseBodyUsageOverallDataNodes : public Darabonba::Model {
public:
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeUsageOverallDataResponseBodyUsageOverallDataNodes() {}

  explicit DescribeUsageOverallDataResponseBodyUsageOverallDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeUsageOverallDataResponseBodyUsageOverallDataNodes() = default;
};
class DescribeUsageOverallDataResponseBodyUsageOverallData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeUsageOverallDataResponseBodyUsageOverallDataNodes>> nodes{};
  shared_ptr<string> type{};

  DescribeUsageOverallDataResponseBodyUsageOverallData() {}

  explicit DescribeUsageOverallDataResponseBodyUsageOverallData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeUsageOverallDataResponseBodyUsageOverallDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsageOverallDataResponseBodyUsageOverallDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeUsageOverallDataResponseBodyUsageOverallDataNodes>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeUsageOverallDataResponseBodyUsageOverallData() = default;
};
class DescribeUsageOverallDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeUsageOverallDataResponseBodyUsageOverallData>> usageOverallData{};

  DescribeUsageOverallDataResponseBody() {}

  explicit DescribeUsageOverallDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (usageOverallData) {
      vector<boost::any> temp1;
      for(auto item1:*usageOverallData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageOverallData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UsageOverallData") != m.end() && !m["UsageOverallData"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageOverallData"].type()) {
        vector<DescribeUsageOverallDataResponseBodyUsageOverallData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageOverallData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsageOverallDataResponseBodyUsageOverallData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageOverallData = make_shared<vector<DescribeUsageOverallDataResponseBodyUsageOverallData>>(expect1);
      }
    }
  }


  virtual ~DescribeUsageOverallDataResponseBody() = default;
};
class DescribeUsageOverallDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUsageOverallDataResponseBody> body{};

  DescribeUsageOverallDataResponse() {}

  explicit DescribeUsageOverallDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeUsageOverallDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUsageOverallDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUsageOverallDataResponse() = default;
};
class DescribeUserInfoInChannelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> userId{};

  DescribeUserInfoInChannelRequest() {}

  explicit DescribeUserInfoInChannelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeUserInfoInChannelRequest() = default;
};
class DescribeUserInfoInChannelResponseBodyProperty : public Darabonba::Model {
public:
  shared_ptr<long> join{};
  shared_ptr<long> role{};
  shared_ptr<string> session{};

  DescribeUserInfoInChannelResponseBodyProperty() {}

  explicit DescribeUserInfoInChannelResponseBodyProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (join) {
      res["Join"] = boost::any(*join);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (session) {
      res["Session"] = boost::any(*session);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Join") != m.end() && !m["Join"].empty()) {
      join = make_shared<long>(boost::any_cast<long>(m["Join"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<long>(boost::any_cast<long>(m["Role"]));
    }
    if (m.find("Session") != m.end() && !m["Session"].empty()) {
      session = make_shared<string>(boost::any_cast<string>(m["Session"]));
    }
  }


  virtual ~DescribeUserInfoInChannelResponseBodyProperty() = default;
};
class DescribeUserInfoInChannelResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isChannelExist{};
  shared_ptr<bool> isInChannel{};
  shared_ptr<vector<DescribeUserInfoInChannelResponseBodyProperty>> property{};
  shared_ptr<string> requestId{};
  shared_ptr<long> timestamp{};

  DescribeUserInfoInChannelResponseBody() {}

  explicit DescribeUserInfoInChannelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isChannelExist) {
      res["IsChannelExist"] = boost::any(*isChannelExist);
    }
    if (isInChannel) {
      res["IsInChannel"] = boost::any(*isInChannel);
    }
    if (property) {
      vector<boost::any> temp1;
      for(auto item1:*property){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Property"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsChannelExist") != m.end() && !m["IsChannelExist"].empty()) {
      isChannelExist = make_shared<bool>(boost::any_cast<bool>(m["IsChannelExist"]));
    }
    if (m.find("IsInChannel") != m.end() && !m["IsInChannel"].empty()) {
      isInChannel = make_shared<bool>(boost::any_cast<bool>(m["IsInChannel"]));
    }
    if (m.find("Property") != m.end() && !m["Property"].empty()) {
      if (typeid(vector<boost::any>) == m["Property"].type()) {
        vector<DescribeUserInfoInChannelResponseBodyProperty> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Property"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserInfoInChannelResponseBodyProperty model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        property = make_shared<vector<DescribeUserInfoInChannelResponseBodyProperty>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~DescribeUserInfoInChannelResponseBody() = default;
};
class DescribeUserInfoInChannelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserInfoInChannelResponseBody> body{};

  DescribeUserInfoInChannelResponse() {}

  explicit DescribeUserInfoInChannelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeUserInfoInChannelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserInfoInChannelResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserInfoInChannelResponse() = default;
};
class DisableAutoLiveStreamRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> ruleId{};

  DisableAutoLiveStreamRuleRequest() {}

  explicit DisableAutoLiveStreamRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~DisableAutoLiveStreamRuleRequest() = default;
};
class DisableAutoLiveStreamRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableAutoLiveStreamRuleResponseBody() {}

  explicit DisableAutoLiveStreamRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DisableAutoLiveStreamRuleResponseBody() = default;
};
class DisableAutoLiveStreamRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableAutoLiveStreamRuleResponseBody> body{};

  DisableAutoLiveStreamRuleResponse() {}

  explicit DisableAutoLiveStreamRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableAutoLiveStreamRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableAutoLiveStreamRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DisableAutoLiveStreamRuleResponse() = default;
};
class EnableAutoLiveStreamRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> ruleId{};

  EnableAutoLiveStreamRuleRequest() {}

  explicit EnableAutoLiveStreamRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~EnableAutoLiveStreamRuleRequest() = default;
};
class EnableAutoLiveStreamRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableAutoLiveStreamRuleResponseBody() {}

  explicit EnableAutoLiveStreamRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnableAutoLiveStreamRuleResponseBody() = default;
};
class EnableAutoLiveStreamRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableAutoLiveStreamRuleResponseBody> body{};

  EnableAutoLiveStreamRuleResponse() {}

  explicit EnableAutoLiveStreamRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableAutoLiveStreamRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableAutoLiveStreamRuleResponseBody>(model1);
      }
    }
  }


  virtual ~EnableAutoLiveStreamRuleResponse() = default;
};
class GetMPUTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> taskId{};

  GetMPUTaskStatusRequest() {}

  explicit GetMPUTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetMPUTaskStatusRequest() = default;
};
class GetMPUTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};

  GetMPUTaskStatusResponseBody() {}

  explicit GetMPUTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~GetMPUTaskStatusResponseBody() = default;
};
class GetMPUTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMPUTaskStatusResponseBody> body{};

  GetMPUTaskStatusResponse() {}

  explicit GetMPUTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMPUTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMPUTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetMPUTaskStatusResponse() = default;
};
class ModifyAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<long> ownerId{};

  ModifyAppRequest() {}

  explicit ModifyAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~ModifyAppRequest() = default;
};
class ModifyAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAppResponseBody() {}

  explicit ModifyAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAppResponseBody() = default;
};
class ModifyAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppResponseBody> body{};

  ModifyAppResponse() {}

  explicit ModifyAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppResponse() = default;
};
class ModifyAppCallbackStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  ModifyAppCallbackStatusRequest() {}

  explicit ModifyAppCallbackStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~ModifyAppCallbackStatusRequest() = default;
};
class ModifyAppCallbackStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAppCallbackStatusResponseBody() {}

  explicit ModifyAppCallbackStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAppCallbackStatusResponseBody() = default;
};
class ModifyAppCallbackStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppCallbackStatusResponseBody> body{};

  ModifyAppCallbackStatusResponse() {}

  explicit ModifyAppCallbackStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAppCallbackStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppCallbackStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppCallbackStatusResponse() = default;
};
class ModifyAppLiveStreamStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};

  ModifyAppLiveStreamStatusRequest() {}

  explicit ModifyAppLiveStreamStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~ModifyAppLiveStreamStatusRequest() = default;
};
class ModifyAppLiveStreamStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAppLiveStreamStatusResponseBody() {}

  explicit ModifyAppLiveStreamStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAppLiveStreamStatusResponseBody() = default;
};
class ModifyAppLiveStreamStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppLiveStreamStatusResponseBody> body{};

  ModifyAppLiveStreamStatusResponse() {}

  explicit ModifyAppLiveStreamStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAppLiveStreamStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppLiveStreamStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppLiveStreamStatusResponse() = default;
};
class ModifyAppRecordStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};

  ModifyAppRecordStatusRequest() {}

  explicit ModifyAppRecordStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~ModifyAppRecordStatusRequest() = default;
};
class ModifyAppRecordStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAppRecordStatusResponseBody() {}

  explicit ModifyAppRecordStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAppRecordStatusResponseBody() = default;
};
class ModifyAppRecordStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppRecordStatusResponseBody> body{};

  ModifyAppRecordStatusResponse() {}

  explicit ModifyAppRecordStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAppRecordStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppRecordStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppRecordStatusResponse() = default;
};
class ModifyAppRecordTemplateRequestRecordTemplate : public Darabonba::Model {
public:
  shared_ptr<long> delayStopTime{};
  shared_ptr<string> filePrefix{};
  shared_ptr<long> fileSplitInterval{};
  shared_ptr<vector<string>> formats{};
  shared_ptr<vector<string>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<string> name{};
  shared_ptr<string> templateId{};

  ModifyAppRecordTemplateRequestRecordTemplate() {}

  explicit ModifyAppRecordTemplateRequestRecordTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delayStopTime) {
      res["DelayStopTime"] = boost::any(*delayStopTime);
    }
    if (filePrefix) {
      res["FilePrefix"] = boost::any(*filePrefix);
    }
    if (fileSplitInterval) {
      res["FileSplitInterval"] = boost::any(*fileSplitInterval);
    }
    if (formats) {
      res["Formats"] = boost::any(*formats);
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DelayStopTime") != m.end() && !m["DelayStopTime"].empty()) {
      delayStopTime = make_shared<long>(boost::any_cast<long>(m["DelayStopTime"]));
    }
    if (m.find("FilePrefix") != m.end() && !m["FilePrefix"].empty()) {
      filePrefix = make_shared<string>(boost::any_cast<string>(m["FilePrefix"]));
    }
    if (m.find("FileSplitInterval") != m.end() && !m["FileSplitInterval"].empty()) {
      fileSplitInterval = make_shared<long>(boost::any_cast<long>(m["FileSplitInterval"]));
    }
    if (m.find("Formats") != m.end() && !m["Formats"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Formats"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Formats"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      formats = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      layoutIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~ModifyAppRecordTemplateRequestRecordTemplate() = default;
};
class ModifyAppRecordTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};
  shared_ptr<ModifyAppRecordTemplateRequestRecordTemplate> recordTemplate{};

  ModifyAppRecordTemplateRequest() {}

  explicit ModifyAppRecordTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (recordTemplate) {
      res["RecordTemplate"] = recordTemplate ? boost::any(recordTemplate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RecordTemplate") != m.end() && !m["RecordTemplate"].empty()) {
      if (typeid(map<string, boost::any>) == m["RecordTemplate"].type()) {
        ModifyAppRecordTemplateRequestRecordTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RecordTemplate"]));
        recordTemplate = make_shared<ModifyAppRecordTemplateRequestRecordTemplate>(model1);
      }
    }
  }


  virtual ~ModifyAppRecordTemplateRequest() = default;
};
class ModifyAppRecordTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> recordTemplateShrink{};

  ModifyAppRecordTemplateShrinkRequest() {}

  explicit ModifyAppRecordTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (recordTemplateShrink) {
      res["RecordTemplate"] = boost::any(*recordTemplateShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RecordTemplate") != m.end() && !m["RecordTemplate"].empty()) {
      recordTemplateShrink = make_shared<string>(boost::any_cast<string>(m["RecordTemplate"]));
    }
  }


  virtual ~ModifyAppRecordTemplateShrinkRequest() = default;
};
class ModifyAppRecordTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAppRecordTemplateResponseBody() {}

  explicit ModifyAppRecordTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAppRecordTemplateResponseBody() = default;
};
class ModifyAppRecordTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppRecordTemplateResponseBody> body{};

  ModifyAppRecordTemplateResponse() {}

  explicit ModifyAppRecordTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAppRecordTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppRecordTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppRecordTemplateResponse() = default;
};
class ModifyAppStreamingOutTemplateRequestStreamingOutTemplate : public Darabonba::Model {
public:
  shared_ptr<vector<string>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<string> name{};
  shared_ptr<string> templateId{};

  ModifyAppStreamingOutTemplateRequestStreamingOutTemplate() {}

  explicit ModifyAppStreamingOutTemplateRequestStreamingOutTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      layoutIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~ModifyAppStreamingOutTemplateRequestStreamingOutTemplate() = default;
};
class ModifyAppStreamingOutTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<ModifyAppStreamingOutTemplateRequestStreamingOutTemplate> streamingOutTemplate{};

  ModifyAppStreamingOutTemplateRequest() {}

  explicit ModifyAppStreamingOutTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (streamingOutTemplate) {
      res["StreamingOutTemplate"] = streamingOutTemplate ? boost::any(streamingOutTemplate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("StreamingOutTemplate") != m.end() && !m["StreamingOutTemplate"].empty()) {
      if (typeid(map<string, boost::any>) == m["StreamingOutTemplate"].type()) {
        ModifyAppStreamingOutTemplateRequestStreamingOutTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StreamingOutTemplate"]));
        streamingOutTemplate = make_shared<ModifyAppStreamingOutTemplateRequestStreamingOutTemplate>(model1);
      }
    }
  }


  virtual ~ModifyAppStreamingOutTemplateRequest() = default;
};
class ModifyAppStreamingOutTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> streamingOutTemplateShrink{};

  ModifyAppStreamingOutTemplateShrinkRequest() {}

  explicit ModifyAppStreamingOutTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (streamingOutTemplateShrink) {
      res["StreamingOutTemplate"] = boost::any(*streamingOutTemplateShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("StreamingOutTemplate") != m.end() && !m["StreamingOutTemplate"].empty()) {
      streamingOutTemplateShrink = make_shared<string>(boost::any_cast<string>(m["StreamingOutTemplate"]));
    }
  }


  virtual ~ModifyAppStreamingOutTemplateShrinkRequest() = default;
};
class ModifyAppStreamingOutTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};

  ModifyAppStreamingOutTemplateResponseBody() {}

  explicit ModifyAppStreamingOutTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~ModifyAppStreamingOutTemplateResponseBody() = default;
};
class ModifyAppStreamingOutTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppStreamingOutTemplateResponseBody> body{};

  ModifyAppStreamingOutTemplateResponse() {}

  explicit ModifyAppStreamingOutTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAppStreamingOutTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppStreamingOutTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppStreamingOutTemplateResponse() = default;
};
class ModifyCallbackMetaRequestCallback : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> conf{};
  shared_ptr<vector<long>> subEvent{};

  ModifyCallbackMetaRequestCallback() {}

  explicit ModifyCallbackMetaRequestCallback(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (conf) {
      res["Conf"] = boost::any(*conf);
    }
    if (subEvent) {
      res["SubEvent"] = boost::any(*subEvent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Conf") != m.end() && !m["Conf"].empty()) {
      conf = make_shared<string>(boost::any_cast<string>(m["Conf"]));
    }
    if (m.find("SubEvent") != m.end() && !m["SubEvent"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SubEvent"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubEvent"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      subEvent = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~ModifyCallbackMetaRequestCallback() = default;
};
class ModifyCallbackMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<ModifyCallbackMetaRequestCallback> callback{};
  shared_ptr<long> ownerId{};

  ModifyCallbackMetaRequest() {}

  explicit ModifyCallbackMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callback) {
      res["Callback"] = callback ? boost::any(callback->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      if (typeid(map<string, boost::any>) == m["Callback"].type()) {
        ModifyCallbackMetaRequestCallback model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Callback"]));
        callback = make_shared<ModifyCallbackMetaRequestCallback>(model1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~ModifyCallbackMetaRequest() = default;
};
class ModifyCallbackMetaShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callbackShrink{};
  shared_ptr<long> ownerId{};

  ModifyCallbackMetaShrinkRequest() {}

  explicit ModifyCallbackMetaShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callbackShrink) {
      res["Callback"] = boost::any(*callbackShrink);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callbackShrink = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~ModifyCallbackMetaShrinkRequest() = default;
};
class ModifyCallbackMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyCallbackMetaResponseBody() {}

  explicit ModifyCallbackMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyCallbackMetaResponseBody() = default;
};
class ModifyCallbackMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyCallbackMetaResponseBody> body{};

  ModifyCallbackMetaResponse() {}

  explicit ModifyCallbackMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyCallbackMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyCallbackMetaResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyCallbackMetaResponse() = default;
};
class ModifyMPULayoutRequestPanes : public Darabonba::Model {
public:
  shared_ptr<double> height{};
  shared_ptr<long> majorPane{};
  shared_ptr<long> paneId{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  ModifyMPULayoutRequestPanes() {}

  explicit ModifyMPULayoutRequestPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (majorPane) {
      res["MajorPane"] = boost::any(*majorPane);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("MajorPane") != m.end() && !m["MajorPane"].empty()) {
      majorPane = make_shared<long>(boost::any_cast<long>(m["MajorPane"]));
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~ModifyMPULayoutRequestPanes() = default;
};
class ModifyMPULayoutRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> audioMixCount{};
  shared_ptr<long> layoutId{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<ModifyMPULayoutRequestPanes>> panes{};

  ModifyMPULayoutRequest() {}

  explicit ModifyMPULayoutRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (audioMixCount) {
      res["AudioMixCount"] = boost::any(*audioMixCount);
    }
    if (layoutId) {
      res["LayoutId"] = boost::any(*layoutId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (panes) {
      vector<boost::any> temp1;
      for(auto item1:*panes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Panes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AudioMixCount") != m.end() && !m["AudioMixCount"].empty()) {
      audioMixCount = make_shared<long>(boost::any_cast<long>(m["AudioMixCount"]));
    }
    if (m.find("LayoutId") != m.end() && !m["LayoutId"].empty()) {
      layoutId = make_shared<long>(boost::any_cast<long>(m["LayoutId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Panes") != m.end() && !m["Panes"].empty()) {
      if (typeid(vector<boost::any>) == m["Panes"].type()) {
        vector<ModifyMPULayoutRequestPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Panes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyMPULayoutRequestPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        panes = make_shared<vector<ModifyMPULayoutRequestPanes>>(expect1);
      }
    }
  }


  virtual ~ModifyMPULayoutRequest() = default;
};
class ModifyMPULayoutResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyMPULayoutResponseBody() {}

  explicit ModifyMPULayoutResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyMPULayoutResponseBody() = default;
};
class ModifyMPULayoutResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyMPULayoutResponseBody> body{};

  ModifyMPULayoutResponse() {}

  explicit ModifyMPULayoutResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyMPULayoutResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyMPULayoutResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyMPULayoutResponse() = default;
};
class RemoveTerminalsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<string>> terminalIds{};

  RemoveTerminalsRequest() {}

  explicit RemoveTerminalsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (terminalIds) {
      res["TerminalIds"] = boost::any(*terminalIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TerminalIds") != m.end() && !m["TerminalIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TerminalIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TerminalIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      terminalIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RemoveTerminalsRequest() = default;
};
class RemoveTerminalsResponseBodyTerminalsTerminal : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> id{};
  shared_ptr<string> message{};

  RemoveTerminalsResponseBodyTerminalsTerminal() {}

  explicit RemoveTerminalsResponseBodyTerminalsTerminal(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~RemoveTerminalsResponseBodyTerminalsTerminal() = default;
};
class RemoveTerminalsResponseBodyTerminals : public Darabonba::Model {
public:
  shared_ptr<vector<RemoveTerminalsResponseBodyTerminalsTerminal>> terminal{};

  RemoveTerminalsResponseBodyTerminals() {}

  explicit RemoveTerminalsResponseBodyTerminals(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (terminal) {
      vector<boost::any> temp1;
      for(auto item1:*terminal){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Terminal"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Terminal") != m.end() && !m["Terminal"].empty()) {
      if (typeid(vector<boost::any>) == m["Terminal"].type()) {
        vector<RemoveTerminalsResponseBodyTerminalsTerminal> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Terminal"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RemoveTerminalsResponseBodyTerminalsTerminal model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        terminal = make_shared<vector<RemoveTerminalsResponseBodyTerminalsTerminal>>(expect1);
      }
    }
  }


  virtual ~RemoveTerminalsResponseBodyTerminals() = default;
};
class RemoveTerminalsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RemoveTerminalsResponseBodyTerminals> terminals{};

  RemoveTerminalsResponseBody() {}

  explicit RemoveTerminalsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (terminals) {
      res["Terminals"] = terminals ? boost::any(terminals->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Terminals") != m.end() && !m["Terminals"].empty()) {
      if (typeid(map<string, boost::any>) == m["Terminals"].type()) {
        RemoveTerminalsResponseBodyTerminals model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Terminals"]));
        terminals = make_shared<RemoveTerminalsResponseBodyTerminals>(model1);
      }
    }
  }


  virtual ~RemoveTerminalsResponseBody() = default;
};
class RemoveTerminalsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveTerminalsResponseBody> body{};

  RemoveTerminalsResponse() {}

  explicit RemoveTerminalsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveTerminalsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveTerminalsResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveTerminalsResponse() = default;
};
class RemoveUsersRequestUsers : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  RemoveUsersRequestUsers() {}

  explicit RemoveUsersRequestUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~RemoveUsersRequestUsers() = default;
};
class RemoveUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<vector<RemoveUsersRequestUsers>> users{};

  RemoveUsersRequest() {}

  explicit RemoveUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<RemoveUsersRequestUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RemoveUsersRequestUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<RemoveUsersRequestUsers>>(expect1);
      }
    }
  }


  virtual ~RemoveUsersRequest() = default;
};
class RemoveUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> userId{};

  RemoveUsersResponseBodyUsers() {}

  explicit RemoveUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~RemoveUsersResponseBodyUsers() = default;
};
class RemoveUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<RemoveUsersResponseBodyUsers>> users{};

  RemoveUsersResponseBody() {}

  explicit RemoveUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<RemoveUsersResponseBodyUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RemoveUsersResponseBodyUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<RemoveUsersResponseBodyUsers>>(expect1);
      }
    }
  }


  virtual ~RemoveUsersResponseBody() = default;
};
class RemoveUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveUsersResponseBody> body{};

  RemoveUsersResponse() {}

  explicit RemoveUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveUsersResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveUsersResponse() = default;
};
class StartCategoryCallbackRequestCallback : public Darabonba::Model {
public:
  shared_ptr<string> category{};

  StartCategoryCallbackRequestCallback() {}

  explicit StartCategoryCallbackRequestCallback(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
  }


  virtual ~StartCategoryCallbackRequestCallback() = default;
};
class StartCategoryCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<StartCategoryCallbackRequestCallback> callback{};

  StartCategoryCallbackRequest() {}

  explicit StartCategoryCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callback) {
      res["Callback"] = callback ? boost::any(callback->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      if (typeid(map<string, boost::any>) == m["Callback"].type()) {
        StartCategoryCallbackRequestCallback model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Callback"]));
        callback = make_shared<StartCategoryCallbackRequestCallback>(model1);
      }
    }
  }


  virtual ~StartCategoryCallbackRequest() = default;
};
class StartCategoryCallbackShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callbackShrink{};

  StartCategoryCallbackShrinkRequest() {}

  explicit StartCategoryCallbackShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callbackShrink) {
      res["Callback"] = boost::any(*callbackShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callbackShrink = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
  }


  virtual ~StartCategoryCallbackShrinkRequest() = default;
};
class StartCategoryCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartCategoryCallbackResponseBody() {}

  explicit StartCategoryCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartCategoryCallbackResponseBody() = default;
};
class StartCategoryCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartCategoryCallbackResponseBody> body{};

  StartCategoryCallbackResponse() {}

  explicit StartCategoryCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartCategoryCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartCategoryCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~StartCategoryCallbackResponse() = default;
};
class StartCloudRecordRequestClockWidgetsBoxColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  StartCloudRecordRequestClockWidgetsBoxColor() {}

  explicit StartCloudRecordRequestClockWidgetsBoxColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~StartCloudRecordRequestClockWidgetsBoxColor() = default;
};
class StartCloudRecordRequestClockWidgetsFontColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  StartCloudRecordRequestClockWidgetsFontColor() {}

  explicit StartCloudRecordRequestClockWidgetsFontColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~StartCloudRecordRequestClockWidgetsFontColor() = default;
};
class StartCloudRecordRequestClockWidgets : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> boxAlpha{};
  shared_ptr<long> boxBorderw{};
  shared_ptr<StartCloudRecordRequestClockWidgetsBoxColor> boxColor{};
  shared_ptr<long> font{};
  shared_ptr<StartCloudRecordRequestClockWidgetsFontColor> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<bool> hasBox{};
  shared_ptr<long> layer{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> zone{};

  StartCloudRecordRequestClockWidgets() {}

  explicit StartCloudRecordRequestClockWidgets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (boxAlpha) {
      res["BoxAlpha"] = boost::any(*boxAlpha);
    }
    if (boxBorderw) {
      res["BoxBorderw"] = boost::any(*boxBorderw);
    }
    if (boxColor) {
      res["BoxColor"] = boxColor ? boost::any(boxColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (font) {
      res["Font"] = boost::any(*font);
    }
    if (fontColor) {
      res["FontColor"] = fontColor ? boost::any(fontColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (hasBox) {
      res["HasBox"] = boost::any(*hasBox);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (zone) {
      res["Zone"] = boost::any(*zone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BoxAlpha") != m.end() && !m["BoxAlpha"].empty()) {
      boxAlpha = make_shared<double>(boost::any_cast<double>(m["BoxAlpha"]));
    }
    if (m.find("BoxBorderw") != m.end() && !m["BoxBorderw"].empty()) {
      boxBorderw = make_shared<long>(boost::any_cast<long>(m["BoxBorderw"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["BoxColor"].type()) {
        StartCloudRecordRequestClockWidgetsBoxColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BoxColor"]));
        boxColor = make_shared<StartCloudRecordRequestClockWidgetsBoxColor>(model1);
      }
    }
    if (m.find("Font") != m.end() && !m["Font"].empty()) {
      font = make_shared<long>(boost::any_cast<long>(m["Font"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["FontColor"].type()) {
        StartCloudRecordRequestClockWidgetsFontColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FontColor"]));
        fontColor = make_shared<StartCloudRecordRequestClockWidgetsFontColor>(model1);
      }
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("HasBox") != m.end() && !m["HasBox"].empty()) {
      hasBox = make_shared<bool>(boost::any_cast<bool>(m["HasBox"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      zone = make_shared<long>(boost::any_cast<long>(m["Zone"]));
    }
  }


  virtual ~StartCloudRecordRequestClockWidgets() = default;
};
class StartCloudRecordRequestImages : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> height{};
  shared_ptr<long> imageCropMode{};
  shared_ptr<long> layer{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  StartCloudRecordRequestImages() {}

  explicit StartCloudRecordRequestImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (imageCropMode) {
      res["ImageCropMode"] = boost::any(*imageCropMode);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("ImageCropMode") != m.end() && !m["ImageCropMode"].empty()) {
      imageCropMode = make_shared<long>(boost::any_cast<long>(m["ImageCropMode"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~StartCloudRecordRequestImages() = default;
};
class StartCloudRecordRequestPanesImages : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> height{};
  shared_ptr<long> layer{};
  shared_ptr<long> paneImageCropMode{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  StartCloudRecordRequestPanesImages() {}

  explicit StartCloudRecordRequestPanesImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (paneImageCropMode) {
      res["PaneImageCropMode"] = boost::any(*paneImageCropMode);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("PaneImageCropMode") != m.end() && !m["PaneImageCropMode"].empty()) {
      paneImageCropMode = make_shared<long>(boost::any_cast<long>(m["PaneImageCropMode"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~StartCloudRecordRequestPanesImages() = default;
};
class StartCloudRecordRequestPanesTextsBoxColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  StartCloudRecordRequestPanesTextsBoxColor() {}

  explicit StartCloudRecordRequestPanesTextsBoxColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~StartCloudRecordRequestPanesTextsBoxColor() = default;
};
class StartCloudRecordRequestPanesTextsFontColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  StartCloudRecordRequestPanesTextsFontColor() {}

  explicit StartCloudRecordRequestPanesTextsFontColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~StartCloudRecordRequestPanesTextsFontColor() = default;
};
class StartCloudRecordRequestPanesTexts : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> boxAlpha{};
  shared_ptr<long> boxBorderw{};
  shared_ptr<StartCloudRecordRequestPanesTextsBoxColor> boxColor{};
  shared_ptr<long> font{};
  shared_ptr<StartCloudRecordRequestPanesTextsFontColor> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<bool> hasBox{};
  shared_ptr<long> layer{};
  shared_ptr<string> texture{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  StartCloudRecordRequestPanesTexts() {}

  explicit StartCloudRecordRequestPanesTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (boxAlpha) {
      res["BoxAlpha"] = boost::any(*boxAlpha);
    }
    if (boxBorderw) {
      res["BoxBorderw"] = boost::any(*boxBorderw);
    }
    if (boxColor) {
      res["BoxColor"] = boxColor ? boost::any(boxColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (font) {
      res["Font"] = boost::any(*font);
    }
    if (fontColor) {
      res["FontColor"] = fontColor ? boost::any(fontColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (hasBox) {
      res["HasBox"] = boost::any(*hasBox);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (texture) {
      res["Texture"] = boost::any(*texture);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BoxAlpha") != m.end() && !m["BoxAlpha"].empty()) {
      boxAlpha = make_shared<double>(boost::any_cast<double>(m["BoxAlpha"]));
    }
    if (m.find("BoxBorderw") != m.end() && !m["BoxBorderw"].empty()) {
      boxBorderw = make_shared<long>(boost::any_cast<long>(m["BoxBorderw"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["BoxColor"].type()) {
        StartCloudRecordRequestPanesTextsBoxColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BoxColor"]));
        boxColor = make_shared<StartCloudRecordRequestPanesTextsBoxColor>(model1);
      }
    }
    if (m.find("Font") != m.end() && !m["Font"].empty()) {
      font = make_shared<long>(boost::any_cast<long>(m["Font"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["FontColor"].type()) {
        StartCloudRecordRequestPanesTextsFontColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FontColor"]));
        fontColor = make_shared<StartCloudRecordRequestPanesTextsFontColor>(model1);
      }
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("HasBox") != m.end() && !m["HasBox"].empty()) {
      hasBox = make_shared<bool>(boost::any_cast<bool>(m["HasBox"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("Texture") != m.end() && !m["Texture"].empty()) {
      texture = make_shared<string>(boost::any_cast<string>(m["Texture"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~StartCloudRecordRequestPanesTexts() = default;
};
class StartCloudRecordRequestPanes : public Darabonba::Model {
public:
  shared_ptr<vector<StartCloudRecordRequestPanesImages>> images{};
  shared_ptr<long> paneCropMode{};
  shared_ptr<long> paneId{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<StartCloudRecordRequestPanesTexts>> texts{};

  StartCloudRecordRequestPanes() {}

  explicit StartCloudRecordRequestPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (paneCropMode) {
      res["PaneCropMode"] = boost::any(*paneCropMode);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<StartCloudRecordRequestPanesImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartCloudRecordRequestPanesImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<StartCloudRecordRequestPanesImages>>(expect1);
      }
    }
    if (m.find("PaneCropMode") != m.end() && !m["PaneCropMode"].empty()) {
      paneCropMode = make_shared<long>(boost::any_cast<long>(m["PaneCropMode"]));
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<StartCloudRecordRequestPanesTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartCloudRecordRequestPanesTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<StartCloudRecordRequestPanesTexts>>(expect1);
      }
    }
  }


  virtual ~StartCloudRecordRequestPanes() = default;
};
class StartCloudRecordRequestStorageConfig : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> bucket{};
  shared_ptr<long> region{};
  shared_ptr<string> secretKey{};
  shared_ptr<long> vendor{};

  StartCloudRecordRequestStorageConfig() {}

  explicit StartCloudRecordRequestStorageConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (secretKey) {
      res["SecretKey"] = boost::any(*secretKey);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<long>(boost::any_cast<long>(m["Region"]));
    }
    if (m.find("SecretKey") != m.end() && !m["SecretKey"].empty()) {
      secretKey = make_shared<string>(boost::any_cast<string>(m["SecretKey"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<long>(boost::any_cast<long>(m["Vendor"]));
    }
  }


  virtual ~StartCloudRecordRequestStorageConfig() = default;
};
class StartCloudRecordRequestTextsBoxColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  StartCloudRecordRequestTextsBoxColor() {}

  explicit StartCloudRecordRequestTextsBoxColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~StartCloudRecordRequestTextsBoxColor() = default;
};
class StartCloudRecordRequestTextsFontColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  StartCloudRecordRequestTextsFontColor() {}

  explicit StartCloudRecordRequestTextsFontColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~StartCloudRecordRequestTextsFontColor() = default;
};
class StartCloudRecordRequestTexts : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> boxAlpha{};
  shared_ptr<long> boxBorderw{};
  shared_ptr<StartCloudRecordRequestTextsBoxColor> boxColor{};
  shared_ptr<long> font{};
  shared_ptr<StartCloudRecordRequestTextsFontColor> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<bool> hasBox{};
  shared_ptr<long> layer{};
  shared_ptr<string> texture{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  StartCloudRecordRequestTexts() {}

  explicit StartCloudRecordRequestTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (boxAlpha) {
      res["BoxAlpha"] = boost::any(*boxAlpha);
    }
    if (boxBorderw) {
      res["BoxBorderw"] = boost::any(*boxBorderw);
    }
    if (boxColor) {
      res["BoxColor"] = boxColor ? boost::any(boxColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (font) {
      res["Font"] = boost::any(*font);
    }
    if (fontColor) {
      res["FontColor"] = fontColor ? boost::any(fontColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (hasBox) {
      res["HasBox"] = boost::any(*hasBox);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (texture) {
      res["Texture"] = boost::any(*texture);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BoxAlpha") != m.end() && !m["BoxAlpha"].empty()) {
      boxAlpha = make_shared<double>(boost::any_cast<double>(m["BoxAlpha"]));
    }
    if (m.find("BoxBorderw") != m.end() && !m["BoxBorderw"].empty()) {
      boxBorderw = make_shared<long>(boost::any_cast<long>(m["BoxBorderw"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["BoxColor"].type()) {
        StartCloudRecordRequestTextsBoxColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BoxColor"]));
        boxColor = make_shared<StartCloudRecordRequestTextsBoxColor>(model1);
      }
    }
    if (m.find("Font") != m.end() && !m["Font"].empty()) {
      font = make_shared<long>(boost::any_cast<long>(m["Font"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["FontColor"].type()) {
        StartCloudRecordRequestTextsFontColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FontColor"]));
        fontColor = make_shared<StartCloudRecordRequestTextsFontColor>(model1);
      }
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("HasBox") != m.end() && !m["HasBox"].empty()) {
      hasBox = make_shared<bool>(boost::any_cast<bool>(m["HasBox"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("Texture") != m.end() && !m["Texture"].empty()) {
      texture = make_shared<string>(boost::any_cast<string>(m["Texture"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~StartCloudRecordRequestTexts() = default;
};
class StartCloudRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<vector<StartCloudRecordRequestClockWidgets>> clockWidgets{};
  shared_ptr<long> cropMode{};
  shared_ptr<vector<StartCloudRecordRequestImages>> images{};
  shared_ptr<vector<StartCloudRecordRequestPanes>> panes{};
  shared_ptr<StartCloudRecordRequestStorageConfig> storageConfig{};
  shared_ptr<string> taskId{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<StartCloudRecordRequestTexts>> texts{};

  StartCloudRecordRequest() {}

  explicit StartCloudRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (clockWidgets) {
      vector<boost::any> temp1;
      for(auto item1:*clockWidgets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClockWidgets"] = boost::any(temp1);
    }
    if (cropMode) {
      res["CropMode"] = boost::any(*cropMode);
    }
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (panes) {
      vector<boost::any> temp1;
      for(auto item1:*panes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Panes"] = boost::any(temp1);
    }
    if (storageConfig) {
      res["StorageConfig"] = storageConfig ? boost::any(storageConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("ClockWidgets") != m.end() && !m["ClockWidgets"].empty()) {
      if (typeid(vector<boost::any>) == m["ClockWidgets"].type()) {
        vector<StartCloudRecordRequestClockWidgets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClockWidgets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartCloudRecordRequestClockWidgets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clockWidgets = make_shared<vector<StartCloudRecordRequestClockWidgets>>(expect1);
      }
    }
    if (m.find("CropMode") != m.end() && !m["CropMode"].empty()) {
      cropMode = make_shared<long>(boost::any_cast<long>(m["CropMode"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<StartCloudRecordRequestImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartCloudRecordRequestImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<StartCloudRecordRequestImages>>(expect1);
      }
    }
    if (m.find("Panes") != m.end() && !m["Panes"].empty()) {
      if (typeid(vector<boost::any>) == m["Panes"].type()) {
        vector<StartCloudRecordRequestPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Panes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartCloudRecordRequestPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        panes = make_shared<vector<StartCloudRecordRequestPanes>>(expect1);
      }
    }
    if (m.find("StorageConfig") != m.end() && !m["StorageConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["StorageConfig"].type()) {
        StartCloudRecordRequestStorageConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StorageConfig"]));
        storageConfig = make_shared<StartCloudRecordRequestStorageConfig>(model1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<StartCloudRecordRequestTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartCloudRecordRequestTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<StartCloudRecordRequestTexts>>(expect1);
      }
    }
  }


  virtual ~StartCloudRecordRequest() = default;
};
class StartCloudRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  StartCloudRecordResponseBody() {}

  explicit StartCloudRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StartCloudRecordResponseBody() = default;
};
class StartCloudRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartCloudRecordResponseBody> body{};

  StartCloudRecordResponse() {}

  explicit StartCloudRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartCloudRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartCloudRecordResponseBody>(model1);
      }
    }
  }


  virtual ~StartCloudRecordResponse() = default;
};
class StartMPUTaskRequestBackgrounds : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  StartMPUTaskRequestBackgrounds() {}

  explicit StartMPUTaskRequestBackgrounds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~StartMPUTaskRequestBackgrounds() = default;
};
class StartMPUTaskRequestClockWidgets : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> borderColor{};
  shared_ptr<long> borderWidth{};
  shared_ptr<bool> box{};
  shared_ptr<long> boxBorderWidth{};
  shared_ptr<long> boxColor{};
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  StartMPUTaskRequestClockWidgets() {}

  explicit StartMPUTaskRequestClockWidgets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (borderColor) {
      res["BorderColor"] = boost::any(*borderColor);
    }
    if (borderWidth) {
      res["BorderWidth"] = boost::any(*borderWidth);
    }
    if (box) {
      res["Box"] = boost::any(*box);
    }
    if (boxBorderWidth) {
      res["BoxBorderWidth"] = boost::any(*boxBorderWidth);
    }
    if (boxColor) {
      res["BoxColor"] = boost::any(*boxColor);
    }
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BorderColor") != m.end() && !m["BorderColor"].empty()) {
      borderColor = make_shared<long>(boost::any_cast<long>(m["BorderColor"]));
    }
    if (m.find("BorderWidth") != m.end() && !m["BorderWidth"].empty()) {
      borderWidth = make_shared<long>(boost::any_cast<long>(m["BorderWidth"]));
    }
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      box = make_shared<bool>(boost::any_cast<bool>(m["Box"]));
    }
    if (m.find("BoxBorderWidth") != m.end() && !m["BoxBorderWidth"].empty()) {
      boxBorderWidth = make_shared<long>(boost::any_cast<long>(m["BoxBorderWidth"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      boxColor = make_shared<long>(boost::any_cast<long>(m["BoxColor"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~StartMPUTaskRequestClockWidgets() = default;
};
class StartMPUTaskRequestEnhancedParam : public Darabonba::Model {
public:
  shared_ptr<bool> enablePortraitSegmentation{};

  StartMPUTaskRequestEnhancedParam() {}

  explicit StartMPUTaskRequestEnhancedParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enablePortraitSegmentation) {
      res["EnablePortraitSegmentation"] = boost::any(*enablePortraitSegmentation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnablePortraitSegmentation") != m.end() && !m["EnablePortraitSegmentation"].empty()) {
      enablePortraitSegmentation = make_shared<bool>(boost::any_cast<bool>(m["EnablePortraitSegmentation"]));
    }
  }


  virtual ~StartMPUTaskRequestEnhancedParam() = default;
};
class StartMPUTaskRequestUserPanesImages : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  StartMPUTaskRequestUserPanesImages() {}

  explicit StartMPUTaskRequestUserPanesImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~StartMPUTaskRequestUserPanesImages() = default;
};
class StartMPUTaskRequestUserPanesTexts : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> borderColor{};
  shared_ptr<long> borderWidth{};
  shared_ptr<bool> box{};
  shared_ptr<long> boxBorderWidth{};
  shared_ptr<long> boxColor{};
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<string> text{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  StartMPUTaskRequestUserPanesTexts() {}

  explicit StartMPUTaskRequestUserPanesTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (borderColor) {
      res["BorderColor"] = boost::any(*borderColor);
    }
    if (borderWidth) {
      res["BorderWidth"] = boost::any(*borderWidth);
    }
    if (box) {
      res["Box"] = boost::any(*box);
    }
    if (boxBorderWidth) {
      res["BoxBorderWidth"] = boost::any(*boxBorderWidth);
    }
    if (boxColor) {
      res["BoxColor"] = boost::any(*boxColor);
    }
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BorderColor") != m.end() && !m["BorderColor"].empty()) {
      borderColor = make_shared<long>(boost::any_cast<long>(m["BorderColor"]));
    }
    if (m.find("BorderWidth") != m.end() && !m["BorderWidth"].empty()) {
      borderWidth = make_shared<long>(boost::any_cast<long>(m["BorderWidth"]));
    }
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      box = make_shared<bool>(boost::any_cast<bool>(m["Box"]));
    }
    if (m.find("BoxBorderWidth") != m.end() && !m["BoxBorderWidth"].empty()) {
      boxBorderWidth = make_shared<long>(boost::any_cast<long>(m["BoxBorderWidth"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      boxColor = make_shared<long>(boost::any_cast<long>(m["BoxColor"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~StartMPUTaskRequestUserPanesTexts() = default;
};
class StartMPUTaskRequestUserPanes : public Darabonba::Model {
public:
  shared_ptr<vector<StartMPUTaskRequestUserPanesImages>> images{};
  shared_ptr<long> paneId{};
  shared_ptr<long> segmentType{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<StartMPUTaskRequestUserPanesTexts>> texts{};
  shared_ptr<string> userId{};

  StartMPUTaskRequestUserPanes() {}

  explicit StartMPUTaskRequestUserPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (segmentType) {
      res["SegmentType"] = boost::any(*segmentType);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<StartMPUTaskRequestUserPanesImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartMPUTaskRequestUserPanesImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<StartMPUTaskRequestUserPanesImages>>(expect1);
      }
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("SegmentType") != m.end() && !m["SegmentType"].empty()) {
      segmentType = make_shared<long>(boost::any_cast<long>(m["SegmentType"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<StartMPUTaskRequestUserPanesTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartMPUTaskRequestUserPanesTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<StartMPUTaskRequestUserPanesTexts>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~StartMPUTaskRequestUserPanes() = default;
};
class StartMPUTaskRequestWatermarks : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  StartMPUTaskRequestWatermarks() {}

  explicit StartMPUTaskRequestWatermarks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~StartMPUTaskRequestWatermarks() = default;
};
class StartMPUTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> backgroundColor{};
  shared_ptr<vector<StartMPUTaskRequestBackgrounds>> backgrounds{};
  shared_ptr<string> channelId{};
  shared_ptr<vector<StartMPUTaskRequestClockWidgets>> clockWidgets{};
  shared_ptr<long> cropMode{};
  shared_ptr<StartMPUTaskRequestEnhancedParam> enhancedParam{};
  shared_ptr<vector<long>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<long> mixMode{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> payloadType{};
  shared_ptr<long> reportVad{};
  shared_ptr<long> rtpExtInfo{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> streamType{};
  shared_ptr<string> streamURL{};
  shared_ptr<vector<string>> subSpecAudioUsers{};
  shared_ptr<vector<string>> subSpecCameraUsers{};
  shared_ptr<vector<string>> subSpecShareScreenUsers{};
  shared_ptr<vector<string>> subSpecUsers{};
  shared_ptr<string> taskId{};
  shared_ptr<long> taskType{};
  shared_ptr<long> timeStampRef{};
  shared_ptr<vector<string>> unsubSpecAudioUsers{};
  shared_ptr<vector<string>> unsubSpecCameraUsers{};
  shared_ptr<vector<string>> unsubSpecShareScreenUsers{};
  shared_ptr<vector<StartMPUTaskRequestUserPanes>> userPanes{};
  shared_ptr<long> vadInterval{};
  shared_ptr<vector<StartMPUTaskRequestWatermarks>> watermarks{};

  StartMPUTaskRequest() {}

  explicit StartMPUTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (backgroundColor) {
      res["BackgroundColor"] = boost::any(*backgroundColor);
    }
    if (backgrounds) {
      vector<boost::any> temp1;
      for(auto item1:*backgrounds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backgrounds"] = boost::any(temp1);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (clockWidgets) {
      vector<boost::any> temp1;
      for(auto item1:*clockWidgets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClockWidgets"] = boost::any(temp1);
    }
    if (cropMode) {
      res["CropMode"] = boost::any(*cropMode);
    }
    if (enhancedParam) {
      res["EnhancedParam"] = enhancedParam ? boost::any(enhancedParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (mixMode) {
      res["MixMode"] = boost::any(*mixMode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (payloadType) {
      res["PayloadType"] = boost::any(*payloadType);
    }
    if (reportVad) {
      res["ReportVad"] = boost::any(*reportVad);
    }
    if (rtpExtInfo) {
      res["RtpExtInfo"] = boost::any(*rtpExtInfo);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    if (streamURL) {
      res["StreamURL"] = boost::any(*streamURL);
    }
    if (subSpecAudioUsers) {
      res["SubSpecAudioUsers"] = boost::any(*subSpecAudioUsers);
    }
    if (subSpecCameraUsers) {
      res["SubSpecCameraUsers"] = boost::any(*subSpecCameraUsers);
    }
    if (subSpecShareScreenUsers) {
      res["SubSpecShareScreenUsers"] = boost::any(*subSpecShareScreenUsers);
    }
    if (subSpecUsers) {
      res["SubSpecUsers"] = boost::any(*subSpecUsers);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (timeStampRef) {
      res["TimeStampRef"] = boost::any(*timeStampRef);
    }
    if (unsubSpecAudioUsers) {
      res["UnsubSpecAudioUsers"] = boost::any(*unsubSpecAudioUsers);
    }
    if (unsubSpecCameraUsers) {
      res["UnsubSpecCameraUsers"] = boost::any(*unsubSpecCameraUsers);
    }
    if (unsubSpecShareScreenUsers) {
      res["UnsubSpecShareScreenUsers"] = boost::any(*unsubSpecShareScreenUsers);
    }
    if (userPanes) {
      vector<boost::any> temp1;
      for(auto item1:*userPanes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserPanes"] = boost::any(temp1);
    }
    if (vadInterval) {
      res["VadInterval"] = boost::any(*vadInterval);
    }
    if (watermarks) {
      vector<boost::any> temp1;
      for(auto item1:*watermarks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Watermarks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BackgroundColor") != m.end() && !m["BackgroundColor"].empty()) {
      backgroundColor = make_shared<long>(boost::any_cast<long>(m["BackgroundColor"]));
    }
    if (m.find("Backgrounds") != m.end() && !m["Backgrounds"].empty()) {
      if (typeid(vector<boost::any>) == m["Backgrounds"].type()) {
        vector<StartMPUTaskRequestBackgrounds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backgrounds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartMPUTaskRequestBackgrounds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backgrounds = make_shared<vector<StartMPUTaskRequestBackgrounds>>(expect1);
      }
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("ClockWidgets") != m.end() && !m["ClockWidgets"].empty()) {
      if (typeid(vector<boost::any>) == m["ClockWidgets"].type()) {
        vector<StartMPUTaskRequestClockWidgets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClockWidgets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartMPUTaskRequestClockWidgets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clockWidgets = make_shared<vector<StartMPUTaskRequestClockWidgets>>(expect1);
      }
    }
    if (m.find("CropMode") != m.end() && !m["CropMode"].empty()) {
      cropMode = make_shared<long>(boost::any_cast<long>(m["CropMode"]));
    }
    if (m.find("EnhancedParam") != m.end() && !m["EnhancedParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["EnhancedParam"].type()) {
        StartMPUTaskRequestEnhancedParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EnhancedParam"]));
        enhancedParam = make_shared<StartMPUTaskRequestEnhancedParam>(model1);
      }
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      layoutIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("MixMode") != m.end() && !m["MixMode"].empty()) {
      mixMode = make_shared<long>(boost::any_cast<long>(m["MixMode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PayloadType") != m.end() && !m["PayloadType"].empty()) {
      payloadType = make_shared<long>(boost::any_cast<long>(m["PayloadType"]));
    }
    if (m.find("ReportVad") != m.end() && !m["ReportVad"].empty()) {
      reportVad = make_shared<long>(boost::any_cast<long>(m["ReportVad"]));
    }
    if (m.find("RtpExtInfo") != m.end() && !m["RtpExtInfo"].empty()) {
      rtpExtInfo = make_shared<long>(boost::any_cast<long>(m["RtpExtInfo"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
    if (m.find("StreamURL") != m.end() && !m["StreamURL"].empty()) {
      streamURL = make_shared<string>(boost::any_cast<string>(m["StreamURL"]));
    }
    if (m.find("SubSpecAudioUsers") != m.end() && !m["SubSpecAudioUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecAudioUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecAudioUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecAudioUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecCameraUsers") != m.end() && !m["SubSpecCameraUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecCameraUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecCameraUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecCameraUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecShareScreenUsers") != m.end() && !m["SubSpecShareScreenUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecShareScreenUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecShareScreenUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecShareScreenUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecUsers") != m.end() && !m["SubSpecUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<long>(boost::any_cast<long>(m["TaskType"]));
    }
    if (m.find("TimeStampRef") != m.end() && !m["TimeStampRef"].empty()) {
      timeStampRef = make_shared<long>(boost::any_cast<long>(m["TimeStampRef"]));
    }
    if (m.find("UnsubSpecAudioUsers") != m.end() && !m["UnsubSpecAudioUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecAudioUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecAudioUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecAudioUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnsubSpecCameraUsers") != m.end() && !m["UnsubSpecCameraUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecCameraUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecCameraUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecCameraUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnsubSpecShareScreenUsers") != m.end() && !m["UnsubSpecShareScreenUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecShareScreenUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecShareScreenUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecShareScreenUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserPanes") != m.end() && !m["UserPanes"].empty()) {
      if (typeid(vector<boost::any>) == m["UserPanes"].type()) {
        vector<StartMPUTaskRequestUserPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserPanes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartMPUTaskRequestUserPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userPanes = make_shared<vector<StartMPUTaskRequestUserPanes>>(expect1);
      }
    }
    if (m.find("VadInterval") != m.end() && !m["VadInterval"].empty()) {
      vadInterval = make_shared<long>(boost::any_cast<long>(m["VadInterval"]));
    }
    if (m.find("Watermarks") != m.end() && !m["Watermarks"].empty()) {
      if (typeid(vector<boost::any>) == m["Watermarks"].type()) {
        vector<StartMPUTaskRequestWatermarks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Watermarks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartMPUTaskRequestWatermarks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        watermarks = make_shared<vector<StartMPUTaskRequestWatermarks>>(expect1);
      }
    }
  }


  virtual ~StartMPUTaskRequest() = default;
};
class StartMPUTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartMPUTaskResponseBody() {}

  explicit StartMPUTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartMPUTaskResponseBody() = default;
};
class StartMPUTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartMPUTaskResponseBody> body{};

  StartMPUTaskResponse() {}

  explicit StartMPUTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartMPUTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartMPUTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StartMPUTaskResponse() = default;
};
class StartRecordTaskRequestUserPanesImages : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  StartRecordTaskRequestUserPanesImages() {}

  explicit StartRecordTaskRequestUserPanesImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~StartRecordTaskRequestUserPanesImages() = default;
};
class StartRecordTaskRequestUserPanesTexts : public Darabonba::Model {
public:
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<string> text{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  StartRecordTaskRequestUserPanesTexts() {}

  explicit StartRecordTaskRequestUserPanesTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~StartRecordTaskRequestUserPanesTexts() = default;
};
class StartRecordTaskRequestUserPanes : public Darabonba::Model {
public:
  shared_ptr<vector<StartRecordTaskRequestUserPanesImages>> images{};
  shared_ptr<long> paneId{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<StartRecordTaskRequestUserPanesTexts>> texts{};
  shared_ptr<string> userId{};

  StartRecordTaskRequestUserPanes() {}

  explicit StartRecordTaskRequestUserPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<StartRecordTaskRequestUserPanesImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartRecordTaskRequestUserPanesImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<StartRecordTaskRequestUserPanesImages>>(expect1);
      }
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<StartRecordTaskRequestUserPanesTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartRecordTaskRequestUserPanesTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<StartRecordTaskRequestUserPanesTexts>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~StartRecordTaskRequestUserPanes() = default;
};
class StartRecordTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> cropMode{};
  shared_ptr<vector<long>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<long> mixMode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> streamType{};
  shared_ptr<vector<string>> subSpecAudioUsers{};
  shared_ptr<vector<string>> subSpecCameraUsers{};
  shared_ptr<vector<string>> subSpecShareScreenUsers{};
  shared_ptr<vector<string>> subSpecUsers{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskProfile{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<string>> unsubSpecAudioUsers{};
  shared_ptr<vector<string>> unsubSpecCameraUsers{};
  shared_ptr<vector<string>> unsubSpecShareScreenUsers{};
  shared_ptr<vector<StartRecordTaskRequestUserPanes>> userPanes{};

  StartRecordTaskRequest() {}

  explicit StartRecordTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (cropMode) {
      res["CropMode"] = boost::any(*cropMode);
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (mixMode) {
      res["MixMode"] = boost::any(*mixMode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    if (subSpecAudioUsers) {
      res["SubSpecAudioUsers"] = boost::any(*subSpecAudioUsers);
    }
    if (subSpecCameraUsers) {
      res["SubSpecCameraUsers"] = boost::any(*subSpecCameraUsers);
    }
    if (subSpecShareScreenUsers) {
      res["SubSpecShareScreenUsers"] = boost::any(*subSpecShareScreenUsers);
    }
    if (subSpecUsers) {
      res["SubSpecUsers"] = boost::any(*subSpecUsers);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskProfile) {
      res["TaskProfile"] = boost::any(*taskProfile);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (unsubSpecAudioUsers) {
      res["UnsubSpecAudioUsers"] = boost::any(*unsubSpecAudioUsers);
    }
    if (unsubSpecCameraUsers) {
      res["UnsubSpecCameraUsers"] = boost::any(*unsubSpecCameraUsers);
    }
    if (unsubSpecShareScreenUsers) {
      res["UnsubSpecShareScreenUsers"] = boost::any(*unsubSpecShareScreenUsers);
    }
    if (userPanes) {
      vector<boost::any> temp1;
      for(auto item1:*userPanes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserPanes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CropMode") != m.end() && !m["CropMode"].empty()) {
      cropMode = make_shared<long>(boost::any_cast<long>(m["CropMode"]));
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      layoutIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("MixMode") != m.end() && !m["MixMode"].empty()) {
      mixMode = make_shared<long>(boost::any_cast<long>(m["MixMode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
    if (m.find("SubSpecAudioUsers") != m.end() && !m["SubSpecAudioUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecAudioUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecAudioUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecAudioUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecCameraUsers") != m.end() && !m["SubSpecCameraUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecCameraUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecCameraUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecCameraUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecShareScreenUsers") != m.end() && !m["SubSpecShareScreenUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecShareScreenUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecShareScreenUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecShareScreenUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecUsers") != m.end() && !m["SubSpecUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskProfile") != m.end() && !m["TaskProfile"].empty()) {
      taskProfile = make_shared<string>(boost::any_cast<string>(m["TaskProfile"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("UnsubSpecAudioUsers") != m.end() && !m["UnsubSpecAudioUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecAudioUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecAudioUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecAudioUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnsubSpecCameraUsers") != m.end() && !m["UnsubSpecCameraUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecCameraUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecCameraUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecCameraUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnsubSpecShareScreenUsers") != m.end() && !m["UnsubSpecShareScreenUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecShareScreenUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecShareScreenUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecShareScreenUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserPanes") != m.end() && !m["UserPanes"].empty()) {
      if (typeid(vector<boost::any>) == m["UserPanes"].type()) {
        vector<StartRecordTaskRequestUserPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserPanes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartRecordTaskRequestUserPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userPanes = make_shared<vector<StartRecordTaskRequestUserPanes>>(expect1);
      }
    }
  }


  virtual ~StartRecordTaskRequest() = default;
};
class StartRecordTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartRecordTaskResponseBody() {}

  explicit StartRecordTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartRecordTaskResponseBody() = default;
};
class StartRecordTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartRecordTaskResponseBody> body{};

  StartRecordTaskResponse() {}

  explicit StartRecordTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartRecordTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartRecordTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StartRecordTaskResponse() = default;
};
class StartStreamingOutRequestClockWidgetsBoxColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  StartStreamingOutRequestClockWidgetsBoxColor() {}

  explicit StartStreamingOutRequestClockWidgetsBoxColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~StartStreamingOutRequestClockWidgetsBoxColor() = default;
};
class StartStreamingOutRequestClockWidgetsFontColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  StartStreamingOutRequestClockWidgetsFontColor() {}

  explicit StartStreamingOutRequestClockWidgetsFontColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~StartStreamingOutRequestClockWidgetsFontColor() = default;
};
class StartStreamingOutRequestClockWidgets : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> boxAlpha{};
  shared_ptr<long> boxBorderw{};
  shared_ptr<StartStreamingOutRequestClockWidgetsBoxColor> boxColor{};
  shared_ptr<long> font{};
  shared_ptr<StartStreamingOutRequestClockWidgetsFontColor> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<bool> hasBox{};
  shared_ptr<long> layer{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> zone{};

  StartStreamingOutRequestClockWidgets() {}

  explicit StartStreamingOutRequestClockWidgets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (boxAlpha) {
      res["BoxAlpha"] = boost::any(*boxAlpha);
    }
    if (boxBorderw) {
      res["BoxBorderw"] = boost::any(*boxBorderw);
    }
    if (boxColor) {
      res["BoxColor"] = boxColor ? boost::any(boxColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (font) {
      res["Font"] = boost::any(*font);
    }
    if (fontColor) {
      res["FontColor"] = fontColor ? boost::any(fontColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (hasBox) {
      res["HasBox"] = boost::any(*hasBox);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (zone) {
      res["Zone"] = boost::any(*zone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BoxAlpha") != m.end() && !m["BoxAlpha"].empty()) {
      boxAlpha = make_shared<double>(boost::any_cast<double>(m["BoxAlpha"]));
    }
    if (m.find("BoxBorderw") != m.end() && !m["BoxBorderw"].empty()) {
      boxBorderw = make_shared<long>(boost::any_cast<long>(m["BoxBorderw"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["BoxColor"].type()) {
        StartStreamingOutRequestClockWidgetsBoxColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BoxColor"]));
        boxColor = make_shared<StartStreamingOutRequestClockWidgetsBoxColor>(model1);
      }
    }
    if (m.find("Font") != m.end() && !m["Font"].empty()) {
      font = make_shared<long>(boost::any_cast<long>(m["Font"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["FontColor"].type()) {
        StartStreamingOutRequestClockWidgetsFontColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FontColor"]));
        fontColor = make_shared<StartStreamingOutRequestClockWidgetsFontColor>(model1);
      }
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("HasBox") != m.end() && !m["HasBox"].empty()) {
      hasBox = make_shared<bool>(boost::any_cast<bool>(m["HasBox"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      zone = make_shared<long>(boost::any_cast<long>(m["Zone"]));
    }
  }


  virtual ~StartStreamingOutRequestClockWidgets() = default;
};
class StartStreamingOutRequestImages : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> height{};
  shared_ptr<long> imageCropMode{};
  shared_ptr<long> layer{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  StartStreamingOutRequestImages() {}

  explicit StartStreamingOutRequestImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (imageCropMode) {
      res["ImageCropMode"] = boost::any(*imageCropMode);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("ImageCropMode") != m.end() && !m["ImageCropMode"].empty()) {
      imageCropMode = make_shared<long>(boost::any_cast<long>(m["ImageCropMode"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~StartStreamingOutRequestImages() = default;
};
class StartStreamingOutRequestPanesImages : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> height{};
  shared_ptr<long> layer{};
  shared_ptr<long> paneImageCropMode{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  StartStreamingOutRequestPanesImages() {}

  explicit StartStreamingOutRequestPanesImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (paneImageCropMode) {
      res["PaneImageCropMode"] = boost::any(*paneImageCropMode);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("PaneImageCropMode") != m.end() && !m["PaneImageCropMode"].empty()) {
      paneImageCropMode = make_shared<long>(boost::any_cast<long>(m["PaneImageCropMode"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~StartStreamingOutRequestPanesImages() = default;
};
class StartStreamingOutRequestPanesTextsBoxColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  StartStreamingOutRequestPanesTextsBoxColor() {}

  explicit StartStreamingOutRequestPanesTextsBoxColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~StartStreamingOutRequestPanesTextsBoxColor() = default;
};
class StartStreamingOutRequestPanesTextsFontColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  StartStreamingOutRequestPanesTextsFontColor() {}

  explicit StartStreamingOutRequestPanesTextsFontColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~StartStreamingOutRequestPanesTextsFontColor() = default;
};
class StartStreamingOutRequestPanesTexts : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> boxAlpha{};
  shared_ptr<long> boxBorderw{};
  shared_ptr<StartStreamingOutRequestPanesTextsBoxColor> boxColor{};
  shared_ptr<long> font{};
  shared_ptr<StartStreamingOutRequestPanesTextsFontColor> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<bool> hasBox{};
  shared_ptr<long> layer{};
  shared_ptr<string> texture{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  StartStreamingOutRequestPanesTexts() {}

  explicit StartStreamingOutRequestPanesTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (boxAlpha) {
      res["BoxAlpha"] = boost::any(*boxAlpha);
    }
    if (boxBorderw) {
      res["BoxBorderw"] = boost::any(*boxBorderw);
    }
    if (boxColor) {
      res["BoxColor"] = boxColor ? boost::any(boxColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (font) {
      res["Font"] = boost::any(*font);
    }
    if (fontColor) {
      res["FontColor"] = fontColor ? boost::any(fontColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (hasBox) {
      res["HasBox"] = boost::any(*hasBox);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (texture) {
      res["Texture"] = boost::any(*texture);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BoxAlpha") != m.end() && !m["BoxAlpha"].empty()) {
      boxAlpha = make_shared<double>(boost::any_cast<double>(m["BoxAlpha"]));
    }
    if (m.find("BoxBorderw") != m.end() && !m["BoxBorderw"].empty()) {
      boxBorderw = make_shared<long>(boost::any_cast<long>(m["BoxBorderw"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["BoxColor"].type()) {
        StartStreamingOutRequestPanesTextsBoxColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BoxColor"]));
        boxColor = make_shared<StartStreamingOutRequestPanesTextsBoxColor>(model1);
      }
    }
    if (m.find("Font") != m.end() && !m["Font"].empty()) {
      font = make_shared<long>(boost::any_cast<long>(m["Font"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["FontColor"].type()) {
        StartStreamingOutRequestPanesTextsFontColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FontColor"]));
        fontColor = make_shared<StartStreamingOutRequestPanesTextsFontColor>(model1);
      }
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("HasBox") != m.end() && !m["HasBox"].empty()) {
      hasBox = make_shared<bool>(boost::any_cast<bool>(m["HasBox"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("Texture") != m.end() && !m["Texture"].empty()) {
      texture = make_shared<string>(boost::any_cast<string>(m["Texture"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~StartStreamingOutRequestPanesTexts() = default;
};
class StartStreamingOutRequestPanes : public Darabonba::Model {
public:
  shared_ptr<vector<StartStreamingOutRequestPanesImages>> images{};
  shared_ptr<long> paneCropMode{};
  shared_ptr<string> paneId{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<StartStreamingOutRequestPanesTexts>> texts{};

  StartStreamingOutRequestPanes() {}

  explicit StartStreamingOutRequestPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (paneCropMode) {
      res["PaneCropMode"] = boost::any(*paneCropMode);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<StartStreamingOutRequestPanesImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartStreamingOutRequestPanesImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<StartStreamingOutRequestPanesImages>>(expect1);
      }
    }
    if (m.find("PaneCropMode") != m.end() && !m["PaneCropMode"].empty()) {
      paneCropMode = make_shared<long>(boost::any_cast<long>(m["PaneCropMode"]));
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<string>(boost::any_cast<string>(m["PaneId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<StartStreamingOutRequestPanesTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartStreamingOutRequestPanesTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<StartStreamingOutRequestPanesTexts>>(expect1);
      }
    }
  }


  virtual ~StartStreamingOutRequestPanes() = default;
};
class StartStreamingOutRequestTextsBoxColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  StartStreamingOutRequestTextsBoxColor() {}

  explicit StartStreamingOutRequestTextsBoxColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~StartStreamingOutRequestTextsBoxColor() = default;
};
class StartStreamingOutRequestTextsFontColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  StartStreamingOutRequestTextsFontColor() {}

  explicit StartStreamingOutRequestTextsFontColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~StartStreamingOutRequestTextsFontColor() = default;
};
class StartStreamingOutRequestTexts : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> boxAlpha{};
  shared_ptr<long> boxBorderw{};
  shared_ptr<StartStreamingOutRequestTextsBoxColor> boxColor{};
  shared_ptr<long> font{};
  shared_ptr<StartStreamingOutRequestTextsFontColor> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<bool> hasBox{};
  shared_ptr<long> layer{};
  shared_ptr<string> texture{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  StartStreamingOutRequestTexts() {}

  explicit StartStreamingOutRequestTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (boxAlpha) {
      res["BoxAlpha"] = boost::any(*boxAlpha);
    }
    if (boxBorderw) {
      res["BoxBorderw"] = boost::any(*boxBorderw);
    }
    if (boxColor) {
      res["BoxColor"] = boxColor ? boost::any(boxColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (font) {
      res["Font"] = boost::any(*font);
    }
    if (fontColor) {
      res["FontColor"] = fontColor ? boost::any(fontColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (hasBox) {
      res["HasBox"] = boost::any(*hasBox);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (texture) {
      res["Texture"] = boost::any(*texture);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BoxAlpha") != m.end() && !m["BoxAlpha"].empty()) {
      boxAlpha = make_shared<double>(boost::any_cast<double>(m["BoxAlpha"]));
    }
    if (m.find("BoxBorderw") != m.end() && !m["BoxBorderw"].empty()) {
      boxBorderw = make_shared<long>(boost::any_cast<long>(m["BoxBorderw"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["BoxColor"].type()) {
        StartStreamingOutRequestTextsBoxColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BoxColor"]));
        boxColor = make_shared<StartStreamingOutRequestTextsBoxColor>(model1);
      }
    }
    if (m.find("Font") != m.end() && !m["Font"].empty()) {
      font = make_shared<long>(boost::any_cast<long>(m["Font"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["FontColor"].type()) {
        StartStreamingOutRequestTextsFontColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FontColor"]));
        fontColor = make_shared<StartStreamingOutRequestTextsFontColor>(model1);
      }
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("HasBox") != m.end() && !m["HasBox"].empty()) {
      hasBox = make_shared<bool>(boost::any_cast<bool>(m["HasBox"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("Texture") != m.end() && !m["Texture"].empty()) {
      texture = make_shared<string>(boost::any_cast<string>(m["Texture"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~StartStreamingOutRequestTexts() = default;
};
class StartStreamingOutRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<vector<StartStreamingOutRequestClockWidgets>> clockWidgets{};
  shared_ptr<long> cropMode{};
  shared_ptr<vector<StartStreamingOutRequestImages>> images{};
  shared_ptr<vector<StartStreamingOutRequestPanes>> panes{};
  shared_ptr<string> taskId{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<StartStreamingOutRequestTexts>> texts{};
  shared_ptr<string> url{};

  StartStreamingOutRequest() {}

  explicit StartStreamingOutRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (clockWidgets) {
      vector<boost::any> temp1;
      for(auto item1:*clockWidgets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClockWidgets"] = boost::any(temp1);
    }
    if (cropMode) {
      res["CropMode"] = boost::any(*cropMode);
    }
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (panes) {
      vector<boost::any> temp1;
      for(auto item1:*panes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Panes"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("ClockWidgets") != m.end() && !m["ClockWidgets"].empty()) {
      if (typeid(vector<boost::any>) == m["ClockWidgets"].type()) {
        vector<StartStreamingOutRequestClockWidgets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClockWidgets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartStreamingOutRequestClockWidgets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clockWidgets = make_shared<vector<StartStreamingOutRequestClockWidgets>>(expect1);
      }
    }
    if (m.find("CropMode") != m.end() && !m["CropMode"].empty()) {
      cropMode = make_shared<long>(boost::any_cast<long>(m["CropMode"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<StartStreamingOutRequestImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartStreamingOutRequestImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<StartStreamingOutRequestImages>>(expect1);
      }
    }
    if (m.find("Panes") != m.end() && !m["Panes"].empty()) {
      if (typeid(vector<boost::any>) == m["Panes"].type()) {
        vector<StartStreamingOutRequestPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Panes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartStreamingOutRequestPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        panes = make_shared<vector<StartStreamingOutRequestPanes>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<StartStreamingOutRequestTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartStreamingOutRequestTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<StartStreamingOutRequestTexts>>(expect1);
      }
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~StartStreamingOutRequest() = default;
};
class StartStreamingOutResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  StartStreamingOutResponseBody() {}

  explicit StartStreamingOutResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StartStreamingOutResponseBody() = default;
};
class StartStreamingOutResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartStreamingOutResponseBody> body{};

  StartStreamingOutResponse() {}

  explicit StartStreamingOutResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartStreamingOutResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartStreamingOutResponseBody>(model1);
      }
    }
  }


  virtual ~StartStreamingOutResponse() = default;
};
class StopCategoryCallbackRequestCallback : public Darabonba::Model {
public:
  shared_ptr<string> category{};

  StopCategoryCallbackRequestCallback() {}

  explicit StopCategoryCallbackRequestCallback(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
  }


  virtual ~StopCategoryCallbackRequestCallback() = default;
};
class StopCategoryCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<StopCategoryCallbackRequestCallback> callback{};

  StopCategoryCallbackRequest() {}

  explicit StopCategoryCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callback) {
      res["Callback"] = callback ? boost::any(callback->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      if (typeid(map<string, boost::any>) == m["Callback"].type()) {
        StopCategoryCallbackRequestCallback model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Callback"]));
        callback = make_shared<StopCategoryCallbackRequestCallback>(model1);
      }
    }
  }


  virtual ~StopCategoryCallbackRequest() = default;
};
class StopCategoryCallbackShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callbackShrink{};

  StopCategoryCallbackShrinkRequest() {}

  explicit StopCategoryCallbackShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callbackShrink) {
      res["Callback"] = boost::any(*callbackShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callbackShrink = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
  }


  virtual ~StopCategoryCallbackShrinkRequest() = default;
};
class StopCategoryCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopCategoryCallbackResponseBody() {}

  explicit StopCategoryCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopCategoryCallbackResponseBody() = default;
};
class StopCategoryCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopCategoryCallbackResponseBody> body{};

  StopCategoryCallbackResponse() {}

  explicit StopCategoryCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopCategoryCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopCategoryCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~StopCategoryCallbackResponse() = default;
};
class StopChannelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};

  StopChannelRequest() {}

  explicit StopChannelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
  }


  virtual ~StopChannelRequest() = default;
};
class StopChannelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopChannelResponseBody() {}

  explicit StopChannelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopChannelResponseBody() = default;
};
class StopChannelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopChannelResponseBody> body{};

  StopChannelResponse() {}

  explicit StopChannelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopChannelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopChannelResponseBody>(model1);
      }
    }
  }


  virtual ~StopChannelResponse() = default;
};
class StopCloudRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<string> taskId{};

  StopCloudRecordRequest() {}

  explicit StopCloudRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StopCloudRecordRequest() = default;
};
class StopCloudRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  StopCloudRecordResponseBody() {}

  explicit StopCloudRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StopCloudRecordResponseBody() = default;
};
class StopCloudRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopCloudRecordResponseBody> body{};

  StopCloudRecordResponse() {}

  explicit StopCloudRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopCloudRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopCloudRecordResponseBody>(model1);
      }
    }
  }


  virtual ~StopCloudRecordResponse() = default;
};
class StopMPUTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> taskId{};

  StopMPUTaskRequest() {}

  explicit StopMPUTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StopMPUTaskRequest() = default;
};
class StopMPUTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopMPUTaskResponseBody() {}

  explicit StopMPUTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopMPUTaskResponseBody() = default;
};
class StopMPUTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopMPUTaskResponseBody> body{};

  StopMPUTaskResponse() {}

  explicit StopMPUTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopMPUTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopMPUTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StopMPUTaskResponse() = default;
};
class StopRecordTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> taskId{};

  StopRecordTaskRequest() {}

  explicit StopRecordTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StopRecordTaskRequest() = default;
};
class StopRecordTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopRecordTaskResponseBody() {}

  explicit StopRecordTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopRecordTaskResponseBody() = default;
};
class StopRecordTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopRecordTaskResponseBody> body{};

  StopRecordTaskResponse() {}

  explicit StopRecordTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopRecordTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopRecordTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StopRecordTaskResponse() = default;
};
class StopStreamingOutRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<string> taskId{};

  StopStreamingOutRequest() {}

  explicit StopStreamingOutRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StopStreamingOutRequest() = default;
};
class StopStreamingOutResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  StopStreamingOutResponseBody() {}

  explicit StopStreamingOutResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StopStreamingOutResponseBody() = default;
};
class StopStreamingOutResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopStreamingOutResponseBody> body{};

  StopStreamingOutResponse() {}

  explicit StopStreamingOutResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopStreamingOutResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopStreamingOutResponseBody>(model1);
      }
    }
  }


  virtual ~StopStreamingOutResponse() = default;
};
class UpdateAutoLiveStreamRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callBack{};
  shared_ptr<vector<string>> channelIdPrefixes{};
  shared_ptr<vector<string>> channelIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> playDomain{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleName{};

  UpdateAutoLiveStreamRuleRequest() {}

  explicit UpdateAutoLiveStreamRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callBack) {
      res["CallBack"] = boost::any(*callBack);
    }
    if (channelIdPrefixes) {
      res["ChannelIdPrefixes"] = boost::any(*channelIdPrefixes);
    }
    if (channelIds) {
      res["ChannelIds"] = boost::any(*channelIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (playDomain) {
      res["PlayDomain"] = boost::any(*playDomain);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CallBack") != m.end() && !m["CallBack"].empty()) {
      callBack = make_shared<string>(boost::any_cast<string>(m["CallBack"]));
    }
    if (m.find("ChannelIdPrefixes") != m.end() && !m["ChannelIdPrefixes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelIdPrefixes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelIdPrefixes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channelIdPrefixes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ChannelIds") != m.end() && !m["ChannelIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ChannelIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChannelIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      channelIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlayDomain") != m.end() && !m["PlayDomain"].empty()) {
      playDomain = make_shared<string>(boost::any_cast<string>(m["PlayDomain"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~UpdateAutoLiveStreamRuleRequest() = default;
};
class UpdateAutoLiveStreamRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAutoLiveStreamRuleResponseBody() {}

  explicit UpdateAutoLiveStreamRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAutoLiveStreamRuleResponseBody() = default;
};
class UpdateAutoLiveStreamRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAutoLiveStreamRuleResponseBody> body{};

  UpdateAutoLiveStreamRuleResponse() {}

  explicit UpdateAutoLiveStreamRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateAutoLiveStreamRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAutoLiveStreamRuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAutoLiveStreamRuleResponse() = default;
};
class UpdateCloudRecordRequestClockWidgetsBoxColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  UpdateCloudRecordRequestClockWidgetsBoxColor() {}

  explicit UpdateCloudRecordRequestClockWidgetsBoxColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~UpdateCloudRecordRequestClockWidgetsBoxColor() = default;
};
class UpdateCloudRecordRequestClockWidgetsFontColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  UpdateCloudRecordRequestClockWidgetsFontColor() {}

  explicit UpdateCloudRecordRequestClockWidgetsFontColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~UpdateCloudRecordRequestClockWidgetsFontColor() = default;
};
class UpdateCloudRecordRequestClockWidgets : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> boxAlpha{};
  shared_ptr<long> boxBorderw{};
  shared_ptr<UpdateCloudRecordRequestClockWidgetsBoxColor> boxColor{};
  shared_ptr<long> font{};
  shared_ptr<UpdateCloudRecordRequestClockWidgetsFontColor> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<bool> hasBox{};
  shared_ptr<long> layer{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> zone{};

  UpdateCloudRecordRequestClockWidgets() {}

  explicit UpdateCloudRecordRequestClockWidgets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (boxAlpha) {
      res["BoxAlpha"] = boost::any(*boxAlpha);
    }
    if (boxBorderw) {
      res["BoxBorderw"] = boost::any(*boxBorderw);
    }
    if (boxColor) {
      res["BoxColor"] = boxColor ? boost::any(boxColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (font) {
      res["Font"] = boost::any(*font);
    }
    if (fontColor) {
      res["FontColor"] = fontColor ? boost::any(fontColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (hasBox) {
      res["HasBox"] = boost::any(*hasBox);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (zone) {
      res["Zone"] = boost::any(*zone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BoxAlpha") != m.end() && !m["BoxAlpha"].empty()) {
      boxAlpha = make_shared<double>(boost::any_cast<double>(m["BoxAlpha"]));
    }
    if (m.find("BoxBorderw") != m.end() && !m["BoxBorderw"].empty()) {
      boxBorderw = make_shared<long>(boost::any_cast<long>(m["BoxBorderw"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["BoxColor"].type()) {
        UpdateCloudRecordRequestClockWidgetsBoxColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BoxColor"]));
        boxColor = make_shared<UpdateCloudRecordRequestClockWidgetsBoxColor>(model1);
      }
    }
    if (m.find("Font") != m.end() && !m["Font"].empty()) {
      font = make_shared<long>(boost::any_cast<long>(m["Font"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["FontColor"].type()) {
        UpdateCloudRecordRequestClockWidgetsFontColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FontColor"]));
        fontColor = make_shared<UpdateCloudRecordRequestClockWidgetsFontColor>(model1);
      }
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("HasBox") != m.end() && !m["HasBox"].empty()) {
      hasBox = make_shared<bool>(boost::any_cast<bool>(m["HasBox"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      zone = make_shared<long>(boost::any_cast<long>(m["Zone"]));
    }
  }


  virtual ~UpdateCloudRecordRequestClockWidgets() = default;
};
class UpdateCloudRecordRequestImages : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> height{};
  shared_ptr<long> imageCropMode{};
  shared_ptr<long> layer{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  UpdateCloudRecordRequestImages() {}

  explicit UpdateCloudRecordRequestImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (imageCropMode) {
      res["ImageCropMode"] = boost::any(*imageCropMode);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("ImageCropMode") != m.end() && !m["ImageCropMode"].empty()) {
      imageCropMode = make_shared<long>(boost::any_cast<long>(m["ImageCropMode"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~UpdateCloudRecordRequestImages() = default;
};
class UpdateCloudRecordRequestPanesImages : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> height{};
  shared_ptr<long> layer{};
  shared_ptr<long> paneImageCropMode{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  UpdateCloudRecordRequestPanesImages() {}

  explicit UpdateCloudRecordRequestPanesImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (paneImageCropMode) {
      res["PaneImageCropMode"] = boost::any(*paneImageCropMode);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("PaneImageCropMode") != m.end() && !m["PaneImageCropMode"].empty()) {
      paneImageCropMode = make_shared<long>(boost::any_cast<long>(m["PaneImageCropMode"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~UpdateCloudRecordRequestPanesImages() = default;
};
class UpdateCloudRecordRequestPanesTextsBoxColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  UpdateCloudRecordRequestPanesTextsBoxColor() {}

  explicit UpdateCloudRecordRequestPanesTextsBoxColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~UpdateCloudRecordRequestPanesTextsBoxColor() = default;
};
class UpdateCloudRecordRequestPanesTextsFontColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  UpdateCloudRecordRequestPanesTextsFontColor() {}

  explicit UpdateCloudRecordRequestPanesTextsFontColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~UpdateCloudRecordRequestPanesTextsFontColor() = default;
};
class UpdateCloudRecordRequestPanesTexts : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> boxAlpha{};
  shared_ptr<long> boxBorderw{};
  shared_ptr<UpdateCloudRecordRequestPanesTextsBoxColor> boxColor{};
  shared_ptr<long> font{};
  shared_ptr<UpdateCloudRecordRequestPanesTextsFontColor> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<bool> hasBox{};
  shared_ptr<long> layer{};
  shared_ptr<string> texture{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  UpdateCloudRecordRequestPanesTexts() {}

  explicit UpdateCloudRecordRequestPanesTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (boxAlpha) {
      res["BoxAlpha"] = boost::any(*boxAlpha);
    }
    if (boxBorderw) {
      res["BoxBorderw"] = boost::any(*boxBorderw);
    }
    if (boxColor) {
      res["BoxColor"] = boxColor ? boost::any(boxColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (font) {
      res["Font"] = boost::any(*font);
    }
    if (fontColor) {
      res["FontColor"] = fontColor ? boost::any(fontColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (hasBox) {
      res["HasBox"] = boost::any(*hasBox);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (texture) {
      res["Texture"] = boost::any(*texture);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BoxAlpha") != m.end() && !m["BoxAlpha"].empty()) {
      boxAlpha = make_shared<double>(boost::any_cast<double>(m["BoxAlpha"]));
    }
    if (m.find("BoxBorderw") != m.end() && !m["BoxBorderw"].empty()) {
      boxBorderw = make_shared<long>(boost::any_cast<long>(m["BoxBorderw"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["BoxColor"].type()) {
        UpdateCloudRecordRequestPanesTextsBoxColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BoxColor"]));
        boxColor = make_shared<UpdateCloudRecordRequestPanesTextsBoxColor>(model1);
      }
    }
    if (m.find("Font") != m.end() && !m["Font"].empty()) {
      font = make_shared<long>(boost::any_cast<long>(m["Font"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["FontColor"].type()) {
        UpdateCloudRecordRequestPanesTextsFontColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FontColor"]));
        fontColor = make_shared<UpdateCloudRecordRequestPanesTextsFontColor>(model1);
      }
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("HasBox") != m.end() && !m["HasBox"].empty()) {
      hasBox = make_shared<bool>(boost::any_cast<bool>(m["HasBox"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("Texture") != m.end() && !m["Texture"].empty()) {
      texture = make_shared<string>(boost::any_cast<string>(m["Texture"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~UpdateCloudRecordRequestPanesTexts() = default;
};
class UpdateCloudRecordRequestPanes : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateCloudRecordRequestPanesImages>> images{};
  shared_ptr<long> paneCropMode{};
  shared_ptr<long> paneId{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<UpdateCloudRecordRequestPanesTexts>> texts{};

  UpdateCloudRecordRequestPanes() {}

  explicit UpdateCloudRecordRequestPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (paneCropMode) {
      res["PaneCropMode"] = boost::any(*paneCropMode);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<UpdateCloudRecordRequestPanesImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateCloudRecordRequestPanesImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<UpdateCloudRecordRequestPanesImages>>(expect1);
      }
    }
    if (m.find("PaneCropMode") != m.end() && !m["PaneCropMode"].empty()) {
      paneCropMode = make_shared<long>(boost::any_cast<long>(m["PaneCropMode"]));
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<UpdateCloudRecordRequestPanesTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateCloudRecordRequestPanesTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<UpdateCloudRecordRequestPanesTexts>>(expect1);
      }
    }
  }


  virtual ~UpdateCloudRecordRequestPanes() = default;
};
class UpdateCloudRecordRequestTextsBoxColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  UpdateCloudRecordRequestTextsBoxColor() {}

  explicit UpdateCloudRecordRequestTextsBoxColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~UpdateCloudRecordRequestTextsBoxColor() = default;
};
class UpdateCloudRecordRequestTextsFontColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  UpdateCloudRecordRequestTextsFontColor() {}

  explicit UpdateCloudRecordRequestTextsFontColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~UpdateCloudRecordRequestTextsFontColor() = default;
};
class UpdateCloudRecordRequestTexts : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> boxAlpha{};
  shared_ptr<long> boxBorderw{};
  shared_ptr<UpdateCloudRecordRequestTextsBoxColor> boxColor{};
  shared_ptr<long> font{};
  shared_ptr<UpdateCloudRecordRequestTextsFontColor> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<bool> hasBox{};
  shared_ptr<long> layer{};
  shared_ptr<string> texture{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  UpdateCloudRecordRequestTexts() {}

  explicit UpdateCloudRecordRequestTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (boxAlpha) {
      res["BoxAlpha"] = boost::any(*boxAlpha);
    }
    if (boxBorderw) {
      res["BoxBorderw"] = boost::any(*boxBorderw);
    }
    if (boxColor) {
      res["BoxColor"] = boxColor ? boost::any(boxColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (font) {
      res["Font"] = boost::any(*font);
    }
    if (fontColor) {
      res["FontColor"] = fontColor ? boost::any(fontColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (hasBox) {
      res["HasBox"] = boost::any(*hasBox);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (texture) {
      res["Texture"] = boost::any(*texture);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BoxAlpha") != m.end() && !m["BoxAlpha"].empty()) {
      boxAlpha = make_shared<double>(boost::any_cast<double>(m["BoxAlpha"]));
    }
    if (m.find("BoxBorderw") != m.end() && !m["BoxBorderw"].empty()) {
      boxBorderw = make_shared<long>(boost::any_cast<long>(m["BoxBorderw"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["BoxColor"].type()) {
        UpdateCloudRecordRequestTextsBoxColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BoxColor"]));
        boxColor = make_shared<UpdateCloudRecordRequestTextsBoxColor>(model1);
      }
    }
    if (m.find("Font") != m.end() && !m["Font"].empty()) {
      font = make_shared<long>(boost::any_cast<long>(m["Font"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["FontColor"].type()) {
        UpdateCloudRecordRequestTextsFontColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FontColor"]));
        fontColor = make_shared<UpdateCloudRecordRequestTextsFontColor>(model1);
      }
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("HasBox") != m.end() && !m["HasBox"].empty()) {
      hasBox = make_shared<bool>(boost::any_cast<bool>(m["HasBox"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("Texture") != m.end() && !m["Texture"].empty()) {
      texture = make_shared<string>(boost::any_cast<string>(m["Texture"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~UpdateCloudRecordRequestTexts() = default;
};
class UpdateCloudRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<vector<UpdateCloudRecordRequestClockWidgets>> clockWidgets{};
  shared_ptr<vector<UpdateCloudRecordRequestImages>> images{};
  shared_ptr<vector<UpdateCloudRecordRequestPanes>> panes{};
  shared_ptr<string> taskId{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<UpdateCloudRecordRequestTexts>> texts{};

  UpdateCloudRecordRequest() {}

  explicit UpdateCloudRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (clockWidgets) {
      vector<boost::any> temp1;
      for(auto item1:*clockWidgets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClockWidgets"] = boost::any(temp1);
    }
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (panes) {
      vector<boost::any> temp1;
      for(auto item1:*panes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Panes"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("ClockWidgets") != m.end() && !m["ClockWidgets"].empty()) {
      if (typeid(vector<boost::any>) == m["ClockWidgets"].type()) {
        vector<UpdateCloudRecordRequestClockWidgets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClockWidgets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateCloudRecordRequestClockWidgets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clockWidgets = make_shared<vector<UpdateCloudRecordRequestClockWidgets>>(expect1);
      }
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<UpdateCloudRecordRequestImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateCloudRecordRequestImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<UpdateCloudRecordRequestImages>>(expect1);
      }
    }
    if (m.find("Panes") != m.end() && !m["Panes"].empty()) {
      if (typeid(vector<boost::any>) == m["Panes"].type()) {
        vector<UpdateCloudRecordRequestPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Panes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateCloudRecordRequestPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        panes = make_shared<vector<UpdateCloudRecordRequestPanes>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<UpdateCloudRecordRequestTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateCloudRecordRequestTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<UpdateCloudRecordRequestTexts>>(expect1);
      }
    }
  }


  virtual ~UpdateCloudRecordRequest() = default;
};
class UpdateCloudRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  UpdateCloudRecordResponseBody() {}

  explicit UpdateCloudRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpdateCloudRecordResponseBody() = default;
};
class UpdateCloudRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCloudRecordResponseBody> body{};

  UpdateCloudRecordResponse() {}

  explicit UpdateCloudRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateCloudRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCloudRecordResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCloudRecordResponse() = default;
};
class UpdateMPUTaskRequestBackgrounds : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateMPUTaskRequestBackgrounds() {}

  explicit UpdateMPUTaskRequestBackgrounds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateMPUTaskRequestBackgrounds() = default;
};
class UpdateMPUTaskRequestClockWidgets : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> borderColor{};
  shared_ptr<long> borderWidth{};
  shared_ptr<bool> box{};
  shared_ptr<long> boxBorderWidth{};
  shared_ptr<long> boxColor{};
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateMPUTaskRequestClockWidgets() {}

  explicit UpdateMPUTaskRequestClockWidgets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (borderColor) {
      res["BorderColor"] = boost::any(*borderColor);
    }
    if (borderWidth) {
      res["BorderWidth"] = boost::any(*borderWidth);
    }
    if (box) {
      res["Box"] = boost::any(*box);
    }
    if (boxBorderWidth) {
      res["BoxBorderWidth"] = boost::any(*boxBorderWidth);
    }
    if (boxColor) {
      res["BoxColor"] = boost::any(*boxColor);
    }
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BorderColor") != m.end() && !m["BorderColor"].empty()) {
      borderColor = make_shared<long>(boost::any_cast<long>(m["BorderColor"]));
    }
    if (m.find("BorderWidth") != m.end() && !m["BorderWidth"].empty()) {
      borderWidth = make_shared<long>(boost::any_cast<long>(m["BorderWidth"]));
    }
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      box = make_shared<bool>(boost::any_cast<bool>(m["Box"]));
    }
    if (m.find("BoxBorderWidth") != m.end() && !m["BoxBorderWidth"].empty()) {
      boxBorderWidth = make_shared<long>(boost::any_cast<long>(m["BoxBorderWidth"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      boxColor = make_shared<long>(boost::any_cast<long>(m["BoxColor"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateMPUTaskRequestClockWidgets() = default;
};
class UpdateMPUTaskRequestUserPanesImages : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateMPUTaskRequestUserPanesImages() {}

  explicit UpdateMPUTaskRequestUserPanesImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateMPUTaskRequestUserPanesImages() = default;
};
class UpdateMPUTaskRequestUserPanesTexts : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> borderColor{};
  shared_ptr<long> borderWidth{};
  shared_ptr<bool> box{};
  shared_ptr<long> boxBorderWidth{};
  shared_ptr<long> boxColor{};
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<string> text{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateMPUTaskRequestUserPanesTexts() {}

  explicit UpdateMPUTaskRequestUserPanesTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (borderColor) {
      res["BorderColor"] = boost::any(*borderColor);
    }
    if (borderWidth) {
      res["BorderWidth"] = boost::any(*borderWidth);
    }
    if (box) {
      res["Box"] = boost::any(*box);
    }
    if (boxBorderWidth) {
      res["BoxBorderWidth"] = boost::any(*boxBorderWidth);
    }
    if (boxColor) {
      res["BoxColor"] = boost::any(*boxColor);
    }
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BorderColor") != m.end() && !m["BorderColor"].empty()) {
      borderColor = make_shared<long>(boost::any_cast<long>(m["BorderColor"]));
    }
    if (m.find("BorderWidth") != m.end() && !m["BorderWidth"].empty()) {
      borderWidth = make_shared<long>(boost::any_cast<long>(m["BorderWidth"]));
    }
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      box = make_shared<bool>(boost::any_cast<bool>(m["Box"]));
    }
    if (m.find("BoxBorderWidth") != m.end() && !m["BoxBorderWidth"].empty()) {
      boxBorderWidth = make_shared<long>(boost::any_cast<long>(m["BoxBorderWidth"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      boxColor = make_shared<long>(boost::any_cast<long>(m["BoxColor"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateMPUTaskRequestUserPanesTexts() = default;
};
class UpdateMPUTaskRequestUserPanes : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateMPUTaskRequestUserPanesImages>> images{};
  shared_ptr<long> paneId{};
  shared_ptr<long> segmentType{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<UpdateMPUTaskRequestUserPanesTexts>> texts{};
  shared_ptr<string> userId{};

  UpdateMPUTaskRequestUserPanes() {}

  explicit UpdateMPUTaskRequestUserPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (segmentType) {
      res["SegmentType"] = boost::any(*segmentType);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<UpdateMPUTaskRequestUserPanesImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMPUTaskRequestUserPanesImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<UpdateMPUTaskRequestUserPanesImages>>(expect1);
      }
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("SegmentType") != m.end() && !m["SegmentType"].empty()) {
      segmentType = make_shared<long>(boost::any_cast<long>(m["SegmentType"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<UpdateMPUTaskRequestUserPanesTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMPUTaskRequestUserPanesTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<UpdateMPUTaskRequestUserPanesTexts>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateMPUTaskRequestUserPanes() = default;
};
class UpdateMPUTaskRequestWatermarks : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateMPUTaskRequestWatermarks() {}

  explicit UpdateMPUTaskRequestWatermarks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateMPUTaskRequestWatermarks() = default;
};
class UpdateMPUTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> backgroundColor{};
  shared_ptr<vector<UpdateMPUTaskRequestBackgrounds>> backgrounds{};
  shared_ptr<vector<UpdateMPUTaskRequestClockWidgets>> clockWidgets{};
  shared_ptr<long> cropMode{};
  shared_ptr<vector<long>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<long> mixMode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> streamType{};
  shared_ptr<vector<string>> subSpecAudioUsers{};
  shared_ptr<vector<string>> subSpecCameraUsers{};
  shared_ptr<vector<string>> subSpecShareScreenUsers{};
  shared_ptr<vector<string>> subSpecUsers{};
  shared_ptr<string> taskId{};
  shared_ptr<vector<string>> unsubSpecAudioUsers{};
  shared_ptr<vector<string>> unsubSpecCameraUsers{};
  shared_ptr<vector<string>> unsubSpecShareScreenUsers{};
  shared_ptr<vector<UpdateMPUTaskRequestUserPanes>> userPanes{};
  shared_ptr<vector<UpdateMPUTaskRequestWatermarks>> watermarks{};

  UpdateMPUTaskRequest() {}

  explicit UpdateMPUTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (backgroundColor) {
      res["BackgroundColor"] = boost::any(*backgroundColor);
    }
    if (backgrounds) {
      vector<boost::any> temp1;
      for(auto item1:*backgrounds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backgrounds"] = boost::any(temp1);
    }
    if (clockWidgets) {
      vector<boost::any> temp1;
      for(auto item1:*clockWidgets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClockWidgets"] = boost::any(temp1);
    }
    if (cropMode) {
      res["CropMode"] = boost::any(*cropMode);
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (mixMode) {
      res["MixMode"] = boost::any(*mixMode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    if (subSpecAudioUsers) {
      res["SubSpecAudioUsers"] = boost::any(*subSpecAudioUsers);
    }
    if (subSpecCameraUsers) {
      res["SubSpecCameraUsers"] = boost::any(*subSpecCameraUsers);
    }
    if (subSpecShareScreenUsers) {
      res["SubSpecShareScreenUsers"] = boost::any(*subSpecShareScreenUsers);
    }
    if (subSpecUsers) {
      res["SubSpecUsers"] = boost::any(*subSpecUsers);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (unsubSpecAudioUsers) {
      res["UnsubSpecAudioUsers"] = boost::any(*unsubSpecAudioUsers);
    }
    if (unsubSpecCameraUsers) {
      res["UnsubSpecCameraUsers"] = boost::any(*unsubSpecCameraUsers);
    }
    if (unsubSpecShareScreenUsers) {
      res["UnsubSpecShareScreenUsers"] = boost::any(*unsubSpecShareScreenUsers);
    }
    if (userPanes) {
      vector<boost::any> temp1;
      for(auto item1:*userPanes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserPanes"] = boost::any(temp1);
    }
    if (watermarks) {
      vector<boost::any> temp1;
      for(auto item1:*watermarks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Watermarks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BackgroundColor") != m.end() && !m["BackgroundColor"].empty()) {
      backgroundColor = make_shared<long>(boost::any_cast<long>(m["BackgroundColor"]));
    }
    if (m.find("Backgrounds") != m.end() && !m["Backgrounds"].empty()) {
      if (typeid(vector<boost::any>) == m["Backgrounds"].type()) {
        vector<UpdateMPUTaskRequestBackgrounds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backgrounds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMPUTaskRequestBackgrounds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backgrounds = make_shared<vector<UpdateMPUTaskRequestBackgrounds>>(expect1);
      }
    }
    if (m.find("ClockWidgets") != m.end() && !m["ClockWidgets"].empty()) {
      if (typeid(vector<boost::any>) == m["ClockWidgets"].type()) {
        vector<UpdateMPUTaskRequestClockWidgets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClockWidgets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMPUTaskRequestClockWidgets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clockWidgets = make_shared<vector<UpdateMPUTaskRequestClockWidgets>>(expect1);
      }
    }
    if (m.find("CropMode") != m.end() && !m["CropMode"].empty()) {
      cropMode = make_shared<long>(boost::any_cast<long>(m["CropMode"]));
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      layoutIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("MixMode") != m.end() && !m["MixMode"].empty()) {
      mixMode = make_shared<long>(boost::any_cast<long>(m["MixMode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
    if (m.find("SubSpecAudioUsers") != m.end() && !m["SubSpecAudioUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecAudioUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecAudioUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecAudioUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecCameraUsers") != m.end() && !m["SubSpecCameraUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecCameraUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecCameraUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecCameraUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecShareScreenUsers") != m.end() && !m["SubSpecShareScreenUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecShareScreenUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecShareScreenUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecShareScreenUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecUsers") != m.end() && !m["SubSpecUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("UnsubSpecAudioUsers") != m.end() && !m["UnsubSpecAudioUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecAudioUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecAudioUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecAudioUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnsubSpecCameraUsers") != m.end() && !m["UnsubSpecCameraUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecCameraUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecCameraUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecCameraUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnsubSpecShareScreenUsers") != m.end() && !m["UnsubSpecShareScreenUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecShareScreenUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecShareScreenUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecShareScreenUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserPanes") != m.end() && !m["UserPanes"].empty()) {
      if (typeid(vector<boost::any>) == m["UserPanes"].type()) {
        vector<UpdateMPUTaskRequestUserPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserPanes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMPUTaskRequestUserPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userPanes = make_shared<vector<UpdateMPUTaskRequestUserPanes>>(expect1);
      }
    }
    if (m.find("Watermarks") != m.end() && !m["Watermarks"].empty()) {
      if (typeid(vector<boost::any>) == m["Watermarks"].type()) {
        vector<UpdateMPUTaskRequestWatermarks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Watermarks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateMPUTaskRequestWatermarks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        watermarks = make_shared<vector<UpdateMPUTaskRequestWatermarks>>(expect1);
      }
    }
  }


  virtual ~UpdateMPUTaskRequest() = default;
};
class UpdateMPUTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateMPUTaskResponseBody() {}

  explicit UpdateMPUTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateMPUTaskResponseBody() = default;
};
class UpdateMPUTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateMPUTaskResponseBody> body{};

  UpdateMPUTaskResponse() {}

  explicit UpdateMPUTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateMPUTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMPUTaskResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMPUTaskResponse() = default;
};
class UpdateRecordTaskRequestUserPanesImages : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateRecordTaskRequestUserPanesImages() {}

  explicit UpdateRecordTaskRequestUserPanesImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateRecordTaskRequestUserPanesImages() = default;
};
class UpdateRecordTaskRequestUserPanesTexts : public Darabonba::Model {
public:
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<string> text{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateRecordTaskRequestUserPanesTexts() {}

  explicit UpdateRecordTaskRequestUserPanesTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateRecordTaskRequestUserPanesTexts() = default;
};
class UpdateRecordTaskRequestUserPanes : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateRecordTaskRequestUserPanesImages>> images{};
  shared_ptr<long> paneId{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<UpdateRecordTaskRequestUserPanesTexts>> texts{};
  shared_ptr<string> userId{};

  UpdateRecordTaskRequestUserPanes() {}

  explicit UpdateRecordTaskRequestUserPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<UpdateRecordTaskRequestUserPanesImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRecordTaskRequestUserPanesImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<UpdateRecordTaskRequestUserPanesImages>>(expect1);
      }
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<UpdateRecordTaskRequestUserPanesTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRecordTaskRequestUserPanesTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<UpdateRecordTaskRequestUserPanesTexts>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateRecordTaskRequestUserPanes() = default;
};
class UpdateRecordTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> cropMode{};
  shared_ptr<vector<long>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<long> ownerId{};
  shared_ptr<vector<string>> subSpecAudioUsers{};
  shared_ptr<vector<string>> subSpecCameraUsers{};
  shared_ptr<vector<string>> subSpecShareScreenUsers{};
  shared_ptr<vector<string>> subSpecUsers{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskProfile{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<string>> unsubSpecAudioUsers{};
  shared_ptr<vector<string>> unsubSpecCameraUsers{};
  shared_ptr<vector<string>> unsubSpecShareScreenUsers{};
  shared_ptr<vector<UpdateRecordTaskRequestUserPanes>> userPanes{};

  UpdateRecordTaskRequest() {}

  explicit UpdateRecordTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (cropMode) {
      res["CropMode"] = boost::any(*cropMode);
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (subSpecAudioUsers) {
      res["SubSpecAudioUsers"] = boost::any(*subSpecAudioUsers);
    }
    if (subSpecCameraUsers) {
      res["SubSpecCameraUsers"] = boost::any(*subSpecCameraUsers);
    }
    if (subSpecShareScreenUsers) {
      res["SubSpecShareScreenUsers"] = boost::any(*subSpecShareScreenUsers);
    }
    if (subSpecUsers) {
      res["SubSpecUsers"] = boost::any(*subSpecUsers);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskProfile) {
      res["TaskProfile"] = boost::any(*taskProfile);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (unsubSpecAudioUsers) {
      res["UnsubSpecAudioUsers"] = boost::any(*unsubSpecAudioUsers);
    }
    if (unsubSpecCameraUsers) {
      res["UnsubSpecCameraUsers"] = boost::any(*unsubSpecCameraUsers);
    }
    if (unsubSpecShareScreenUsers) {
      res["UnsubSpecShareScreenUsers"] = boost::any(*unsubSpecShareScreenUsers);
    }
    if (userPanes) {
      vector<boost::any> temp1;
      for(auto item1:*userPanes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserPanes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CropMode") != m.end() && !m["CropMode"].empty()) {
      cropMode = make_shared<long>(boost::any_cast<long>(m["CropMode"]));
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      layoutIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("SubSpecAudioUsers") != m.end() && !m["SubSpecAudioUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecAudioUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecAudioUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecAudioUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecCameraUsers") != m.end() && !m["SubSpecCameraUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecCameraUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecCameraUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecCameraUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecShareScreenUsers") != m.end() && !m["SubSpecShareScreenUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecShareScreenUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecShareScreenUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecShareScreenUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubSpecUsers") != m.end() && !m["SubSpecUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubSpecUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubSpecUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subSpecUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskProfile") != m.end() && !m["TaskProfile"].empty()) {
      taskProfile = make_shared<string>(boost::any_cast<string>(m["TaskProfile"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("UnsubSpecAudioUsers") != m.end() && !m["UnsubSpecAudioUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecAudioUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecAudioUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecAudioUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnsubSpecCameraUsers") != m.end() && !m["UnsubSpecCameraUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecCameraUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecCameraUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecCameraUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UnsubSpecShareScreenUsers") != m.end() && !m["UnsubSpecShareScreenUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnsubSpecShareScreenUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnsubSpecShareScreenUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unsubSpecShareScreenUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserPanes") != m.end() && !m["UserPanes"].empty()) {
      if (typeid(vector<boost::any>) == m["UserPanes"].type()) {
        vector<UpdateRecordTaskRequestUserPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserPanes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRecordTaskRequestUserPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userPanes = make_shared<vector<UpdateRecordTaskRequestUserPanes>>(expect1);
      }
    }
  }


  virtual ~UpdateRecordTaskRequest() = default;
};
class UpdateRecordTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateRecordTaskResponseBody() {}

  explicit UpdateRecordTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateRecordTaskResponseBody() = default;
};
class UpdateRecordTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRecordTaskResponseBody> body{};

  UpdateRecordTaskResponse() {}

  explicit UpdateRecordTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateRecordTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRecordTaskResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRecordTaskResponse() = default;
};
class UpdateRecordTemplateRequestBackgrounds : public Darabonba::Model {
public:
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateRecordTemplateRequestBackgrounds() {}

  explicit UpdateRecordTemplateRequestBackgrounds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateRecordTemplateRequestBackgrounds() = default;
};
class UpdateRecordTemplateRequestClockWidgets : public Darabonba::Model {
public:
  shared_ptr<long> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<long> fontType{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateRecordTemplateRequestClockWidgets() {}

  explicit UpdateRecordTemplateRequestClockWidgets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (fontType) {
      res["FontType"] = boost::any(*fontType);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<long>(boost::any_cast<long>(m["FontColor"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("FontType") != m.end() && !m["FontType"].empty()) {
      fontType = make_shared<long>(boost::any_cast<long>(m["FontType"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateRecordTemplateRequestClockWidgets() = default;
};
class UpdateRecordTemplateRequestWatermarks : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<long> display{};
  shared_ptr<double> height{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> ZOrder{};

  UpdateRecordTemplateRequestWatermarks() {}

  explicit UpdateRecordTemplateRequestWatermarks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (display) {
      res["Display"] = boost::any(*display);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (ZOrder) {
      res["ZOrder"] = boost::any(*ZOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<long>(boost::any_cast<long>(m["Display"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("ZOrder") != m.end() && !m["ZOrder"].empty()) {
      ZOrder = make_shared<long>(boost::any_cast<long>(m["ZOrder"]));
    }
  }


  virtual ~UpdateRecordTemplateRequestWatermarks() = default;
};
class UpdateRecordTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> backgroundColor{};
  shared_ptr<vector<UpdateRecordTemplateRequestBackgrounds>> backgrounds{};
  shared_ptr<vector<UpdateRecordTemplateRequestClockWidgets>> clockWidgets{};
  shared_ptr<long> delayStopTime{};
  shared_ptr<bool> enableM3u8DateTime{};
  shared_ptr<long> fileSplitInterval{};
  shared_ptr<vector<string>> formats{};
  shared_ptr<string> httpCallbackUrl{};
  shared_ptr<vector<long>> layoutIds{};
  shared_ptr<long> mediaEncode{};
  shared_ptr<string> mnsQueue{};
  shared_ptr<string> name{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> ossFilePrefix{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> taskProfile{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<UpdateRecordTemplateRequestWatermarks>> watermarks{};

  UpdateRecordTemplateRequest() {}

  explicit UpdateRecordTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (backgroundColor) {
      res["BackgroundColor"] = boost::any(*backgroundColor);
    }
    if (backgrounds) {
      vector<boost::any> temp1;
      for(auto item1:*backgrounds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backgrounds"] = boost::any(temp1);
    }
    if (clockWidgets) {
      vector<boost::any> temp1;
      for(auto item1:*clockWidgets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClockWidgets"] = boost::any(temp1);
    }
    if (delayStopTime) {
      res["DelayStopTime"] = boost::any(*delayStopTime);
    }
    if (enableM3u8DateTime) {
      res["EnableM3u8DateTime"] = boost::any(*enableM3u8DateTime);
    }
    if (fileSplitInterval) {
      res["FileSplitInterval"] = boost::any(*fileSplitInterval);
    }
    if (formats) {
      res["Formats"] = boost::any(*formats);
    }
    if (httpCallbackUrl) {
      res["HttpCallbackUrl"] = boost::any(*httpCallbackUrl);
    }
    if (layoutIds) {
      res["LayoutIds"] = boost::any(*layoutIds);
    }
    if (mediaEncode) {
      res["MediaEncode"] = boost::any(*mediaEncode);
    }
    if (mnsQueue) {
      res["MnsQueue"] = boost::any(*mnsQueue);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (ossFilePrefix) {
      res["OssFilePrefix"] = boost::any(*ossFilePrefix);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (taskProfile) {
      res["TaskProfile"] = boost::any(*taskProfile);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (watermarks) {
      vector<boost::any> temp1;
      for(auto item1:*watermarks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Watermarks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BackgroundColor") != m.end() && !m["BackgroundColor"].empty()) {
      backgroundColor = make_shared<long>(boost::any_cast<long>(m["BackgroundColor"]));
    }
    if (m.find("Backgrounds") != m.end() && !m["Backgrounds"].empty()) {
      if (typeid(vector<boost::any>) == m["Backgrounds"].type()) {
        vector<UpdateRecordTemplateRequestBackgrounds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backgrounds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRecordTemplateRequestBackgrounds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backgrounds = make_shared<vector<UpdateRecordTemplateRequestBackgrounds>>(expect1);
      }
    }
    if (m.find("ClockWidgets") != m.end() && !m["ClockWidgets"].empty()) {
      if (typeid(vector<boost::any>) == m["ClockWidgets"].type()) {
        vector<UpdateRecordTemplateRequestClockWidgets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClockWidgets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRecordTemplateRequestClockWidgets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clockWidgets = make_shared<vector<UpdateRecordTemplateRequestClockWidgets>>(expect1);
      }
    }
    if (m.find("DelayStopTime") != m.end() && !m["DelayStopTime"].empty()) {
      delayStopTime = make_shared<long>(boost::any_cast<long>(m["DelayStopTime"]));
    }
    if (m.find("EnableM3u8DateTime") != m.end() && !m["EnableM3u8DateTime"].empty()) {
      enableM3u8DateTime = make_shared<bool>(boost::any_cast<bool>(m["EnableM3u8DateTime"]));
    }
    if (m.find("FileSplitInterval") != m.end() && !m["FileSplitInterval"].empty()) {
      fileSplitInterval = make_shared<long>(boost::any_cast<long>(m["FileSplitInterval"]));
    }
    if (m.find("Formats") != m.end() && !m["Formats"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Formats"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Formats"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      formats = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HttpCallbackUrl") != m.end() && !m["HttpCallbackUrl"].empty()) {
      httpCallbackUrl = make_shared<string>(boost::any_cast<string>(m["HttpCallbackUrl"]));
    }
    if (m.find("LayoutIds") != m.end() && !m["LayoutIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["LayoutIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LayoutIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      layoutIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("MediaEncode") != m.end() && !m["MediaEncode"].empty()) {
      mediaEncode = make_shared<long>(boost::any_cast<long>(m["MediaEncode"]));
    }
    if (m.find("MnsQueue") != m.end() && !m["MnsQueue"].empty()) {
      mnsQueue = make_shared<string>(boost::any_cast<string>(m["MnsQueue"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("OssFilePrefix") != m.end() && !m["OssFilePrefix"].empty()) {
      ossFilePrefix = make_shared<string>(boost::any_cast<string>(m["OssFilePrefix"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("TaskProfile") != m.end() && !m["TaskProfile"].empty()) {
      taskProfile = make_shared<string>(boost::any_cast<string>(m["TaskProfile"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Watermarks") != m.end() && !m["Watermarks"].empty()) {
      if (typeid(vector<boost::any>) == m["Watermarks"].type()) {
        vector<UpdateRecordTemplateRequestWatermarks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Watermarks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRecordTemplateRequestWatermarks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        watermarks = make_shared<vector<UpdateRecordTemplateRequestWatermarks>>(expect1);
      }
    }
  }


  virtual ~UpdateRecordTemplateRequest() = default;
};
class UpdateRecordTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};

  UpdateRecordTemplateResponseBody() {}

  explicit UpdateRecordTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~UpdateRecordTemplateResponseBody() = default;
};
class UpdateRecordTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRecordTemplateResponseBody> body{};

  UpdateRecordTemplateResponse() {}

  explicit UpdateRecordTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateRecordTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRecordTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRecordTemplateResponse() = default;
};
class UpdateStreamingOutRequestClockWidgetsBoxColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  UpdateStreamingOutRequestClockWidgetsBoxColor() {}

  explicit UpdateStreamingOutRequestClockWidgetsBoxColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~UpdateStreamingOutRequestClockWidgetsBoxColor() = default;
};
class UpdateStreamingOutRequestClockWidgetsFontColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  UpdateStreamingOutRequestClockWidgetsFontColor() {}

  explicit UpdateStreamingOutRequestClockWidgetsFontColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~UpdateStreamingOutRequestClockWidgetsFontColor() = default;
};
class UpdateStreamingOutRequestClockWidgets : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> boxAlpha{};
  shared_ptr<long> boxBorderw{};
  shared_ptr<UpdateStreamingOutRequestClockWidgetsBoxColor> boxColor{};
  shared_ptr<long> font{};
  shared_ptr<UpdateStreamingOutRequestClockWidgetsFontColor> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<bool> hasBox{};
  shared_ptr<long> layer{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};
  shared_ptr<long> zone{};

  UpdateStreamingOutRequestClockWidgets() {}

  explicit UpdateStreamingOutRequestClockWidgets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (boxAlpha) {
      res["BoxAlpha"] = boost::any(*boxAlpha);
    }
    if (boxBorderw) {
      res["BoxBorderw"] = boost::any(*boxBorderw);
    }
    if (boxColor) {
      res["BoxColor"] = boxColor ? boost::any(boxColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (font) {
      res["Font"] = boost::any(*font);
    }
    if (fontColor) {
      res["FontColor"] = fontColor ? boost::any(fontColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (hasBox) {
      res["HasBox"] = boost::any(*hasBox);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (zone) {
      res["Zone"] = boost::any(*zone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BoxAlpha") != m.end() && !m["BoxAlpha"].empty()) {
      boxAlpha = make_shared<double>(boost::any_cast<double>(m["BoxAlpha"]));
    }
    if (m.find("BoxBorderw") != m.end() && !m["BoxBorderw"].empty()) {
      boxBorderw = make_shared<long>(boost::any_cast<long>(m["BoxBorderw"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["BoxColor"].type()) {
        UpdateStreamingOutRequestClockWidgetsBoxColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BoxColor"]));
        boxColor = make_shared<UpdateStreamingOutRequestClockWidgetsBoxColor>(model1);
      }
    }
    if (m.find("Font") != m.end() && !m["Font"].empty()) {
      font = make_shared<long>(boost::any_cast<long>(m["Font"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["FontColor"].type()) {
        UpdateStreamingOutRequestClockWidgetsFontColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FontColor"]));
        fontColor = make_shared<UpdateStreamingOutRequestClockWidgetsFontColor>(model1);
      }
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("HasBox") != m.end() && !m["HasBox"].empty()) {
      hasBox = make_shared<bool>(boost::any_cast<bool>(m["HasBox"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      zone = make_shared<long>(boost::any_cast<long>(m["Zone"]));
    }
  }


  virtual ~UpdateStreamingOutRequestClockWidgets() = default;
};
class UpdateStreamingOutRequestImages : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> height{};
  shared_ptr<long> imageCropMode{};
  shared_ptr<long> layer{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  UpdateStreamingOutRequestImages() {}

  explicit UpdateStreamingOutRequestImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (imageCropMode) {
      res["ImageCropMode"] = boost::any(*imageCropMode);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("ImageCropMode") != m.end() && !m["ImageCropMode"].empty()) {
      imageCropMode = make_shared<long>(boost::any_cast<long>(m["ImageCropMode"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~UpdateStreamingOutRequestImages() = default;
};
class UpdateStreamingOutRequestPanesImages : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> height{};
  shared_ptr<long> layer{};
  shared_ptr<long> paneImageCropMode{};
  shared_ptr<string> url{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  UpdateStreamingOutRequestPanesImages() {}

  explicit UpdateStreamingOutRequestPanesImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (paneImageCropMode) {
      res["PaneImageCropMode"] = boost::any(*paneImageCropMode);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("PaneImageCropMode") != m.end() && !m["PaneImageCropMode"].empty()) {
      paneImageCropMode = make_shared<long>(boost::any_cast<long>(m["PaneImageCropMode"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~UpdateStreamingOutRequestPanesImages() = default;
};
class UpdateStreamingOutRequestPanesTextsBoxColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  UpdateStreamingOutRequestPanesTextsBoxColor() {}

  explicit UpdateStreamingOutRequestPanesTextsBoxColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~UpdateStreamingOutRequestPanesTextsBoxColor() = default;
};
class UpdateStreamingOutRequestPanesTextsFontColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  UpdateStreamingOutRequestPanesTextsFontColor() {}

  explicit UpdateStreamingOutRequestPanesTextsFontColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~UpdateStreamingOutRequestPanesTextsFontColor() = default;
};
class UpdateStreamingOutRequestPanesTexts : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> boxAlpha{};
  shared_ptr<long> boxBorderw{};
  shared_ptr<UpdateStreamingOutRequestPanesTextsBoxColor> boxColor{};
  shared_ptr<long> font{};
  shared_ptr<UpdateStreamingOutRequestPanesTextsFontColor> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<bool> hasBox{};
  shared_ptr<long> layer{};
  shared_ptr<string> texture{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  UpdateStreamingOutRequestPanesTexts() {}

  explicit UpdateStreamingOutRequestPanesTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (boxAlpha) {
      res["BoxAlpha"] = boost::any(*boxAlpha);
    }
    if (boxBorderw) {
      res["BoxBorderw"] = boost::any(*boxBorderw);
    }
    if (boxColor) {
      res["BoxColor"] = boxColor ? boost::any(boxColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (font) {
      res["Font"] = boost::any(*font);
    }
    if (fontColor) {
      res["FontColor"] = fontColor ? boost::any(fontColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (hasBox) {
      res["HasBox"] = boost::any(*hasBox);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (texture) {
      res["Texture"] = boost::any(*texture);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BoxAlpha") != m.end() && !m["BoxAlpha"].empty()) {
      boxAlpha = make_shared<double>(boost::any_cast<double>(m["BoxAlpha"]));
    }
    if (m.find("BoxBorderw") != m.end() && !m["BoxBorderw"].empty()) {
      boxBorderw = make_shared<long>(boost::any_cast<long>(m["BoxBorderw"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["BoxColor"].type()) {
        UpdateStreamingOutRequestPanesTextsBoxColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BoxColor"]));
        boxColor = make_shared<UpdateStreamingOutRequestPanesTextsBoxColor>(model1);
      }
    }
    if (m.find("Font") != m.end() && !m["Font"].empty()) {
      font = make_shared<long>(boost::any_cast<long>(m["Font"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["FontColor"].type()) {
        UpdateStreamingOutRequestPanesTextsFontColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FontColor"]));
        fontColor = make_shared<UpdateStreamingOutRequestPanesTextsFontColor>(model1);
      }
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("HasBox") != m.end() && !m["HasBox"].empty()) {
      hasBox = make_shared<bool>(boost::any_cast<bool>(m["HasBox"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("Texture") != m.end() && !m["Texture"].empty()) {
      texture = make_shared<string>(boost::any_cast<string>(m["Texture"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~UpdateStreamingOutRequestPanesTexts() = default;
};
class UpdateStreamingOutRequestPanes : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateStreamingOutRequestPanesImages>> images{};
  shared_ptr<long> paneCropMode{};
  shared_ptr<long> paneId{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<UpdateStreamingOutRequestPanesTexts>> texts{};

  UpdateStreamingOutRequestPanes() {}

  explicit UpdateStreamingOutRequestPanes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (paneCropMode) {
      res["PaneCropMode"] = boost::any(*paneCropMode);
    }
    if (paneId) {
      res["PaneId"] = boost::any(*paneId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<UpdateStreamingOutRequestPanesImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateStreamingOutRequestPanesImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<UpdateStreamingOutRequestPanesImages>>(expect1);
      }
    }
    if (m.find("PaneCropMode") != m.end() && !m["PaneCropMode"].empty()) {
      paneCropMode = make_shared<long>(boost::any_cast<long>(m["PaneCropMode"]));
    }
    if (m.find("PaneId") != m.end() && !m["PaneId"].empty()) {
      paneId = make_shared<long>(boost::any_cast<long>(m["PaneId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<UpdateStreamingOutRequestPanesTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateStreamingOutRequestPanesTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<UpdateStreamingOutRequestPanesTexts>>(expect1);
      }
    }
  }


  virtual ~UpdateStreamingOutRequestPanes() = default;
};
class UpdateStreamingOutRequestTextsBoxColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  UpdateStreamingOutRequestTextsBoxColor() {}

  explicit UpdateStreamingOutRequestTextsBoxColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~UpdateStreamingOutRequestTextsBoxColor() = default;
};
class UpdateStreamingOutRequestTextsFontColor : public Darabonba::Model {
public:
  shared_ptr<long> b{};
  shared_ptr<long> g{};
  shared_ptr<long> r{};

  UpdateStreamingOutRequestTextsFontColor() {}

  explicit UpdateStreamingOutRequestTextsFontColor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (b) {
      res["B"] = boost::any(*b);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
  }


  virtual ~UpdateStreamingOutRequestTextsFontColor() = default;
};
class UpdateStreamingOutRequestTexts : public Darabonba::Model {
public:
  shared_ptr<double> alpha{};
  shared_ptr<double> boxAlpha{};
  shared_ptr<long> boxBorderw{};
  shared_ptr<UpdateStreamingOutRequestTextsBoxColor> boxColor{};
  shared_ptr<long> font{};
  shared_ptr<UpdateStreamingOutRequestTextsFontColor> fontColor{};
  shared_ptr<long> fontSize{};
  shared_ptr<bool> hasBox{};
  shared_ptr<long> layer{};
  shared_ptr<string> texture{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  UpdateStreamingOutRequestTexts() {}

  explicit UpdateStreamingOutRequestTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpha) {
      res["Alpha"] = boost::any(*alpha);
    }
    if (boxAlpha) {
      res["BoxAlpha"] = boost::any(*boxAlpha);
    }
    if (boxBorderw) {
      res["BoxBorderw"] = boost::any(*boxBorderw);
    }
    if (boxColor) {
      res["BoxColor"] = boxColor ? boost::any(boxColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (font) {
      res["Font"] = boost::any(*font);
    }
    if (fontColor) {
      res["FontColor"] = fontColor ? boost::any(fontColor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (hasBox) {
      res["HasBox"] = boost::any(*hasBox);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (texture) {
      res["Texture"] = boost::any(*texture);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alpha") != m.end() && !m["Alpha"].empty()) {
      alpha = make_shared<double>(boost::any_cast<double>(m["Alpha"]));
    }
    if (m.find("BoxAlpha") != m.end() && !m["BoxAlpha"].empty()) {
      boxAlpha = make_shared<double>(boost::any_cast<double>(m["BoxAlpha"]));
    }
    if (m.find("BoxBorderw") != m.end() && !m["BoxBorderw"].empty()) {
      boxBorderw = make_shared<long>(boost::any_cast<long>(m["BoxBorderw"]));
    }
    if (m.find("BoxColor") != m.end() && !m["BoxColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["BoxColor"].type()) {
        UpdateStreamingOutRequestTextsBoxColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BoxColor"]));
        boxColor = make_shared<UpdateStreamingOutRequestTextsBoxColor>(model1);
      }
    }
    if (m.find("Font") != m.end() && !m["Font"].empty()) {
      font = make_shared<long>(boost::any_cast<long>(m["Font"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      if (typeid(map<string, boost::any>) == m["FontColor"].type()) {
        UpdateStreamingOutRequestTextsFontColor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FontColor"]));
        fontColor = make_shared<UpdateStreamingOutRequestTextsFontColor>(model1);
      }
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("HasBox") != m.end() && !m["HasBox"].empty()) {
      hasBox = make_shared<bool>(boost::any_cast<bool>(m["HasBox"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("Texture") != m.end() && !m["Texture"].empty()) {
      texture = make_shared<string>(boost::any_cast<string>(m["Texture"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~UpdateStreamingOutRequestTexts() = default;
};
class UpdateStreamingOutRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<vector<UpdateStreamingOutRequestClockWidgets>> clockWidgets{};
  shared_ptr<vector<UpdateStreamingOutRequestImages>> images{};
  shared_ptr<vector<UpdateStreamingOutRequestPanes>> panes{};
  shared_ptr<string> taskId{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<UpdateStreamingOutRequestTexts>> texts{};

  UpdateStreamingOutRequest() {}

  explicit UpdateStreamingOutRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (clockWidgets) {
      vector<boost::any> temp1;
      for(auto item1:*clockWidgets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClockWidgets"] = boost::any(temp1);
    }
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (panes) {
      vector<boost::any> temp1;
      for(auto item1:*panes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Panes"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("ClockWidgets") != m.end() && !m["ClockWidgets"].empty()) {
      if (typeid(vector<boost::any>) == m["ClockWidgets"].type()) {
        vector<UpdateStreamingOutRequestClockWidgets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClockWidgets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateStreamingOutRequestClockWidgets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clockWidgets = make_shared<vector<UpdateStreamingOutRequestClockWidgets>>(expect1);
      }
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<UpdateStreamingOutRequestImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateStreamingOutRequestImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<UpdateStreamingOutRequestImages>>(expect1);
      }
    }
    if (m.find("Panes") != m.end() && !m["Panes"].empty()) {
      if (typeid(vector<boost::any>) == m["Panes"].type()) {
        vector<UpdateStreamingOutRequestPanes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Panes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateStreamingOutRequestPanes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        panes = make_shared<vector<UpdateStreamingOutRequestPanes>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<UpdateStreamingOutRequestTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateStreamingOutRequestTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<UpdateStreamingOutRequestTexts>>(expect1);
      }
    }
  }


  virtual ~UpdateStreamingOutRequest() = default;
};
class UpdateStreamingOutResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  UpdateStreamingOutResponseBody() {}

  explicit UpdateStreamingOutResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpdateStreamingOutResponseBody() = default;
};
class UpdateStreamingOutResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateStreamingOutResponseBody> body{};

  UpdateStreamingOutResponse() {}

  explicit UpdateStreamingOutResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateStreamingOutResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateStreamingOutResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateStreamingOutResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  AddRecordTemplateResponse addRecordTemplateWithOptions(shared_ptr<AddRecordTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddRecordTemplateResponse addRecordTemplate(shared_ptr<AddRecordTemplateRequest> request);
  CreateAppRecordTemplateResponse createAppRecordTemplateWithOptions(shared_ptr<CreateAppRecordTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppRecordTemplateResponse createAppRecordTemplate(shared_ptr<CreateAppRecordTemplateRequest> request);
  CreateAppStreamingOutTemplateResponse createAppStreamingOutTemplateWithOptions(shared_ptr<CreateAppStreamingOutTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppStreamingOutTemplateResponse createAppStreamingOutTemplate(shared_ptr<CreateAppStreamingOutTemplateRequest> request);
  CreateAutoLiveStreamRuleResponse createAutoLiveStreamRuleWithOptions(shared_ptr<CreateAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAutoLiveStreamRuleResponse createAutoLiveStreamRule(shared_ptr<CreateAutoLiveStreamRuleRequest> request);
  CreateEventSubscribeResponse createEventSubscribeWithOptions(shared_ptr<CreateEventSubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEventSubscribeResponse createEventSubscribe(shared_ptr<CreateEventSubscribeRequest> request);
  CreateMPULayoutResponse createMPULayoutWithOptions(shared_ptr<CreateMPULayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMPULayoutResponse createMPULayout(shared_ptr<CreateMPULayoutRequest> request);
  DeleteAppRecordTemplateResponse deleteAppRecordTemplateWithOptions(shared_ptr<DeleteAppRecordTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppRecordTemplateResponse deleteAppRecordTemplate(shared_ptr<DeleteAppRecordTemplateRequest> request);
  DeleteAppStreamingOutTemplateResponse deleteAppStreamingOutTemplateWithOptions(shared_ptr<DeleteAppStreamingOutTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppStreamingOutTemplateResponse deleteAppStreamingOutTemplate(shared_ptr<DeleteAppStreamingOutTemplateRequest> request);
  DeleteAutoLiveStreamRuleResponse deleteAutoLiveStreamRuleWithOptions(shared_ptr<DeleteAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAutoLiveStreamRuleResponse deleteAutoLiveStreamRule(shared_ptr<DeleteAutoLiveStreamRuleRequest> request);
  DeleteChannelResponse deleteChannelWithOptions(shared_ptr<DeleteChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteChannelResponse deleteChannel(shared_ptr<DeleteChannelRequest> request);
  DeleteEventSubscribeResponse deleteEventSubscribeWithOptions(shared_ptr<DeleteEventSubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEventSubscribeResponse deleteEventSubscribe(shared_ptr<DeleteEventSubscribeRequest> request);
  DeleteMPULayoutResponse deleteMPULayoutWithOptions(shared_ptr<DeleteMPULayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMPULayoutResponse deleteMPULayout(shared_ptr<DeleteMPULayoutRequest> request);
  DeleteRecordTemplateResponse deleteRecordTemplateWithOptions(shared_ptr<DeleteRecordTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRecordTemplateResponse deleteRecordTemplate(shared_ptr<DeleteRecordTemplateRequest> request);
  DescribeAllCallbackResponse describeAllCallbackWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAllCallbackResponse describeAllCallback();
  DescribeAppCallStatusResponse describeAppCallStatusWithOptions(shared_ptr<DescribeAppCallStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppCallStatusResponse describeAppCallStatus(shared_ptr<DescribeAppCallStatusRequest> request);
  DescribeAppCallbackSecretKeyResponse describeAppCallbackSecretKeyWithOptions(shared_ptr<DescribeAppCallbackSecretKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppCallbackSecretKeyResponse describeAppCallbackSecretKey(shared_ptr<DescribeAppCallbackSecretKeyRequest> request);
  DescribeAppKeyResponse describeAppKeyWithOptions(shared_ptr<DescribeAppKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppKeyResponse describeAppKey(shared_ptr<DescribeAppKeyRequest> request);
  DescribeAppLayoutsResponse describeAppLayoutsWithOptions(shared_ptr<DescribeAppLayoutsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppLayoutsResponse describeAppLayouts(shared_ptr<DescribeAppLayoutsRequest> request);
  DescribeAppLiveStreamStatusResponse describeAppLiveStreamStatusWithOptions(shared_ptr<DescribeAppLiveStreamStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppLiveStreamStatusResponse describeAppLiveStreamStatus(shared_ptr<DescribeAppLiveStreamStatusRequest> request);
  DescribeAppRecordStatusResponse describeAppRecordStatusWithOptions(shared_ptr<DescribeAppRecordStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppRecordStatusResponse describeAppRecordStatus(shared_ptr<DescribeAppRecordStatusRequest> request);
  DescribeAppRecordTemplatesResponse describeAppRecordTemplatesWithOptions(shared_ptr<DescribeAppRecordTemplatesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppRecordTemplatesResponse describeAppRecordTemplates(shared_ptr<DescribeAppRecordTemplatesRequest> request);
  DescribeAppRecordingFilesResponse describeAppRecordingFilesWithOptions(shared_ptr<DescribeAppRecordingFilesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppRecordingFilesResponse describeAppRecordingFiles(shared_ptr<DescribeAppRecordingFilesRequest> request);
  DescribeAppStreamingOutTemplatesResponse describeAppStreamingOutTemplatesWithOptions(shared_ptr<DescribeAppStreamingOutTemplatesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppStreamingOutTemplatesResponse describeAppStreamingOutTemplates(shared_ptr<DescribeAppStreamingOutTemplatesRequest> request);
  DescribeAppsResponse describeAppsWithOptions(shared_ptr<DescribeAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppsResponse describeApps(shared_ptr<DescribeAppsRequest> request);
  DescribeAutoLiveStreamRuleResponse describeAutoLiveStreamRuleWithOptions(shared_ptr<DescribeAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAutoLiveStreamRuleResponse describeAutoLiveStreamRule(shared_ptr<DescribeAutoLiveStreamRuleRequest> request);
  DescribeCallResponse describeCallWithOptions(shared_ptr<DescribeCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCallResponse describeCall(shared_ptr<DescribeCallRequest> request);
  DescribeCallListResponse describeCallListWithOptions(shared_ptr<DescribeCallListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCallListResponse describeCallList(shared_ptr<DescribeCallListRequest> request);
  DescribeCallbacksResponse describeCallbacksWithOptions(shared_ptr<DescribeCallbacksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCallbacksResponse describeCallbacks(shared_ptr<DescribeCallbacksRequest> request);
  DescribeChannelResponse describeChannelWithOptions(shared_ptr<DescribeChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelResponse describeChannel(shared_ptr<DescribeChannelRequest> request);
  DescribeChannelAllUsersResponse describeChannelAllUsersWithOptions(shared_ptr<DescribeChannelAllUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelAllUsersResponse describeChannelAllUsers(shared_ptr<DescribeChannelAllUsersRequest> request);
  DescribeChannelAreaDistributionStatDataResponse describeChannelAreaDistributionStatDataWithOptions(shared_ptr<DescribeChannelAreaDistributionStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelAreaDistributionStatDataResponse describeChannelAreaDistributionStatData(shared_ptr<DescribeChannelAreaDistributionStatDataRequest> request);
  DescribeChannelDistributionStatDataResponse describeChannelDistributionStatDataWithOptions(shared_ptr<DescribeChannelDistributionStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelDistributionStatDataResponse describeChannelDistributionStatData(shared_ptr<DescribeChannelDistributionStatDataRequest> request);
  DescribeChannelOverallDataResponse describeChannelOverallDataWithOptions(shared_ptr<DescribeChannelOverallDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelOverallDataResponse describeChannelOverallData(shared_ptr<DescribeChannelOverallDataRequest> request);
  DescribeChannelParticipantsResponse describeChannelParticipantsWithOptions(shared_ptr<DescribeChannelParticipantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelParticipantsResponse describeChannelParticipants(shared_ptr<DescribeChannelParticipantsRequest> request);
  DescribeChannelTopPubUserListResponse describeChannelTopPubUserListWithOptions(shared_ptr<DescribeChannelTopPubUserListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelTopPubUserListResponse describeChannelTopPubUserList(shared_ptr<DescribeChannelTopPubUserListRequest> request);
  DescribeChannelUserResponse describeChannelUserWithOptions(shared_ptr<DescribeChannelUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelUserResponse describeChannelUser(shared_ptr<DescribeChannelUserRequest> request);
  DescribeChannelUserMetricsResponse describeChannelUserMetricsWithOptions(shared_ptr<DescribeChannelUserMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelUserMetricsResponse describeChannelUserMetrics(shared_ptr<DescribeChannelUserMetricsRequest> request);
  DescribeChannelUsersResponse describeChannelUsersWithOptions(shared_ptr<DescribeChannelUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelUsersResponse describeChannelUsers(shared_ptr<DescribeChannelUsersRequest> request);
  DescribeChannelsResponse describeChannelsWithOptions(shared_ptr<DescribeChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelsResponse describeChannels(shared_ptr<DescribeChannelsRequest> request);
  DescribeEndPointEventListResponse describeEndPointEventListWithOptions(shared_ptr<DescribeEndPointEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEndPointEventListResponse describeEndPointEventList(shared_ptr<DescribeEndPointEventListRequest> request);
  DescribeEndPointMetricDataResponse describeEndPointMetricDataWithOptions(shared_ptr<DescribeEndPointMetricDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEndPointMetricDataResponse describeEndPointMetricData(shared_ptr<DescribeEndPointMetricDataRequest> request);
  DescribeFaultDiagnosisFactorDistributionStatResponse describeFaultDiagnosisFactorDistributionStatWithOptions(shared_ptr<DescribeFaultDiagnosisFactorDistributionStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaultDiagnosisFactorDistributionStatResponse describeFaultDiagnosisFactorDistributionStat(shared_ptr<DescribeFaultDiagnosisFactorDistributionStatRequest> request);
  DescribeFaultDiagnosisOverallDataResponse describeFaultDiagnosisOverallDataWithOptions(shared_ptr<DescribeFaultDiagnosisOverallDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaultDiagnosisOverallDataResponse describeFaultDiagnosisOverallData(shared_ptr<DescribeFaultDiagnosisOverallDataRequest> request);
  DescribeFaultDiagnosisUserDetailResponse describeFaultDiagnosisUserDetailWithOptions(shared_ptr<DescribeFaultDiagnosisUserDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaultDiagnosisUserDetailResponse describeFaultDiagnosisUserDetail(shared_ptr<DescribeFaultDiagnosisUserDetailRequest> request);
  DescribeFaultDiagnosisUserListResponse describeFaultDiagnosisUserListWithOptions(shared_ptr<DescribeFaultDiagnosisUserListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaultDiagnosisUserListResponse describeFaultDiagnosisUserList(shared_ptr<DescribeFaultDiagnosisUserListRequest> request);
  DescribeMPULayoutInfoListResponse describeMPULayoutInfoListWithOptions(shared_ptr<DescribeMPULayoutInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMPULayoutInfoListResponse describeMPULayoutInfoList(shared_ptr<DescribeMPULayoutInfoListRequest> request);
  DescribePubUserListBySubUserResponse describePubUserListBySubUserWithOptions(shared_ptr<DescribePubUserListBySubUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePubUserListBySubUserResponse describePubUserListBySubUser(shared_ptr<DescribePubUserListBySubUserRequest> request);
  DescribeQoeMetricDataResponse describeQoeMetricDataWithOptions(shared_ptr<DescribeQoeMetricDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeQoeMetricDataResponse describeQoeMetricData(shared_ptr<DescribeQoeMetricDataRequest> request);
  DescribeQualityAreaDistributionStatDataResponse describeQualityAreaDistributionStatDataWithOptions(shared_ptr<DescribeQualityAreaDistributionStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeQualityAreaDistributionStatDataResponse describeQualityAreaDistributionStatData(shared_ptr<DescribeQualityAreaDistributionStatDataRequest> request);
  DescribeQualityDistributionStatDataResponse describeQualityDistributionStatDataWithOptions(shared_ptr<DescribeQualityDistributionStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeQualityDistributionStatDataResponse describeQualityDistributionStatData(shared_ptr<DescribeQualityDistributionStatDataRequest> request);
  DescribeQualityOsSdkVersionDistributionStatDataResponse describeQualityOsSdkVersionDistributionStatDataWithOptions(shared_ptr<DescribeQualityOsSdkVersionDistributionStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeQualityOsSdkVersionDistributionStatDataResponse describeQualityOsSdkVersionDistributionStatData(shared_ptr<DescribeQualityOsSdkVersionDistributionStatDataRequest> request);
  DescribeQualityOverallDataResponse describeQualityOverallDataWithOptions(shared_ptr<DescribeQualityOverallDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeQualityOverallDataResponse describeQualityOverallData(shared_ptr<DescribeQualityOverallDataRequest> request);
  DescribeRecordFilesResponse describeRecordFilesWithOptions(shared_ptr<DescribeRecordFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRecordFilesResponse describeRecordFiles(shared_ptr<DescribeRecordFilesRequest> request);
  DescribeRecordTemplatesResponse describeRecordTemplatesWithOptions(shared_ptr<DescribeRecordTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRecordTemplatesResponse describeRecordTemplates(shared_ptr<DescribeRecordTemplatesRequest> request);
  DescribeRtcChannelListResponse describeRtcChannelListWithOptions(shared_ptr<DescribeRtcChannelListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRtcChannelListResponse describeRtcChannelList(shared_ptr<DescribeRtcChannelListRequest> request);
  DescribeRtcChannelMetricResponse describeRtcChannelMetricWithOptions(shared_ptr<DescribeRtcChannelMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRtcChannelMetricResponse describeRtcChannelMetric(shared_ptr<DescribeRtcChannelMetricRequest> request);
  DescribeRtcDurationDataResponse describeRtcDurationDataWithOptions(shared_ptr<DescribeRtcDurationDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRtcDurationDataResponse describeRtcDurationData(shared_ptr<DescribeRtcDurationDataRequest> request);
  DescribeRtcPeakChannelCntDataResponse describeRtcPeakChannelCntDataWithOptions(shared_ptr<DescribeRtcPeakChannelCntDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRtcPeakChannelCntDataResponse describeRtcPeakChannelCntData(shared_ptr<DescribeRtcPeakChannelCntDataRequest> request);
  DescribeRtcUserCntDataResponse describeRtcUserCntDataWithOptions(shared_ptr<DescribeRtcUserCntDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRtcUserCntDataResponse describeRtcUserCntData(shared_ptr<DescribeRtcUserCntDataRequest> request);
  DescribeStreamingOutStatusResponse describeStreamingOutStatusWithOptions(shared_ptr<DescribeStreamingOutStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStreamingOutStatusResponse describeStreamingOutStatus(shared_ptr<DescribeStreamingOutStatusRequest> request);
  DescribeSystemLayoutListResponse describeSystemLayoutListWithOptions(shared_ptr<DescribeSystemLayoutListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSystemLayoutListResponse describeSystemLayoutList(shared_ptr<DescribeSystemLayoutListRequest> request);
  DescribeUsageAreaDistributionStatDataResponse describeUsageAreaDistributionStatDataWithOptions(shared_ptr<DescribeUsageAreaDistributionStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUsageAreaDistributionStatDataResponse describeUsageAreaDistributionStatData(shared_ptr<DescribeUsageAreaDistributionStatDataRequest> request);
  DescribeUsageDistributionStatDataResponse describeUsageDistributionStatDataWithOptions(shared_ptr<DescribeUsageDistributionStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUsageDistributionStatDataResponse describeUsageDistributionStatData(shared_ptr<DescribeUsageDistributionStatDataRequest> request);
  DescribeUsageOsSdkVersionDistributionStatDataResponse describeUsageOsSdkVersionDistributionStatDataWithOptions(shared_ptr<DescribeUsageOsSdkVersionDistributionStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUsageOsSdkVersionDistributionStatDataResponse describeUsageOsSdkVersionDistributionStatData(shared_ptr<DescribeUsageOsSdkVersionDistributionStatDataRequest> request);
  DescribeUsageOverallDataResponse describeUsageOverallDataWithOptions(shared_ptr<DescribeUsageOverallDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUsageOverallDataResponse describeUsageOverallData(shared_ptr<DescribeUsageOverallDataRequest> request);
  DescribeUserInfoInChannelResponse describeUserInfoInChannelWithOptions(shared_ptr<DescribeUserInfoInChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserInfoInChannelResponse describeUserInfoInChannel(shared_ptr<DescribeUserInfoInChannelRequest> request);
  DisableAutoLiveStreamRuleResponse disableAutoLiveStreamRuleWithOptions(shared_ptr<DisableAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableAutoLiveStreamRuleResponse disableAutoLiveStreamRule(shared_ptr<DisableAutoLiveStreamRuleRequest> request);
  EnableAutoLiveStreamRuleResponse enableAutoLiveStreamRuleWithOptions(shared_ptr<EnableAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableAutoLiveStreamRuleResponse enableAutoLiveStreamRule(shared_ptr<EnableAutoLiveStreamRuleRequest> request);
  GetMPUTaskStatusResponse getMPUTaskStatusWithOptions(shared_ptr<GetMPUTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMPUTaskStatusResponse getMPUTaskStatus(shared_ptr<GetMPUTaskStatusRequest> request);
  ModifyAppResponse modifyAppWithOptions(shared_ptr<ModifyAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppResponse modifyApp(shared_ptr<ModifyAppRequest> request);
  ModifyAppCallbackStatusResponse modifyAppCallbackStatusWithOptions(shared_ptr<ModifyAppCallbackStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppCallbackStatusResponse modifyAppCallbackStatus(shared_ptr<ModifyAppCallbackStatusRequest> request);
  ModifyAppLiveStreamStatusResponse modifyAppLiveStreamStatusWithOptions(shared_ptr<ModifyAppLiveStreamStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppLiveStreamStatusResponse modifyAppLiveStreamStatus(shared_ptr<ModifyAppLiveStreamStatusRequest> request);
  ModifyAppRecordStatusResponse modifyAppRecordStatusWithOptions(shared_ptr<ModifyAppRecordStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppRecordStatusResponse modifyAppRecordStatus(shared_ptr<ModifyAppRecordStatusRequest> request);
  ModifyAppRecordTemplateResponse modifyAppRecordTemplateWithOptions(shared_ptr<ModifyAppRecordTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppRecordTemplateResponse modifyAppRecordTemplate(shared_ptr<ModifyAppRecordTemplateRequest> request);
  ModifyAppStreamingOutTemplateResponse modifyAppStreamingOutTemplateWithOptions(shared_ptr<ModifyAppStreamingOutTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppStreamingOutTemplateResponse modifyAppStreamingOutTemplate(shared_ptr<ModifyAppStreamingOutTemplateRequest> request);
  ModifyCallbackMetaResponse modifyCallbackMetaWithOptions(shared_ptr<ModifyCallbackMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyCallbackMetaResponse modifyCallbackMeta(shared_ptr<ModifyCallbackMetaRequest> request);
  ModifyMPULayoutResponse modifyMPULayoutWithOptions(shared_ptr<ModifyMPULayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyMPULayoutResponse modifyMPULayout(shared_ptr<ModifyMPULayoutRequest> request);
  RemoveTerminalsResponse removeTerminalsWithOptions(shared_ptr<RemoveTerminalsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveTerminalsResponse removeTerminals(shared_ptr<RemoveTerminalsRequest> request);
  RemoveUsersResponse removeUsersWithOptions(shared_ptr<RemoveUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveUsersResponse removeUsers(shared_ptr<RemoveUsersRequest> request);
  StartCategoryCallbackResponse startCategoryCallbackWithOptions(shared_ptr<StartCategoryCallbackRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartCategoryCallbackResponse startCategoryCallback(shared_ptr<StartCategoryCallbackRequest> request);
  StartCloudRecordResponse startCloudRecordWithOptions(shared_ptr<StartCloudRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartCloudRecordResponse startCloudRecord(shared_ptr<StartCloudRecordRequest> request);
  StartMPUTaskResponse startMPUTaskWithOptions(shared_ptr<StartMPUTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartMPUTaskResponse startMPUTask(shared_ptr<StartMPUTaskRequest> request);
  StartRecordTaskResponse startRecordTaskWithOptions(shared_ptr<StartRecordTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartRecordTaskResponse startRecordTask(shared_ptr<StartRecordTaskRequest> request);
  StartStreamingOutResponse startStreamingOutWithOptions(shared_ptr<StartStreamingOutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartStreamingOutResponse startStreamingOut(shared_ptr<StartStreamingOutRequest> request);
  StopCategoryCallbackResponse stopCategoryCallbackWithOptions(shared_ptr<StopCategoryCallbackRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopCategoryCallbackResponse stopCategoryCallback(shared_ptr<StopCategoryCallbackRequest> request);
  StopChannelResponse stopChannelWithOptions(shared_ptr<StopChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopChannelResponse stopChannel(shared_ptr<StopChannelRequest> request);
  StopCloudRecordResponse stopCloudRecordWithOptions(shared_ptr<StopCloudRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopCloudRecordResponse stopCloudRecord(shared_ptr<StopCloudRecordRequest> request);
  StopMPUTaskResponse stopMPUTaskWithOptions(shared_ptr<StopMPUTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopMPUTaskResponse stopMPUTask(shared_ptr<StopMPUTaskRequest> request);
  StopRecordTaskResponse stopRecordTaskWithOptions(shared_ptr<StopRecordTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopRecordTaskResponse stopRecordTask(shared_ptr<StopRecordTaskRequest> request);
  StopStreamingOutResponse stopStreamingOutWithOptions(shared_ptr<StopStreamingOutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopStreamingOutResponse stopStreamingOut(shared_ptr<StopStreamingOutRequest> request);
  UpdateAutoLiveStreamRuleResponse updateAutoLiveStreamRuleWithOptions(shared_ptr<UpdateAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAutoLiveStreamRuleResponse updateAutoLiveStreamRule(shared_ptr<UpdateAutoLiveStreamRuleRequest> request);
  UpdateCloudRecordResponse updateCloudRecordWithOptions(shared_ptr<UpdateCloudRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCloudRecordResponse updateCloudRecord(shared_ptr<UpdateCloudRecordRequest> request);
  UpdateMPUTaskResponse updateMPUTaskWithOptions(shared_ptr<UpdateMPUTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMPUTaskResponse updateMPUTask(shared_ptr<UpdateMPUTaskRequest> request);
  UpdateRecordTaskResponse updateRecordTaskWithOptions(shared_ptr<UpdateRecordTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRecordTaskResponse updateRecordTask(shared_ptr<UpdateRecordTaskRequest> request);
  UpdateRecordTemplateResponse updateRecordTemplateWithOptions(shared_ptr<UpdateRecordTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRecordTemplateResponse updateRecordTemplate(shared_ptr<UpdateRecordTemplateRequest> request);
  UpdateStreamingOutResponse updateStreamingOutWithOptions(shared_ptr<UpdateStreamingOutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateStreamingOutResponse updateStreamingOut(shared_ptr<UpdateStreamingOutRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Rtc20180111

#endif
