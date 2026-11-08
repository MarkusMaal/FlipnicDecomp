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

// Function: caseD_4
// Address: 0x1c5dc4 - 0x1c5de8
void caseD_4_0x1c5dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1c5dc4");
#endif

    switch (ctx->pc) {
        case 0x1c5ddcu: goto label_1c5ddc;
        default: break;
    }

    ctx->pc = 0x1c5dc4u;

    // 0x1c5dc4: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x1c5dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1c5dc8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c5dcc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5DCCu;
    {
        const bool branch_taken_0x1c5dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5dcc) {
            ctx->pc = 0x1C5DE8u;
            return;
        }
    }
    ctx->pc = 0x1C5DD4u;
    // 0x1c5dd4: 0xc04d988  jal         func_136620
    ctx->pc = 0x1C5DD4u;
    SET_GPR_U32(ctx, 31, 0x1C5DDCu);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1C5DD4u, 0x1C5DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DDCu;
label_1c5ddc:
    // 0x1c5ddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5de0: 0xc04db48  jal         func_136D20
    ctx->pc = 0x1C5DE0u;
    SET_GPR_U32(ctx, 31, 0x1C5DE8u);
    ctx->pc = 0x1C5DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5DE0u;
    // 0x1c5de4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D20u, 0x1C5DE0u, 0x1C5DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DE8u;
}
