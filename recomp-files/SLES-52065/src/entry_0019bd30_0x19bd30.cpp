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

// Function: entry_0019bd30
// Address: 0x19bd30 - 0x19bd80
void entry_0019bd30_0x19bd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bd30_0x19bd30");
#endif

    switch (ctx->pc) {
        case 0x19bd40u: goto label_19bd40;
        default: break;
    }

    ctx->pc = 0x19bd30u;

    // 0x19bd30: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x19bd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x19bd34: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x19bd34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x19bd38: 0xc057040  jal         func_15C100
    ctx->pc = 0x19BD38u;
    SET_GPR_U32(ctx, 31, 0x19BD40u);
    ctx->pc = 0x19BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD38u;
    // 0x19bd3c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19BD38u, 0x19BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD40u;
label_19bd40:
    // 0x19bd40: 0x8e240824  lw          $a0, 0x824($s1)
    ctx->pc = 0x19bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2084)));
    // 0x19bd44: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x19bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x19bd48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19bd4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19bd50: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x19bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x19bd54: 0xac620828  sw          $v0, 0x828($v1)
    ctx->pc = 0x19bd54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2088), GPR_U32(ctx, 2));
    // 0x19bd58: 0x8e230824  lw          $v1, 0x824($s1)
    ctx->pc = 0x19bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2084)));
    // 0x19bd5c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x19bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19bd60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19bd64: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19bd68: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19bd6c: 0xac520830  sw          $s2, 0x830($v0)
    ctx->pc = 0x19bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2096), GPR_U32(ctx, 18));
    // 0x19bd70: 0x8e220824  lw          $v0, 0x824($s1)
    ctx->pc = 0x19bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2084)));
    // 0x19bd74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19bd78: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x19BD78u;
    {
        const bool branch_taken_0x19bd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD78u;
        // 0x19bd7c: 0xae220824  sw          $v0, 0x824($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd78) {
            ctx->pc = 0x19BDE4u;
            return;
        }
    }
    ctx->pc = 0x19BD80u;
}
