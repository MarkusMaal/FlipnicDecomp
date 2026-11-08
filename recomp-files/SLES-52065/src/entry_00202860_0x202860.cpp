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

// Function: entry_00202860
// Address: 0x202860 - 0x202884
void entry_00202860_0x202860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202860_0x202860");
#endif

    switch (ctx->pc) {
        case 0x202880u: goto label_202880;
        default: break;
    }

    ctx->pc = 0x202860u;

    // 0x202860: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x202860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x202864: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x202864u;
    {
        const bool branch_taken_0x202864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202864u;
        // 0x202868: 0x26435060  addiu       $v1, $s2, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 20576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202864) {
            ctx->pc = 0x202884u;
            return;
        }
    }
    ctx->pc = 0x20286Cu;
    // 0x20286c: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x20286cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x202870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x202870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202874: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202878: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202878u;
    SET_GPR_U32(ctx, 31, 0x202880u);
    ctx->pc = 0x20287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202878u;
    // 0x20287c: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202878u, 0x202880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202880u;
label_202880:
    // 0x202880: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202884u;
}
