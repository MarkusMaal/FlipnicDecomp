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

// Function: entry_001e33d4
// Address: 0x1e33d4 - 0x1e33f8
void entry_001e33d4_0x1e33d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e33d4_0x1e33d4");
#endif

    ctx->pc = 0x1e33d4u;

    // 0x1e33d4: 0x0  nop
    ctx->pc = 0x1e33d4u;
    // NOP
    // 0x1e33d8: 0xa2030041  sb          $v1, 0x41($s0)
    ctx->pc = 0x1e33d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e33dc: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e33dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1e33e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e33e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e33e4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e33e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e33e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e33e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e33ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e33ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e33f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E33F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E33F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33F0u;
        // 0x1e33f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E33F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E33F8u;
}
