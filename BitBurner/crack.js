/** @param {NS} ns */
export async function main(ns) {

  const hostname = ns.getHostname();


  while (true) {
    if (ns.getServerSecurityLevel(hostname) >= (ns.getServerMinSecurityLevel(hostname) + 0.050)) {
      await ns.weaken(hostname);
    }
    else if (ns.getServerMoneyAvailable(hostname) < ns.getServerMaxMoney(hostname)) {
      await ns.grow(hostname);
    }
    else {
      await ns.hack(hostname);
    }
  }

}