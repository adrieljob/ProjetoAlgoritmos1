#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void recomendarMusicas() 
{
    string humor, preferencia, periodo;

    system("cls");
    cout << "COMO VOCE ESTA HOJE?" << endl;
    cout << "Humor (feliz, triste, calmo, energico): " << endl;
    cin >> humor;
    cout << "Preferencia (pop, rock, eletronica, funk): " << endl;
    cin >> preferencia;
    cout << "Periodo (manha, tarde, noite): " << endl;
    cin >> periodo;
    system("cls");
    cout << "Aqui esta sua playlist:" << endl;

    if (humor == "feliz" && preferencia == "pop" && periodo == "manha") {
        cout << "1 - Happy - Pharrell Williams" << endl;
        cout << "2 - Good as Hell - Lizzo" << endl;
        cout << "3 - Shake It Off - Taylor Swift" << endl;
        cout << "4 - Levitating - Dua Lipa" << endl;
        cout << "5 - Firework - Katy Perry" << endl;
        cout << "6 - Break My Heart - Dua Lipa" << endl;
        cout << "7 - Roar - Katy Perry" << endl;
        cout << "8 - Good Time - Carly Rae Jepsen" << endl;
        cout << "9 - Wake Me Up - Avicii" << endl;
        cout << "10 - Dance Monkey - Tones and I" << endl;
        system("pause");
        return;
    }
    else if (humor == "feliz" && preferencia == "pop" && periodo == "tarde") {
        cout << "1 - Blinding Lights - The Weeknd" << endl;
        cout << "2 - Watermelon Sugar - Harry Styles" << endl;
        cout << "3 - Good Feeling - Flo Rida" << endl;
        cout << "4 - Can't Stop the Feeling - Justin Timberlake" << endl;
        cout << "5 - I Gotta Feeling - Black Eyed Peas" << endl;
        cout << "6 - Rude - MAGIC!" << endl;
        cout << "7 - Cool for the Summer - Demi Lovato" << endl;
        cout << "8 - Sugar - Maroon 5" << endl;
        cout << "9 - What Makes You Beautiful - One Direction" << endl;
        cout << "10 - Treasure - Bruno Mars" << endl;
        system("pause");
        return;
    }
    else if (humor == "feliz" && preferencia == "pop" && periodo == "noite") {
        cout << "1 - Starboy - The Weeknd" << endl;
        cout << "2 - Locked Out of Heaven - Bruno Mars" << endl;
        cout << "3 - Don't Start Now - Dua Lipa" << endl;
        cout << "4 - Uptown Funk - Mark Ronson & Bruno Mars" << endl;
        cout << "5 - Break Free - Ariana Grande" << endl;
        cout << "6 - 24K Magic - Bruno Mars" << endl;
        cout << "7 - Closer - The Chainsmokers" << endl;
        cout << "8 - Sorry - Justin Bieber" << endl;
        cout << "9 - Talk - Khalid" << endl;
        cout << "10 - Secrets - The Weeknd" << endl;
        system("pause");
        return;
    }
    else if (humor == "feliz" && preferencia == "rock" && periodo == "manha") {
        cout << "1 - Mr. Blue Sky - Electric Light Orchestra" << endl;
        cout << "2 - Walking on Sunshine - Katrina & The Waves" << endl;
        cout << "3 - It's Time - Imagine Dragons" << endl;
        cout << "4 - Dog Days Are Over - Florence + The Machine" << endl;
        cout << "5 - Viva La Vida - Coldplay" << endl;
        cout << "6 - Best Day of My Life - American Authors" << endl;
        cout << "7 - Learn to Fly - Foo Fighters" << endl;
        cout << "8 - On Top of the World - Imagine Dragons" << endl;
        cout << "9 - Send Me on My Way - Rusted Root" << endl;
        cout << "10 - Dreams - Fleetwood Mac" << endl;
        system("pause");
        return;
    }
    else if (humor == "feliz" && preferencia == "rock" && periodo == "tarde") {
        cout << "1 - Yellow - Coldplay" << endl;
        cout << "2 - Renegades - X Ambassadors" << endl;
        cout << "3 - Ride - Twenty One Pilots" << endl;
        cout << "4 - Counting Stars - OneRepublic" << endl;
        cout << "5 - Pompeii - Bastille" << endl;
        cout << "6 - Feel It Still - Portugal. The Man" << endl;
        cout << "7 - Shut Up and Dance - WALK THE MOON" << endl;
        cout << "8 - Take Me Out - Franz Ferdinand" << endl;
        cout << "9 - Everybody Talks - Neon Trees" << endl;
        cout << "10 - Sweet Disposition - The Temper Trap" << endl;
        system("pause");
        return;
    }
    else if (humor == "feliz" && preferencia == "rock" && periodo == "noite") {
        cout << "1 - Smells Like Teen Spirit - Nirvana" << endl;
        cout << "2 - Believer - Imagine Dragons" << endl;
        cout << "3 - Thunderstruck - AC/DC" << endl;
        cout << "4 - Seven Nation Army - The White Stripes" << endl;
        cout << "5 - Radioactive - Imagine Dragons" << endl;
        cout << "6 - Kryptonite - 3 Doors Down" << endl;
        cout << "7 - My Songs Know What You Did - Fall Out Boy" << endl;
        cout << "8 - Sugar, We're Goin Down - Fall Out Boy" << endl;
        cout << "9 - In the End - Linkin Park" << endl;
        cout << "10 - Numb - Linkin Park" << endl;
        system("pause");
        return;
    }
    else if (humor == "feliz" && preferencia == "eletronica" && periodo == "manha") {
        cout << "1 - Sunset Lover - Petit Biscuit" << endl;
        cout << "2 - The Nights - Avicii" << endl;
        cout << "3 - Wake Me Up - Avicii" << endl;
        cout << "4 - This Girl - Kungs vs Cookin' On 3 Burners" << endl;
        cout << "5 - Lean On - Major Lazer" << endl;
        cout << "6 - Rather Be - Clean Bandit" << endl;
        cout << "7 - Stolen Dance - Milky Chance" << endl;
        cout << "8 - Firestone - Kygo" << endl;
        cout << "9 - Faded - Alan Walker" << endl;
        cout << "10 - Stay - Zedd & Alessia Cara" << endl;
        system("pause");
        return;
    }
    else if (humor == "feliz" && preferencia == "eletronica" && periodo == "tarde") {
        cout << "1 - Titanium - David Guetta" << endl;
        cout << "2 - Animals - Martin Garrix" << endl;
        cout << "3 - Don't You Worry Child - Swedish House Mafia" << endl;
        cout << "4 - Heroes - Alesso" << endl;
        cout << "5 - Reality - Lost Frequencies" << endl;
        cout << "6 - Closer - The Chainsmokers" << endl;
        cout << "7 - Get Low - Zedd" << endl;
        cout << "8 - Turn Down for What - DJ Snake" << endl;
        cout << "9 - Silence - Marshmello" << endl;
        cout << "10 - Happy Now - Kygo" << endl;
        system("pause");
        return;
    }
    else if (humor == "feliz" && preferencia == "eletronica" && periodo == "noite") {
        cout << "1 - Midnight City - M83" << endl;
        cout << "2 - Nightcall - Kavinsky" << endl;
        cout << "3 - The Hills (remix) - The Weeknd" << endl;
        cout << "4 - Starboy (remix) - The Weeknd" << endl;
        cout << "5 - In the Name of Love - Martin Garrix" << endl;
        cout << "6 - Cold - Kygo" << endl;
        cout << "7 - Ghosts N Stuff - Deadmau5" << endl;
        cout << "8 - I Remember - Kaskade & Deadmau5" << endl;
        cout << "9 - Levels - Avicii" << endl;
        cout << "10 - Wolves - Marshmello & Selena Gomez" << endl;
        system("pause");
        return;
    }
    else if (humor == "feliz" && preferencia == "funk" && periodo == "manha") {
        cout << "1 - Onda Diferente - Anitta" << endl;
        cout << "2 - Show das Poderosas - Anitta" << endl;
        cout << "3 - Vai Malandra - Anitta" << endl;
        cout << "4 - Favela Chegou - Ludmilla" << endl;
        cout << "5 - Rebolation - Parangole" << endl;
        cout << "6 - Desenrola Bate Joga de Ladin - Os Hawaianos" << endl;
        cout << "7 - Beijinho no Ombro - Valesca Popozuda" << endl;
        cout << "8 - Eu Sento Rebolando - MC Sabrina" << endl;
        cout << "9 - Paradinha - Anitta" << endl;
        cout << "10 - Agua na Boca - MC WM" << endl;
        system("pause");
        return;
    }
    else if (humor == "feliz" && preferencia == "funk" && periodo == "tarde") {
        cout << "1 - Malokera - Ludmilla" << endl;
        cout << "2 - Cafe da Manha - Luisa Sonza" << endl;
        cout << "3 - Bola Rebola - Tropkillaz & Anitta" << endl;
        cout << "4 - Sapequinha - Lexa" << endl;
        cout << "5 - Envolvimento - MC Loma" << endl;
        cout << "6 - Sentadona - Luisa Sonza Remix" << endl;
        cout << "7 - Socadona - Ludmilla" << endl;
        cout << "8 - Na Rebolada - MC Mirella" << endl;
        cout << "9 - Desce pro Play - MC Zaac" << endl;
        cout << "10 - Ela So Quer Paz (funk remix) - Projota" << endl;
        system("pause");
        return;
    }
    else if (humor == "feliz" && preferencia == "funk" && periodo == "noite") {
        cout << "1 - Vai Embrazando - MC Zaac & MC Vigary" << endl;
        cout << "2 - So Quer Vrau - MC MM" << endl;
        cout << "3 - Entao Toma - Kevin o Chris" << endl;
        cout << "4 - Tipo Gin - Kevin o Chris" << endl;
        cout << "5 - Beat Gostosinho - Pedro Sampaio" << endl;
        cout << "6 - Galopa - Pedro Sampaio" << endl;
        cout << "7 - No Chao Novinha - Anitta & Pedro Sampaio" << endl;
        cout << "8 - Toma Toma - Ze Felipe & MC Danny" << endl;
        cout << "9 - Bunda no Chao - MC Fioti" << endl;
        cout << "10 - Aquecimento da Sarrada - MC MM" << endl;
        system("pause");
        return;
    }
    else if (humor == "triste" && preferencia == "pop" && periodo == "manha") {
        cout << "1 - Someone Like You - Adele" << endl;
        cout << "2 - When I Was Your Man - Bruno Mars" << endl;
        cout << "3 - Back to December - Taylor Swift" << endl;
        cout << "4 - Stone Cold - Demi Lovato" << endl;
        cout << "5 - Lose You to Love Me - Selena Gomez" << endl;
        cout << "6 - Jealous - Labrinth" << endl;
        cout << "7 - All I Ask - Adele" << endl;
        cout << "8 - Fix You (cover) - Sam Tsui" << endl;
        cout << "9 - Say You Love Me - Jessie Ware" << endl;
        cout << "10 - Let Her Go - Passenger" << endl;
        system("pause");
        return;
    }
    else if (humor == "triste" && preferencia == "pop" && periodo == "tarde") {
        cout << "1 - Happier - Marshmello & Bastille" << endl;
        cout << "2 - The Night We Met - Lord Huron" << endl;
        cout << "3 - Driver's License - Olivia Rodrigo" << endl;
        cout << "4 - Ghost - Justin Bieber" << endl;
        cout << "5 - Youth - Daughter" << endl;
        cout << "6 - Liability - Lorde" << endl;
        cout << "7 - All I Want - Kodaline" << endl;
        cout << "8 - Traitor - Olivia Rodrigo" << endl;
        cout << "9 - Memories - Maroon 5" << endl;
        cout << "10 - The Scientist - Coldplay" << endl;
        system("pause");
        return;
    }
    else if (humor == "triste" && preferencia == "pop" && periodo == "noite") {
        cout << "1 - Wrecking Ball - Miley Cyrus" << endl;
        cout << "2 - Uncover - Zara Larsson" << endl;
        cout << "3 - Dancing On My Own - Calum Scott" << endl;
        cout << "4 - Too Good at Goodbyes - Sam Smith" << endl;
        cout << "5 - Let Me Down Slowly - Alec Benjamin" << endl;
        cout << "6 - Lovely - Billie Eilish" << endl;
        cout << "7 - Ocean Eyes - Billie Eilish" << endl;
        cout << "8 - Exile - Taylor Swift" << endl;
        cout << "9 - Happier Than Ever - Billie Eilish" << endl;
        cout << "10 - Breathe Me - Sia" << endl;
        system("pause");
        return;
    }
    else if (humor == "triste" && preferencia == "rock" && periodo == "manha") {
        cout << "1 - Fix You - Coldplay" << endl;
        cout << "2 - Creep - Radiohead" << endl;
        cout << "3 - I Will Wait - Mumford & Sons" << endl;
        cout << "4 - Tears in Heaven - Eric Clapton" << endl;
        cout << "5 - The Only Exception - Paramore" << endl;
        cout << "6 - Chasing Cars - Snow Patrol" << endl;
        cout << "7 - Broken - Lifehouse" << endl;
        cout << "8 - Iris - Goo Goo Dolls" << endl;
        cout << "9 - Snuff - Slipknot (acustico)" << endl;
        cout << "10 - Dear God - Avenged Sevenfold" << endl;
        system("pause");
        return;
    }
    else if (humor == "triste" && preferencia == "rock" && periodo == "tarde") {
        cout << "1 - In the End - Linkin Park" << endl;
        cout << "2 - Numb - Linkin Park" << endl;
        cout << "3 - Boulevard of Broken Dreams - Green Day" << endl;
        cout << "4 - Black - Pearl Jam" << endl;
        cout << "5 - Fade to Black - Metallica" << endl;
        cout << "6 - How to Save a Life - The Fray" << endl;
        cout << "7 - Welcome Home - Radical Face" << endl;
        cout << "8 - 21 Guns - Green Day" << endl;
        cout << "9 - Sleepwalking - Bring Me the Horizon" << endl;
        cout << "10 - Angels on the Moon - Thriving Ivory" << endl;
        system("pause");
        return;
    }
    else if (humor == "triste" && preferencia == "rock" && periodo == "noite") {
        cout << "1 - Hurt - Johnny Cash" << endl;
        cout << "2 - The Sound of Silence - Disturbed" << endl;
        cout << "3 - My Immortal - Evanescence" << endl;
        cout << "4 - Shadow of the Day - Linkin Park" << endl;
        cout << "5 - Broken - Seether ft. Amy Lee" << endl;
        cout << "6 - I Miss You - Blink-182" << endl;
        cout << "7 - If I Die Young - The Band Perry" << endl;
        cout << "8 - Wake Me Up When September Ends - Green Day" << endl;
        cout << "9 - Nobody's Home - Avril Lavigne" << endl;
        cout << "10 - Nothing Else Matters - Metallica" << endl;
        system("pause");
        return;
    }
    else if (humor == "triste" && preferencia == "eletronica" && periodo == "manha") {
        cout << "1 - Faded - Alan Walker" << endl;
        cout << "2 - Sun Models - ODESZA" << endl;
        cout << "3 - Firestone - Kygo" << endl;
        cout << "4 - It Ain't Me - Kygo & Selena Gomez" << endl;
        cout << "5 - Let Me Go - Hailee Steinfeld" << endl;
        cout << "6 - Silence - Marshmello" << endl;
        cout << "7 - Happier - Marshmello" << endl;
        cout << "8 - The Ocean - Mike Perry" << endl;
        cout << "9 - I Like Me Better (remix) - Lauv" << endl;
        cout << "10 - Stay - Zedd" << endl;
        system("pause");
        return;
    }
    else if (humor == "triste" && preferencia == "eletronica" && periodo == "tarde") {
        cout << "1 - Goodbye - Feder" << endl;
        cout << "2 - Paris - The Chainsmokers" << endl;
        cout << "3 - Young - The Chainsmokers" << endl;
        cout << "4 - The One - The Chainsmokers" << endl;
        cout << "5 - Let You Go - The Chainsmokers" << endl;
        cout << "6 - Middle - DJ Snake" << endl;
        cout << "7 - Carry Me - Kygo" << endl;
        cout << "8 - Remind Me to Forget - Kygo" << endl;
        cout << "9 - Without You - Avicii" << endl;
        cout << "10 - Waiting for Love - Avicii" << endl;
        system("pause");
        return;
    }
    else if (humor == "triste" && preferencia == "eletronica" && periodo == "noite") {
        cout << "1 - Sleepless - Cazzette" << endl;
        cout << "2 - Ghosts N Stuff - Deadmau5" << endl;
        cout << "3 - Shelter - Porter Robinson" << endl;
        cout << "4 - I Remember - Deadmau5" << endl;
        cout << "5 - Oblivion - Grimes" << endl;
        cout << "6 - Sad Machine - Porter Robinson" << endl;
        cout << "7 - After Dark - Mr. Kitty" << endl;
        cout << "8 - Alone - Marshmello" << endl;
        cout << "9 - On Hold - The xx" << endl;
        cout << "10 - Sunflower (remix) - Post Malone" << endl;
        system("pause");
        return;
    }
    else if (humor == "triste" && preferencia == "funk" && periodo == "manha") {
        cout << "1 - Amor de Verdade - MC Kekel" << endl;
        cout << "2 - Romance Proibido - MC Kevin" << endl;
        cout << "3 - Cavalo de Troia - MC Kevin" << endl;
        cout << "4 - Pra Me Ver - MC PH" << endl;
        cout << "5 - Coracao Gelado - MC Don Juan" << endl;
        cout << "6 - Oxigenio - MC Hariel" << endl;
        cout << "7 - Mina de Vermelho - MC Damy" << endl;
        cout << "8 - Anti-Amor - MC IG" << endl;
        cout << "9 - Deixe-me Ir (funk) - 1Kilo" << endl;
        cout << "10 - Saudade - MC Kevin" << endl;
        system("pause");
        return;
    }
    else if (humor == "triste" && preferencia == "funk" && periodo == "tarde") {
        cout << "1 - Liberdade (Quando o Grave Bate) - Alok & MC Don Juan" << endl;
        cout << "2 - Amor de Fim de Noite - MC Poze do Rodo" << endl;
        cout << "3 - Ilusao - Alok Remix" << endl;
        cout << "4 - Eu Tenho a Senha - MC Kevin o Chris" << endl;
        cout << "5 - Xerecard - MC Danny" << endl;
        cout << "6 - Vai Embora - MC IG" << endl;
        cout << "7 - Deus e Eu - MC Hariel" << endl;
        cout << "8 - Manto do Timão - MC Kevin" << endl;
        cout << "9 - Poesia Acustica 10 (funk) - 3030 & MCs" << endl;
        cout << "10 - Carencia - MC Pedrinho" << endl;
        system("pause");
        return;
    }
    else if (humor == "triste" && preferencia == "funk" && periodo == "noite") {
        cout << "1 - Vida Louca - MC Poze do Rodo" << endl;
        cout << "2 - Eu Vou Te Pegar - MC Lan" << endl;
        cout << "3 - Amor Dificil - MC Kevin o Chris" << endl;
        cout << "4 - Pistola - Jao (funk remix)" << endl;
        cout << "5 - Surtada Remix - Dada Bolado" << endl;
        cout << "6 - Bipolar - MC Davi & MC Pedrinho" << endl;
        cout << "7 - B.O Temporario - MC Hariel" << endl;
        cout << "8 - Rico ou Miseravel - MC Poze" << endl;
        cout << "9 - Vem Tranquila - MC Livinho" << endl;
        cout << "10 - Pega Pega - MC Pedrinho" << endl;
        system("pause");
        return;
    }
    else if (humor == "calmo" && preferencia == "pop" && periodo == "manha") {
        cout << "1 - Perfect - Ed Sheeran" << endl;
        cout << "2 - Photograph - Ed Sheeran" << endl;
        cout << "3 - Falling - Harry Styles" << endl;
        cout << "4 - Little Things - One Direction" << endl;
        cout << "5 - Better Together - Jack Johnson" << endl;
        cout << "6 - Count on Me - Bruno Mars" << endl;
        cout << "7 - Before You Go - Lewis Capaldi" << endl;
        cout << "8 - Butterflies - Kacey Musgraves" << endl;
        cout << "9 - Say You Won't Let Go - James Arthur" << endl;
        cout << "10 - Heather - Conan Gray" << endl;
        system("pause");
        return;
    }
    else if (humor == "calmo" && preferencia == "pop" && periodo == "tarde") {
        cout << "1 - Adore You - Harry Styles" << endl;
        cout << "2 - Ghost - Justin Bieber" << endl;
        cout << "3 - Hold Me While You Wait - Lewis Capaldi" << endl;
        cout << "4 - 10,000 Hours - Dan + Shay & Justin Bieber" << endl;
        cout << "5 - Gravity - Sara Bareilles" << endl;
        cout << "6 - Lost in Japan - Shawn Mendes" << endl;
        cout << "7 - Positions (acoustic) - Ariana Grande" << endl;
        cout << "8 - All of Me - John Legend" << endl;
        cout << "9 - Like a Star - Corinne Bailey Rae" << endl;
        cout << "10 - Location - Khalid" << endl;
        system("pause");
        return;
    }
    else if (humor == "calmo" && preferencia == "pop" && periodo == "noite") {
        cout << "1 - Earned It - The Weeknd" << endl;
        cout << "2 - All I Want - Kodaline" << endl;
        cout << "3 - Jealous - Nick Jonas" << endl;
        cout << "4 - Too Good at Goodbyes - Sam Smith" << endl;
        cout << "5 - Love in the Dark - Adele" << endl;
        cout << "6 - Skinny Love - Birdy" << endl;
        cout << "7 - All I Want - Damien Rice" << endl;
        cout << "8 - I Don't Wanna Be You Anymore - Billie Eilish" << endl;
        cout << "9 - Stay With Me - Sam Smith" << endl;
        cout << "10 - Moonlight - Ariana Grande" << endl;
        system("pause");
        return;
    }
    else if (humor == "calmo" && preferencia == "rock" && periodo == "manha") {
        cout << "1 - Everlong (acoustic) - Foo Fighters" << endl;
        cout << "2 - Take It Easy - Eagles" << endl;
        cout << "3 - Patience - Guns N' Roses" << endl;
        cout << "4 - Blackbird - The Beatles" << endl;
        cout << "5 - Yellow - Coldplay" << endl;
        cout << "6 - Wish You Were Here - Pink Floyd" << endl;
        cout << "7 - Heart of Gold - Neil Young" << endl;
        cout << "8 - Drive - Incubus" << endl;
        cout << "9 - The Scientist - Coldplay" << endl;
        cout << "10 - Northern Wind - City and Colour" << endl;
        system("pause");
        return;
    }
    else if (humor == "calmo" && preferencia == "rock" && periodo == "tarde") {
        cout << "1 - Holocene - Bon Iver" << endl;
        cout << "2 - Slow Dancing in a Burning Room - John Mayer" << endl;
        cout << "3 - Iris - Goo Goo Dolls" << endl;
        cout << "4 - Breathe Me - Sia (rock version)" << endl;
        cout << "5 - Demons - Imagine Dragons" << endl;
        cout << "6 - Satellite - Guster" << endl;
        cout << "7 - To Build a Home - Cinematic Orchestra" << endl;
        cout << "8 - Skinny Love - Bon Iver" << endl;
        cout << "9 - Talk - Coldplay" << endl;
        cout << "10 - Holocene - Bon Iver" << endl;
        system("pause");
        return;
    }
    else if (humor == "calmo" && preferencia == "rock" && periodo == "noite") {
        cout << "1 - Shadow of the Day - Linkin Park" << endl;
        cout << "2 - Snuff - Slipknot (acoustic)" << endl;
        cout << "3 - Black - Pearl Jam" << endl;
        cout << "4 - Nothing Else Matters - Metallica" << endl;
        cout << "5 - Simple Man - Lynyrd Skynyrd" << endl;
        cout << "6 - Creep (acoustic) - Radiohead" << endl;
        cout << "7 - Something in the Way - Nirvana" << endl;
        cout << "8 - Colorblind - Counting Crows" << endl;
        cout << "9 - Tears in Heaven - Eric Clapton" << endl;
        cout << "10 - Fade to Black - Metallica" << endl;
        system("pause");
        return;
    }
    else if (humor == "calmo" && preferencia == "eletronica" && periodo == "manha") {
        cout << "1 - Sunflower (Kygo remix) - Post Malone" << endl;
        cout << "2 - Higher Love - Kygo & Whitney Houston" << endl;
        cout << "3 - Stole the Show - Kygo" << endl;
        cout << "4 - It Ain't Me - Kygo & Selena Gomez" << endl;
        cout << "5 - Lost in the Moment - NF (electro version)" << endl;
        cout << "6 - Firestone - Kygo" << endl;
        cout << "7 - Paradise - Meduza" << endl;
        cout << "8 - Stay - Zedd" << endl;
        cout << "9 - Ocean - Martin Garrix" << endl;
        cout << "10 - Happy Now - Kygo" << endl;
        system("pause");
        return;
    }
    else if (humor == "calmo" && preferencia == "eletronica" && periodo == "tarde") {
        cout << "1 - Sunset Lover - Petit Biscuit" << endl;
        cout << "2 - Faded - Alan Walker" << endl;
        cout << "3 - Alone - Marshmello" << endl;
        cout << "4 - Silence - Marshmello" << endl;
        cout << "5 - Takeaway - The Chainsmokers" << endl;
        cout << "6 - Paris - The Chainsmokers" << endl;
        cout << "7 - Young - The Chainsmokers" << endl;
        cout << "8 - Malibu Nights (remix) - LANY" << endl;
        cout << "9 - Happier - Marshmello" << endl;
        cout << "10 - Cold - Kygo" << endl;
        system("pause");
        return;
    }
    else if (humor == "calmo" && preferencia == "eletronica" && periodo == "noite") {
        cout << "1 - Oblivion - Grimes" << endl;
        cout << "2 - Nightcall - Kavinsky" << endl;
        cout << "3 - Midnight City - M83" << endl;
        cout << "4 - Shelter - Porter Robinson" << endl;
        cout << "5 - Everything Black - Unlike Pluto" << endl;
        cout << "6 - After Dark - Mr. Kitty" << endl;
        cout << "7 - Ghosts N Stuff - Deadmau5" << endl;
        cout << "8 - I Remember - Deadmau5" << endl;
        cout << "9 - Save Me - Kaskade" << endl;
        cout << "10 - Gold - Chet Faker" << endl;
        system("pause");
        return;
    }
    else if (humor == "calmo" && preferencia == "funk" && periodo == "manha") {
        cout << "1 - Cafe da Manha - Luisa Sonza" << endl;
        cout << "2 - Deixa Se Envolver - MC Pedrinho" << endl;
        cout << "3 - Amor de Verdade - MC Kekel" << endl;
        cout << "4 - Pra Me Ver - MC PH" << endl;
        cout << "5 - Amor de Fim de Noite - MC Poze" << endl;
        cout << "6 - Liberdade - MC Don Juan" << endl;
        cout << "7 - Anti-Amor - MC IG" << endl;
        cout << "8 - Coracao Gelado - MC Don Juan" << endl;
        cout << "9 - Romance Proibido - MC Kevin" << endl;
        cout << "10 - Falam de Mim - MC Dede" << endl;
        system("pause");
        return;
    }
    else if (humor == "calmo" && preferencia == "funk" && periodo == "tarde") {
        cout << "1 - Sentadona - Luisa Sonza Remix" << endl;
        cout << "2 - Bola Rebola - Tropkillaz" << endl;
        cout << "3 - Vai Malandra - Anitta" << endl;
        cout << "4 - Eu Sento Rebolando - MC Sabrina" << endl;
        cout << "5 - Sapequinha - Lexa" << endl;
        cout << "6 - Desce pro Play - MC Zaac" << endl;
        cout << "7 - Galopa - Pedro Sampaio" << endl;
        cout << "8 - No Chao Novinha - Pedro Sampaio" << endl;
        cout << "9 - Toma - Ze Felipe" << endl;
        cout << "10 - Toda Toda - MC Loma" << endl;
        system("pause");
        return;
    }
    else if (humor == "calmo" && preferencia == "funk" && periodo == "noite") {
        cout << "1 - Tipo Gin - Kevin o Chris" << endl;
        cout << "2 - Entao Toma - Kevin o Chris" << endl;
        cout << "3 - Ta OK - Dennis & Kevinho" << endl;
        cout << "4 - Beat Gostosinho - Pedro Sampaio" << endl;
        cout << "5 - Aquecimento da Sarrada - MC MM" << endl;
        cout << "6 - Na Rebolada - MC Mirella" << endl;
        cout << "7 - Surtada Remix - Dada Bolado" << endl;
        cout << "8 - Vai Embrazando - MC Zaac" << endl;
        cout << "9 - Pisadinha (funk mix) - Baroes" << endl;
        cout << "10 - Bum Bum Tam Tam - MC Fioti" << endl;
        system("pause");
        return;
    }
    else if (humor == "energico" && preferencia == "pop" && periodo == "manha") {
        cout << "1 - Break Free - Ariana Grande" << endl;
        cout << "2 - Don't Start Now - Dua Lipa" << endl;
        cout << "3 - Break My Heart - Dua Lipa" << endl;
        cout << "4 - Levitating - Dua Lipa" << endl;
        cout << "5 - Shake It Off - Taylor Swift" << endl;
        cout << "6 - Problem - Ariana Grande" << endl;
        cout << "7 - Good Feeling - Flo Rida" << endl;
        cout << "8 - Good Time - Owl City" << endl;
        cout << "9 - Havana - Camila Cabello" << endl;
        cout << "10 - Call Me Maybe - Carly Rae Jepsen" << endl;
        system("pause");
        return;
    }
    else if (humor == "energico" && preferencia == "pop" && periodo == "tarde") {
        cout << "1 - Starboy - The Weeknd" << endl;
        cout << "2 - 24k Magic - Bruno Mars" << endl;
        cout << "3 - Treasure - Bruno Mars" << endl;
        cout << "4 - Sorry Not Sorry - Demi Lovato" << endl;
        cout << "5 - Love Me Harder - Ariana Grande" << endl;
        cout << "6 - Bad Romance - Lady Gaga" << endl;
        cout << "7 - Rain On Me - Lady Gaga" << endl;
        cout << "8 - Poker Face - Lady Gaga" << endl;
        cout << "9 - Blinding Lights - The Weeknd" << endl;
        cout << "10 - Can't Stop The Feeling - Justin Timberlake" << endl;
        system("pause");
        return;
    }
    else if (humor == "energico" && preferencia == "pop" && periodo == "noite") {
        cout << "1 - Uptown Funk - Bruno Mars" << endl;
        cout << "2 - New Rules - Dua Lipa" << endl;
        cout << "3 - Side to Side - Ariana Grande" << endl;
        cout << "4 - Don't Call Me Angel - Ariana Grande" << endl;
        cout << "5 - Starships - Nicki Minaj" << endl;
        cout << "6 - Bang Bang - Ariana Grande" << endl;
        cout << "7 - Cheap Thrills - Sia" << endl;
        cout << "8 - Tik Tok - Kesha" << endl;
        cout << "9 - I Wanna Go - Britney Spears" << endl;
        cout << "10 - She Wolf - Shakira" << endl;
        system("pause");
        return;
    }
    else if (humor == "energico" && preferencia == "rock" && periodo == "manha") {
        cout << "1 - Believer - Imagine Dragons" << endl;
        cout << "2 - Thunder - Imagine Dragons" << endl;
        cout << "3 - Whatever It Takes - Imagine Dragons" << endl;
        cout << "4 - Warriors - Imagine Dragons" << endl;
        cout << "5 - Radioactive - Imagine Dragons" << endl;
        cout << "6 - High Hopes - Panic! At The Disco" << endl;
        cout << "7 - Centuries - Fall Out Boy" << endl;
        cout << "8 - My Songs Know What You Did - Fall Out Boy" << endl;
        cout << "9 - Immortals - Fall Out Boy" << endl;
        cout << "10 - Smells Like Teen Spirit - Nirvana" << endl;
        system("pause");
        return;
    }
    else if (humor == "energico" && preferencia == "rock" && periodo == "tarde") {
        cout << "1 - Welcome to the Black Parade - My Chemical Romance" << endl;
        cout << "2 - Hysteria - Muse" << endl;
        cout << "3 - Supermassive Black Hole - Muse" << endl;
        cout << "4 - Pain - Three Days Grace" << endl;
        cout << "5 - Animal I Have Become - Three Days Grace" << endl;
        cout << "6 - I Write Sins Not Tragedies - Panic! At The Disco" << endl;
        cout << "7 - In the End - Linkin Park" << endl;
        cout << "8 - Papercut - Linkin Park" << endl;
        cout << "9 - Chop Suey - System of a Down" << endl;
        cout << "10 - Toxicity - System of a Down" << endl;
        system("pause");
        return;
    }
    else if (humor == "energico" && preferencia == "rock" && periodo == "noite") {
        cout << "1 - Duality - Slipknot" << endl;
        cout << "2 - Before I Forget - Slipknot" << endl;
        cout << "3 - The Kill - 30 Seconds to Mars" << endl;
        cout << "4 - Not Afraid - Eminem (rock remix)" << endl;
        cout << "5 - Unsainted - Slipknot" << endl;
        cout << "6 - Fuel - Metallica" << endl;
        cout << "7 - Enter Sandman - Metallica" << endl;
        cout << "8 - Given Up - Linkin Park" << endl;
        cout << "9 - Freak On a Leash - Korn" << endl;
        cout << "10 - Bodies - Drowning Pool" << endl;
        system("pause");
        return;
    }
    else if (humor == "energico" && preferencia == "eletronica" && periodo == "manha") {
        cout << "1 - Animals - Martin Garrix" << endl;
        cout << "2 - Don't You Worry Child - Swedish House Mafia" << endl;
        cout << "3 - Titanium - David Guetta" << endl;
        cout << "4 - The Nights - Avicii" << endl;
        cout << "5 - The Days - Avicii" << endl;
        cout << "6 - Addicted to You - Avicii" << endl;
        cout << "7 - Heroes - Alesso" << endl;
        cout << "8 - Closer - The Chainsmokers" << endl;
        cout << "9 - Wake Me Up - Avicii" << endl;
        cout << "10 - In the Name of Love - Martin Garrix" << endl;
        system("pause");
        return;
    }
    else if (humor == "energico" && preferencia == "eletronica" && periodo == "tarde") {
        cout << "1 - Turn Down for What - DJ Snake" << endl;
        cout << "2 - Lean On - Major Lazer" << endl;
        cout << "3 - Boom - Tiesto" << endl;
        cout << "4 - Party Till We Die - MAKJ" << endl;
        cout << "5 - Cold - Kygo" << endl;
        cout << "6 - Get Low - Dillon Francis" << endl;
        cout << "7 - Alive - Krewella" << endl;
        cout << "8 - Tsunami - DVBBS" << endl;
        cout << "9 - Harlem Shake - Baauer" << endl;
        cout << "10 - Gold Dust - DJ Fresh" << endl;
        system("pause");
        return;
    }
    else if (humor == "energico" && preferencia == "eletronica" && periodo == "noite") {
        cout << "1 - Midnight City - M83" << endl;
        cout << "2 - Ghosts N Stuff - Deadmau5" << endl;
        cout << "3 - Shelter - Porter Robinson" << endl;
        cout << "4 - Strobe - Deadmau5" << endl;
        cout << "5 - Levels - Avicii" << endl;
        cout << "6 - Sandstorm - Darude" << endl;
        cout << "7 - The Island - Pendulum" << endl;
        cout << "8 - We Found Love - Calvin Harris" << endl;
        cout << "9 - Animals (remix) - Martin Garrix" << endl;
        cout << "10 - Don't Let Me Down - The Chainsmokers" << endl;
        system("pause");
        return;
    }
    else if (humor == "energico" && preferencia == "funk" && periodo == "manha") {
        cout << "1 - Parado no Bailao - MC L Da Vinte" << endl;
        cout << "2 - So Quer Vrau - MC MM" << endl;
        cout << "3 - Sentadao - Pedro Sampaio" << endl;
        cout << "4 - Toma - Ze Felipe" << endl;
        cout << "5 - Beat Gostosinho - Pedro Sampaio" << endl;
        cout << "6 - Galopa - Pedro Sampaio" << endl;
        cout << "7 - Desenrola Bate Joga de Ladin - Os Hawaianos" << endl;
        cout << "8 - Bota o Grave - Dennis" << endl;
        cout << "9 - Aquecimento da Sarrada - MC MM" << endl;
        cout << "10 - Surtada Remix - Dadá Boladão" << endl;
        system("pause");
        return;
    }
    else if (humor == "energico" && preferencia == "funk" && periodo == "tarde") {
        cout << "1 - Entao Toma - Kevin o Chris" << endl;
        cout << "2 - Tipo Gin - Kevin o Chris" << endl;
        cout << "3 - Vai Embrazando - MC Zaac" << endl;
        cout << "4 - Ta OK - Dennis & Kevinho" << endl;
        cout << "5 - Envolvimento - MC Loma" << endl;
        cout << "6 - Sapequinha - Lexa" << endl;
        cout << "7 - Novinha Voce e uma Flor - MC Bruninho" << endl;
        cout << "8 - Automotivo Brega Funk - Vitor Fernandes" << endl;
        cout << "9 - Amiga Safada - MC Livinho" << endl;
        cout << "10 - Lagrimas de Crocodilo - MC Daleste" << endl;
        system("pause");
        return;
    }
    else if (humor == "energico" && preferencia == "funk" && periodo == "noite") {
        cout << "1 - Aquecimento das Maravilhas - MC GW" << endl;
        cout << "2 - Medley da Gaiola - Rennan da Penha" << endl;
        cout << "3 - Pistola - Jao (funk remix)" << endl;
        cout << "4 - Malokera - Ludmilla" << endl;
        cout << "5 - Toma Tapa - MC WM" << endl;
        cout << "6 - Chama no Fone - DJ Guuga" << endl;
        cout << "7 - Carnaval Chegou - Lexa" << endl;
        cout << "8 - Funk do Mortal Kombat - Cybernetics" << endl;
        cout << "9 - Na Ponta do Pe - Naldo" << endl;
        cout << "10 - Automotivo Explosao - DJ Guih da 28" << endl;
        system("pause");
        return;
    }

    cout << "Nenhuma playlist configurada para essa combinacao!" << endl;
    system("pause");
}

