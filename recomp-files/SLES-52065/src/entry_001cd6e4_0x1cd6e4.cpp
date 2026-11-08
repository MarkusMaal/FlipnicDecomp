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

// Function: entry_001cd6e4
// Address: 0x1cd6e4 - 0x1cd714
void entry_001cd6e4_0x1cd6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd6e4_0x1cd6e4");
#endif

    ctx->pc = 0x1cd6e4u;

    // 0x1cd6e4: 0x0  nop
    ctx->pc = 0x1cd6e4u;
    // NOP
    // 0x1cd6e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cd6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cd6ec: 0x2a03000c  slti        $v1, $s0, 0xC
    ctx->pc = 0x1cd6ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1cd6f0: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1CD6F0u;
    {
        const bool branch_taken_0x1cd6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD6F0u;
        // 0x1cd6f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd6f0) {
            ctx->pc = 0x1CD61Cu;
            return;
        }
    }
    ctx->pc = 0x1CD6F8u;
    // 0x1cd6f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cd6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cd6fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cd6fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cd700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cd704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cd708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd70c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD70Cu;
        // 0x1cd710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD714u;
}
