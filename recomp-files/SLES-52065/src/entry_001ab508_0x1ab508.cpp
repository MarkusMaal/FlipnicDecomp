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

// Function: entry_001ab508
// Address: 0x1ab508 - 0x1ab590
void entry_001ab508_0x1ab508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab508_0x1ab508");
#endif

    switch (ctx->pc) {
        case 0x1ab538u: goto label_1ab538;
        case 0x1ab544u: goto label_1ab544;
        case 0x1ab564u: goto label_1ab564;
        case 0x1ab570u: goto label_1ab570;
        case 0x1ab588u: goto label_1ab588;
        default: break;
    }

    ctx->pc = 0x1ab508u;

    // 0x1ab508: 0xae800700  sw          $zero, 0x700($s4)
    ctx->pc = 0x1ab508u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1792), GPR_U32(ctx, 0));
    // 0x1ab50c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ab50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ab510: 0xae8006f8  sw          $zero, 0x6F8($s4)
    ctx->pc = 0x1ab510u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1784), GPR_U32(ctx, 0));
    // 0x1ab514: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ab514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab518: 0xae8006f4  sw          $zero, 0x6F4($s4)
    ctx->pc = 0x1ab518u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1780), GPR_U32(ctx, 0));
    // 0x1ab51c: 0x24a50918  addiu       $a1, $a1, 0x918
    ctx->pc = 0x1ab51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2328));
    // 0x1ab520: 0xae8206fc  sw          $v0, 0x6FC($s4)
    ctx->pc = 0x1ab520u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1788), GPR_U32(ctx, 2));
    // 0x1ab524: 0xa2800708  sb          $zero, 0x708($s4)
    ctx->pc = 0x1ab524u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1800), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab528: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ab528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1ab52c: 0x8f86810c  lw          $a2, -0x7EF4($gp)
    ctx->pc = 0x1ab52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934796)));
    // 0x1ab530: 0xc06cf34  jal         func_1B3CD0
    ctx->pc = 0x1AB530u;
    SET_GPR_U32(ctx, 31, 0x1AB538u);
    ctx->pc = 0x1AB534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB530u;
    // 0x1ab534: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AB530u, 0x1AB538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB538u;
label_1ab538:
    // 0x1ab538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab53c: 0xc069ac8  jal         func_1A6B20
    ctx->pc = 0x1AB53Cu;
    SET_GPR_U32(ctx, 31, 0x1AB544u);
    ctx->pc = 0x1AB540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB53Cu;
    // 0x1ab540: 0x268406f0  addiu       $a0, $s4, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AB53Cu, 0x1AB544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB544u;
label_1ab544:
    // 0x1ab544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab548: 0xa2820709  sb          $v0, 0x709($s4)
    ctx->pc = 0x1ab548u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1801), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ab54c: 0x8e830670  lw          $v1, 0x670($s4)
    ctx->pc = 0x1ab54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x1ab550: 0x8e82069c  lw          $v0, 0x69C($s4)
    ctx->pc = 0x1ab550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
    // 0x1ab554: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1AB554u;
    {
        const bool branch_taken_0x1ab554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AB558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB554u;
        // 0x1ab558: 0x43802a  slt         $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab554) {
            ctx->pc = 0x1AB590u;
            return;
        }
    }
    ctx->pc = 0x1AB55Cu;
    // 0x1ab55c: 0xc062114  jal         func_188450
    ctx->pc = 0x1AB55Cu;
    SET_GPR_U32(ctx, 31, 0x1AB564u);
    ctx->pc = 0x1AB560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB55Cu;
    // 0x1ab560: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AB55Cu, 0x1AB564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB564u;
label_1ab564:
    // 0x1ab564: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab568: 0xc0620fc  jal         func_1883F0
    ctx->pc = 0x1AB568u;
    SET_GPR_U32(ctx, 31, 0x1AB570u);
    ctx->pc = 0x1AB56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB568u;
    // 0x1ab56c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AB568u, 0x1AB570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB570u;
label_1ab570:
    // 0x1ab570: 0x8e8206e8  lw          $v0, 0x6E8($s4)
    ctx->pc = 0x1ab570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1768)));
    // 0x1ab574: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AB574u;
    {
        const bool branch_taken_0x1ab574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab574) {
            ctx->pc = 0x1AB5D8u;
            return;
        }
    }
    ctx->pc = 0x1AB57Cu;
    // 0x1ab57c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1ab57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ab580: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1AB580u;
    SET_GPR_U32(ctx, 31, 0x1AB588u);
    ctx->pc = 0x1AB584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB580u;
    // 0x1ab584: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1AB580u, 0x1AB588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB588u;
label_1ab588:
    // 0x1ab588: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1AB588u;
    {
        const bool branch_taken_0x1ab588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB588u;
        // 0x1ab58c: 0x8e8406f0  lw          $a0, 0x6F0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab588) {
            ctx->pc = 0x1AB5DCu;
            return;
        }
    }
    ctx->pc = 0x1AB590u;
}
