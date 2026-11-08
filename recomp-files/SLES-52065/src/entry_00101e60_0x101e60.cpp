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

// Function: entry_00101e60
// Address: 0x101e60 - 0x101e84
void entry_00101e60_0x101e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101e60_0x101e60");
#endif

    ctx->pc = 0x101e60u;

    // 0x101e60: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x101e60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x101e64: 0x1460ffb3  bnez        $v1, . + 4 + (-0x4D << 2)
    ctx->pc = 0x101E64u;
    {
        const bool branch_taken_0x101e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x101e64) {
            ctx->pc = 0x101D34u;
            return;
        }
    }
    ctx->pc = 0x101E6Cu;
    // 0x101e6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101e70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101e70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101e74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101e78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x101E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E7Cu;
        // 0x101e80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101E84u;
}
