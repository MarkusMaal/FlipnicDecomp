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

// Function: entry_00122918
// Address: 0x122918 - 0x122938
void entry_00122918_0x122918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122918_0x122918");
#endif

    switch (ctx->pc) {
        case 0x122924u: goto label_122924;
        default: break;
    }

    ctx->pc = 0x122918u;

    // 0x122918: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x122918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12291c: 0xc048bfc  jal         func_122FF0
    ctx->pc = 0x12291Cu;
    SET_GPR_U32(ctx, 31, 0x122924u);
    ctx->pc = 0x122920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12291Cu;
    // 0x122920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FF0u, 0x12291Cu, 0x122924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122924u;
label_122924:
    // 0x122924: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x122924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x122928: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x122928u;
    {
        const bool branch_taken_0x122928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122928u;
        // 0x12292c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122928) {
            ctx->pc = 0x122938u;
            return;
        }
    }
    ctx->pc = 0x122930u;
    // 0x122930: 0xc04619c  jal         func_118670
    ctx->pc = 0x122930u;
    SET_GPR_U32(ctx, 31, 0x122938u);
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x122930u, 0x122938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122938u;
}
