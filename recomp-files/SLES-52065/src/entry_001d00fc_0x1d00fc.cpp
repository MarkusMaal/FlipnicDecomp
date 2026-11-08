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

// Function: entry_001d00fc
// Address: 0x1d00fc - 0x1d0124
void entry_001d00fc_0x1d00fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d00fc_0x1d00fc");
#endif

    ctx->pc = 0x1d00fcu;

    // 0x1d00fc: 0xde030028  ld          $v1, 0x28($s0)
    ctx->pc = 0x1d00fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d0100: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x1d0100u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1d0104: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x1d0104u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x1d0108: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d0108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d010c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d010cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0110: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d0110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0114: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0118: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d011c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D011Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D011Cu;
        // 0x1d0120: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D011Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0124u;
}
