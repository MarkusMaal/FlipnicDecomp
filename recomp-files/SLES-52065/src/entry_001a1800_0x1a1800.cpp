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

// Function: entry_001a1800
// Address: 0x1a1800 - 0x1a1900
void entry_001a1800_0x1a1800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1800_0x1a1800");
#endif

    switch (ctx->pc) {
        case 0x1a180cu: goto label_1a180c;
        case 0x1a1840u: goto label_1a1840;
        case 0x1a1854u: goto label_1a1854;
        case 0x1a1868u: goto label_1a1868;
        case 0x1a189cu: goto label_1a189c;
        case 0x1a18acu: goto label_1a18ac;
        case 0x1a18b8u: goto label_1a18b8;
        case 0x1a18ccu: goto label_1a18cc;
        case 0x1a18d4u: goto label_1a18d4;
        case 0x1a18e8u: goto label_1a18e8;
        default: break;
    }

    ctx->pc = 0x1a1800u;

    // 0x1a1800: 0x8e850698  lw          $a1, 0x698($s4)
    ctx->pc = 0x1a1800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1688)));
    // 0x1a1804: 0xc068358  jal         func_1A0D60
    ctx->pc = 0x1A1804u;
    SET_GPR_U32(ctx, 31, 0x1A180Cu);
    ctx->pc = 0x1A1808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1804u;
    // 0x1a1808: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D60u, 0x1A1804u, 0x1A180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A180Cu;
label_1a180c:
    // 0x1a180c: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x1a180cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
    // 0x1a1810: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1814: 0xae830688  sw          $v1, 0x688($s4)
    ctx->pc = 0x1a1814u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 3));
    // 0x1a1818: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x1a1818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
    // 0x1a181c: 0x1c6000f9  bgtz        $v1, . + 4 + (0xF9 << 2)
    ctx->pc = 0x1A181Cu;
    {
        const bool branch_taken_0x1a181c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a181c) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A1824u;
    // 0x1a1824: 0x8e830698  lw          $v1, 0x698($s4)
    ctx->pc = 0x1a1824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1688)));
    // 0x1a1828: 0x8e820694  lw          $v0, 0x694($s4)
    ctx->pc = 0x1a1828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
    // 0x1a182c: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1A182Cu;
    {
        const bool branch_taken_0x1a182c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a182c) {
            ctx->pc = 0x1A1960u;
            return;
        }
    }
    ctx->pc = 0x1A1834u;
    // 0x1a1834: 0x8e8506ac  lw          $a1, 0x6AC($s4)
    ctx->pc = 0x1a1834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1708)));
    // 0x1a1838: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A1838u;
    SET_GPR_U32(ctx, 31, 0x1A1840u);
    ctx->pc = 0x1A183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1838u;
    // 0x1a183c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A1838u, 0x1A1840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1840u;
label_1a1840:
    // 0x1a1840: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a1840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a1844: 0x268408c0  addiu       $a0, $s4, 0x8C0
    ctx->pc = 0x1a1844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2240));
    // 0x1a1848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a184c: 0xc069994  jal         func_1A6650
    ctx->pc = 0x1A184Cu;
    SET_GPR_U32(ctx, 31, 0x1A1854u);
    ctx->pc = 0x1A1850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A184Cu;
    // 0x1a1850: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6650u, 0x1A184Cu, 0x1A1854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1854u;
label_1a1854:
    // 0x1a1854: 0x8e8209d4  lw          $v0, 0x9D4($s4)
    ctx->pc = 0x1a1854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2516)));
    // 0x1a1858: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a1858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a185c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1a185cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a1860: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1A1860u;
    SET_GPR_U32(ctx, 31, 0x1A1868u);
    ctx->pc = 0x1A1864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1860u;
    // 0x1a1864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A1860u, 0x1A1868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1868u;
