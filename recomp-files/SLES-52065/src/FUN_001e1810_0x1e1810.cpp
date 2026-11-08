#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001e1810
// Address: 0x1e1810 - 0x1e1a8c
void FUN_001e1810_0x1e1810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1810_0x1e1810");
#endif

    switch (ctx->pc) {
        case 0x1e1810u: goto label_1e1810;
        case 0x1e1814u: goto label_1e1814;
        case 0x1e1818u: goto label_1e1818;
        case 0x1e181cu: goto label_1e181c;
        case 0x1e1820u: goto label_1e1820;
        case 0x1e1824u: goto label_1e1824;
        case 0x1e1828u: goto label_1e1828;
        case 0x1e182cu: goto label_1e182c;
        case 0x1e1830u: goto label_1e1830;
        case 0x1e1834u: goto label_1e1834;
        case 0x1e1838u: goto label_1e1838;
        case 0x1e183cu: goto label_1e183c;
        case 0x1e1840u: goto label_1e1840;
        case 0x1e1844u: goto label_1e1844;
        case 0x1e1848u: goto label_1e1848;
        case 0x1e184cu: goto label_1e184c;
        case 0x1e1850u: goto label_1e1850;
        case 0x1e1854u: goto label_1e1854;
        case 0x1e1858u: goto label_1e1858;
        case 0x1e185cu: goto label_1e185c;
        case 0x1e1860u: goto label_1e1860;
        case 0x1e1864u: goto label_1e1864;
        case 0x1e1868u: goto label_1e1868;
        case 0x1e186cu: goto label_1e186c;
        case 0x1e1870u: goto label_1e1870;
        case 0x1e1874u: goto label_1e1874;
        case 0x1e1878u: goto label_1e1878;
        case 0x1e187cu: goto label_1e187c;
        case 0x1e1880u: goto label_1e1880;
        case 0x1e1884u: goto label_1e1884;
        case 0x1e1888u: goto label_1e1888;
        case 0x1e188cu: goto label_1e188c;
        case 0x1e1890u: goto label_1e1890;
        case 0x1e1894u: goto label_1e1894;
        case 0x1e1898u: goto label_1e1898;
        case 0x1e189cu: goto label_1e189c;
        case 0x1e18a0u: goto label_1e18a0;
        case 0x1e18a4u: goto label_1e18a4;
        case 0x1e18a8u: goto label_1e18a8;
        case 0x1e18acu: goto label_1e18ac;
        case 0x1e18b0u: goto label_1e18b0;
        case 0x1e18b4u: goto label_1e18b4;
        case 0x1e18b8u: goto label_1e18b8;
        case 0x1e18bcu: goto label_1e18bc;
        case 0x1e18c0u: goto label_1e18c0;
        case 0x1e18c4u: goto label_1e18c4;
        case 0x1e18c8u: goto label_1e18c8;
        case 0x1e18ccu: goto label_1e18cc;
        case 0x1e18d0u: goto label_1e18d0;
        case 0x1e18d4u: goto label_1e18d4;
        case 0x1e18d8u: goto label_1e18d8;
        case 0x1e18dcu: goto label_1e18dc;
        case 0x1e18e0u: goto label_1e18e0;
        case 0x1e18e4u: goto label_1e18e4;
        case 0x1e18e8u: goto label_1e18e8;
        case 0x1e18ecu: goto label_1e18ec;
        case 0x1e18f0u: goto label_1e18f0;
        case 0x1e18f4u: goto label_1e18f4;
        case 0x1e18f8u: goto label_1e18f8;
        case 0x1e18fcu: goto label_1e18fc;
        case 0x1e1900u: goto label_1e1900;
        case 0x1e1904u: goto label_1e1904;
        case 0x1e1908u: goto label_1e1908;
        case 0x1e190cu: goto label_1e190c;
        case 0x1e1910u: goto label_1e1910;
        case 0x1e1914u: goto label_1e1914;
        case 0x1e1918u: goto label_1e1918;
        case 0x1e191cu: goto label_1e191c;
        case 0x1e1920u: goto label_1e1920;
        case 0x1e1924u: goto label_1e1924;
        case 0x1e1928u: goto label_1e1928;
        case 0x1e192cu: goto label_1e192c;
        case 0x1e1930u: goto label_1e1930;
        case 0x1e1934u: goto label_1e1934;
        case 0x1e1938u: goto label_1e1938;
        case 0x1e193cu: goto label_1e193c;
        case 0x1e1940u: goto label_1e1940;
        case 0x1e1944u: goto label_1e1944;
        case 0x1e1948u: goto label_1e1948;
        case 0x1e194cu: goto label_1e194c;
        case 0x1e1950u: goto label_1e1950;
        case 0x1e1954u: goto label_1e1954;
        case 0x1e1958u: goto label_1e1958;
        case 0x1e195cu: goto label_1e195c;
        case 0x1e1960u: goto label_1e1960;
        case 0x1e1964u: goto label_1e1964;
        case 0x1e1968u: goto label_1e1968;
        case 0x1e196cu: goto label_1e196c;
        case 0x1e1970u: goto label_1e1970;
        case 0x1e1974u: goto label_1e1974;
        case 0x1e1978u: goto label_1e1978;
        case 0x1e197cu: goto label_1e197c;
        case 0x1e1980u: goto label_1e1980;
        case 0x1e1984u: goto label_1e1984;
        case 0x1e1988u: goto label_1e1988;
        case 0x1e198cu: goto label_1e198c;
        case 0x1e1990u: goto label_1e1990;
        case 0x1e1994u: goto label_1e1994;
        case 0x1e1998u: goto label_1e1998;
        case 0x1e199cu: goto label_1e199c;
        case 0x1e19a0u: goto label_1e19a0;
        case 0x1e19a4u: goto label_1e19a4;
        case 0x1e19a8u: goto label_1e19a8;
        case 0x1e19acu: goto label_1e19ac;
        case 0x1e19b0u: goto label_1e19b0;
        case 0x1e19b4u: goto label_1e19b4;
        case 0x1e19b8u: goto label_1e19b8;
        case 0x1e19bcu: goto label_1e19bc;
        case 0x1e19c0u: goto label_1e19c0;
        case 0x1e19c4u: goto label_1e19c4;
        case 0x1e19c8u: goto label_1e19c8;
        case 0x1e19ccu: goto label_1e19cc;
        case 0x1e19d0u: goto label_1e19d0;
        case 0x1e19d4u: goto label_1e19d4;
        case 0x1e19d8u: goto label_1e19d8;
        case 0x1e19dcu: goto label_1e19dc;
        case 0x1e19e0u: goto label_1e19e0;
        case 0x1e19e4u: goto label_1e19e4;
        case 0x1e19e8u: goto label_1e19e8;
        case 0x1e19ecu: goto label_1e19ec;
        case 0x1e19f0u: goto label_1e19f0;
        case 0x1e19f4u: goto label_1e19f4;
        case 0x1e19f8u: goto label_1e19f8;
        case 0x1e19fcu: goto label_1e19fc;
        case 0x1e1a00u: goto label_1e1a00;
        case 0x1e1a04u: goto label_1e1a04;
        case 0x1e1a08u: goto label_1e1a08;
        case 0x1e1a0cu: goto label_1e1a0c;
        case 0x1e1a10u: goto label_1e1a10;
        case 0x1e1a14u: goto label_1e1a14;
        case 0x1e1a18u: goto label_1e1a18;
        case 0x1e1a1cu: goto label_1e1a1c;
        case 0x1e1a20u: goto label_1e1a20;
        case 0x1e1a24u: goto label_1e1a24;
        case 0x1e1a28u: goto label_1e1a28;
        case 0x1e1a2cu: goto label_1e1a2c;
        case 0x1e1a30u: goto label_1e1a30;
        case 0x1e1a34u: goto label_1e1a34;
        case 0x1e1a38u: goto label_1e1a38;
        case 0x1e1a3cu: goto label_1e1a3c;
        case 0x1e1a40u: goto label_1e1a40;
        case 0x1e1a44u: goto label_1e1a44;
        case 0x1e1a48u: goto label_1e1a48;
        case 0x1e1a4cu: goto label_1e1a4c;
        case 0x1e1a50u: goto label_1e1a50;
        case 0x1e1a54u: goto label_1e1a54;
        case 0x1e1a58u: goto label_1e1a58;
        case 0x1e1a5cu: goto label_1e1a5c;
        case 0x1e1a60u: goto label_1e1a60;
        case 0x1e1a64u: goto label_1e1a64;
        case 0x1e1a68u: goto label_1e1a68;
        case 0x1e1a6cu: goto label_1e1a6c;
        case 0x1e1a70u: goto label_1e1a70;
        case 0x1e1a74u: goto label_1e1a74;
        case 0x1e1a78u: goto label_1e1a78;
        case 0x1e1a7cu: goto label_1e1a7c;
        case 0x1e1a80u: goto label_1e1a80;
        case 0x1e1a84u: goto label_1e1a84;
        case 0x1e1a88u: goto label_1e1a88;
        default: break;
    }

    ctx->pc = 0x1e1810u;

