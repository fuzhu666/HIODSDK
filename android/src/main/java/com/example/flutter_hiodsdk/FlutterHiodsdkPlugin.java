package com.example.flutter_hiodsdk;

import android.app.Activity;
import android.app.Application;
import android.content.ComponentName;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;

import androidx.annotation.NonNull;
import io.flutter.embedding.engine.plugins.FlutterPlugin;
import io.flutter.embedding.engine.plugins.activity.ActivityAware;
import io.flutter.embedding.engine.plugins.activity.ActivityPluginBinding;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import io.flutter.plugin.common.MethodChannel.MethodCallHandler;
import io.flutter.plugin.common.MethodChannel.Result;
import com.dqpn.lib.*;
import com.dqpn.net.bean.DQPNUInfo;
import com.dqpn.net.util.DQPNNetCallback;
import com.dqpn.other.ad.DQPNAd;
import com.dqpn.other.ad.core.DQPNAppOpenListener;

/** FlutterHiodsdkPlugin */
public class FlutterHiodsdkPlugin implements FlutterPlugin, MethodCallHandler, ActivityAware {
  private MethodChannel channel;
  private Activity activity;
  private Application application;
  private ApplicationInfo applicationInfo;

  @Override
  public void onAttachedToEngine(@NonNull FlutterPluginBinding flutterPluginBinding) {
    channel = new MethodChannel(flutterPluginBinding.getBinaryMessenger(), "flutter_hiodsdk");
    channel.setMethodCallHandler(this);
  }


  @Override
  public void onMethodCall(@NonNull MethodCall call, @NonNull Result result) {
    if (call.method.equals("initSDK")) {
      System.out.println("cnmcnm===>1");
      result.success(true);
    } else {
      result.notImplemented();
    }
  }

  @Override
  public void onDetachedFromEngine(@NonNull FlutterPluginBinding binding) {
    channel.setMethodCallHandler(null);
  }

  @Override
  public void onAttachedToActivity(@NonNull ActivityPluginBinding binding) {
    activity = binding.getActivity();
    application = activity.getApplication();
    try {
      applicationInfo = application.getPackageManager().getApplicationInfo(application.getPackageName(), PackageManager.GET_META_DATA);
      DQPNConfig
        .getInstance()
        .setAppKey(applicationInfo.metaData.getString("appkey"))
        .setAppSecret(applicationInfo.metaData.getString("appSecret"))
        .setAfDevKey(applicationInfo.metaData.getString("afDevKey"))
        .setUmkAppId(applicationInfo.metaData.getString("umkAppid"))
        .setServerUrl(applicationInfo.metaData.getString("serverUrl"))
        .setStatUrl(applicationInfo.metaData.getString("statUrl"))
        .setVideoUnitId(applicationInfo.metaData.getString("videoUnitId"))
        .setAppOpenUnitId(applicationInfo.metaData.getString("openUnitId"))
        .setInsUnitId(applicationInfo.metaData.getString("insUnitId"))
        .setBannerUnitId(applicationInfo.metaData.getString("bannerUnitId"))
        .setAdmobOpenUnitId(applicationInfo.metaData.getString("admobOpenUnitId"))
        .setDebug(applicationInfo.metaData.getBoolean("debug"))
        .setPrintLog(applicationInfo.metaData.getBoolean("log"));
      DQPNLib.init(activity, new DQPNNetCallback<DQPNUInfo>() {
        @Override
        public void OnCompleted(boolean b, DQPNUInfo dqpnuInfo) {
          System.out.println(dqpnuInfo.uid);
            try {
                Thread.sleep(5000);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
            DQPNAd.showAppOpen(DQPNConfig.getAdmobOpenUnitId(), new DQPNAppOpenListener() {
              @Override
              public void onFialed() {

              }

              @Override
              public void onHide() {

              }
          });
        }
      });
      DQPNLib.onApplicationCreate(application);
    } catch (Exception e) {
      throw new RuntimeException(e);
    }
  }

  @Override
  public void onDetachedFromActivityForConfigChanges() {
  }

  @Override
  public void onReattachedToActivityForConfigChanges(@NonNull ActivityPluginBinding binding) {
  }

  @Override
  public void onDetachedFromActivity() {
  }
}
