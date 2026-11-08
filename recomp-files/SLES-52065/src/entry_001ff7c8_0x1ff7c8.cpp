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

// Function: entry_001ff7c8
// Address: 0x1ff7c8 - 0x1ff7e0
void entry_001ff7c8_0x1ff7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff7c8_0x1ff7c8");
#endif

    ctx->pc = 0x1ff7c8u;

    // 0x1ff7c8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1ff7c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff7cc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1ff7ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff7d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF7D0u;
    {
        const bool branch_taken_0x1ff7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7D0u;
        // 0x1ff7d4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff7d0) {
            ctx->pc = 0x1FF7E0u;
            return;
        }
    }
    ctx->pc = 0x1FF7D8u;
    // 0x1ff7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7D8u;
        // 0x1ff7dc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF7E0u;
}