label_1a1868:
    // 0x1a1868: 0x8e8609d4  lw          $a2, 0x9D4($s4)
    ctx->pc = 0x1a1868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2516)));
    // 0x1a186c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a186cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1870: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a1870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a1874: 0x3c03c200  lui         $v1, 0xC200
    ctx->pc = 0x1a1874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49664 << 16));
    // 0x1a1878: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a1878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a187c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a187cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1880: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a1880u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1a1884: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1a1884u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1a1888: 0xacc500b8  sw          $a1, 0xB8($a2)
    ctx->pc = 0x1a1888u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 5));
    // 0x1a188c: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1a188cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1a1890: 0xacc000b0  sw          $zero, 0xB0($a2)
    ctx->pc = 0x1a1890u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 176), GPR_U32(ctx, 0));
    // 0x1a1894: 0xc062860  jal         func_18A180
    ctx->pc = 0x1A1894u;
    SET_GPR_U32(ctx, 31, 0x1A189Cu);
    ctx->pc = 0x1A1898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1894u;
    // 0x1a1898: 0xacc300b4  sw          $v1, 0xB4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 180), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1A1894u, 0x1A189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A189Cu;
label_1a189c:
    // 0x1a189c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a189cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a18a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a18a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a18a4: 0xc062858  jal         func_18A160
    ctx->pc = 0x1A18A4u;
    SET_GPR_U32(ctx, 31, 0x1A18ACu);
    ctx->pc = 0x1A18A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18A4u;
    // 0x1a18a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1A18A4u, 0x1A18ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18ACu;
label_1a18ac:
    // 0x1a18ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a18acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18b0: 0xc062200  jal         func_188800
    ctx->pc = 0x1A18B0u;
    SET_GPR_U32(ctx, 31, 0x1A18B8u);
    ctx->pc = 0x1A18B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18B0u;
    // 0x1a18b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188800u, 0x1A18B0u, 0x1A18B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18B8u;
label_1a18b8:
    // 0x1a18b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a18b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a18bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a18bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a18c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a18c4: 0xc06223c  jal         func_1888F0
    ctx->pc = 0x1A18C4u;
    SET_GPR_U32(ctx, 31, 0x1A18CCu);
    ctx->pc = 0x1A18C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18C4u;
    // 0x1a18c8: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x1A18C4u, 0x1A18CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18CCu;
label_1a18cc:
    // 0x1a18cc: 0xc062114  jal         func_188450
    ctx->pc = 0x1A18CCu;
    SET_GPR_U32(ctx, 31, 0x1A18D4u);
    ctx->pc = 0x1A18D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18CCu;
    // 0x1a18d0: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A18CCu, 0x1A18D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18D4u;
label_1a18d4:
    // 0x1a18d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a18d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1a18d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a18d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18dc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1a18dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a18e0: 0xc061fa8  jal         func_187EA0
    ctx->pc = 0x1A18E0u;
    SET_GPR_U32(ctx, 31, 0x1A18E8u);
    ctx->pc = 0x1A18E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A18E0u;
    // 0x1a18e4: 0x24a503d8  addiu       $a1, $a1, 0x3D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1A18E0u, 0x1A18E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A18E8u;
label_1a18e8:
    // 0x1a18e8: 0x8e8209d4  lw          $v0, 0x9D4($s4)
    ctx->pc = 0x1a18e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2516)));
    // 0x1a18ec: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1a18ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a18f0: 0xa04001bb  sb          $zero, 0x1BB($v0)
    ctx->pc = 0x1a18f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 443), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a18f4: 0x244500bc  addiu       $a1, $v0, 0xBC
    ctx->pc = 0x1a18f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1a18f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A18F8u;
    {
        const bool branch_taken_0x1a18f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18F8u;
        // 0x1a18fc: 0xa04001ba  sb          $zero, 0x1BA($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 442), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a18f8) {
            ctx->pc = 0x1A1914u;
            return;
        }
    }
    ctx->pc = 0x1A1900u;
}
