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

// Function: entry_001d5fe8
// Address: 0x1d5fe8 - 0x1d6008
void entry_001d5fe8_0x1d5fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5fe8_0x1d5fe8");
#endif

    switch (ctx->pc) {
        case 0x1d5ff8u: goto label_1d5ff8;
        default: break;
    }

    ctx->pc = 0x1d5fe8u;

label_1d5fe8:
    // 0x1d5fe8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d5fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d5fec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d5fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d5ff0: 0xc077440  jal         func_1DD100
    ctx->pc = 0x1D5FF0u;
    SET_GPR_U32(ctx, 31, 0x1D5FF8u);
    ctx->pc = 0x1D5FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FF0u;
    // 0x1d5ff4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD100u, 0x1D5FF0u, 0x1D5FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FF8u;
label_1d5ff8:
    // 0x1d5ff8: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5FF8u;
    {
        const bool branch_taken_0x1d5ff8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d5ff8) {
            ctx->pc = 0x1D5FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5FF8u;
            // 0x1d5ffc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5fe8;
        }
    }
    ctx->pc = 0x1D6000u;
    // 0x1d6000: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1D6000u;
    {
        const bool branch_taken_0x1d6000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6000) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D6008u;
}
