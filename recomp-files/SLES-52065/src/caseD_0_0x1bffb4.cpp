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

// Function: caseD_0
// Address: 0x1bffb4 - 0x1bffd4
void caseD_0_0x1bffb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1bffb4");
#endif

    switch (ctx->pc) {
        case 0x1bffccu: goto label_1bffcc;
        default: break;
    }

    ctx->pc = 0x1bffb4u;

    // 0x1bffb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bffb8: 0x16430006  bne         $s2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BFFB8u;
    {
        const bool branch_taken_0x1bffb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BFFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFB8u;
        // 0x1bffbc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffb8) {
            ctx->pc = 0x1BFFD4u;
            return;
        }
    }
    ctx->pc = 0x1BFFC0u;
    // 0x1bffc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bffc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bffc4: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1BFFC4u;
    SET_GPR_U32(ctx, 31, 0x1BFFCCu);
    ctx->pc = 0x1BFFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFFC4u;
    // 0x1bffc8: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1BFFC4u, 0x1BFFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFFCCu;
label_1bffcc:
    // 0x1bffcc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1BFFCCu;
    {
        const bool branch_taken_0x1bffcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFCCu;
        // 0x1bffd0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffcc) {
            ctx->pc = 0x1C00ECu;
            return;
        }
    }
    ctx->pc = 0x1BFFD4u;
}