label_1e1810:
    // 0x1e1810: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e1810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e1814:
    // 0x1e1814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e1818:
    // 0x1e1818: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1e1818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_1e181c:
    // 0x1e181c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e1820:
    // 0x1e1820: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e1820u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e1824:
    // 0x1e1824: 0x8382872c  lb          $v0, -0x78D4($gp)
    ctx->pc = 0x1e1824u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936364)));
label_1e1828:
    // 0x1e1828: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1e182c:
    if (ctx->pc == 0x1E182Cu) {
        ctx->pc = 0x1E182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1828u;
        // 0x1e182c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1830u;
        goto label_1e1830;
    }
    ctx->pc = 0x1E1828u;
    {
        const bool branch_taken_0x1e1828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1828u;
        // 0x1e182c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1828) {
            ctx->pc = 0x1E1868u;
            goto label_1e1868;
        }
    }
    ctx->pc = 0x1E1830u;
label_1e1830:
    // 0x1e1830: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1e1830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1e1834:
    // 0x1e1834: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1838:
    // 0x1e1838: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1e1838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
label_1e183c:
    // 0x1e183c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e183cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e1840:
    // 0x1e1840: 0xc079084  jal         func_1E4210
label_1e1844:
    if (ctx->pc == 0x1E1844u) {
        ctx->pc = 0x1E1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1840u;
        // 0x1e1844: 0x2484b7d0  addiu       $a0, $a0, -0x4830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1848u;
        goto label_1e1848;
    }
    ctx->pc = 0x1E1840u;
    SET_GPR_U32(ctx, 31, 0x1E1848u);
    ctx->pc = 0x1E1844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1840u;
    // 0x1e1844: 0x2484b7d0  addiu       $a0, $a0, -0x4830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4210u, 0x1E1840u, 0x1E1848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1848u;
