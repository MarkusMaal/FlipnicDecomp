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

// Function: entry_001ac718
// Address: 0x1ac718 - 0x1ac7a0
void entry_001ac718_0x1ac718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac718_0x1ac718");
#endif

    switch (ctx->pc) {
        case 0x1ac748u: goto label_1ac748;
        case 0x1ac754u: goto label_1ac754;
        case 0x1ac774u: goto label_1ac774;
        case 0x1ac780u: goto label_1ac780;
        case 0x1ac798u: goto label_1ac798;
        default: break;
    }

    ctx->pc = 0x1ac718u;

    // 0x1ac718: 0xae200700  sw          $zero, 0x700($s1)
    ctx->pc = 0x1ac718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 0));
    // 0x1ac71c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ac71cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ac720: 0xae2006f8  sw          $zero, 0x6F8($s1)
    ctx->pc = 0x1ac720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1784), GPR_U32(ctx, 0));
    // 0x1ac724: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ac724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ac728: 0xae2006f4  sw          $zero, 0x6F4($s1)
    ctx->pc = 0x1ac728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1780), GPR_U32(ctx, 0));
    // 0x1ac72c: 0x24a509c8  addiu       $a1, $a1, 0x9C8
    ctx->pc = 0x1ac72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2504));
    // 0x1ac730: 0xae2206fc  sw          $v0, 0x6FC($s1)
    ctx->pc = 0x1ac730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1788), GPR_U32(ctx, 2));
    // 0x1ac734: 0xa2200708  sb          $zero, 0x708($s1)
    ctx->pc = 0x1ac734u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1800), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac738: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1ac738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1ac73c: 0x8f868114  lw          $a2, -0x7EEC($gp)
    ctx->pc = 0x1ac73cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934804)));
    // 0x1ac740: 0xc06cf34  jal         func_1B3CD0
    ctx->pc = 0x1AC740u;
    SET_GPR_U32(ctx, 31, 0x1AC748u);
    ctx->pc = 0x1AC744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC740u;
    // 0x1ac744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CD0u, 0x1AC740u, 0x1AC748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC748u;
label_1ac748:
    // 0x1ac748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ac748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac74c: 0xc069ac8  jal         func_1A6B20
    ctx->pc = 0x1AC74Cu;
    SET_GPR_U32(ctx, 31, 0x1AC754u);
    ctx->pc = 0x1AC750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC74Cu;
    // 0x1ac750: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B20u, 0x1AC74Cu, 0x1AC754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC754u;
label_1ac754:
    // 0x1ac754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac758: 0xa2220709  sb          $v0, 0x709($s1)
    ctx->pc = 0x1ac758u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1801), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ac75c: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x1ac75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1ac760: 0x8e22069c  lw          $v0, 0x69C($s1)
    ctx->pc = 0x1ac760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x1ac764: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1AC764u;
    {
        const bool branch_taken_0x1ac764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC764u;
        // 0x1ac768: 0x43902a  slt         $s2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac764) {
            ctx->pc = 0x1AC7A0u;
            return;
        }
    }
    ctx->pc = 0x1AC76Cu;
    // 0x1ac76c: 0xc062114  jal         func_188450
    ctx->pc = 0x1AC76Cu;
    SET_GPR_U32(ctx, 31, 0x1AC774u);
    ctx->pc = 0x1AC770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC76Cu;
    // 0x1ac770: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1AC76Cu, 0x1AC774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC774u;
label_1ac774:
    // 0x1ac774: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ac774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac778: 0xc0620fc  jal         func_1883F0
    ctx->pc = 0x1AC778u;
    SET_GPR_U32(ctx, 31, 0x1AC780u);
    ctx->pc = 0x1AC77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC778u;
    // 0x1ac77c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1883F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1883F0u, 0x1AC778u, 0x1AC780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC780u;
label_1ac780:
    // 0x1ac780: 0x8e2206e8  lw          $v0, 0x6E8($s1)
    ctx->pc = 0x1ac780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1768)));
    // 0x1ac784: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AC784u;
    {
        const bool branch_taken_0x1ac784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac784) {
            ctx->pc = 0x1AC7E8u;
            return;
        }
    }
    ctx->pc = 0x1AC78Cu;
    // 0x1ac78c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1ac78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ac790: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1AC790u;
    SET_GPR_U32(ctx, 31, 0x1AC798u);
    ctx->pc = 0x1AC794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC790u;
    // 0x1ac794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1AC790u, 0x1AC798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC798u;
label_1ac798:
    // 0x1ac798: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1AC798u;
    {
        const bool branch_taken_0x1ac798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC798u;
        // 0x1ac79c: 0x8e2406f0  lw          $a0, 0x6F0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac798) {
            ctx->pc = 0x1AC7ECu;
            return;
        }
    }
    ctx->pc = 0x1AC7A0u;
}
