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

// Function: caseD_3
// Address: 0x109c74 - 0x109cb4
void caseD_3_0x109c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x109c74");
#endif

    switch (ctx->pc) {
        case 0x109c74u: goto label_109c74;
        case 0x109c78u: goto label_109c78;
        case 0x109c7cu: goto label_109c7c;
        case 0x109c80u: goto label_109c80;
        case 0x109c84u: goto label_109c84;
        case 0x109c88u: goto label_109c88;
        case 0x109c8cu: goto label_109c8c;
        case 0x109c90u: goto label_109c90;
        case 0x109c94u: goto label_109c94;
        case 0x109c98u: goto label_109c98;
        case 0x109c9cu: goto label_109c9c;
        case 0x109ca0u: goto label_109ca0;
        case 0x109ca4u: goto label_109ca4;
        case 0x109ca8u: goto label_109ca8;
        case 0x109cacu: goto label_109cac;
        case 0x109cb0u: goto label_109cb0;
        default: break;
    }

    ctx->pc = 0x109c74u;

label_109c74:
    // 0x109c74: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x109c74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_109c78:
    // 0x109c78: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109c7c:
    // 0x109c7c: 0xc057040  jal         func_15C100
label_109c80:
    if (ctx->pc == 0x109C80u) {
        ctx->pc = 0x109C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C7Cu;
        // 0x109c80: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109C84u;
        goto label_109c84;
    }
    ctx->pc = 0x109C7Cu;
    SET_GPR_U32(ctx, 31, 0x109C84u);
    ctx->pc = 0x109C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C7Cu;
    // 0x109c80: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x109C7Cu, 0x109C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C84u;
label_109c84:
    // 0x109c84: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109c88:
    // 0x109c88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_109c8c:
    // 0x109c8c: 0x86250006  lh          $a1, 0x6($s1)
    ctx->pc = 0x109c8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_109c90:
    // 0x109c90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109c94:
    // 0x109c94: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x109c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_109c98:
    // 0x109c98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x109c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_109c9c:
    // 0x109c9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x109c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_109ca0:
    // 0x109ca0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x109ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_109ca4:
    // 0x109ca4: 0x320f809  jalr        $t9
label_109ca8:
    if (ctx->pc == 0x109CA8u) {
        ctx->pc = 0x109CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CA4u;
        // 0x109ca8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109CACu;
        goto label_109cac;
    }
    ctx->pc = 0x109CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109CACu);
        ctx->pc = 0x109CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CA4u;
        // 0x109ca8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109CA4u, 0x109CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109CACu;
label_109cac:
    // 0x109cac: 0x10000150  b           . + 4 + (0x150 << 2)
label_109cb0:
    if (ctx->pc == 0x109CB0u) {
        ctx->pc = 0x109CB4u;
        goto label_fallthrough_0x109cac;
    }
    ctx->pc = 0x109CACu;
    {
        const bool branch_taken_0x109cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109cac) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
label_fallthrough_0x109cac:
    ctx->pc = 0x109CB4u;
}
