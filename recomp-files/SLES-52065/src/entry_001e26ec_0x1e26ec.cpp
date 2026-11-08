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

// Function: entry_001e26ec
// Address: 0x1e26ec - 0x1e270c
void entry_001e26ec_0x1e26ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e26ec_0x1e26ec");
#endif

    ctx->pc = 0x1e26ecu;

    // 0x1e26ec: 0x0  nop
    ctx->pc = 0x1e26ecu;
    // NOP
    // 0x1e26f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e26f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e26f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e26f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e26f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e26f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e26fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e26fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2704: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2704u;
        // 0x1e2708: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E270Cu;
}