label_1e1848:
    // 0x1e1848: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e1848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
label_1e184c:
    // 0x1e184c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e184cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_1e1850:
    // 0x1e1850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1854:
    // 0x1e1854: 0x24a51a90  addiu       $a1, $a1, 0x1A90
    ctx->pc = 0x1e1854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
label_1e1858:
    // 0x1e1858: 0xc07a540  jal         func_1E9500
label_1e185c:
    if (ctx->pc == 0x1E185Cu) {
        ctx->pc = 0x1E185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1858u;
        // 0x1e185c: 0x24c6b7b8  addiu       $a2, $a2, -0x4848 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1860u;
        goto label_1e1860;
    }
    ctx->pc = 0x1E1858u;
    SET_GPR_U32(ctx, 31, 0x1E1860u);
    ctx->pc = 0x1E185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1858u;
    // 0x1e185c: 0x24c6b7b8  addiu       $a2, $a2, -0x4848 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1E1858u, 0x1E1860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1860u;
label_1e1860:
    // 0x1e1860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1864:
    // 0x1e1864: 0xa382872c  sb          $v0, -0x78D4($gp)
    ctx->pc = 0x1e1864u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936364), (uint8_t)GPR_U32(ctx, 2));
label_1e1868:
    // 0x1e1868: 0x83828730  lb          $v0, -0x78D0($gp)
    ctx->pc = 0x1e1868u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_1e186c:
    // 0x1e186c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1e1870:
    if (ctx->pc == 0x1E1870u) {
        ctx->pc = 0x1E1870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E186Cu;
        // 0x1e1870: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1874u;
        goto label_1e1874;
    }
    ctx->pc = 0x1E186Cu;
    {
        const bool branch_taken_0x1e186c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E186Cu;
        // 0x1e1870: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e186c) {
            ctx->pc = 0x1E18A8u;
            goto label_1e18a8;
        }
    }
    ctx->pc = 0x1E1874u;
label_1e1874:
    // 0x1e1874: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1878:
    // 0x1e1878: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1e1878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
