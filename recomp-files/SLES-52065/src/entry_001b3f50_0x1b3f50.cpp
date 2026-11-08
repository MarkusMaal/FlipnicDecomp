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

// Function: entry_001b3f50
// Address: 0x1b3f50 - 0x1b3f88
void entry_001b3f50_0x1b3f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3f50_0x1b3f50");
#endif

    switch (ctx->pc) {
        case 0x1b3f5cu: goto label_1b3f5c;
        default: break;
    }

    ctx->pc = 0x1b3f50u;

label_1b3f50:
    // 0x1b3f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f54: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B3F54u;
    SET_GPR_U32(ctx, 31, 0x1B3F5Cu);
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B3F54u, 0x1B3F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F5Cu;
label_1b3f5c:
    // 0x1b3f5c: 0x0  nop
    ctx->pc = 0x1b3f5cu;
    // NOP
    // 0x1b3f60: 0x0  nop
    ctx->pc = 0x1b3f60u;
    // NOP
    // 0x1b3f64: 0x0  nop
    ctx->pc = 0x1b3f64u;
    // NOP
    // 0x1b3f68: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B3F68u;
    {
        const bool branch_taken_0x1b3f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f68) {
            ctx->pc = 0x1B3F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3f50;
        }
    }
    ctx->pc = 0x1B3F70u;
    // 0x1b3f70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b3f74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3F74u;
    {
        const bool branch_taken_0x1b3f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f74) {
            ctx->pc = 0x1B3F88u;
            return;
        }
    }
    ctx->pc = 0x1B3F7Cu;
    // 0x1b3f7c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1b3f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1b3f80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3F80u;
    {
        const bool branch_taken_0x1b3f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f80) {
            ctx->pc = 0x1B3F9Cu;
            return;
        }
    }
    ctx->pc = 0x1B3F88u;
}
