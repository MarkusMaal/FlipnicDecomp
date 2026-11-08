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

// Function: entry_00108c48
// Address: 0x108c48 - 0x108c68
void entry_00108c48_0x108c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108c48_0x108c48");
#endif

    ctx->pc = 0x108c48u;

    // 0x108c48: 0xa61201ec  sh          $s2, 0x1EC($s0)
    ctx->pc = 0x108c48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 492), (uint16_t)GPR_U32(ctx, 18));
    // 0x108c4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x108c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108c50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x108c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108c54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x108c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x108c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x108c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108c60: 0x3e00008  jr          $ra
    ctx->pc = 0x108C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C60u;
        // 0x108c64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108C68u;
}
