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

// Function: entry_001d6398
// Address: 0x1d6398 - 0x1d63a8
void entry_001d6398_0x1d6398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6398_0x1d6398");
#endif

    switch (ctx->pc) {
        case 0x1d63a4u: goto label_1d63a4;
        default: break;
    }

    ctx->pc = 0x1d6398u;

    // 0x1d6398: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d639c: 0xc080664  jal         func_201990
    ctx->pc = 0x1D639Cu;
    SET_GPR_U32(ctx, 31, 0x1D63A4u);
    ctx->pc = 0x1D63A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D639Cu;
    // 0x1d63a0: 0x26c535d8  addiu       $a1, $s6, 0x35D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 13784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D639Cu, 0x1D63A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D63A4u;
label_1d63a4:
    // 0x1d63a4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d63a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->pc = 0x1d63a8u;
}
