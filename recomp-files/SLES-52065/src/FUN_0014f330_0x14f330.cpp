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

// Function: FUN_0014f330
// Address: 0x14f330 - 0x14f358
void FUN_0014f330_0x14f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014f330_0x14f330");
#endif

    ctx->pc = 0x14f330u;

    // 0x14f330: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x14f330u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x14f334: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x14f334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x14f338: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x14f338u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14f33c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x14f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x14f340: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x14f340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x14f344: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x14f344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x14f348: 0xa4870000  sh          $a3, 0x0($a0)
    ctx->pc = 0x14f348u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x14f34c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x14f34cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x14f350: 0x3e00008  jr          $ra
    ctx->pc = 0x14F350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F350u;
        // 0x14f354: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F358u;
}