label_1e187c:
    // 0x1e187c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1e187cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1e1880:
    // 0x1e1880: 0xc079084  jal         func_1E4210
label_1e1884:
    if (ctx->pc == 0x1E1884u) {
        ctx->pc = 0x1E1884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1880u;
        // 0x1e1884: 0x2484b830  addiu       $a0, $a0, -0x47D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1888u;
        goto label_1e1888;
    }
    ctx->pc = 0x1E1880u;
    SET_GPR_U32(ctx, 31, 0x1E1888u);
    ctx->pc = 0x1E1884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1880u;
    // 0x1e1884: 0x2484b830  addiu       $a0, $a0, -0x47D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4210u, 0x1E1880u, 0x1E1888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1888u;
label_1e1888:
    // 0x1e1888: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e1888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
label_1e188c:
    // 0x1e188c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e188cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_1e1890:
    // 0x1e1890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1894:
    // 0x1e1894: 0x24a51a90  addiu       $a1, $a1, 0x1A90
    ctx->pc = 0x1e1894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
label_1e1898:
    // 0x1e1898: 0xc07a540  jal         func_1E9500
label_1e189c:
    if (ctx->pc == 0x1E189Cu) {
        ctx->pc = 0x1E189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1898u;
        // 0x1e189c: 0x24c6b818  addiu       $a2, $a2, -0x47E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E18A0u;
        goto label_1e18a0;
    }
    ctx->pc = 0x1E1898u;
    SET_GPR_U32(ctx, 31, 0x1E18A0u);
    ctx->pc = 0x1E189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1898u;
    // 0x1e189c: 0x24c6b818  addiu       $a2, $a2, -0x47E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1E1898u, 0x1E18A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18A0u;
label_1e18a0:
    // 0x1e18a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e18a4:
    // 0x1e18a4: 0xa3828730  sb          $v0, -0x78D0($gp)
    ctx->pc = 0x1e18a4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936368), (uint8_t)GPR_U32(ctx, 2));
label_1e18a8:
    // 0x1e18a8: 0x83828734  lb          $v0, -0x78CC($gp)
    ctx->pc = 0x1e18a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936372)));
label_1e18ac:
    // 0x1e18ac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1e18b0:
    if (ctx->pc == 0x1E18B0u) {
        ctx->pc = 0x1E18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18ACu;
        // 0x1e18b0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E18B4u;
        goto label_1e18b4;
    }
    ctx->pc = 0x1E18ACu;
    {
        const bool branch_taken_0x1e18ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18ACu;
        // 0x1e18b0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18ac) {
            ctx->pc = 0x1E18E8u;
            goto label_1e18e8;
        }
    }
    ctx->pc = 0x1E18B4u;
label_1e18b4:
    // 0x1e18b4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e18b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e18b8:
    // 0x1e18b8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1e18b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
label_1e18bc:
    // 0x1e18bc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1e18bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e18c0:
    // 0x1e18c0: 0xc079084  jal         func_1E4210
label_1e18c4:
    if (ctx->pc == 0x1E18C4u) {
        ctx->pc = 0x1E18C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18C0u;
        // 0x1e18c4: 0x2484b890  addiu       $a0, $a0, -0x4770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E18C8u;
        goto label_1e18c8;
    }
    ctx->pc = 0x1E18C0u;
    SET_GPR_U32(ctx, 31, 0x1E18C8u);
    ctx->pc = 0x1E18C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E18C0u;
    // 0x1e18c4: 0x2484b890  addiu       $a0, $a0, -0x4770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4210u, 0x1E18C0u, 0x1E18C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18C8u;
label_1e18c8:
    // 0x1e18c8: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e18c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
label_1e18cc:
    // 0x1e18cc: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e18ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_1e18d0:
    // 0x1e18d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e18d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e18d4:
    // 0x1e18d4: 0x24a51a90  addiu       $a1, $a1, 0x1A90
    ctx->pc = 0x1e18d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
label_1e18d8:
    // 0x1e18d8: 0xc07a540  jal         func_1E9500
label_1e18dc:
    if (ctx->pc == 0x1E18DCu) {
        ctx->pc = 0x1E18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18D8u;
        // 0x1e18dc: 0x24c6b878  addiu       $a2, $a2, -0x4788 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E18E0u;
        goto label_1e18e0;
    }
    ctx->pc = 0x1E18D8u;
    SET_GPR_U32(ctx, 31, 0x1E18E0u);
    ctx->pc = 0x1E18DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E18D8u;
    // 0x1e18dc: 0x24c6b878  addiu       $a2, $a2, -0x4788 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1E18D8u, 0x1E18E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18E0u;
