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

// Function: entry_001a1380
// Address: 0x1a1380 - 0x1a13a4
void entry_001a1380_0x1a1380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1380_0x1a1380");
#endif

    switch (ctx->pc) {
        case 0x1a1398u: goto label_1a1398;
        default: break;
    }

    ctx->pc = 0x1a1380u;

    // 0x1a1380: 0x8e830c7c  lw          $v1, 0xC7C($s4)
    ctx->pc = 0x1a1380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3196)));
    // 0x1a1384: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1a1384u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a1388: 0x1460021e  bnez        $v1, . + 4 + (0x21E << 2)
    ctx->pc = 0x1A1388u;
    {
        const bool branch_taken_0x1a1388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1388) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A1390u;
    // 0x1a1390: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A1390u;
    SET_GPR_U32(ctx, 31, 0x1A1398u);
    ctx->pc = 0x1A1394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1390u;
    // 0x1a1394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A1390u, 0x1A1398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1398u;
label_1a1398:
    // 0x1a1398: 0x1000021a  b           . + 4 + (0x21A << 2)
    ctx->pc = 0x1A1398u;
    {
        const bool branch_taken_0x1a1398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1398) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A13A0u;
    // 0x1a13a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a13a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a13a4u;
}
