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

// Function: entry_001643d8
// Address: 0x1643d8 - 0x1643f4
void entry_001643d8_0x1643d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001643d8_0x1643d8");
#endif

    ctx->pc = 0x1643d8u;

    // 0x1643d8: 0xa6030242  sh          $v1, 0x242($s0)
    ctx->pc = 0x1643d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 578), (uint16_t)GPR_U32(ctx, 3));
    // 0x1643dc: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x1643dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x1643e0: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x1643e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x1643e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1643e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1643e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1643e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1643ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1643ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1643F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643ECu;
        // 0x1643f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1643ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1643F4u;
}
