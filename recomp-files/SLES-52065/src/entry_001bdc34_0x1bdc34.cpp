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

// Function: entry_001bdc34
// Address: 0x1bdc34 - 0x1bdc60
void entry_001bdc34_0x1bdc34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdc34_0x1bdc34");
#endif

    ctx->pc = 0x1bdc34u;

    // 0x1bdc34: 0x0  nop
    ctx->pc = 0x1bdc34u;
    // NOP
    // 0x1bdc38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bdc38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc3c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1bdc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bdc40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bdc40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bdc44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bdc44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bdc48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bdc48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bdc4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bdc4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bdc50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bdc50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdc54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bdc54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdc58: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC58u;
        // 0x1bdc5c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDC60u;
}
