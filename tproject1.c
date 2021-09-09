#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

   int main()  {
	int login,op,kg,cm,age,x=10,y=2,z=5,ge,al,cn,wl,meal,res1,star,et;
	int gotostart=0;
	int gotoidk=0;
	int gotorecipe=0;
	int gotoex=0; 
	int gotoal1=0, gotoge1=0, gotowl1=0,gotomeal1=0, gotomeal2=0, gotomeal3=0, gotomeal4=0;
	printf("*************************************************************\n************WELCOME TO THE WEIGHT CONTROL PROGRAM************\n*************************************************************\n");
	start :
	idk:
	printf("1.Calculate your daily calorie need\n2.Calorie based recipes\n3.Exercises\n4.Tip of the day.\n5.Exit program.\nPlease choose your operation(1-5)\n");
	scanf("%d",&op);
     if(op==1){
	printf("enter your weight (kg)\n");
	scanf("%d",&kg);
	printf("enter your height (cm)\n");
    scanf("%d",&cm);
	printf("enter your age\n");
	scanf("%d",&age); 
	ge1: 
	printf("enter your gender(1-male/2-female)\n");
	scanf("%d",&ge);
	al1:
    printf("enter your activity level\n1-Sedentary:Only daily activities\n2-Lightly active:Daily activities + 30 min-1 hour exercise\n3-Active:Daily activities + 1-2 hours exercise\n4-Very active:Daily activities + 2-4 hours exercise\n");
    scanf("%d",&al);
	 if(al==1){
	al=200;
	}
    else if (al==2){
    al=450;
    }
    else if (al==3){
    al=650;
    }
    else if (al==4){
    al=900;
    }
	else{
		printf("Please choose between range 1-4\n");
		getch();
		goto al1;
	} 
	if (ge==1){
    ge==66;
    cn= ge + al + (x*kg) + (y*cm) - (z*age) ;
    }
    else if(ge==2){
    ge==665;
    cn= ge + al + (x*kg) + (y*cm) - (z*age);
	}
	else{
		printf("please choose between range 1-2.\n");
		getch();
		goto ge1;
	}
	wl1:
	printf("enter if you want to\n 1-Lose weight\n2-Maintain weight\n3-Gain Weight\n");
	scanf("%d",&wl);
	if(wl==1){
	cn=cn-400;
	printf("Your daily calorie need to lose weight is %d calories.\n",cn);
	}
	else if(wl==2){
	cn=cn;
	printf("Your daily calorie need to maintain your weight is %d calories.\n",cn);
	}
	else if(wl==3){
	cn=cn+500;
	printf("your daily calorie need to gain weight is %d calories.\n",cn);
	}
	else{
		printf("Please choose between range 1-3.\n");
		getch();
		goto wl1;
	}
	printf("\n\nPress any key to continue to the menu.\n");
    getch();
	goto start;
	}
     if(op==2){
    recipe:
	printf("how many calories do you want to eat(0-400)\n");
	scanf("%d",&meal);
	if((meal>=0)&&(meal<=100)){
	printf("Here are some recipes that are 0-100calories\n");
	meal1:
	printf("1-zucchini parmesan(52 calories)\n2-spinach and cheese stuffed mushrooms(79 calories)\n3-corn and mango salad(78 calories)\n4-Egg muffins (100 calories)\n5-butternut and redpepper soup(88 calories)\n6-oatmeal raisin cookies(81 calories)\n7-nutella blondie(59 calories)\nChoose the dish you want to know the recipe of(1-7)\n");
	scanf("%d",&res1);
	if(res1==1){
	printf("ingrediants\n-1 cup sliced zucchini\n-tablespoon shredded Parmesan cheese\n-a few squirts butter spray\nPREP\nLine a cookie sheet with aluminum foil, then coat with some cooking spray. Place the zucchini slices out on \nthe pan, then spritz with them with the butter spray. Sprinkle on the parmesan cheese and then pop it in the oven.\n Broil for a few minutes - until the cheese starts to brown. Enjoy it while it's warm!");			   	
	}
	else if(res1==2){
	printf("Ingrediants\n-6 large stuffing mushrooms\n -1 10 oz package frozen chopped spinach\n-1/2 a large onion diced\n-1 glove garlic, diced-2 tsp parmesan cheese\n-1/2 cup cheddar cheese\n-1 tsp olive oil\n-1/4 paprika\n-1/4 coriander\n-dash pepper\n-dash salt\nPREP\nPreheat oven to 350.-Clean and hollow out six large mushroom caps (average 14 oz package.) Put in 8 x 8 pan\n-Heat 1 tsp olive oil to large skillet, medium heat\n-Add onions and garlic, salte until onions are soft\n-Add spinach. Mix well\n-Add parmesan cheese. Mix well.\n-Add cheddar cheese. Reduce to low heat and mix.\n-Add paprika, coriander, and salt and pepper to taste.\n-Remove heat, spoon mixture into mushroom caps.\n-Bake mushroom caps ~20 minutes or until desired mushroom texture.\n-Makes 6 large mushrooms\n-Number of Servings: 6\n");
	}
	else if(res1==3){
	printf("Ingrediants\n-2 Ears fresh corn�husked\n-1 Fresh mangoes peeled, pitted and diced\n-1/2 Yellow bell pepper cut into small dice\n-1/2 Orange bell pepper cut into small dice\n-1 Cup Cherry tomatoes�halved\n-1 Red chile minced\n-1/2 A red onion cut into a small dice\n-1/2 Cup Minced fresh cilantro\n-2 Tbsp Rice vinegar\n-Grated zest of 2 limes\n-2 Tbsp Fresh lime juice\n-1 Tbsp Avocado oil or olive oil\n-Kosher salt\nPREP\n\n-Use a sharp knife to \ncut the corn kernels from the cobs. Place into a large bowl\n-Add the remaining ingredients to the bowl and mix well.\n Serve immediately or cover and refrigerate until ready to serve, up to 2 days.(4 serving)\n");
	}
	else if(res1==4){
    printf("Ingrediants\n-about 1 1/2 cups shredded carrots\n-1/2 cup small diced orange bell peppers\n-1/2 cup frozen peas \n-1/2 cup frozen corn \n-8 large eggs\n-salt and pepper to taste\n-about 12 tablespoons shredded cheese divided\nPREP\n\n-Preheat oven to 375F.Spray a Non-Stick 12-Cup Regular Muffin Pan *extremely well with cooking spray. \nSpray the base of the cavities and sides then run your finger over the sides so that every inch is�liberally coated\n with spray or you will be chiseling off stuck food; set pan aside.\n-In a large bowl add carrots, peppers, peas, corn and toss to combine.\n-Loosely pile about 3 tablespoons of vegetable mixture to each muffin cavity, or\n enough so that each is filled to about 2/3 to 3/4 full; \nequally distribute filling mixture among cavities until gone; set pan aside.\n-In a 2-cup glass measuring cup, crack the eggs and lightly beat with a whisk.\n-Add the salt and pepper, to taste, and whisk to combine.\n-Pour about 2-3 tablespoons of egg into each cavity, equally distributing among the cavities. They will be about 3/4 \nfull after being topped off with egg.\n-Top each cup with a generous pinch of cheese, about 1 tablespoon each.\n-Bake for about 18 to 20 minutes, or\n until muffins are set, cooked through, and are lightly golden. They will puff in the oven, but sink upon cooling.\n Allow muffins to cool in pan on top of \na wire rack for about 10 minutes before removing.\n-You will likely need to rim each cavity with\n a small knife to help dislodge muffins.\nI find it easiest to rim with a knife and then \n the muffin out using a small spoon. \nMuffins will keep airtight for up to 1 week in the fridge; reheat gently in the micro or serve cold.\n ");
	}
	else if(res1==5){
	printf("Ingrediants\n-3 medium red peppers\n-1 medium onion\n-3g garlic\n-640g butternut squash\n-70g low fat cream cheese\n-11.8g vegetable stock cubes, dry\nPREP\n-Chop onion and garlic and fry in spray oil�until soft.\n-Chop the�butternut squash�(you can leave the skin on) and add to onions and garlic.\n-Chop the red peppers and add to the onions, garlic and squash and sweat for 5 mins.\n-Mix vegetable stock cubes a pint of boiling water and add to the vegetables.\n-Simmer for a good 20 mins to half an hour, top up the water if needed.\n-Blend the soup until there are no lumps.\n-Add the low fat cream cheese and mix into the soup until its melted.\n-Salt and pepper to taste.");
    }
	else if(res1==6){
	printf("Ingediants\n-1/2 c. oat flour\n-3/4 c. oats\n-1 t. baking powder\n-1/4 t. sea salt\n-1 t. cinnamon\n-1 T.coconut sugar or any granulated sugar\n-2 T. coconut oil\n-1 1/2 t. vanilla extract\n-4-5 T. milk of your choice as needed\n-3 T. raisins\nPREP\n-Preheat oven to 375 degrees.\n-Mix dry ingredients (flour, oats, baking powder, salt, cinnamon, sugar).\n-Stir in oil, vanilla, raisins, and milk, adding enough\n milk to moisten the flour and oats and make a dough that sticks together,but isn't overly wet.\n-Form balls with the dough (8-10).\n-Place the balls of dough onto a parchment paper-lined baking sheet and\n press down on the tops a bit with your fingers.\n-Bake 10 minutes until firm to the touch.\n-Cool and enjoy!");
	}
	else if(res1==7){
	printf("\nIngrediants\n-1 1/2 cups chickpeas or white beans \n-3/4 tsp baking powder\n-1/8 tsp baking soda\n-1/4 tsp salt\n-2/3 cup granulated sugar of choice or xylitol\n-pinch uncut stevia OR 2 additional tbsp sugar of choice\n-1/4 cup rolled oats\n-1/3 cup choc-hazelnut spread or�Homemade Healthy Nutella\n-1/4 cup milk of choice\n-2 tsp pure vanilla extract\n-1/2 cup chocolate chips, plus extra for the top if desired\nPREP\n-Grease an 8-in square baking pan, and set aside.\n- Preheat oven to 350 degrees.\n- In a high-quality food processor (taste and texture will be much better if a blender is not used),\n process all ingredients but the chips until smooth.\n- Stir in the chips, then smooth into the baking pan, being sure to scoop\n out every last bit of the batter.\n- Sprinkle some extra chips on the top if desired for presentation.\n-Bake 30 minutes, then remove from the oven to cool.\n-The Nutella blondies will look underdone at first, but this is okay.\n-Once completely cool, cover the pan and refrigerate overnight.\n-The texture will be much firmer the next day.\n");
	}
	else{
		printf("Please choose dish between 1-7.\n");
		getch();
		goto meal1;
	}
	}
	else if((meal>100)&&(meal<201)){
	meal2:
	printf("\nHere are some recipes between 100-200\n1-Mushroom & basil omelette with smashed tomato(196 calories)\n2-creamy tomato soup(180 calories)\n3-Cranberry chicken salad(190 calories)\n4-Green mango salad with prawns(176 calories)\n5-Crab & sweetcorn chowder(191 calories)\nChoose the dish you want the recipe of(1-5)\n");
	scanf("%d",&res1);
	if(res1==1){
	printf("Ingrediants\n-2 tomatoes \n-3 medium eggs\n-1 tbsp snipped chive\n-300g chestnut mushroom, sliced\n-1 tsp unsalted butter\n-2 tbsp low-fat cream cheese\n-1 tbsp finely chopped basil leaves\nPREP\n-Heat the grill to its highest setting and place the tomatoes on a square of foil underneath, turning occasionally to prevent burning. When the tomatoes are slightly scorched, remove from the grill, squashing them slightly to release the juices.\n-Break the eggs into a bowl and mix with a fork. Add a small splash of water and mix. Add the chives and some black pepper, and beat some more. Set aside while you prepare the mushrooms.\n-In a non-stick frying pan, heat the butter over a medium heat until foaming. Add the mushrooms and cook for 5-8 mins until tender, stirring every few mins. Remove and set aside.\n-Briskly stir the egg mixture, then add to the hot pan (tilting it so that the mixture covers the entire base) and leave for 10 secs or so until it begins to set. With a fork, gently stir the egg here and there so that any unset mixture gets cooked.\n-While the egg mixture is still slightly loose, spoon the mushroom mix onto one side of the omelette, and top with the cream cheese and basil leaves. Flip the other side of the omelette over to cover, if you like. Leave to cook for 1 min more, then cut in half and slide each half onto a plate. Serve immediately with the tomatoes on the side.\n(2servings)\n");
	}
	else if(res1==2){
	printf("Ingrediants\n-3 tbsp olive oil\n-2 onions chopped\n-2 celery sticks, chopped\n-300g carrot chopped\n-500g potato diced\n-4 bay leaves\n-5 tbsp tomato purée\n-2 tbsp sugar\n-2 tbsp red or white wine vinegar\n-4 x 400g cans\n-chopped tomatoes\n-500g passata\n-3 vegetable stock cubes\n-400ml whole milk\nPREP\n-Put the oil, onions, celery, carrots, potatoes and bay leaves in a big casserole dish, or two saucepans. Fry gently until the onions are softened – about 10-15 mins. Fill the kettle and boil it.\n-Stir in the tomato purée, sugar, vinegar, chopped tomatoes and passata, then crumble in the stock cubes. Add 1 litre boiling water and bring to a simmer. Cover and simmer for 15 mins until the potato is tender, then remove the bay leaves. Purée with a stick blender (or ladle into a blender in batches) until very smooth. Season to taste and add a pinch more sugar if it needs it. The soup can now be cooled and chilled for up to 2 days, or frozen for up to 3 months.\n-To serve, reheat the soup, stirring in the milk – try not to let it boil. Serve in small bowls for the children with cheesy sausage rolls then later in bowls for the adults as Hot Bloody Mary soup\n10 serving\n");
	}
	else if(res1==3){
	printf("Ingredients\n-2 skinless chicken breasts\n-4 tsp olive oil\n-2 red onions, thinly sliced\n-200g mixed leaves\n-½ cucumber, deseeded and sliced\n-25g dried cranberries\n-85g/3oz cranberry sauce\n-juice 1 lime\nPREP\n-Slice each chicken breast in half horizontally to give 4 thin breasts, then rub with half the oil and season. Heat a non-stick frying pan and fry the chicken for 3 mins on each side until cooked through. Set aside on a plate.\n-Heat the remaining oil in the pan and fry the onions for 5 mins. Slice the chicken, collecting any juices, and layer up with the onions, leaves, cucumber and dried cranberries. Mix the cranberry sauce, lime juice, 2 tbsp water and any chicken resting juices, and drizzle over the salad.\n4 serving\n");
	}
	else if(res1==4){
	printf("	Ingrediants\n-2 tbsp lime juice\n-1 small red chilli, seeded and finely chopped\n-2 tbsp fish sauce\n-1 tbsp light muscovado sugar\n-3 shallots finely sliced\n-85g roasted salted peanuts, finely chopped\n-2 green mangoes or 3 Granny Smith apples\n-2 tbsp chopped mint\n-1 tbsp sunflower oil\n-200g pack raw shell-on\n-headless prawn\n-peeled but with tail on (or, if you use ready peeled prawns, you need 175g/6oz)\n-2 little gem lettuces\n-2 spring onions shredded\nPREP\n-Mix together the lime juice, chilli, fish sauce and sugar in a large bowl. Add the shallots and three quarters of the peanuts and mix well. Cover and set aside for up to 4 hours.\n-Peel and coarsely grate the mango or apple, and stir into the mixture along with the mint. Heat the oil in a frying pan or wok, add the prawns and stir fry quickly until evenly pink – about 2 minutes.\n-Scatter the lettuce leaves on a serving plate and spoon the salad mixture in the centre. Surround with the prawns and scatter over the remaining peanuts and spring onions.\n6 serving\n");
	}
	else if(res1==5){
	printf("	Ingrediants\n-1 onion finely chopped\n-1 leek green and white parts separated and sliced\n-2 carrots chopped\n-850ml-1 litre/1½ pints - 1¾ pints low-sodium chicken or vegetable stock\n-1 large potato diced\n-175g/ 6oz frozen sweetcorn\n-170g can white crabmeat, drained\n-4 tbsp light crème fraîche\n-1 tsp chopped chives\nPREP\nPut the onion, white part of the leek and carrots in a large pan and pour on a few tbsp of the stock. Cook over a medium heat for about 10 mins, stirring regularly until soft. Add a splash more stock if the vegetables start to stick.\n-Add the potato, green leek and most of the stock, and simmer for 10-15 mins, until the potato is tender. Tip in the sweetcorn and crab meat, then cook for a further 1-2 mins. Remove from the heat and stir in the crème fraîche and some seasoning. Add the rest of the stock if the soup is too thick. Sprinkle with the chives and serve with brown bread, if you like.\n4 serves\n");
	}
	else{
		printf("choose between 1-5\n");
		getch();
		goto meal2;
	}
	}
	else if((meal>200)&&(meal<301)){
		meal3:
	printf("here are some recipes between 200-300 calories.\n1-Carrot & ginger soup(293 calories)\n2-Sesame chicken salad(300 calories)\n3-Spicy tuna quinoa salad(298 calories)\n4-Asparagus salad with a runny poached egg(228 calorie)\n5-Salmon with mustardy celeriac mash(236 calories)\nPlease choose the meal you want the recipe of(1-5)");                                            
	scanf("%d",&res1);
	if(res1==1){
	printf("	\n-Ingrediants\n-1 tbsp rapeseed oil\n-1 large onion chopped\n-2 tbsp coarsely grated ginger\n-2 garlic cloves, sliced\n-½ tsp ground nutmeg\n-850ml vegetable stock\n-500g carrot (preferably organic), sliced\n-400g can cannellini bean\n-Supercharged topping\n-4 tbsp almonds in their skins, cut into slivers\n-sprinkle of nutmeg\nPREP\n-Heat the oil in a large pan, add the onion, ginger and garlic,\n and fry for 5 mins until starting to soften. Stir in the nutmeg and cook for 1 min more.\n-Pour in the stock, add the carrots\n, beans and their liquid, then cover and simmer for 20-25 \nmins until the carrots are tender.\n-Scoop a third of the mixture into a bowl and blitz the \nremainder with a hand blender or in a food processor until smooth.\n Return everything to the pan and heat until bubbling.\n Serve topped with the almonds and nutmeg.\n4 serves\n");
	}
	else if(res1==2){
	printf("Ingrediants\n-2 skinless chicken breasts\n-85g frozen soya bean \n-1 large carroT finely cut into thin matchsticks\n-4 spring onions finely sliced\n-140g cherry tomato, halved\n-small bunch coriander, chopped\n-small handful Thai or ordinary basil leaves, chopped if large\n-85g herb or baby salad leaves\n-1 tsp toasted sesame seeds\n-For the dressing\n-grated zest and juice 1 small lime\n-1 tsp fish sauce\n-1 tsp sesame oil\n-2 tsp sweet chilli sauce\nPREP\n-Put the chicken in a pan and pour over cold water to cover.\n Tip the soya beans into a steamer.\n Bring the pan to a gentle simmer, then cook\n the chicken for 8 mins with the beans above.\n-Meanwhile, mix the dressing ingredients in a large bowl.\n When the chicken is cooked, slice and toss in the dressing along \nwith the beans, carrot, onions, tomatoes, coriander and basil. \nMix really well, pile onto the salad leaves and sprinkle with the sesame seeds.\n2 serves\n");
	}
	else if(res1==3){
	printf("Ingrediants\n-1 onion sliced\n-350g pepper sliced\n-1 tbsp olive oil\n-1 red chilli, finely chopped\n-225g pouch ready to eat quinoa\n-350g cherry tomato, halved\n-handful black olives, chopped\n-225g jar albacore tuna in olive oil, flaked\nPREP\n-Fry the onion and peppers in the oil until soft. Add the chilli and cool slightly.\n-Mix the quinoa, onion mixture, cherry tomatoes, olives and tuna together.\n Divide between 4 plates, pour over a little of the oil from the tuna jar, season and serve.\n4 serves\n");
	}
	else if(res1==4){
	printf("\n-1 tbsp extra virgin olive oil\n-1 tbsp balsamic vinegar\n-200g peeled cooked beetroot\n-(not in vinegar), cut into bite-sized pieces\n-2 handfuls mixed leaves\n- cucumber, cut into batons\n-8 asparagus spears, trimmed\n-2 large eggs\nPREP\n-Pour the olive oil and vinegar into a small bowl, mix well and add the beetroot. \nDivide the mixed leaves and cucumber between 2 plates.\n-Blanch the asparagus in a pan of simmering water for 2 mins, then remove and set aside. \nCrack the eggs into the pan and simmer gently for 3 mins until the whites are cooked\n and the yolks are just beginning to set, but still runny. \nRemove with a slotted spoon and drain on kitchen paper.\n-Meanwhile, add the beetroot to the salad plates, pour over the dressing and lightly toss together.\n Top each plate with asparagus and a poached egg to serve.\n2 serves\n");
	}
	else if(res1==5){
	printf("	\n-2 salmon fillets, about 100g/4oz each\n-700g celeriac peeled to remove all the knobbly skin and cut into chunks like potato\n-2 tsp wholegrain mustard\n-2 tsp lemon juice\n-100g baby�spinach leaves\nPREP\n-Brush the salmon lightly with olive oil, and season with salt and pepper. Line a grill pan with foil and lay the salmon on top.\n-Place the celeriac in a pan with cold water to cover. Salt and bring to the boil.\n Lower the heat, cover and simmer for 12-15 minutes until tender. \nPreheat the grill to medium. Whisk together the mustard, \nlemon juice, a pinch of sugar, salt, pepper and 1 tbsp olive oil.\n-Grill the salmon for five minutes on each side.\n Meanwhile, drain the celeriac, reserving 1 tbsp cooking water.\n Return the celeriac to the pan. Mash until fairly smooth.\n Add the spinach, stirring occasionally over a low heat, until wilted.\n Stir in 1 tbsp mustard dressing and the reserved cooking water. Season.\n-Spoon the mash on to two warm plates and top each with a fillet. \nDrizzle over the leftover dressing.\n2 serves\n");
	}
	else{
		printf("Please choose between 1-5.\n");
		getch();
		goto meal3;
	}
	}
	else if((meal>300)&&(meal<401)){
	meal4:
	printf("here are some recipes between 300-400 calories\n1-Warm chorizo & chickpea salad(354 calories)\n2-Pesto, cannellini bean & tuna jackets(393 calories)\n3-Greek-style roast fish(388 calories)\n4-Simple fish stew(346 calories)\n5-Wild salmon veggie bowl(395 calories)\nPlease choose the dish you want the recipe of(1-5)\n");
	scanf("%d",&res1);
	if(res1==1){
	printf("	\nIngrediants\n-280g pack cooking chorizo sliced\n-1 large red onion, finely sliced\n-2 red peppers, deseeded and cut into strips\n-400g can chickpeas, drained and rinsed\n-12 semi-dried tomatoes\n-1 tbsp red wine vinegar\n-100g bag rocket to serve\nPREP\n-In a large frying pan, dry-fry the chorizo until golden for about 10 mins\n, then use a slotted spoon to scoop it from the pan and set aside.\n-Add the onion and peppers to the pan and soften in the chorizo fat for 10 mins.\n Stir in the chickpeas and tomatoes, warming through.\n-Pour in the red wine vinegar and season.\n Serve in bowls with handfuls of rocket on top\n4 serves\n");
	}
	else if(res1==2){
	printf("	\nIngrediants\n-2 sweet potatoes\n-� 400g can cannellini beans, drained\n-2 tbsp fresh pesto\n-2 tbsp cream cheese\n-100g can tuna in water, drained\n-½ red onion, finely chopped\n-1 lemon zested\n-25g pine nuts, toasted\n-small handful basil leaves\nPREP\nHeat oven to 180C/160C fan/gas 4.\n Pierce the potatoes a few times, then bake for 40 mins, \nor until really soft. Alternatively, microwave on High for 7 mins.\n-Mix the beans, pesto, cream cheese, tuna, red onion, lemon zest and some seasoning\n. Split the baked potatoes and stuff with the tuna filling.\n Top with the pine nuts and basil leaves.\n2 serves\n");
	}
	else if(res1==3){
	printf("	\n-5 small potatoes\n-(about 400g) scrubbed and cut into wedges\n-1�onion halved and sliced\n-2 garlic cloves, roughly chopped\n-� tsp dried oregano or ½ tbsp chopped fresh oregano\n-2 tbsp olive oil\n-½ lemon cut into wedges\n-2 large tomatoes cut into wedges\n-2 fresh skinless pollock fillets (about 200g)\n-small handful parsley roughly chopped\nPREP\n-Heat oven to 200C/180C fan/gas 6. Tip the potatoes, onion, garlic, oregano and\n olive oil into a roasting tin, season, then mix together with your hands to coat everything in the oil\n. Roast for 15 mins, turn everything over and bake for 15 mins more.\n-Add the lemon and tomatoes, and roast for 10 mins, \nthen top with the fish fillets and cook for 10 mins more. Serve with parsley scattered over.\n2 serves\n");
	}
	else if(res1==4){
	printf("\n-1 tbsp�olive oil\n-1 tsp�fennel seeds\n-2�carrots, diced\n-2�celery�sticks, diced\n-2 garlic cloves, finely chopped\n-2�leeks, thinly sliced\n-400g can chopped tomatoes\n-500ml hot fish stock\n-2 skinless pollock fillets (about 200g), thawed if frozen, and cut into chunks\n-85g raw shelled king prawns\nPREP\n-Heat the oil in a large pan, add the fennel seeds, carrots, celery and garlic, \nand cook for 5 mins until starting to soften. \nTip in the leeks, tomatoes and stock, season and bring to the boil,\n then cover and simmer for 15-20 mins until the vegetables are tender\n and the sauce has thickened and reduced slightly.\n-Add the fish, scatter over the prawns and cook for 2 mins more until lightly cooked.\n Ladle into bowls and serve with a spoon.\n2 serves\n");
	}
	else if(res1==5){
	printf("\n-2�carrots\n-1 large�courgette\n-2 cooked�beetroot, diced\n-2 tbsp�balsamic vinegar\n-? small pack dill, chopped, plus some extra fronts (optional)\n-1 small red onion, finely chopped\n-280g poached or canned wild salmon\n-2 tbsp capers in vinegar, rinsed\nPREP\n-Shred the carrots and courgette into long spaghetti strips with a julienne peeler or spiralizer\n, and pile onto two plates.\n-Stir the beetroot, balsamic vinegar, chopped dill and red onion together in a small bowl\n, then spoon on top of the veg. \nFlake over chunks of the salmon and scatter with the capers and extra dill, if you like.\n2 serves\n");
    }
    else{
    	printf("Please choose between 1-5.\n");
    	getch();
    	goto meal4;
	}
	  }
	  else{
	  	printf("please choose your calorie in the range of 0-400\n");
	  	goto recipe;
	  	}
	  printf("\n\nPress any key to continue to the menu.\n");
      getch();
	  goto start;
	}
	 if(op==3){
	 ex:
	 printf("1.Exercises to gain weight.\n2.Exercises to lose weight.\n3.Daily exercises to stay healthy.\nChoose your exercise type(1-3)\n");
	 scanf("%d",&et);
	 if(et==1){
	 	printf("To gain weight you have to do strength exercises.\nTo gain weight, minimize aerobic and cardio exercises. These are meant to burn fat and tone muscle, not bulk you up.\nYou don�t have to avoid them entirely, though. You can do these exercises in moderation to tone your muscles.\nRepeat the exercises as many times as you feel comfortable.\nHere are some stregth exercises press any key to continiue\n");
        getch();
	 	printf("1.Pushups\n2.Pullups\n3.Squats\n4.Lunges\n5.Bench press\n6.Overhead press\n");
	 }
	 else if(et==2){
	 	printf("Many exercises can help you lose weight.\nIt�s most important to choose an exercise that you enjoy doing.\n This makes it more likely that you�ll stick to it long term and see results.\nHere are some exercises to lose weight press any key to continiue.\n");
	 	getch();
	 	printf("1.Walking.\n2.Jogging or running.\n3.Cycling.\n4.Weight training.\n5.Interval training.\n6.Swimming.\n7.Yoga.\n8.Pilates.\n");
	 }
	 else if(et==3){
	 	printf("These fundamental exercises will do your body good, but there�s always room to keep pushing it.\nHere are some daily exercises please press any key to continieu\n");
	 	getch();
	 	printf("1.Lunges.\n2.Pushups.\n3.Squats.\n4.Standing overhead dumbbell presses.\n5.Dumbbell rows.\n6. Single-leg deadlifts.\n7.Burpees.\n8.Side planks.\n9.Situps.\n10.Glute bridge.\n");
	 }
	 else{
	 	printf("choose between 1-3\n");
	 	getch();
	 	goto ex;
	 	}
	 
	 printf("\n\nPress any key to continue to the menu.\n");
      getch();
	  goto start;	 
}   
	 if(op==4){
	  char *text[] = {
	"Laughing is good for the heart and can increase blood flow by 20 percent.\n",
	"Always look on the bright side : being optimist can help you live longer\n",
	"Exercise will give you more energy, even if you are tired.\n",
	"Between 2000 and 2015 average global life expectancy increased by 5 years.\n",
    "Learning a new language or playing a musical instrument gives your brain a boost.\n",
	"Reading can lower levels of unhealthy stress hormones.\n",
	"Drinking coffee can reduce the risk of depression.\n",
	"Smelling rosemary can increase alertness and improve memory.\n",
	"writing things out by hand will help you remember them.\n",
	"Eating oatmeal provides a serotonin boost to calm the brain and improve your mood.\n",
	"An apple a day does keep the doctor away. Apples can reduce levels of bad cholesterol to keep your heart healthy.\n",
	"The amino acid found in eggs can help improve your reflexes.\n",
	"To lose one pound of fat, you need to burn roughly 3,500 calories.\n",
	"Walking at a fast pace for three hours or more at least one time a week, you can reduce your risk of heart disease by up to 65%.\n",
	"Regular activity can ease the severity and reduce the frequency of lower back pain.\n",
	"The average moderately active person walks approximately 7,500 steps a day, which is the lifetime equivalent of walking around the Earth five times.\n",
	"Drinking at least five glasses of water a day can reduce your chances of suffering from a heart attack by 40%.\n",
	"Dehydration can have a negative impact on your mood and energy levels. Drink enough water to ensure youre always at your best.\n",
	"A lack of water can cause a range of problems, such as constipation, asthma, allergy and migraines.\n",
	"To lose more weight, dont treat exercise like a chore and focus on the fun in your activity.\n",
	"The blue light in phones can mess with your circadian rhythm.\n",
    "Cardio exercise before breakfast can burn more fat.\n",
    "Coffee can ward off depression.",
    "The scent of apples can prevent claustrophobia.",
    "We eat 600 more calories a day than people did in the 1970s.",
    "Optimism can make you live longer.",
    "Exercise can improve your chronic pain.",
    "Job strain can contribute to type 2 diabetes.",
    "Meditating is better for your mental health than a vacation.",
    "Staying fit over time can make you 60 percent less likely to die early.",
    "Your poor sleep habits can make you gain weight.",
    "Exercise is better for mild depression than medication.",
    "Deep breathing may help you lose weight.",
    "Sweating does not help you lose fat.",
    "Staying hydrated boosts your metabolism.",
    "Restricting calories increases stress."
	};
        srand(time(NULL));
     	int randsay = (rand() %21) + 1;
	    printf("%s",text[randsay]); 
	    printf("\n\nPress any key to continue to the menu.\n");
        getch();
	    goto start;
	  }
	  else if(op==5){
	  	
	  }
	  else{
	  	printf("please choose your operation between (1-5)\n");
	  	printf("\n\nPress any key to continue to the menu.\n");
        getch();
	  	goto idk;
	  }
	  getch();
	}
	
	
	
