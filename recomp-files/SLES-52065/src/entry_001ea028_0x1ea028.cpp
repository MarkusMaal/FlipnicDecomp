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

// Function: entry_001ea028
// Address: 0x1ea028 - 0x1ea040
void entry_001ea028_0x1ea028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea028_0x1ea028");
#endif

    switch (ctx->pc) {
        case 0x1ea034u: goto label_1ea034;
        default: break;
    }

    ctx->pc = 0x1ea028u;

    // 0x1ea028: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ea028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea02c: 0xc07aba0  jal         func_1EAE80
    ctx->pc = 0x1EA02Cu;
    SET_GPR_U32(ctx, 31, 0x1EA034u);
    ctx->pc = 0x1EA030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA02Cu;
    // 0x1ea030: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAE80u, 0x1EA02Cu, 0x1EA034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA034u;
label_1ea034:
    // 0x1ea034: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1ea034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1ea038: 0x1060ffee  beqz        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1EA038u;
    {
        const bool branch_taken_0x1ea038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea038) {
            ctx->pc = 0x1E9FF4u;
            return;
        }
    }
    ctx->pc = 0x1EA040u;
}
