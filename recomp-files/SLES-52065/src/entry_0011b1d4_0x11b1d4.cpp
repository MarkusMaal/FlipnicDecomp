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

// Function: entry_0011b1d4
// Address: 0x11b1d4 - 0x11b210
void entry_0011b1d4_0x11b1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b1d4_0x11b1d4");
#endif

    switch (ctx->pc) {
        case 0x11b200u: goto label_11b200;
        default: break;
    }

    ctx->pc = 0x11b1d4u;

label_11b1d4:
    // 0x11b1d4: 0x0  nop
    ctx->pc = 0x11b1d4u;
    // NOP
    // 0x11b1d8: 0x0  nop
    ctx->pc = 0x11b1d8u;
    // NOP
    // 0x11b1dc: 0x0  nop
    ctx->pc = 0x11b1dcu;
    // NOP
    // 0x11b1e0: 0x0  nop
    ctx->pc = 0x11b1e0u;
    // NOP
    // 0x11b1e4: 0x0  nop
    ctx->pc = 0x11b1e4u;
    // NOP
    // 0x11b1e8: 0x1051fffa  beq         $v0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11B1E8u;
    {
        const bool branch_taken_0x11b1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x11b1e8) {
            ctx->pc = 0x11B1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b1d4;
        }
    }
    ctx->pc = 0x11B1F0u;
    // 0x11b1f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1f4: 0x262500f8  addiu       $a1, $s1, 0xF8
    ctx->pc = 0x11b1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
    // 0x11b1f8: 0xc046dc0  jal         func_11B700
    ctx->pc = 0x11B1F8u;
    SET_GPR_U32(ctx, 31, 0x11B200u);
    ctx->pc = 0x11B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B1F8u;
    // 0x11b1fc: 0xae2000fc  sw          $zero, 0xFC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B700u, 0x11B1F8u, 0x11B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B200u;
label_11b200:
    // 0x11b200: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B200u;
    {
        const bool branch_taken_0x11b200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b200) {
            ctx->pc = 0x11B210u;
            return;
        }
    }
    ctx->pc = 0x11B208u;
    // 0x11b208: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11B208u;
    SET_GPR_U32(ctx, 31, 0x11B210u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11B208u, 0x11B210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B210u;
}
