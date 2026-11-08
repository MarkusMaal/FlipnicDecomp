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

// Function: entry_001bcc98
// Address: 0x1bcc98 - 0x1bccb0
void entry_001bcc98_0x1bcc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcc98_0x1bcc98");
#endif

    ctx->pc = 0x1bcc98u;

    // 0x1bcc98: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1bcc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1bcc9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcca0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BCCA0u;
    {
        const bool branch_taken_0x1bcca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bcca0) {
            ctx->pc = 0x1BCC90u;
            return;
        }
    }
    ctx->pc = 0x1BCCA8u;
    // 0x1bcca8: 0xc06f490  jal         func_1BD240
    ctx->pc = 0x1BCCA8u;
    SET_GPR_U32(ctx, 31, 0x1BCCB0u);
    ctx->pc = 0x1BCCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCCA8u;
    // 0x1bccac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD240u, 0x1BCCA8u, 0x1BCCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCCB0u;
}
