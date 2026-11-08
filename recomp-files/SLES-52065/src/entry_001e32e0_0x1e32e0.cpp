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

// Function: entry_001e32e0
// Address: 0x1e32e0 - 0x1e3304
void entry_001e32e0_0x1e32e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e32e0_0x1e32e0");
#endif

    ctx->pc = 0x1e32e0u;

    // 0x1e32e0: 0xa6130044  sh          $s3, 0x44($s0)
    ctx->pc = 0x1e32e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 19));
    // 0x1e32e4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e32e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e32e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e32ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e32ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e32f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e32f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e32f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e32f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e32f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e32f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e32fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E32FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32FCu;
        // 0x1e3300: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E32FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3304u;
}
