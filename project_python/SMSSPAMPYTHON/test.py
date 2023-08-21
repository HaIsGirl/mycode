import requests
phone=input('Nhap So Dien Thoai')
cookies = {
    'acw_tc': 'e73514f5833b2142dfd37ee455b7962c00c2b6d11b6b39a71bee024de5ce2793',
    'img-ext': 'jpg',
    'device-id': 's%3Aweb_a2cca1fa-0127-41e7-9211-1fdd52a1ab23.DMvRkzTU7BeCsfZ5EIwzoFzPpfGyq%2BfiegLAAcrwsxA',
    'shared-device-id': 'web_a2cca1fa-0127-41e7-9211-1fdd52a1ab23',
    'screen-size': 's%3A1366x768.IiD9nRz2OL3IyaPE2ac97JfqfV3HiT2hZFjjk11x658',
    '_gid': 'GA1.2.1893670281.1685959861',
    'G_ENABLED_IDPS': 'google',
    'session-id': 's%3A05bbb815-358a-4266-a516-6d12847efe77.pTkg9yKnqRrqofIFyXtFStt1t6JKQzW16GNq4XFkn3w',
    '_gat_UA-180935206-1': '1',
    '_ga': 'GA1.1.977500906.1685959861',
    '_ga_D7L53J0JMS': 'GS1.1.1685959860.1.1.1685960046.60.0.0',
    '_ga_E5YP28Y8EF': 'GS1.1.1685959860.1.1.1685960046.0.0.0',
}

headers = {
    'Accept': 'application/json, text/plain, */*',
    'Accept-Language': 'vi,en;q=0.9,ja;q=0.8,en-US;q=0.7',
    'Connection': 'keep-alive',
    'Content-Type': 'application/json',
    # 'Cookie': 'acw_tc=e73514f5833b2142dfd37ee455b7962c00c2b6d11b6b39a71bee024de5ce2793; img-ext=jpg; device-id=s%3Aweb_a2cca1fa-0127-41e7-9211-1fdd52a1ab23.DMvRkzTU7BeCsfZ5EIwzoFzPpfGyq%2BfiegLAAcrwsxA; shared-device-id=web_a2cca1fa-0127-41e7-9211-1fdd52a1ab23; screen-size=s%3A1366x768.IiD9nRz2OL3IyaPE2ac97JfqfV3HiT2hZFjjk11x658; _gid=GA1.2.1893670281.1685959861; G_ENABLED_IDPS=google; session-id=s%3A05bbb815-358a-4266-a516-6d12847efe77.pTkg9yKnqRrqofIFyXtFStt1t6JKQzW16GNq4XFkn3w; _gat_UA-180935206-1=1; _ga=GA1.1.977500906.1685959861; _ga_D7L53J0JMS=GS1.1.1685959860.1.1.1685960046.60.0.0; _ga_E5YP28Y8EF=GS1.1.1685959860.1.1.1685960046.0.0.0',
    'Origin': 'http://tv360.vn',
    'Referer': 'http://tv360.vn/login?r=http%3A%2F%2Ftv360.vn%2F',
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/113.0.0.0 Safari/537.36 Edg/113.0.1774.57',
}

json_data = {
    'msisdn': phone,
}

response = requests.post(
    'http://tv360.vn/public/v1/auth/get-otp-login',
    cookies=cookies,
    headers=headers,
    json=json_data,
    verify=False,
)

print(response.text)