label_1e18e0:
    // 0x1e18e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e18e4:
    // 0x1e18e4: 0xa3828734  sb          $v0, -0x78CC($gp)
    ctx->pc = 0x1e18e4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936372), (uint8_t)GPR_U32(ctx, 2));
label_1e18e8:
    // 0x1e18e8: 0x8f838724  lw          $v1, -0x78DC($gp)
    ctx->pc = 0x1e18e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936356)));
label_1e18ec:
    // 0x1e18ec: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e18ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e18f0:
    // 0x1e18f0: 0x1460005f  bnez        $v1, . + 4 + (0x5F << 2)
label_1e18f4:
    if (ctx->pc == 0x1E18F4u) {
        ctx->pc = 0x1E18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18F0u;
        // 0x1e18f4: 0xaf828724  sw          $v0, -0x78DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E18F8u;
        goto label_1e18f8;
    }
    ctx->pc = 0x1E18F0u;
    {
        const bool branch_taken_0x1e18f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18F0u;
        // 0x1e18f4: 0xaf828724  sw          $v0, -0x78DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18f0) {
            ctx->pc = 0x1E1A70u;
            goto label_1e1a70;
        }
    }
    ctx->pc = 0x1E18F8u;
label_1e18f8:
    // 0x1e18f8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e18f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e18fc:
    // 0x1e18fc: 0x2484b4a0  addiu       $a0, $a0, -0x4B60
    ctx->pc = 0x1e18fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948000));
label_1e1900:
    // 0x1e1900: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1e1904:
    if (ctx->pc == 0x1E1904u) {
        ctx->pc = 0x1E1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1900u;
        // 0x1e1904: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1908u;
        goto label_1e1908;
    }
    ctx->pc = 0x1E1900u;
    {
        const bool branch_taken_0x1e1900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1900u;
        // 0x1e1904: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1900) {
            ctx->pc = 0x1E1930u;
            goto label_1e1930;
        }
    }
    ctx->pc = 0x1E1908u;
label_1e1908:
    // 0x1e1908: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e1908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e190c:
    // 0x1e190c: 0x24c6b7d0  addiu       $a2, $a2, -0x4830
    ctx->pc = 0x1e190cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948816));
label_1e1910:
    // 0x1e1910: 0xc078b08  jal         func_1E2C20
label_1e1914:
    if (ctx->pc == 0x1E1914u) {
        ctx->pc = 0x1E1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1910u;
        // 0x1e1914: 0xafdd0044  sw          $sp, 0x44($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1918u;
        goto label_1e1918;
    }
    ctx->pc = 0x1E1910u;
    SET_GPR_U32(ctx, 31, 0x1E1918u);
    ctx->pc = 0x1E1914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1910u;
    // 0x1e1914: 0xafdd0044  sw          $sp, 0x44($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2C20u, 0x1E1910u, 0x1E1918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1918u;
label_1e1918:
    // 0x1e1918: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e191c:
    if (ctx->pc == 0x1E191Cu) {
        ctx->pc = 0x1E1920u;
        goto label_1e1920;
    }
    ctx->pc = 0x1E1918u;
    {
        const bool branch_taken_0x1e1918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1918) {
            ctx->pc = 0x1E1930u;
            goto label_1e1930;
        }
    }
    ctx->pc = 0x1E1920u;
label_1e1920:
    // 0x1e1920: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1924:
    // 0x1e1924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1928:
    // 0x1e1928: 0xc07ab64  jal         func_1EAD90
label_1e192c:
    if (ctx->pc == 0x1E192Cu) {
        ctx->pc = 0x1E192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1928u;
        // 0x1e192c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1930u;
        goto label_1e1930;
    }
    ctx->pc = 0x1E1928u;
    SET_GPR_U32(ctx, 31, 0x1E1930u);
    ctx->pc = 0x1E192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1928u;
    // 0x1e192c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E1928u, 0x1E1930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1930u;
label_1e1930:
    // 0x1e1930: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1934:
    // 0x1e1934: 0x2484b510  addiu       $a0, $a0, -0x4AF0
    ctx->pc = 0x1e1934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948112));
