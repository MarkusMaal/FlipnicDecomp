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

// Function: entry_0013f460
// Address: 0x13f460 - 0x13f484
void entry_0013f460_0x13f460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f460_0x13f460");
#endif

    switch (ctx->pc) {
        case 0x13f474u: goto label_13f474;
        default: break;
    }

    ctx->pc = 0x13f460u;

    // 0x13f460: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x13f460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13f464: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13F464u;
    {
        const bool branch_taken_0x13f464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F464u;
        // 0x13f468: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f464) {
            ctx->pc = 0x13F484u;
            return;
        }
    }
    ctx->pc = 0x13F46Cu;
    // 0x13f46c: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x13F46Cu;
    SET_GPR_U32(ctx, 31, 0x13F474u);
    ctx->pc = 0x13F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F46Cu;
    // 0x13f470: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x13F46Cu, 0x13F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F474u;
label_13f474:
    // 0x13f474: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x13f474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x13f478: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13f478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f47c: 0xc04ff54  jal         func_13FD50
    ctx->pc = 0x13F47Cu;
    SET_GPR_U32(ctx, 31, 0x13F484u);
    ctx->pc = 0x13F480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F47Cu;
    // 0x13f480: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FD50u, 0x13F47Cu, 0x13F484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F484u;
}
