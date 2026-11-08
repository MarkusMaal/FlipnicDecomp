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

// Function: entry_00118b78
// Address: 0x118b78 - 0x118b98
void entry_00118b78_0x118b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118b78_0x118b78");
#endif

    ctx->pc = 0x118b78u;

    // 0x118b78: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x118b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x118b7c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x118b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x118b80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118b84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x118b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118b88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118b8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118b90: 0x3e00008  jr          $ra
    ctx->pc = 0x118B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B90u;
        // 0x118b94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118B98u;
}