label_1e1938:
    // 0x1e1938: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1e193c:
    if (ctx->pc == 0x1E193Cu) {
        ctx->pc = 0x1E193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1938u;
        // 0x1e193c: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1940u;
        goto label_1e1940;
    }
    ctx->pc = 0x1E1938u;
    {
        const bool branch_taken_0x1e1938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1938u;
        // 0x1e193c: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1938) {
            ctx->pc = 0x1E1968u;
            goto label_1e1968;
        }
    }
    ctx->pc = 0x1E1940u;
label_1e1940:
    // 0x1e1940: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e1940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1944:
    // 0x1e1944: 0x24c6b830  addiu       $a2, $a2, -0x47D0
    ctx->pc = 0x1e1944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948912));
label_1e1948:
    // 0x1e1948: 0xc078bac  jal         func_1E2EB0
label_1e194c:
    if (ctx->pc == 0x1E194Cu) {
        ctx->pc = 0x1E194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1948u;
        // 0x1e194c: 0xafdd0064  sw          $sp, 0x64($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 100), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1950u;
        goto label_1e1950;
    }
    ctx->pc = 0x1E1948u;
    SET_GPR_U32(ctx, 31, 0x1E1950u);
    ctx->pc = 0x1E194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1948u;
    // 0x1e194c: 0xafdd0064  sw          $sp, 0x64($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 100), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EB0u, 0x1E1948u, 0x1E1950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1950u;
label_1e1950:
    // 0x1e1950: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e1954:
    if (ctx->pc == 0x1E1954u) {
        ctx->pc = 0x1E1958u;
        goto label_1e1958;
    }
    ctx->pc = 0x1E1950u;
    {
        const bool branch_taken_0x1e1950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1950) {
            ctx->pc = 0x1E1968u;
            goto label_1e1968;
        }
    }
    ctx->pc = 0x1E1958u;
label_1e1958:
    // 0x1e1958: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e195c:
    // 0x1e195c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e195cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1960:
    // 0x1e1960: 0xc07ab64  jal         func_1EAD90
label_1e1964:
    if (ctx->pc == 0x1E1964u) {
        ctx->pc = 0x1E1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1960u;
        // 0x1e1964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1968u;
        goto label_1e1968;
    }
    ctx->pc = 0x1E1960u;
    SET_GPR_U32(ctx, 31, 0x1E1968u);
    ctx->pc = 0x1E1964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1960u;
    // 0x1e1964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E1960u, 0x1E1968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1968u;
label_1e1968:
    // 0x1e1968: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e196c:
    // 0x1e196c: 0x2484b5d0  addiu       $a0, $a0, -0x4A30
    ctx->pc = 0x1e196cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948304));
label_1e1970:
    // 0x1e1970: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1e1974:
    if (ctx->pc == 0x1E1974u) {
        ctx->pc = 0x1E1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1970u;
        // 0x1e1974: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1978u;
        goto label_1e1978;
    }
    ctx->pc = 0x1E1970u;
    {
        const bool branch_taken_0x1e1970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1970u;
        // 0x1e1974: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1970) {
            ctx->pc = 0x1E19A0u;
            goto label_1e19a0;
        }
    }
    ctx->pc = 0x1E1978u;
label_1e1978:
    // 0x1e1978: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e1978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e197c:
    // 0x1e197c: 0x24c6b890  addiu       $a2, $a2, -0x4770
    ctx->pc = 0x1e197cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949008));
label_1e1980:
    // 0x1e1980: 0xc078bac  jal         func_1E2EB0
label_1e1984:
    if (ctx->pc == 0x1E1984u) {
        ctx->pc = 0x1E1984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1980u;
        // 0x1e1984: 0xafdd0084  sw          $sp, 0x84($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1988u;
        goto label_1e1988;
    }
    ctx->pc = 0x1E1980u;
    SET_GPR_U32(ctx, 31, 0x1E1988u);
    ctx->pc = 0x1E1984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1980u;
    // 0x1e1984: 0xafdd0084  sw          $sp, 0x84($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EB0u, 0x1E1980u, 0x1E1988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1988u;
label_1e1988:
    // 0x1e1988: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e198c:
    if (ctx->pc == 0x1E198Cu) {
        ctx->pc = 0x1E1990u;
        goto label_1e1990;
    }
    ctx->pc = 0x1E1988u;
    {
        const bool branch_taken_0x1e1988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1988) {
            ctx->pc = 0x1E19A0u;
            goto label_1e19a0;
        }
    }
    ctx->pc = 0x1E1990u;
