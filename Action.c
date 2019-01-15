Action()
{

	web_add_auto_header("DNT", 
		"1");

	web_add_header("UA-CPU", 
		"AMD64");

	web_url("favicon.ico", 
		"URL=http://www.bing.com/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("www.orasi.com", 
		"URL=http://www.orasi.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.orasi.com/wp-includes/js/wp-emoji-release.min.js?ver=4.9.9", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://www.orasi.com/wp-content/themes/Avada/includes/lib/assets/fonts/icomoon/icomoon.eot?", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v18/KFOmCnqEu92Fr1Mu4mxP.ttf", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v18/KFOjCnqEu92Fr1Mu51TzBic6CsE.ttf", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://www.orasi.com/wp-content/plugins/ditty-news-ticker/assets/fontastic/fonts/ditty-news-ticker.eot?", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v18/KFOlCnqEu92Fr1MmSU5fBBc9.ttf", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v18/KFOlCnqEu92Fr1MmWUlfBBc9.ttf", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v18/KFOkCnqEu92Fr1Mu51xIIzc.ttf", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v18/KFOlCnqEu92Fr1MmEU9fBBc-.woff", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://www.orasi.com/wp-content/plugins/revslider/public/assets/js/extensions/revolution.extension.slideanims.min.js?version=5.4.8", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/ubuntu/v12/4iCv6KVjbNBYlgoC1CzjsGyI.ttf", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://www.orasi.com/wp-content/plugins/revslider/public/assets/js/extensions/revolution.extension.navigation.min.js?version=5.4.8", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://www.orasi.com/wp-content/plugins/revslider/public/assets/js/extensions/revolution.extension.layeranimation.min.js?version=5.4.8", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://www.orasi.com/wp-content/plugins/revslider/public/assets/js/extensions/revolution.extension.actions.min.js?version=5.4.8", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/ubuntu/v12/4iCv6KVjbNBYlgoCjC3jsGyL.woff", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://www.orasi.com/wp-content/plugins/logos-showcase/bxslider/images/bx_loader.gif", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/ubuntu/v12/4iCs6KVjbNBYlgoKfw7z.ttf", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/ubuntu/v12/4iCs6KVjbNBYlgoKfw7w.woff", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://www.orasi.com/wp-content/plugins/revslider/public/assets/fonts/revicons/revicons.eot?5510888", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://www.orasi.com/wp-content/plugins/revslider/public/assets/assets/loader.gif", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://static.ziftsolutions.com/analytics/8aec7539426e6ba6014271fb03db2f02.js", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://widgets.ziftsolutions.com/hp.ziftsolutions.com/js/8a0f203c3a8b28bc013abd8ccf031bc2", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://widgets.ziftsolutions.com/alteryx.ziftsolutions.com/js/ff80818164ee31870164f5b8629f033e", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/ubuntu/v12/4iCv6KVjbNBYlgoCjC3jsGyI.ttf", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://www.orasi.com/wp-content/uploads/2018/08/orasi-logo-retina.png", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://www.google.com/ads/ga-audiences?v=1&aip=1&t=sr&_r=4&tid=UA-45067552-1&cid=371766492.1547584721&jid=597250138&_v=j72&z=1688496788", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://analytics.ziftsolutions.com/trk/v?id=ff80818164ee31870164f5b8629f033e&clid=ff8081815e745f42015e7d2754df5943&u=null&ekey=&p=ff80818164ee2ffc0164f5b85a1b0709&uuid_holder=zt_zik0hXo2&fr=true&refurl=", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://analytics.ziftsolutions.com/trk/v?id=8a0f203c3a8b28bc013abd8ccf031bc2&clid=8a7c9fef1e1eb236011e23e7e1aa0364&u=null&ekey=&p=8a7c9fef220ab972012213568e2929ce&uuid_holder=zt_Qc9ZHBm1&fr=true&refurl=", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://analytics.ziftsolutions.com/trk/v?id=8a0f203c3a8b28bc013abd8ccf031bc2&clid=8a7c9fef1e1eb236011e23e7e1aa0364&u=null&ekey=&p=8a7c9fef220ab972012213568e2929ce&uuid_holder=zt_n6TJ36TT&fr=true&refurl=", "Referer=https://www.orasi.com/", ENDITEM, 
		"Url=https://analytics.ziftsolutions.com/trk/v?id=ff80818164ee31870164f5b8629f033e&clid=ff8081815e745f42015e7d2754df5943&u=null&ekey=&p=ff80818164ee2ffc0164f5b85a1b0709&uuid_holder=zt_F8a2rSaN&fr=true&refurl=", "Referer=https://www.orasi.com/", ENDITEM, 
		LAST);

	return 0;
}