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

// Function: entry_001a13a4
// Address: 0x1a13a4 - 0x1a1448
void entry_001a13a4_0x1a13a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a13a4_0x1a13a4");
#endif

    switch (ctx->pc) {
        case 0x1a13acu: goto label_1a13ac;
        case 0x1a13ecu: goto label_1a13ec;
        case 0x1a13f8u: goto label_1a13f8;
        case 0x1a1408u: goto label_1a1408;
        case 0x1a1410u: goto label_1a1410;
        case 0x1a1424u: goto label_1a1424;
        case 0x1a1444u: goto label_1a1444;
        default: break;
    }

    ctx->pc = 0x1a13a4u;

label_1a13a4:
    // 0x1a13a4: 0xc063e14  jal         func_18F850
label_1a13a8:
    if (ctx->pc == 0x1A13A8u) {
        ctx->pc = 0x1A13ACu;
        goto label_1a13ac;
    }
    ctx->pc = 0x1A13A4u;
    SET_GPR_U32(ctx, 31, 0x1A13ACu);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A13A4u, 0x1A13ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13ACu;
label_1a13ac:
    // 0x1a13ac: 0x8e820678  lw          $v0, 0x678($s4)
    ctx->pc = 0x1a13acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1a13b0:
    // 0x1a13b0: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1a13b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1a13b4:
    // 0x1a13b4: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
label_1a13b8:
    if (ctx->pc == 0x1A13B8u) {
        ctx->pc = 0x1A13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13B4u;
        // 0x1a13b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A13BCu;
        goto label_1a13bc;
    }
    ctx->pc = 0x1A13B4u;
    {
        const bool branch_taken_0x1a13b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13B4u;
        // 0x1a13b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a13b4) {
            ctx->pc = 0x1A14FCu;
            return;
        }
    }
    ctx->pc = 0x1A13BCu;
label_1a13bc:
    // 0x1a13bc: 0xae8008b0  sw          $zero, 0x8B0($s4)
    ctx->pc = 0x1a13bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2224), GPR_U32(ctx, 0));
label_1a13c0:
    // 0x1a13c0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a13c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a13c4:
    // 0x1a13c4: 0xae8008a8  sw          $zero, 0x8A8($s4)
    ctx->pc = 0x1a13c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2216), GPR_U32(ctx, 0));
label_1a13c8:
    // 0x1a13c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a13cc:
    // 0x1a13cc: 0xae8008a4  sw          $zero, 0x8A4($s4)
    ctx->pc = 0x1a13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2212), GPR_U32(ctx, 0));
label_1a13d0:
    // 0x1a13d0: 0x24a50400  addiu       $a1, $a1, 0x400
    ctx->pc = 0x1a13d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
label_1a13d4:
    // 0x1a13d4: 0xae8208ac  sw          $v0, 0x8AC($s4)
    ctx->pc = 0x1a13d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2220), GPR_U32(ctx, 2));
label_1a13d8:
    // 0x1a13d8: 0xa28008b8  sb          $zero, 0x8B8($s4)
    ctx->pc = 0x1a13d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2232), (uint8_t)GPR_U32(ctx, 0));
label_1a13dc:
    // 0x1a13dc: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1a13dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_1a13e0:
    // 0x1a13e0: 0x8f8680e8  lw          $a2, -0x7F18($gp)
    ctx->pc = 0x1a13e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934760)));
label_1a13e4:
    // 0x1a13e4: 0xc06cf34  jal         func_1B3CD0
label_1a13e8:
    if (ctx->pc == 0x1A13E8u) {
        ctx->pc = 0x1A13E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13E4u;
        // 0x1a13e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A13ECu;
        goto label_1a13ec;
    }
    ctx->pc = 0x1A13E4u;
    SET_GPR_U32(ctx, 31, 0x1A13ECu);
    ctx->pc = 0x1A13E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A13E4u;
    // 0x1a13e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1A13E4u, 0x1A13ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13ECu;
label_1a13ec:
    // 0x1a13ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a13ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a13f0:
    // 0x1a13f0: 0xc069ac8  jal         func_1A6B20
