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

// Function: entry_00109a44
// Address: 0x109a44 - 0x109a78
void entry_00109a44_0x109a44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109a44_0x109a44");
#endif

    switch (ctx->pc) {
        case 0x109a70u: goto label_109a70;
        default: break;
    }

    ctx->pc = 0x109a44u;

label_109a44:
    // 0x109a44: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x109a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_109a48:
    // 0x109a48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x109a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_109a4c:
    // 0x109a4c: 0x84830228  lh          $v1, 0x228($a0)
    ctx->pc = 0x109a4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 552)));
label_109a50:
    // 0x109a50: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_109a54:
    if (ctx->pc == 0x109A54u) {
        ctx->pc = 0x109A58u;
        goto label_109a58;
    }
    ctx->pc = 0x109A50u;
    {
        const bool branch_taken_0x109a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x109a50) {
            ctx->pc = 0x109A78u;
            return;
        }
    }
    ctx->pc = 0x109A58u;
label_109a58:
    // 0x109a58: 0x8c84023c  lw          $a0, 0x23C($a0)
    ctx->pc = 0x109a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 572)));
label_109a5c:
    // 0x109a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x109a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109a60:
    // 0x109a60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x109a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_109a64:
    // 0x109a64: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x109a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_109a68:
    // 0x109a68: 0x320f809  jalr        $t9
label_109a6c:
    if (ctx->pc == 0x109A6Cu) {
        ctx->pc = 0x109A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A68u;
        // 0x109a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109A70u;
        goto label_109a70;
    }
    ctx->pc = 0x109A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109A70u);
        ctx->pc = 0x109A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A68u;
        // 0x109a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109A68u, 0x109A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109A70u;
label_109a70:
    // 0x109a70: 0x10000012  b           . + 4 + (0x12 << 2)
label_109a74:
    if (ctx->pc == 0x109A74u) {
        ctx->pc = 0x109A78u;
        goto label_fallthrough_0x109a70;
    }
    ctx->pc = 0x109A70u;
    {
        const bool branch_taken_0x109a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109a70) {
            ctx->pc = 0x109ABCu;
            return;
        }
    }
label_fallthrough_0x109a70:
    ctx->pc = 0x109A78u;
}
