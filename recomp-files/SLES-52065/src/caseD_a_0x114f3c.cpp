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

// Function: caseD_a
// Address: 0x114f3c - 0x114f7c
void caseD_a_0x114f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x114f3c");
#endif

    switch (ctx->pc) {
        case 0x114f3cu: goto label_114f3c;
        case 0x114f40u: goto label_114f40;
        case 0x114f44u: goto label_114f44;
        case 0x114f48u: goto label_114f48;
        case 0x114f4cu: goto label_114f4c;
        case 0x114f50u: goto label_114f50;
        case 0x114f54u: goto label_114f54;
        case 0x114f58u: goto label_114f58;
        case 0x114f5cu: goto label_114f5c;
        case 0x114f60u: goto label_114f60;
        case 0x114f64u: goto label_114f64;
        case 0x114f68u: goto label_114f68;
        case 0x114f6cu: goto label_114f6c;
        case 0x114f70u: goto label_114f70;
        case 0x114f74u: goto label_114f74;
        case 0x114f78u: goto label_114f78;
        default: break;
    }

    ctx->pc = 0x114f3cu;

label_114f3c:
    // 0x114f3c: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x114f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_114f40:
    // 0x114f40: 0x90420086  lbu         $v0, 0x86($v0)
    ctx->pc = 0x114f40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_114f44:
    // 0x114f44: 0x1040030e  beqz        $v0, . + 4 + (0x30E << 2)
label_114f48:
    if (ctx->pc == 0x114F48u) {
        ctx->pc = 0x114F4Cu;
        goto label_114f4c;
    }
    ctx->pc = 0x114F44u;
    {
        const bool branch_taken_0x114f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114f44) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x114F4Cu;
label_114f4c:
    // 0x114f4c: 0x938282a0  lbu         $v0, -0x7D60($gp)
    ctx->pc = 0x114f4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935200)));
label_114f50:
    // 0x114f50: 0x27a3012c  addiu       $v1, $sp, 0x12C
    ctx->pc = 0x114f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_114f54:
    // 0x114f54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114f58:
    // 0x114f58: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114f58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114f5c:
    // 0x114f5c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114f60:
    // 0x114f60: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x114f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_114f64:
    // 0x114f64: 0x320f809  jalr        $t9
label_114f68:
    if (ctx->pc == 0x114F68u) {
        ctx->pc = 0x114F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F64u;
        // 0x114f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F6Cu;
        goto label_114f6c;
    }
    ctx->pc = 0x114F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114F6Cu);
        ctx->pc = 0x114F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F64u;
        // 0x114f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114F64u, 0x114F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114F6Cu;
label_114f6c:
    // 0x114f6c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x114f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114f70:
    // 0x114f70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114f74:
    // 0x114f74: 0x10000302  b           . + 4 + (0x302 << 2)
label_114f78:
    if (ctx->pc == 0x114F78u) {
        ctx->pc = 0x114F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F74u;
        // 0x114f78: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114F7Cu;
        goto label_fallthrough_0x114f74;
    }
    ctx->pc = 0x114F74u;
    {
        const bool branch_taken_0x114f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F74u;
        // 0x114f78: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f74) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
label_fallthrough_0x114f74:
    ctx->pc = 0x114F7Cu;
}
