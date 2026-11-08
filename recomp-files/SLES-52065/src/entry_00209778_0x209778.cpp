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

// Function: entry_00209778
// Address: 0x209778 - 0x20978c
void entry_00209778_0x209778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209778_0x209778");
#endif

    ctx->pc = 0x209778u;

    // 0x209778: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x209778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x20977c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20977Cu;
    {
        const bool branch_taken_0x20977c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20977c) {
            ctx->pc = 0x209780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20977Cu;
            // 0x209780: 0x91220002  lbu         $v0, 0x2($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20978Cu;
            return;
        }
    }
    ctx->pc = 0x209784u;
    // 0x209784: 0x3e00008  jr          $ra
    ctx->pc = 0x209784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209784u;
        // 0x209788: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20978Cu;
}
