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

// Function: entry_0015b94c
// Address: 0x15b94c - 0x15b968
void entry_0015b94c_0x15b94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b94c_0x15b94c");
#endif

    ctx->pc = 0x15b94cu;

    // 0x15b94c: 0xa6200210  sh          $zero, 0x210($s1)
    ctx->pc = 0x15b94cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 528), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b950: 0xa6200218  sh          $zero, 0x218($s1)
    ctx->pc = 0x15b950u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 536), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b954: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15b954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b95c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b960: 0x3e00008  jr          $ra
    ctx->pc = 0x15B960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B960u;
        // 0x15b964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B968u;
}
