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

// Function: entry_00193a38
// Address: 0x193a38 - 0x193a64
void entry_00193a38_0x193a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193a38_0x193a38");
#endif

    switch (ctx->pc) {
        case 0x193a48u: goto label_193a48;
        case 0x193a5cu: goto label_193a5c;
        default: break;
    }

    ctx->pc = 0x193a38u;

label_193a38:
    // 0x193a38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193a3c:
    // 0x193a3c: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x193a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_193a40:
    // 0x193a40: 0x320f809  jalr        $t9
label_193a44:
    if (ctx->pc == 0x193A44u) {
        ctx->pc = 0x193A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A40u;
        // 0x193a44: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A48u;
        goto label_193a48;
    }
    ctx->pc = 0x193A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193A48u);
        ctx->pc = 0x193A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A40u;
        // 0x193a44: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A40u, 0x193A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193A48u;
label_193a48:
    // 0x193a48: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x193a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_193a4c:
    // 0x193a4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193a50:
    // 0x193a50: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x193a50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_193a54:
    // 0x193a54: 0x320f809  jalr        $t9
label_193a58:
    if (ctx->pc == 0x193A58u) {
        ctx->pc = 0x193A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A54u;
        // 0x193a58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A5Cu;
        goto label_193a5c;
    }
    ctx->pc = 0x193A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193A5Cu);
        ctx->pc = 0x193A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A54u;
        // 0x193a58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A54u, 0x193A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193A5Cu;
label_193a5c:
    // 0x193a5c: 0x10000023  b           . + 4 + (0x23 << 2)
label_193a60:
    if (ctx->pc == 0x193A60u) {
        ctx->pc = 0x193A64u;
        goto label_fallthrough_0x193a5c;
    }
    ctx->pc = 0x193A5Cu;
    {
        const bool branch_taken_0x193a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a5c) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
label_fallthrough_0x193a5c:
    ctx->pc = 0x193A64u;
}
