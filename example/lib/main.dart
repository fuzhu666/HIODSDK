import 'package:flutter/foundation.dart';
import 'package:flutter/material.dart';
import 'dart:async';

import 'package:flutter/services.dart';
import 'package:flutter_hiodsdk/flutter_hiodsdk.dart';

void main() async{
  WidgetsFlutterBinding.ensureInitialized();
  await FlutterHiodsdk.initSDK(
    debug: kDebugMode ? true : false,
    log: true,
    appkey: '2070C514A61F6E658A4A525E',
    appSecret: '88DC852208FE4DEFB6C1691001211268',
    serverUrl: 'https://hrt.jinchuchi.com',
    statUrl: 'https://jka.jinchuchi.com',
    iosAppId: '6740135195',
    umkAppid: '1097563993230311424',
    afDevKey: 'RfXDEDH92Sp4sYkR7kdvo3',
    videoUnitId: '',
    insUnitId: '',
    openUnitId: 'ca-app-pub-3940256099942544/5575463023',
    bannerUnitId: ''
  );

  print('cnmcnm');

  Future.delayed(Duration(seconds: 5), () {
    FlutterHiodsdk.showOpenAd((args) {
      print('openAd: $args');
    });
  });

  runApp(const MyApp());
}

class MyApp extends StatefulWidget {
  const MyApp({super.key});

  @override
  State<MyApp> createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
  final String _platformVersion = 'Unknown';

  @override
  void initState() {
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: const Text('Plugin example app'),
        ),
        body: Center(
          child: Text('Running on: $_platformVersion\n'),
        ),
      ),
    );
  }
}
