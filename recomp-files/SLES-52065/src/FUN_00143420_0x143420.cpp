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

// Function: FUN_00143420
// Address: 0x143420 - 0x143468
void FUN_00143420_0x143420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00143420_0x143420");
#endif

    ctx->pc = 0x143420u;

    // 0x143420: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x143420u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143424: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x143424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x143428: 0x80850005  lb          $a1, 0x5($a0)
    ctx->pc = 0x143428u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x14342c: 0xa0850004  sb          $a1, 0x4($a0)
    ctx->pc = 0x14342cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x143430: 0x80850006  lb          $a1, 0x6($a0)
    ctx->pc = 0x143430u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x143434: 0xa0850005  sb          $a1, 0x5($a0)
    ctx->pc = 0x143434u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x143438: 0x80850007  lb          $a1, 0x7($a0)
    ctx->pc = 0x143438u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x14343c: 0xa0850006  sb          $a1, 0x6($a0)
    ctx->pc = 0x14343cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 5));
    // 0x143440: 0x80850008  lb          $a1, 0x8($a0)
    ctx->pc = 0x143440u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x143444: 0xa0850007  sb          $a1, 0x7($a0)
    ctx->pc = 0x143444u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x143448: 0x80850009  lb          $a1, 0x9($a0)
    ctx->pc = 0x143448u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x14344c: 0xa0850008  sb          $a1, 0x8($a0)
    ctx->pc = 0x14344cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x143450: 0x8085000a  lb          $a1, 0xA($a0)
    ctx->pc = 0x143450u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x143454: 0xa0850009  sb          $a1, 0x9($a0)
    ctx->pc = 0x143454u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x143458: 0x8085000b  lb          $a1, 0xB($a0)
    ctx->pc = 0x143458u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x14345c: 0xa085000a  sb          $a1, 0xA($a0)
    ctx->pc = 0x14345cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
    // 0x143460: 0x3e00008  jr          $ra
    ctx->pc = 0x143460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143460u;
        // 0x143464: 0xa083000b  sb          $v1, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143468u;
}
