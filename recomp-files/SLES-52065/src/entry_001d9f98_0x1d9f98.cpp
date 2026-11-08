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

// Function: entry_001d9f98
// Address: 0x1d9f98 - 0x1d9fd0
void entry_001d9f98_0x1d9f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9f98_0x1d9f98");
#endif

    ctx->pc = 0x1d9f98u;

    // 0x1d9f98: 0x24c671d0  addiu       $a2, $a2, 0x71D0
    ctx->pc = 0x1d9f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29136));
    // 0x1d9f9c: 0x248370d0  addiu       $v1, $a0, 0x70D0
    ctx->pc = 0x1d9f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28880));
    // 0x1d9fa0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1d9fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d9fa4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1d9fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d9fa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d9fac: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x1d9facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d9fb0: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x1d9fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1d9fb4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1d9fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9fb8: 0xa0ab0000  sb          $t3, 0x0($a1)
    ctx->pc = 0x1d9fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x1d9fbc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1d9fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1d9fc0: 0xa04a0000  sb          $t2, 0x0($v0)
    ctx->pc = 0x1d9fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x1d9fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FC4u;
        // 0x1d9fc8: 0xa0e90001  sb          $t1, 0x1($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9FCCu;
    // 0x1d9fcc: 0x0  nop
    ctx->pc = 0x1d9fccu;
    // NOP
    ctx->pc = 0x1d9fd0u;
}
