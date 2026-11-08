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

// Function: entry_00100c44
// Address: 0x100c44 - 0x100c74
void entry_00100c44_0x100c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100c44_0x100c44");
#endif

    ctx->pc = 0x100c44u;

    // 0x100c44: 0x0  nop
    ctx->pc = 0x100c44u;
    // NOP
    // 0x100c48: 0x270182a  slt         $v1, $s3, $s0
    ctx->pc = 0x100c48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x100c4c: 0x1460ff7e  bnez        $v1, . + 4 + (-0x82 << 2)
    ctx->pc = 0x100C4Cu;
    {
        const bool branch_taken_0x100c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x100c4c) {
            ctx->pc = 0x100A48u;
            return;
        }
    }
    ctx->pc = 0x100C54u;
    // 0x100c54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x100c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x100c58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x100c58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100c5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x100c5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100c60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x100c60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x100C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C6Cu;
        // 0x100c70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100C74u;
}
