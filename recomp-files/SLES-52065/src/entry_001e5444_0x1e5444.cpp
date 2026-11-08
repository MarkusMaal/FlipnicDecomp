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

// Function: entry_001e5444
// Address: 0x1e5444 - 0x1e5470
void entry_001e5444_0x1e5444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5444_0x1e5444");
#endif

    ctx->pc = 0x1e5444u;

    // 0x1e5444: 0x0  nop
    ctx->pc = 0x1e5444u;
    // NOP
    // 0x1e5448: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e5448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x1e544c: 0xa0430051  sb          $v1, 0x51($v0)
    ctx->pc = 0x1e544cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 81), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e5450: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e5450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
    // 0x1e5454: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e5454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1e5458: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e5458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e545c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e545cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5464: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e5464u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5468: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5468u;
        // 0x1e546c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5470u;
}
