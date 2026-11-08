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

// Function: entry_0011afe8
// Address: 0x11afe8 - 0x11b020
void entry_0011afe8_0x11afe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011afe8_0x11afe8");
#endif

    switch (ctx->pc) {
        case 0x11affcu: goto label_11affc;
        default: break;
    }

    ctx->pc = 0x11afe8u;

    // 0x11afe8: 0x8e62052c  lw          $v0, 0x52C($s3)
    ctx->pc = 0x11afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1324)));
    // 0x11afec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11afecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aff0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x11aff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11aff4: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11AFF4u;
    SET_GPR_U32(ctx, 31, 0x11AFFCu);
    ctx->pc = 0x11AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AFF4u;
    // 0x11aff8: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11AFF4u, 0x11AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFFCu;
label_11affc:
    // 0x11affc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11affcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b000: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B000u;
    {
        const bool branch_taken_0x11b000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11b000) {
            ctx->pc = 0x11B020u;
            return;
        }
    }
    ctx->pc = 0x11B008u;
    // 0x11b008: 0x8e63052c  lw          $v1, 0x52C($s3)
    ctx->pc = 0x11b008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1324)));
    // 0x11b00c: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x11b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x11b010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11b010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11b014: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x11b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11b018: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11B018u;
    {
        const bool branch_taken_0x11b018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B018u;
        // 0x11b01c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b018) {
            ctx->pc = 0x11B02Cu;
            return;
        }
    }
    ctx->pc = 0x11B020u;
}
