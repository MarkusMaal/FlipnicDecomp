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

// Function: entry_0013cc0c
// Address: 0x13cc0c - 0x13cc28
void entry_0013cc0c_0x13cc0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cc0c_0x13cc0c");
#endif

    switch (ctx->pc) {
        case 0x13cc18u: goto label_13cc18;
        default: break;
    }

    ctx->pc = 0x13cc0cu;

    // 0x13cc0c: 0x0  nop
    ctx->pc = 0x13cc0cu;
    // NOP
    // 0x13cc10: 0xc04f7a4  jal         func_13DE90
    ctx->pc = 0x13CC10u;
    SET_GPR_U32(ctx, 31, 0x13CC18u);
    ctx->pc = 0x13CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC10u;
    // 0x13cc14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE90u, 0x13CC10u, 0x13CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC18u;
label_13cc18:
    // 0x13cc18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cc1c: 0xa2a30055  sb          $v1, 0x55($s5)
    ctx->pc = 0x13cc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 3));
    // 0x13cc20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13CC20u;
    {
        const bool branch_taken_0x13cc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC20u;
        // 0x13cc24: 0x8eb001d0  lw          $s0, 0x1D0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc20) {
            ctx->pc = 0x13CC34u;
            return;
        }
    }
    ctx->pc = 0x13CC28u;
}
