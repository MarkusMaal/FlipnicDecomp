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

// Function: entry_0014556c
// Address: 0x14556c - 0x145590
void entry_0014556c_0x14556c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014556c_0x14556c");
#endif

    switch (ctx->pc) {
        case 0x145580u: goto label_145580;
        default: break;
    }

    ctx->pc = 0x14556cu;

    // 0x14556c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x145570: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x145570u;
    {
        const bool branch_taken_0x145570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x145574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145570u;
        // 0x145574: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145570) {
            ctx->pc = 0x145590u;
            return;
        }
    }
    ctx->pc = 0x145578u;
    // 0x145578: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x145578u;
    SET_GPR_U32(ctx, 31, 0x145580u);
    ctx->pc = 0x14557Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145578u;
    // 0x14557c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x145578u, 0x145580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145580u;
label_145580:
    // 0x145580: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x145580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x145584: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x145584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145588: 0xc04ff54  jal         func_13FD50
    ctx->pc = 0x145588u;
    SET_GPR_U32(ctx, 31, 0x145590u);
    ctx->pc = 0x14558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145588u;
    // 0x14558c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FD50u, 0x145588u, 0x145590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145590u;
}
