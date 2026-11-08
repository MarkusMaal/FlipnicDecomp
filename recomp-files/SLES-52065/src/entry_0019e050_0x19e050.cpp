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

// Function: entry_0019e050
// Address: 0x19e050 - 0x19e078
void entry_0019e050_0x19e050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e050_0x19e050");
#endif

    switch (ctx->pc) {
        case 0x19e070u: goto label_19e070;
        default: break;
    }

    ctx->pc = 0x19e050u;

    // 0x19e050: 0x8ea30670  lw          $v1, 0x670($s5)
    ctx->pc = 0x19e050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x19e054: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x19e054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19e058: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x19E058u;
    {
        const bool branch_taken_0x19e058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E058u;
        // 0x19e05c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e058) {
            ctx->pc = 0x19DFD4u;
            return;
        }
    }
    ctx->pc = 0x19E060u;
    // 0x19e060: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x19E060u;
    {
        const bool branch_taken_0x19e060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e060) {
            ctx->pc = 0x19E09Cu;
            return;
        }
    }
    ctx->pc = 0x19E068u;
    // 0x19e068: 0xc063e24  jal         func_18F890
    ctx->pc = 0x19E068u;
    SET_GPR_U32(ctx, 31, 0x19E070u);
    ctx->pc = 0x19E06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E068u;
    // 0x19e06c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F890u, 0x19E068u, 0x19E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E070u;
label_19e070:
    // 0x19e070: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19E070u;
    {
        const bool branch_taken_0x19e070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e070) {
            ctx->pc = 0x19E09Cu;
            return;
        }
    }
    ctx->pc = 0x19E078u;
}
