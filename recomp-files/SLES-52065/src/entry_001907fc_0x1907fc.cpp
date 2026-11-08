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

// Function: entry_001907fc
// Address: 0x1907fc - 0x190820
void entry_001907fc_0x1907fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001907fc_0x1907fc");
#endif

    ctx->pc = 0x1907fcu;

    // 0x1907fc: 0x0  nop
    ctx->pc = 0x1907fcu;
    // NOP
    // 0x190800: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x190800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x190804: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x190804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x190808: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x190808u;
    {
        const bool branch_taken_0x190808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190808u;
        // 0x19080c: 0xc81821  addu        $v1, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190808) {
            ctx->pc = 0x1907B8u;
            return;
        }
    }
    ctx->pc = 0x190810u;
    // 0x190810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x190810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190818: 0x3e00008  jr          $ra
    ctx->pc = 0x190818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190818u;
        // 0x19081c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190820u;
}
