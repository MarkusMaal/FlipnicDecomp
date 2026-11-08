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

// Function: entry_0013aa9c
// Address: 0x13aa9c - 0x13aacc
void entry_0013aa9c_0x13aa9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013aa9c_0x13aa9c");
#endif

    ctx->pc = 0x13aa9cu;

    // 0x13aa9c: 0x0  nop
    ctx->pc = 0x13aa9cu;
    // NOP
    // 0x13aaa0: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x13aaa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x13aaa4: 0x1460ff6a  bnez        $v1, . + 4 + (-0x96 << 2)
    ctx->pc = 0x13AAA4u;
    {
        const bool branch_taken_0x13aaa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAA4u;
        // 0x13aaa8: 0x3c043f80  lui         $a0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aaa4) {
            ctx->pc = 0x13A850u;
            return;
        }
    }
    ctx->pc = 0x13AAACu;
    // 0x13aaac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13aaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13aab0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13aab0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13aab4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13aab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13aab8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13aab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13aabc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13aabcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13aac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13aac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13aac4: 0x3e00008  jr          $ra
    ctx->pc = 0x13AAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AAC4u;
        // 0x13aac8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AACCu;
}
