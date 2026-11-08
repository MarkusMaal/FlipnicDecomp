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

// Function: entry_001b7414
// Address: 0x1b7414 - 0x1b7430
void entry_001b7414_0x1b7414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7414_0x1b7414");
#endif

    ctx->pc = 0x1b7414u;

    // 0x1b7414: 0x0  nop
    ctx->pc = 0x1b7414u;
    // NOP
    // 0x1b7418: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x1b7418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b741c: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x1b741cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b7420: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7420u;
    {
        const bool branch_taken_0x1b7420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7420) {
            ctx->pc = 0x1B7430u;
            return;
        }
    }
    ctx->pc = 0x1B7428u;
    // 0x1b7428: 0xc06f8f4  jal         func_1BE3D0
    ctx->pc = 0x1B7428u;
    SET_GPR_U32(ctx, 31, 0x1B7430u);
    ctx->pc = 0x1B742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7428u;
    // 0x1b742c: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3D0u, 0x1B7428u, 0x1B7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7430u;
}
