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

// Function: entry_001c2530
// Address: 0x1c2530 - 0x1c2564
void entry_001c2530_0x1c2530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2530_0x1c2530");
#endif

    switch (ctx->pc) {
        case 0x1c2544u: goto label_1c2544;
        default: break;
    }

    ctx->pc = 0x1c2530u;

    // 0x1c2530: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1c2530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1c2534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2538: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c2538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c253c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C253Cu;
    SET_GPR_U32(ctx, 31, 0x1C2544u);
    ctx->pc = 0x1C2540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C253Cu;
    // 0x1c2540: 0xae220254  sw          $v0, 0x254($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C253Cu, 0x1C2544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2544u;
label_1c2544:
    // 0x1c2544: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2544u;
    {
        const bool branch_taken_0x1c2544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2544u;
        // 0x1c2548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2544) {
            ctx->pc = 0x1C2574u;
            return;
        }
    }
    ctx->pc = 0x1C254Cu;
    // 0x1c254c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1c254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1c2550: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2550u;
    {
        const bool branch_taken_0x1c2550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2550u;
        // 0x1c2554: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2550) {
            ctx->pc = 0x1C2564u;
            return;
        }
    }
    ctx->pc = 0x1C2558u;
    // 0x1c2558: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c2558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c255c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C255Cu;
    {
        const bool branch_taken_0x1c255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C255Cu;
        // 0x1c2560: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c255c) {
            ctx->pc = 0x1C2570u;
            return;
        }
    }
    ctx->pc = 0x1C2564u;
}
