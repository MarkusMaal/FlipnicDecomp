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

// Function: FUN_0011ee10
// Address: 0x11ee10 - 0x11ee54
void FUN_0011ee10_0x11ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011ee10_0x11ee10");
#endif

    ctx->pc = 0x11ee10u;

    // 0x11ee10: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x11ee10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11ee14: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11ee14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11ee18: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x11ee18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11ee1c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x11ee1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11ee20: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11ee20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11ee24: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x11ee24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x11ee28: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x11ee28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11ee2c: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x11ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x11ee30: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11ee30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11ee34: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x11ee34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x11ee38: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11ee38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11ee3c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x11ee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x11ee40: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x11ee40u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11ee44: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x11ee44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x11ee48: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x11ee48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x11ee4c: 0x3e00008  jr          $ra
    ctx->pc = 0x11EE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE4Cu;
        // 0x11ee50: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EE54u;
}
