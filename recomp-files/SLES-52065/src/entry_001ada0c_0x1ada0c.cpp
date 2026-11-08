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

// Function: entry_001ada0c
// Address: 0x1ada0c - 0x1ada24
void entry_001ada0c_0x1ada0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ada0c_0x1ada0c");
#endif

    switch (ctx->pc) {
        case 0x1ada14u: goto label_1ada14;
        default: break;
    }

    ctx->pc = 0x1ada0cu;

    // 0x1ada0c: 0xc062114  jal         func_188450
    ctx->pc = 0x1ADA0Cu;
    SET_GPR_U32(ctx, 31, 0x1ADA14u);
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1ADA0Cu, 0x1ADA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADA14u;
label_1ada14:
    // 0x1ada14: 0x253082a  slt         $at, $s2, $s3
    ctx->pc = 0x1ada14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1ada18: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADA18u;
    {
        const bool branch_taken_0x1ada18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA18u;
        // 0x1ada1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada18) {
            ctx->pc = 0x1ADA24u;
            return;
        }
    }
    ctx->pc = 0x1ADA20u;
    // 0x1ada20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ada20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ada24u;
}
