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

// Function: caseD_4
// Address: 0x109d6c - 0x109d98
void caseD_4_0x109d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x109d6c");
#endif

    switch (ctx->pc) {
        case 0x109d80u: goto label_109d80;
        case 0x109d90u: goto label_109d90;
        default: break;
    }

    ctx->pc = 0x109d6cu;

    // 0x109d6c: 0x86300002  lh          $s0, 0x2($s1)
    ctx->pc = 0x109d6cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x109d70: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x109d70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x109d74: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109d78: 0xc057040  jal         func_15C100
    ctx->pc = 0x109D78u;
    SET_GPR_U32(ctx, 31, 0x109D80u);
    ctx->pc = 0x109D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D78u;
    // 0x109d7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x109D78u, 0x109D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D80u;
label_109d80:
    // 0x109d80: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x109d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x109d84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x109d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d88: 0xc042360  jal         func_108D80
    ctx->pc = 0x109D88u;
    SET_GPR_U32(ctx, 31, 0x109D90u);
    ctx->pc = 0x109D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D88u;
    // 0x109d8c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108D80u, 0x109D88u, 0x109D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D90u;
label_109d90:
    // 0x109d90: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x109D90u;
    {
        const bool branch_taken_0x109d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109d90) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x109D98u;
}
