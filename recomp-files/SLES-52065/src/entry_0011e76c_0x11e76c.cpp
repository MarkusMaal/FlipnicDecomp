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

// Function: entry_0011e76c
// Address: 0x11e76c - 0x11e7ac
void entry_0011e76c_0x11e76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e76c_0x11e76c");
#endif

    switch (ctx->pc) {
        case 0x11e780u: goto label_11e780;
        default: break;
    }

    ctx->pc = 0x11e76cu;

    // 0x11e76c: 0x8e420524  lw          $v0, 0x524($s2)
    ctx->pc = 0x11e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1316)));
    // 0x11e770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e774: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x11e774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x11e778: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E778u;
    SET_GPR_U32(ctx, 31, 0x11E780u);
    ctx->pc = 0x11E77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E778u;
    // 0x11e77c: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E778u, 0x11E780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E780u;
label_11e780:
    // 0x11e780: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e784: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E784u;
    {
        const bool branch_taken_0x11e784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11e784) {
            ctx->pc = 0x11E7ACu;
            return;
        }
    }
    ctx->pc = 0x11E78Cu;
    // 0x11e78c: 0x8e430524  lw          $v1, 0x524($s2)
    ctx->pc = 0x11e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1316)));
    // 0x11e790: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x11e790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x11e794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11e794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11e798: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x11e798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x11e79c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x11e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11e7a0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e7a4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x11E7A4u;
    {
        const bool branch_taken_0x11e7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7A4u;
        // 0x11e7a8: 0x212c0  sll         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7a4) {
            ctx->pc = 0x11E8C8u;
            return;
        }
    }
    ctx->pc = 0x11E7ACu;
}
