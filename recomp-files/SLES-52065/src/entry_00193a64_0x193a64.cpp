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

// Function: entry_00193a64
// Address: 0x193a64 - 0x193a90
void entry_00193a64_0x193a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193a64_0x193a64");
#endif

    switch (ctx->pc) {
        case 0x193a74u: goto label_193a74;
        case 0x193a88u: goto label_193a88;
        default: break;
    }

    ctx->pc = 0x193a64u;

label_193a64:
    // 0x193a64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193a68:
    // 0x193a68: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x193a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_193a6c:
    // 0x193a6c: 0x320f809  jalr        $t9
label_193a70:
    if (ctx->pc == 0x193A70u) {
        ctx->pc = 0x193A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A6Cu;
        // 0x193a70: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A74u;
        goto label_193a74;
    }
    ctx->pc = 0x193A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193A74u);
        ctx->pc = 0x193A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A6Cu;
        // 0x193a70: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A6Cu, 0x193A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193A74u;
label_193a74:
    // 0x193a74: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x193a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_193a78:
    // 0x193a78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193a7c:
    // 0x193a7c: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x193a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_193a80:
    // 0x193a80: 0x320f809  jalr        $t9
label_193a84:
    if (ctx->pc == 0x193A84u) {
        ctx->pc = 0x193A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A80u;
        // 0x193a84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A88u;
        goto label_193a88;
    }
    ctx->pc = 0x193A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193A88u);
        ctx->pc = 0x193A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A80u;
        // 0x193a84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A80u, 0x193A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193A88u;
label_193a88:
    // 0x193a88: 0x10000018  b           . + 4 + (0x18 << 2)
label_193a8c:
    if (ctx->pc == 0x193A8Cu) {
        ctx->pc = 0x193A90u;
        goto label_fallthrough_0x193a88;
    }
    ctx->pc = 0x193A88u;
    {
        const bool branch_taken_0x193a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a88) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
label_fallthrough_0x193a88:
    ctx->pc = 0x193A90u;
}
