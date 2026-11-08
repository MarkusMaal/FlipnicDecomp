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

// Function: entry_0016f144
// Address: 0x16f144 - 0x16f17c
void entry_0016f144_0x16f144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f144_0x16f144");
#endif

    ctx->pc = 0x16f144u;

    // 0x16f144: 0x0  nop
    ctx->pc = 0x16f144u;
    // NOP
    // 0x16f148: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16f14c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x16f14cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16f150: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x16F150u;
    {
        const bool branch_taken_0x16f150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F150u;
        // 0x16f154: 0x2341021  addu        $v0, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f150) {
            ctx->pc = 0x16F124u;
            return;
        }
    }
    ctx->pc = 0x16F158u;
    // 0x16f158: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x16f158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f15c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16f15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f160: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16f160u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f164: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16f164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f168: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16f168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f16c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f16cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f174: 0x3e00008  jr          $ra
    ctx->pc = 0x16F174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F174u;
        // 0x16f178: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F17Cu;
}