label_1a13f4:
    if (ctx->pc == 0x1A13F4u) {
        ctx->pc = 0x1A13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13F0u;
        // 0x1a13f4: 0x268408a0  addiu       $a0, $s4, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A13F8u;
        goto label_1a13f8;
    }
    ctx->pc = 0x1A13F0u;
    SET_GPR_U32(ctx, 31, 0x1A13F8u);
    ctx->pc = 0x1A13F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A13F0u;
    // 0x1a13f4: 0x268408a0  addiu       $a0, $s4, 0x8A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1A13F0u, 0x1A13F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A13F8u;
label_1a13f8:
    // 0x1a13f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a13fc:
    // 0x1a13fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a13fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a1400:
    // 0x1a1400: 0xc069ac0  jal         func_1A6B00
label_1a1404:
    if (ctx->pc == 0x1A1404u) {
        ctx->pc = 0x1A1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1400u;
        // 0x1a1404: 0x268408a0  addiu       $a0, $s4, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1408u;
        goto label_1a1408;
    }
    ctx->pc = 0x1A1400u;
    SET_GPR_U32(ctx, 31, 0x1A1408u);
    ctx->pc = 0x1A1404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1400u;
    // 0x1a1404: 0x268408a0  addiu       $a0, $s4, 0x8A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B00u, 0x1A1400u, 0x1A1408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1408u;
label_1a1408:
    // 0x1a1408: 0xc062114  jal         func_188450
label_1a140c:
    if (ctx->pc == 0x1A140Cu) {
        ctx->pc = 0x1A140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1408u;
        // 0x1a140c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1410u;
        goto label_1a1410;
    }
    ctx->pc = 0x1A1408u;
    SET_GPR_U32(ctx, 31, 0x1A1410u);
    ctx->pc = 0x1A140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1408u;
    // 0x1a140c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A1408u, 0x1A1410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1410u;
label_1a1410:
    // 0x1a1410: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a1410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1414:
    // 0x1a1414: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a1414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a1418:
    // 0x1a1418: 0x8e820678  lw          $v0, 0x678($s4)
    ctx->pc = 0x1a1418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
label_1a141c:
    // 0x1a141c: 0xc0620fc  jal         func_1883F0
label_1a1420:
    if (ctx->pc == 0x1A1420u) {
        ctx->pc = 0x1A1420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A141Cu;
        // 0x1a1420: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1424u;
        goto label_1a1424;
    }
    ctx->pc = 0x1A141Cu;
    SET_GPR_U32(ctx, 31, 0x1A1424u);
    ctx->pc = 0x1A1420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A141Cu;
    // 0x1a1420: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1A141Cu, 0x1A1424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1424u;
label_1a1424:
    // 0x1a1424: 0x8e8408a0  lw          $a0, 0x8A0($s4)
    ctx->pc = 0x1a1424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2208)));
label_1a1428:
    // 0x1a1428: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1a142c:
    if (ctx->pc == 0x1A142Cu) {
        ctx->pc = 0x1A142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1428u;
        // 0x1a142c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1430u;
        goto label_1a1430;
    }
    ctx->pc = 0x1A1428u;
    {
        const bool branch_taken_0x1a1428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1428u;
        // 0x1a142c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1428) {
            ctx->pc = 0x1A1448u;
            return;
        }
    }
    ctx->pc = 0x1A1430u;
label_1a1430:
    // 0x1a1430: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1434:
    // 0x1a1434: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a1434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a1438:
    // 0x1a1438: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1a1438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1a143c:
    // 0x1a143c: 0x320f809  jalr        $t9
label_1a1440:
    if (ctx->pc == 0x1A1440u) {
        ctx->pc = 0x1A1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A143Cu;
        // 0x1a1440: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1444u;
        goto label_1a1444;
    }
    ctx->pc = 0x1A143Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1444u);
        ctx->pc = 0x1A1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A143Cu;
        // 0x1a1440: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A143Cu, 0x1A1444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1444u;
label_1a1444:
    // 0x1a1444: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a1444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a1448u;
}
