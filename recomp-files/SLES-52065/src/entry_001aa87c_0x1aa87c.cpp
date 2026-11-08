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

// Function: entry_001aa87c
// Address: 0x1aa87c - 0x1aa8a8
void entry_001aa87c_0x1aa87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa87c_0x1aa87c");
#endif

    switch (ctx->pc) {
        case 0x1aa894u: goto label_1aa894;
        default: break;
    }

    ctx->pc = 0x1aa87cu;

label_1aa87c:
    // 0x1aa87c: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1aa87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_1aa880:
    // 0x1aa880: 0x8c440670  lw          $a0, 0x670($v0)
    ctx->pc = 0x1aa880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
label_1aa884:
    // 0x1aa884: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1aa884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1aa888:
    // 0x1aa888: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1aa888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1aa88c:
    // 0x1aa88c: 0x320f809  jalr        $t9
label_1aa890:
    if (ctx->pc == 0x1AA890u) {
        ctx->pc = 0x1AA894u;
        goto label_1aa894;
    }
    ctx->pc = 0x1AA88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA894u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA88Cu, 0x1AA894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA894u;
label_1aa894:
    // 0x1aa894: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1aa898:
    if (ctx->pc == 0x1AA898u) {
        ctx->pc = 0x1AA89Cu;
        goto label_1aa89c;
    }
    ctx->pc = 0x1AA894u;
    {
        const bool branch_taken_0x1aa894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa894) {
            ctx->pc = 0x1AA8A8u;
            return;
        }
    }
    ctx->pc = 0x1AA89Cu;
label_1aa89c:
    // 0x1aa89c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aa89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa8a0:
    // 0x1aa8a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1aa8a4:
    if (ctx->pc == 0x1AA8A4u) {
        ctx->pc = 0x1AA8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8A0u;
        // 0x1aa8a4: 0x2032004  sllv        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA8A8u;
        goto label_fallthrough_0x1aa8a0;
    }
    ctx->pc = 0x1AA8A0u;
    {
        const bool branch_taken_0x1aa8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8A0u;
        // 0x1aa8a4: 0x2032004  sllv        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8a0) {
            ctx->pc = 0x1AA8ACu;
            return;
        }
    }
label_fallthrough_0x1aa8a0:
    ctx->pc = 0x1AA8A8u;
}