label_1e1990:
    // 0x1e1990: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1994:
    // 0x1e1994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1998:
    // 0x1e1998: 0xc07ab64  jal         func_1EAD90
label_1e199c:
    if (ctx->pc == 0x1E199Cu) {
        ctx->pc = 0x1E199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1998u;
        // 0x1e199c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E19A0u;
        goto label_1e19a0;
    }
    ctx->pc = 0x1E1998u;
    SET_GPR_U32(ctx, 31, 0x1E19A0u);
    ctx->pc = 0x1E199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1998u;
    // 0x1e199c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E1998u, 0x1E19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19A0u;
label_1e19a0:
    // 0x1e19a0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e19a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e19a4:
    // 0x1e19a4: 0x2484b570  addiu       $a0, $a0, -0x4A90
    ctx->pc = 0x1e19a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948208));
label_1e19a8:
    // 0x1e19a8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1e19ac:
    if (ctx->pc == 0x1E19ACu) {
        ctx->pc = 0x1E19B0u;
        goto label_1e19b0;
    }
    ctx->pc = 0x1E19A8u;
    {
        const bool branch_taken_0x1e19a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19a8) {
            ctx->pc = 0x1E19DCu;
            goto label_1e19dc;
        }
    }
    ctx->pc = 0x1E19B0u;
label_1e19b0:
    // 0x1e19b0: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e19b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
label_1e19b4:
    // 0x1e19b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e19b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e19b8:
    // 0x1e19b8: 0x24c6b890  addiu       $a2, $a2, -0x4770
    ctx->pc = 0x1e19b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949008));
label_1e19bc:
    // 0x1e19bc: 0xc078bac  jal         func_1E2EB0
label_1e19c0:
    if (ctx->pc == 0x1E19C0u) {
        ctx->pc = 0x1E19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19BCu;
        // 0x1e19c0: 0xafdd00a4  sw          $sp, 0xA4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E19C4u;
        goto label_1e19c4;
    }
    ctx->pc = 0x1E19BCu;
    SET_GPR_U32(ctx, 31, 0x1E19C4u);
    ctx->pc = 0x1E19C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E19BCu;
    // 0x1e19c0: 0xafdd00a4  sw          $sp, 0xA4($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EB0u, 0x1E19BCu, 0x1E19C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19C4u;
label_1e19c4:
    // 0x1e19c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e19c8:
    if (ctx->pc == 0x1E19C8u) {
        ctx->pc = 0x1E19CCu;
        goto label_1e19cc;
    }
    ctx->pc = 0x1E19C4u;
    {
        const bool branch_taken_0x1e19c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19c4) {
            ctx->pc = 0x1E19DCu;
            goto label_1e19dc;
        }
    }
    ctx->pc = 0x1E19CCu;
label_1e19cc:
    // 0x1e19cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e19ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e19d0:
    // 0x1e19d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e19d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e19d4:
    // 0x1e19d4: 0xc07ab64  jal         func_1EAD90
label_1e19d8:
    if (ctx->pc == 0x1E19D8u) {
        ctx->pc = 0x1E19D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E19D4u;
        // 0x1e19d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E19DCu;
        goto label_1e19dc;
    }
    ctx->pc = 0x1E19D4u;
    SET_GPR_U32(ctx, 31, 0x1E19DCu);
    ctx->pc = 0x1E19D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E19D4u;
    // 0x1e19d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E19D4u, 0x1E19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19DCu;
label_1e19dc:
    // 0x1e19dc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e19dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e19e0:
    // 0x1e19e0: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1e19e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
label_1e19e4:
    // 0x1e19e4: 0x8c22b4a0  lw          $v0, -0x4B60($at)
    ctx->pc = 0x1e19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948000)));
label_1e19e8:
    // 0x1e19e8: 0x24e7b510  addiu       $a3, $a3, -0x4AF0
    ctx->pc = 0x1e19e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948112));
label_1e19ec:
    // 0x1e19ec: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e19ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e19f0:
    // 0x1e19f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e19f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e19f4:
    // 0x1e19f4: 0x2484b7d0  addiu       $a0, $a0, -0x4830
    ctx->pc = 0x1e19f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948816));
label_1e19f8:
    // 0x1e19f8: 0xac470040  sw          $a3, 0x40($v0)
    ctx->pc = 0x1e19f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 7));
