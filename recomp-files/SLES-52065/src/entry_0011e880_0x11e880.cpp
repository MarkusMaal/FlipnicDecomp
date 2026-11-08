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

// Function: entry_0011e880
// Address: 0x11e880 - 0x11e8bc
void entry_0011e880_0x11e880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e880_0x11e880");
#endif

    switch (ctx->pc) {
        case 0x11e894u: goto label_11e894;
        default: break;
    }

    ctx->pc = 0x11e880u;

    // 0x11e880: 0x8e42052c  lw          $v0, 0x52C($s2)
    ctx->pc = 0x11e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1324)));
    // 0x11e884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e888: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x11e888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11e88c: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E88Cu;
    SET_GPR_U32(ctx, 31, 0x11E894u);
    ctx->pc = 0x11E890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E88Cu;
    // 0x11e890: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E88Cu, 0x11E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E894u;
label_11e894:
    // 0x11e894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e898: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E898u;
    {
        const bool branch_taken_0x11e898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11e898) {
            ctx->pc = 0x11E8BCu;
            return;
        }
    }
    ctx->pc = 0x11E8A0u;
    // 0x11e8a0: 0x8e43052c  lw          $v1, 0x52C($s2)
    ctx->pc = 0x11e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1324)));
    // 0x11e8a4: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x11e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x11e8a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11e8ac: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x11e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x11e8b0: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x11e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11e8b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11E8B4u;
    {
        const bool branch_taken_0x11e8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8B4u;
        // 0x11e8b8: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8b4) {
            ctx->pc = 0x11E8C8u;
            return;
        }
    }
    ctx->pc = 0x11E8BCu;
}
