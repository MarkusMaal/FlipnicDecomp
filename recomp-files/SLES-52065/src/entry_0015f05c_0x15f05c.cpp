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

// Function: entry_0015f05c
// Address: 0x15f05c - 0x15f094
void entry_0015f05c_0x15f05c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f05c_0x15f05c");
#endif

    ctx->pc = 0x15f05cu;

label_15f05c:
    // 0x15f05c: 0x0  nop
    ctx->pc = 0x15f05cu;
    // NOP
label_15f060:
    // 0x15f060: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x15f060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_15f064:
    // 0x15f064: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x15f064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15f068:
    // 0x15f068: 0x8c643cd8  lw          $a0, 0x3CD8($v1)
    ctx->pc = 0x15f068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_15f06c:
    // 0x15f06c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x15f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_15f070:
    // 0x15f070: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x15f070u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15f074:
    // 0x15f074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f078:
    // 0x15f078: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15f078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_15f07c:
    // 0x15f07c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_15f080:
    // 0x15f080: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x15f080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_15f084:
    // 0x15f084: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15f084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15f088:
    // 0x15f088: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x15f088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_15f08c:
    // 0x15f08c: 0x320f809  jalr        $t9
label_15f090:
    if (ctx->pc == 0x15F090u) {
        ctx->pc = 0x15F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F08Cu;
        // 0x15f090: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F094u;
        goto label_fallthrough_0x15f08c;
    }
    ctx->pc = 0x15F08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F094u);
        ctx->pc = 0x15F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F08Cu;
        // 0x15f090: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F08Cu, 0x15F094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15f08c:
    ctx->pc = 0x15F094u;
}
