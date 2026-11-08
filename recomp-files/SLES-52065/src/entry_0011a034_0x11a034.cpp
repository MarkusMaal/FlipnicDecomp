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

// Function: entry_0011a034
// Address: 0x11a034 - 0x11a074
void entry_0011a034_0x11a034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a034_0x11a034");
#endif

    switch (ctx->pc) {
        case 0x11a068u: goto label_11a068;
        default: break;
    }

    ctx->pc = 0x11a034u;

label_11a034:
    // 0x11a034: 0x8f8283f0  lw          $v0, -0x7C10($gp)
    ctx->pc = 0x11a034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x11a038: 0x0  nop
    ctx->pc = 0x11a038u;
    // NOP
    // 0x11a03c: 0x0  nop
    ctx->pc = 0x11a03cu;
    // NOP
    // 0x11a040: 0x0  nop
    ctx->pc = 0x11a040u;
    // NOP
    // 0x11a044: 0x0  nop
    ctx->pc = 0x11a044u;
    // NOP
    // 0x11a048: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A048u;
    {
        const bool branch_taken_0x11a048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a048) {
            ctx->pc = 0x11A034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a034;
        }
    }
    ctx->pc = 0x11A050u;
    // 0x11a050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a054: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11a054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a058: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11a058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a05c: 0xaf8083f0  sw          $zero, -0x7C10($gp)
    ctx->pc = 0x11a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935536), GPR_U32(ctx, 0));
    // 0x11a060: 0xc07bf80  jal         func_1EFE00
    ctx->pc = 0x11A060u;
    SET_GPR_U32(ctx, 31, 0x11A068u);
    ctx->pc = 0x11A064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A060u;
    // 0x11a064: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE00u, 0x11A060u, 0x11A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A068u;
label_11a068:
    // 0x11a068: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x11a068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a06c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x11A06Cu;
    {
        const bool branch_taken_0x11a06c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a06c) {
            ctx->pc = 0x11A0A4u;
            return;
        }
    }
    ctx->pc = 0x11A074u;
}
