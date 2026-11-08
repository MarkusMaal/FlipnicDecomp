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

// Function: entry_0014b454
// Address: 0x14b454 - 0x14b480
void entry_0014b454_0x14b454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b454_0x14b454");
#endif

    ctx->pc = 0x14b454u;

    // 0x14b454: 0x0  nop
    ctx->pc = 0x14b454u;
    // NOP
    // 0x14b458: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14b458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b45c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14b45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14b460: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14b460u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b464: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14b464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b468: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14b468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b46c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14b46cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b478: 0x3e00008  jr          $ra
    ctx->pc = 0x14B478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B478u;
        // 0x14b47c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B480u;
}
