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

// Function: caseD_9
// Address: 0x114e5c - 0x114ea0
void caseD_9_0x114e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x114e5c");
#endif

    switch (ctx->pc) {
        case 0x114e5cu: goto label_114e5c;
        case 0x114e60u: goto label_114e60;
        case 0x114e64u: goto label_114e64;
        case 0x114e68u: goto label_114e68;
        case 0x114e6cu: goto label_114e6c;
        case 0x114e70u: goto label_114e70;
        case 0x114e74u: goto label_114e74;
        case 0x114e78u: goto label_114e78;
        case 0x114e7cu: goto label_114e7c;
        case 0x114e80u: goto label_114e80;
        case 0x114e84u: goto label_114e84;
        case 0x114e88u: goto label_114e88;
        case 0x114e8cu: goto label_114e8c;
        case 0x114e90u: goto label_114e90;
        case 0x114e94u: goto label_114e94;
        case 0x114e98u: goto label_114e98;
        case 0x114e9cu: goto label_114e9c;
        default: break;
    }

    ctx->pc = 0x114e5cu;

label_114e5c:
    // 0x114e5c: 0x93828298  lbu         $v0, -0x7D68($gp)
    ctx->pc = 0x114e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935192)));
label_114e60:
    // 0x114e60: 0x27a30124  addiu       $v1, $sp, 0x124
    ctx->pc = 0x114e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_114e64:
    // 0x114e64: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114e68:
    // 0x114e68: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114e6c:
    // 0x114e6c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x114e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_114e70:
    // 0x114e70: 0x320f809  jalr        $t9
label_114e74:
    if (ctx->pc == 0x114E74u) {
        ctx->pc = 0x114E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E70u;
        // 0x114e74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E78u;
        goto label_114e78;
    }
    ctx->pc = 0x114E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114E78u);
        ctx->pc = 0x114E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E70u;
        // 0x114e74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114E70u, 0x114E78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114E78u;
label_114e78:
    // 0x114e78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_114e7c:
    if (ctx->pc == 0x114E7Cu) {
        ctx->pc = 0x114E80u;
        goto label_114e80;
    }
    ctx->pc = 0x114E78u;
    {
        const bool branch_taken_0x114e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114e78) {
            ctx->pc = 0x114EA0u;
            return;
        }
    }
    ctx->pc = 0x114E80u;
label_114e80:
    // 0x114e80: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114e84:
    // 0x114e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114e88:
    // 0x114e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114e8c:
    // 0x114e8c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114e90:
    // 0x114e90: 0x320f809  jalr        $t9
label_114e94:
    if (ctx->pc == 0x114E94u) {
        ctx->pc = 0x114E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E90u;
        // 0x114e94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E98u;
        goto label_114e98;
    }
    ctx->pc = 0x114E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114E98u);
        ctx->pc = 0x114E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E90u;
        // 0x114e94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114E90u, 0x114E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114E98u;
label_114e98:
    // 0x114e98: 0x10000002  b           . + 4 + (0x2 << 2)
label_114e9c:
    if (ctx->pc == 0x114E9Cu) {
        ctx->pc = 0x114E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E98u;
        // 0x114e9c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x114EA0u;
        goto label_fallthrough_0x114e98;
    }
    ctx->pc = 0x114E98u;
    {
        const bool branch_taken_0x114e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E98u;
        // 0x114e9c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e98) {
            ctx->pc = 0x114EA4u;
            return;
        }
    }
label_fallthrough_0x114e98:
    ctx->pc = 0x114EA0u;
}