label_1e19fc:
    // 0x1e19fc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e19fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e1a00:
    // 0x1e1a00: 0x8c22b5d0  lw          $v0, -0x4A30($at)
    ctx->pc = 0x1e1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948304)));
label_1e1a04:
    // 0x1e1a04: 0xac470040  sw          $a3, 0x40($v0)
    ctx->pc = 0x1e1a04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 7));
label_1e1a08:
    // 0x1e1a08: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e1a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e1a0c:
    // 0x1e1a0c: 0x8c23b5d0  lw          $v1, -0x4A30($at)
    ctx->pc = 0x1e1a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948304)));
label_1e1a10:
    // 0x1e1a10: 0x94620038  lhu         $v0, 0x38($v1)
    ctx->pc = 0x1e1a10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1e1a14:
    // 0x1e1a14: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e1a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1e1a18:
    // 0x1e1a18: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1e1a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1e1a1c:
    // 0x1e1a1c: 0xa4620038  sh          $v0, 0x38($v1)
    ctx->pc = 0x1e1a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 2));
label_1e1a20:
    // 0x1e1a20: 0x8c22b570  lw          $v0, -0x4A90($at)
    ctx->pc = 0x1e1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948208)));
label_1e1a24:
    // 0x1e1a24: 0xac470040  sw          $a3, 0x40($v0)
    ctx->pc = 0x1e1a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 7));
label_1e1a28:
    // 0x1e1a28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1a2c:
    // 0x1e1a2c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e1a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e1a30:
    // 0x1e1a30: 0x320f809  jalr        $t9
label_1e1a34:
    if (ctx->pc == 0x1E1A34u) {
        ctx->pc = 0x1E1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A30u;
        // 0x1e1a34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A38u;
        goto label_1e1a38;
    }
    ctx->pc = 0x1E1A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1A38u);
        ctx->pc = 0x1E1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A30u;
        // 0x1e1a34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A30u, 0x1E1A38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1A38u;
label_1e1a38:
    // 0x1e1a38: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1a3c:
    // 0x1e1a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a40:
    // 0x1e1a40: 0x2484b830  addiu       $a0, $a0, -0x47D0
    ctx->pc = 0x1e1a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948912));
label_1e1a44:
    // 0x1e1a44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1a44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1a48:
    // 0x1e1a48: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e1a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e1a4c:
    // 0x1e1a4c: 0x320f809  jalr        $t9
label_1e1a50:
    if (ctx->pc == 0x1E1A50u) {
        ctx->pc = 0x1E1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A4Cu;
        // 0x1e1a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A54u;
        goto label_1e1a54;
    }
    ctx->pc = 0x1E1A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1A54u);
        ctx->pc = 0x1E1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A4Cu;
        // 0x1e1a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A4Cu, 0x1E1A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1A54u;
label_1e1a54:
    // 0x1e1a54: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1e1a58:
    // 0x1e1a58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a5c:
    // 0x1e1a5c: 0x2484b890  addiu       $a0, $a0, -0x4770
    ctx->pc = 0x1e1a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
label_1e1a60:
    // 0x1e1a60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e1a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1a64:
    // 0x1e1a64: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e1a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e1a68:
    // 0x1e1a68: 0x320f809  jalr        $t9
label_1e1a6c:
    if (ctx->pc == 0x1E1A6Cu) {
        ctx->pc = 0x1E1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A68u;
        // 0x1e1a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A70u;
        goto label_1e1a70;
    }
    ctx->pc = 0x1E1A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E1A70u);
        ctx->pc = 0x1E1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A68u;
        // 0x1e1a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A68u, 0x1E1A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1A70u;
label_1e1a70:
    // 0x1e1a70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1a74:
    // 0x1e1a74: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e1a74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e1a78:
    // 0x1e1a78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1a7c:
    // 0x1e1a7c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1e1a7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1a80:
    // 0x1e1a80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1a84:
    // 0x1e1a84: 0x3e00008  jr          $ra
label_1e1a88:
    if (ctx->pc == 0x1E1A88u) {
        ctx->pc = 0x1E1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A84u;
        // 0x1e1a88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1A8Cu;
        goto label_fallthrough_0x1e1a84;
    }
    ctx->pc = 0x1E1A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1A84u;
        // 0x1e1a88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1a84:
    ctx->pc = 0x1E1A8Cu;
}
