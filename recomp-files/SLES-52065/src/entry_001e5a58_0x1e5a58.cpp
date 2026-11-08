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

// Function: entry_001e5a58
// Address: 0x1e5a58 - 0x1e5ac4
void entry_001e5a58_0x1e5a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5a58_0x1e5a58");
#endif

    switch (ctx->pc) {
        case 0x1e5a90u: goto label_1e5a90;
        default: break;
    }

    ctx->pc = 0x1e5a58u;

label_1e5a58:
    // 0x1e5a58: 0x26850028  addiu       $a1, $s4, 0x28
    ctx->pc = 0x1e5a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_1e5a5c:
    // 0x1e5a5c: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1e5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1e5a60:
    // 0x1e5a60: 0x903021  addu        $a2, $a0, $s0
    ctx->pc = 0x1e5a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1e5a64:
    // 0x1e5a64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e5a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e5a68:
    // 0x1e5a68: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e5a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e5a6c:
    // 0x1e5a6c: 0x913821  addu        $a3, $a0, $s1
    ctx->pc = 0x1e5a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1e5a70:
    // 0x1e5a70: 0x27a80074  addiu       $t0, $sp, 0x74
    ctx->pc = 0x1e5a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_1e5a74:
    // 0x1e5a74: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x1e5a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_1e5a78:
    // 0x1e5a78: 0x27a9007f  addiu       $t1, $sp, 0x7F
    ctx->pc = 0x1e5a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
label_1e5a7c:
    // 0x1e5a7c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1e5a7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e5a80:
    // 0x1e5a80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5a84:
    // 0x1e5a84: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e5a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e5a88:
    // 0x1e5a88: 0x320f809  jalr        $t9
label_1e5a8c:
    if (ctx->pc == 0x1E5A8Cu) {
        ctx->pc = 0x1E5A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A88u;
        // 0x1e5a8c: 0x27ab0078  addiu       $t3, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A90u;
        goto label_1e5a90;
    }
    ctx->pc = 0x1E5A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5A90u);
        ctx->pc = 0x1E5A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A88u;
        // 0x1e5a8c: 0x27ab0078  addiu       $t3, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5A88u, 0x1E5A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5A90u;
label_1e5a90:
    // 0x1e5a90: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e5a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e5a94:
    // 0x1e5a94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e5a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e5a98:
    // 0x1e5a98: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1e5a9c:
    if (ctx->pc == 0x1E5A9Cu) {
        ctx->pc = 0x1E5AA0u;
        goto label_1e5aa0;
    }
    ctx->pc = 0x1E5A98u;
    {
        const bool branch_taken_0x1e5a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a98) {
            ctx->pc = 0x1E5AE0u;
            return;
        }
    }
    ctx->pc = 0x1E5AA0u;
label_1e5aa0:
    // 0x1e5aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5aa4:
    // 0x1e5aa4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1e5aa8:
    if (ctx->pc == 0x1E5AA8u) {
        ctx->pc = 0x1E5AACu;
        goto label_1e5aac;
    }
    ctx->pc = 0x1E5AA4u;
    {
        const bool branch_taken_0x1e5aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5aa4) {
            ctx->pc = 0x1E5AD0u;
            return;
        }
    }
    ctx->pc = 0x1E5AACu;
label_1e5aac:
    // 0x1e5aac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1e5ab0:
    if (ctx->pc == 0x1E5AB0u) {
        ctx->pc = 0x1E5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AACu;
        // 0x1e5ab0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5AB4u;
        goto label_1e5ab4;
    }
    ctx->pc = 0x1E5AACu;
    {
        const bool branch_taken_0x1e5aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AACu;
        // 0x1e5ab0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5aac) {
            ctx->pc = 0x1E5AD0u;
            return;
        }
    }
    ctx->pc = 0x1E5AB4u;
label_1e5ab4:
    // 0x1e5ab4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1e5ab8:
    if (ctx->pc == 0x1E5AB8u) {
        ctx->pc = 0x1E5ABCu;
        goto label_1e5abc;
    }
    ctx->pc = 0x1E5AB4u;
    {
        const bool branch_taken_0x1e5ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5ab4) {
            ctx->pc = 0x1E5AC4u;
            return;
        }
    }
    ctx->pc = 0x1E5ABCu;
label_1e5abc:
    // 0x1e5abc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e5ac0:
    if (ctx->pc == 0x1E5AC0u) {
        ctx->pc = 0x1E5AC4u;
        goto label_fallthrough_0x1e5abc;
    }
    ctx->pc = 0x1E5ABCu;
    {
        const bool branch_taken_0x1e5abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5abc) {
            ctx->pc = 0x1E5AECu;
            return;
        }
    }
label_fallthrough_0x1e5abc:
    ctx->pc = 0x1E5AC4u;
}
