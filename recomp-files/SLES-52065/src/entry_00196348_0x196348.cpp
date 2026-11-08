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

// Function: entry_00196348
// Address: 0x196348 - 0x1963bc
void entry_00196348_0x196348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196348_0x196348");
#endif

    switch (ctx->pc) {
        case 0x196384u: goto label_196384;
        case 0x1963acu: goto label_1963ac;
        default: break;
    }

    ctx->pc = 0x196348u;

    // 0x196348: 0x10a00040  beqz        $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x196348u;
    {
        const bool branch_taken_0x196348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196348u;
        // 0x19634c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196348) {
            ctx->pc = 0x19644Cu;
            return;
        }
    }
    ctx->pc = 0x196350u;
    // 0x196350: 0x8e630670  lw          $v1, 0x670($s3)
    ctx->pc = 0x196350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1648)));
    // 0x196354: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x196354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196358: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x196358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19635c: 0xae630670  sw          $v1, 0x670($s3)
    ctx->pc = 0x19635cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1648), GPR_U32(ctx, 3));
    // 0x196360: 0x8e630664  lw          $v1, 0x664($s3)
    ctx->pc = 0x196360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
    // 0x196364: 0x8c700028  lw          $s0, 0x28($v1)
    ctx->pc = 0x196364u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x196368: 0x16020019  bne         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x196368u;
    {
        const bool branch_taken_0x196368 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x196368) {
            ctx->pc = 0x1963D0u;
            return;
        }
    }
    ctx->pc = 0x196370u;
    // 0x196370: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x196370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x196374: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x196374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x196378: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x196378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x19637c: 0xc057040  jal         func_15C100
    ctx->pc = 0x19637Cu;
    SET_GPR_U32(ctx, 31, 0x196384u);
    ctx->pc = 0x196380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19637Cu;
    // 0x196380: 0x24710040  addiu       $s1, $v1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19637Cu, 0x196384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196384u;
label_196384:
    // 0x196384: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x196384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x196388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x196388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19638c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19638cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x196390: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x196390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x196394: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x196394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x196398: 0x8c4201d4  lw          $v0, 0x1D4($v0)
    ctx->pc = 0x196398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
    // 0x19639c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19639Cu;
    {
        const bool branch_taken_0x19639c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19639c) {
            ctx->pc = 0x1963BCu;
            return;
        }
    }
    ctx->pc = 0x1963A4u;
    // 0x1963a4: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x1963A4u;
    SET_GPR_U32(ctx, 31, 0x1963ACu);
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x1963A4u, 0x1963ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963ACu;
label_1963ac:
    // 0x1963ac: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x1963acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1963b0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1963b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1963b4: 0xc0422e0  jal         func_108B80
    ctx->pc = 0x1963B4u;
    SET_GPR_U32(ctx, 31, 0x1963BCu);
    ctx->pc = 0x1963B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963B4u;
    // 0x1963b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x1963B4u, 0x1963BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963BCu;
}
