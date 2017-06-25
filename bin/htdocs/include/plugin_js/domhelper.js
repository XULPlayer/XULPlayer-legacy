
function DomHelper()
{
	
}

DomHelper.getNextNode = function(node)
{
	do {
		node = node.nextSibling;
	} while (node && node.nodeType!=1);
	return node;
};

DomHelper.getChildNode = function(node)
{
	node = node.firstChild;
	while (node && node.nodeType != 1) {
		node = node.nextSibling;
	}
	return node;
};

DomHelper.getChildrenCount = function(node)
{
	var count = 0;
	var c = DomHelper.getChildNode(node);
	while(c && c.nodeType == 1) {
		count++;
		c=DomHelper.getNextNode(c);
	}
	return count;
};

DomHelper.getLastChildNode = function(node)
{
	node=node.lastChild;
	while (node && node.nodeType!=1) {
		node=node.previousSibling;
	}
	return node;
};

DomHelper.findChildNode = function(node, name)
{
	node = node.firstChild;
	while (node && node.nodeName != name) {
		node = node.nextSibling;
	}
	return node;
};

DomHelper.findNode = function(node, name)
{
	for (; node && node.nodeName != name; node = DomHelper.getNextNode(node));
	return node;
};

DomHelper.getNodeValue = function(node)
{
	return node.firstChild ? node.firstChild.nodeValue : null
};

DomHelper.getParentNode = function(node)
{
	return node.parentNode;
};

DomHelper.getNodeByName = function(node, name)
{
	for (; node && node.nodeName != name; node = DomHelper.getNextNode(node));
	return node;
};

DomHelper.getChildNodeValue = function(node, name)
{
	for (node = DomHelper.getChildNode(node); node && node.nodeName != name; node = DomHelper.getNextNode(node));
	return node ? DomHelper.getNodeValue(node) : null;
};

DomHelper.getNodeByAttribute = function(node, name, attrname, attrvalue)
{
	for (; node; node = DomHelper.getNextNode(node)) {
		if  (node.nodeName == name && node.getAttribute(attrname) == attrvalue)	 return node;
	}
	return null;
};

DomHelper.addAttribute = function(doc, node, attrname, attrvalue)
{
	var attr = doc.createAttribute(attrname);
	attr.value= attrvalue;
	node.setAttributeNode(attr);
	return attr;
};

DomHelper.addElementNode = function(doc, node, name)
{
	var elementNode = doc.createElement(name);
	node.appendChild(elementNode);
	return 	elementNode;
};

DomHelper.addTextNode = function(doc, node, text)
{
	var textNode = doc.createTextNode(text);
	node.appendChild(textNode);
	return 	textNode;
};

DomHelper.removeFirstChild = function(node)
{
	var c = DomHelper.getChildNode(node);
	return c?node.removeChild(c):null;
};

DomHelper.removeLastChild = function(node)
{
	var c = DomHelper.getLastChildNode(node);
	return c?node.removeChild(c):null;
};

DomHelper.removeChildren = function(node)
{
	var c = DomHelper.getChildNode(node);
	while(c) {
		var n=DomHelper.getNextNode(c);
		node.removeChild(c);
		c=n;
	}
};

DomHelper.removeChildByIndex = function(node, childIndex)
{
	if(!node) return;
	var childNode = DomHelper.getChildNode(node);
	for(var i=0; i<childIndex; i++) {		
		childNode=DomHelper.getNextNode(childNode);
	}	
	if(childNode) {
		node.removeChild(childNode);
	}
}

// XMLDocument helper

// Load xml file from within the domain
DomHelper.LoadXMLFile = function(xmlfile)
{
	var xmlDoc = new XMLDom();
	try {
		xmlDoc.async = false;
		xmlDoc.load(xmlfile);
	} catch (e) {
		alert(e);
		return null;
	}
	return xmlDoc;
};

/* Function:  Load xml file on local machine.
   Principle: For the sake of security, browser deny to access files from other
              domain, so we should open the xml files by plugin and get xml
              content from it, and then parse or handle xml content in JS.
*/
DomHelper.LoadLocalXMLFile = function(xmlFile)
{
	var strXML = converter.openXmlFile(xmlFile);
	if(!strXML) return null;
	var xmlDoc = new XMLDom();
    xmlDoc.loadXML(strXML);
	return xmlDoc;
};

DomHelper.GetNodeText = function(xmlNode)
{
	if(window.ActiveXObject) {
		return xmlNode.text;
	}
	return xmlNode.textContent;
}
	
DomHelper.GetXmlContent = function(xmlDoc)
{
	if(window.ActiveXObject) {
		return xmlDoc.xml;
	}
	return (new XMLSerializer()).serializeToString(xmlDoc);
}
DomHelper.insertNode = function(doc, root, key, value)
{
	 //var node = doc.createNode(1,"node","");
	 var node = doc.createElement("node");
	 node = root.appendChild(node);
	 node.setAttribute("key", key);
	 node.setAttribute("value", value);
};

DomHelper.changeNode = function(doc, root, key, value)
{
	var node = DomHelper.getChildNode(root);
	node = DomHelper.getNodeByAttribute(node, "node", "key", key);
	if(node == null)
		DomHelper.insertNode(doc, root, key, value);
	else
		node.setAttribute("value", value);
};

DomHelper.getNodeValueByKey = function(node, key)
{
	var knode = DomHelper.getNodeByAttribute(node, "node", "key", key);
	if(knode == null)return null;
	return knode.getAttribute("value");
};
