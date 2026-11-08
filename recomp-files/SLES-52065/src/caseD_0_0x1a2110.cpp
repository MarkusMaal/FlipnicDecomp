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

// Function: caseD_0
// Address: 0x1a2110 - 0x1a2144
void caseD_0_0x1a2110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1a2110");
#endif

    switch (ctx->pc) {
        case 0x1a2110u: goto label_1a2110;
        case 0x1a2114u: goto label_1a2114;
        case 0x1a2118u: goto label_1a2118;
        case 0x1a211cu: goto label_1a211c;
        case 0x1a2120u: goto label_1a2120;
        case 0x1a2124u: goto label_1a2124;
        case 0x1a2128u: goto label_1a2128;
        case 0x1a212cu: goto label_1a212c;
        case 0x1a2130u: goto label_1a2130;
        case 0x1a2134u: goto label_1a2134;
        case 0x1a2138u: goto label_1a2138;
        case 0x1a213cu: goto label_1a213c;
        case 0x1a2140u: goto label_1a2140;
        default: break;
    }

    ctx->pc = 0x1a2110u;

label_1a2110:
    // 0x1a2110: 0x8e830c78  lw          $v1, 0xC78($s4)
    ctx->pc = 0x1a2110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3192)));
label_1a2114:
    // 0x1a2114: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a2114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a2118:
    // 0x1a2118: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a2118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a211c:
    // 0x1a211c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a211cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a2120:
    // 0x1a2120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a2120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a2124:
    // 0x1a2124: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a2124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a2128:
    // 0x1a2128: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a2128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a212c:
    // 0x1a212c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a212cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a2130:
    // 0x1a2130: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a2130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a2134:
    // 0x1a2134: 0x320f809  jalr        $t9
label_1a2138:
    if (ctx->pc == 0x1A2138u) {
        ctx->pc = 0x1A2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2134u;
        // 0x1a2138: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A213Cu;
        goto label_1a213c;
    }
    ctx->pc = 0x1A2134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A213Cu);
        ctx->pc = 0x1A2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2134u;
        // 0x1a2138: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2134u, 0x1A213Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A213Cu;
label_1a213c:
    // 0x1a213c: 0x10000023  b           . + 4 + (0x23 << 2)
label_1a2140:
    if (ctx->pc == 0x1A2140u) {
        ctx->pc = 0x1A2140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A213Cu;
        // 0x1a2140: 0xae800c7c  sw          $zero, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2144u;
        goto label_fallthrough_0x1a213c;
    }
    ctx->pc = 0x1A213Cu;
    {
        const bool branch_taken_0x1a213c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A213Cu;
        // 0x1a2140: 0xae800c7c  sw          $zero, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a213c) {
            ctx->pc = 0x1A21CCu;
            return;
        }
    }
label_fallthrough_0x1a213c:
    ctx->pc = 0x1A2144u;
}
