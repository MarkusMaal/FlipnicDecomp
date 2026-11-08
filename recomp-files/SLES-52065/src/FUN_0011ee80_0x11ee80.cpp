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

// Function: FUN_0011ee80
// Address: 0x11ee80 - 0x11eea8
void FUN_0011ee80_0x11ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011ee80_0x11ee80");
#endif

    ctx->pc = 0x11ee80u;

    // 0x11ee80: 0x4193c  dsll32      $v1, $a0, 4
    ctx->pc = 0x11ee80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 4));
    // 0x11ee84: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11ee84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11ee88: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x11ee88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x11ee8c: 0xac23a030  sw          $v1, -0x5FD0($at)
    ctx->pc = 0x11ee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942768), GPR_U32(ctx, 3));
    // 0x11ee90: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11ee90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11ee94: 0x24030105  addiu       $v1, $zero, 0x105
    ctx->pc = 0x11ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x11ee98: 0xac20a020  sw          $zero, -0x5FE0($at)
    ctx->pc = 0x11ee98u;
    runtime->Store32(rdram, ctx, 0x1000A020u, GPR_U32(ctx, 0));
    // 0x11ee9c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11ee9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11eea0: 0x3e00008  jr          $ra
    ctx->pc = 0x11EEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEA0u;
        // 0x11eea4: 0xac23a000  sw          $v1, -0x6000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EEA8u;
}
