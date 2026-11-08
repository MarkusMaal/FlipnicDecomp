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

// Function: entry_001b2570
// Address: 0x1b2570 - 0x1b25a8
void entry_001b2570_0x1b2570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2570_0x1b2570");
#endif

    switch (ctx->pc) {
        case 0x1b2578u: goto label_1b2578;
        default: break;
    }

    ctx->pc = 0x1b2570u;

    // 0x1b2570: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B2570u;
    SET_GPR_U32(ctx, 31, 0x1B2578u);
    ctx->pc = 0x1B2574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2570u;
    // 0x1b2574: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B2570u, 0x1B2578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2578u;
label_1b2578:
    // 0x1b2578: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2578u;
    {
        const bool branch_taken_0x1b2578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2578) {
            ctx->pc = 0x1B25D0u;
            return;
        }
    }
    ctx->pc = 0x1B2580u;
    // 0x1b2580: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b2580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2584: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b2584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b2588: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b2588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b258c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b258cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2590: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b2594: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2594u;
    {
        const bool branch_taken_0x1b2594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2594) {
            ctx->pc = 0x1B25A8u;
            return;
        }
    }
    ctx->pc = 0x1B259Cu;
    // 0x1b259c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b25a0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b25a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b25a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b25a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b25a8u;
}
