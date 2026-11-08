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

// Function: entry_001ed534
// Address: 0x1ed534 - 0x1ed54c
void entry_001ed534_0x1ed534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed534_0x1ed534");
#endif

    switch (ctx->pc) {
        case 0x1ed53cu: goto label_1ed53c;
        case 0x1ed544u: goto label_1ed544;
        default: break;
    }

    ctx->pc = 0x1ed534u;

    // 0x1ed534: 0xc082520  jal         func_209480
    ctx->pc = 0x1ED534u;
    SET_GPR_U32(ctx, 31, 0x1ED53Cu);
    ctx->pc = 0x1ED538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED534u;
    // 0x1ed538: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x1ED534u, 0x1ED53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED53Cu;
label_1ed53c:
    // 0x1ed53c: 0xc07b3cc  jal         func_1ECF30
    ctx->pc = 0x1ED53Cu;
    SET_GPR_U32(ctx, 31, 0x1ED544u);
    ctx->pc = 0x1ED540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED53Cu;
    // 0x1ed540: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECF30u, 0x1ED53Cu, 0x1ED544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED544u;
label_1ed544:
    // 0x1ed544: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1ED544u;
    {
        const bool branch_taken_0x1ed544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED544u;
        // 0x1ed548: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed544) {
            ctx->pc = 0x1ED640u;
            return;
        }
    }
    ctx->pc = 0x1ED54Cu;
}
