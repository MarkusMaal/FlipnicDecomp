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

// Function: entry_0019b274
// Address: 0x19b274 - 0x19b2a4
void entry_0019b274_0x19b274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b274_0x19b274");
#endif

    switch (ctx->pc) {
        case 0x19b29cu: goto label_19b29c;
        default: break;
    }

    ctx->pc = 0x19b274u;

    // 0x19b274: 0x0  nop
    ctx->pc = 0x19b274u;
    // NOP
    // 0x19b278: 0x8e220328  lw          $v0, 0x328($s1)
    ctx->pc = 0x19b278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x19b27c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B27Cu;
    {
        const bool branch_taken_0x19b27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19b27c) {
            ctx->pc = 0x19B2A4u;
            return;
        }
    }
    ctx->pc = 0x19B284u;
    // 0x19b284: 0x8c820704  lw          $v0, 0x704($a0)
    ctx->pc = 0x19b284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1796)));
    // 0x19b288: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B288u;
    {
        const bool branch_taken_0x19b288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B288u;
        // 0x19b28c: 0x24930704  addiu       $s3, $a0, 0x704 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1796));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b288) {
            ctx->pc = 0x19B2A4u;
            return;
        }
    }
    ctx->pc = 0x19B290u;
    // 0x19b290: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x19b290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x19b294: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x19B294u;
    SET_GPR_U32(ctx, 31, 0x19B29Cu);
    ctx->pc = 0x19B298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B294u;
    // 0x19b298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x19B294u, 0x19B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B29Cu;
label_19b29c:
    // 0x19b29c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b2a0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x19b2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x19b2a4u;
}
