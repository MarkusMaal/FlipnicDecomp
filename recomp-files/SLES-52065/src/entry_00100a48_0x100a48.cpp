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

// Function: entry_00100a48
// Address: 0x100a48 - 0x100abc
void entry_00100a48_0x100a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100a48_0x100a48");
#endif

    switch (ctx->pc) {
        case 0x100a8cu: goto label_100a8c;
        case 0x100ab0u: goto label_100ab0;
        default: break;
    }

    ctx->pc = 0x100a48u;

label_100a48:
    // 0x100a48: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x100a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_100a4c:
    // 0x100a4c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x100a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_100a50:
    // 0x100a50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x100a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_100a54:
    // 0x100a54: 0x8c722cd8  lw          $s2, 0x2CD8($v1)
    ctx->pc = 0x100a54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_100a58:
    // 0x100a58: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x100a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_100a5c:
    // 0x100a5c: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
label_100a60:
    if (ctx->pc == 0x100A60u) {
        ctx->pc = 0x100A64u;
        goto label_100a64;
    }
    ctx->pc = 0x100A5Cu;
    {
        const bool branch_taken_0x100a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x100a5c) {
            ctx->pc = 0x100C3Cu;
            return;
        }
    }
    ctx->pc = 0x100A64u;
label_100a64:
    // 0x100a64: 0x924301d3  lbu         $v1, 0x1D3($s2)
    ctx->pc = 0x100a64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 467)));
label_100a68:
    // 0x100a68: 0x14600074  bnez        $v1, . + 4 + (0x74 << 2)
label_100a6c:
    if (ctx->pc == 0x100A6Cu) {
        ctx->pc = 0x100A70u;
        goto label_100a70;
    }
    ctx->pc = 0x100A68u;
    {
        const bool branch_taken_0x100a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x100a68) {
            ctx->pc = 0x100C3Cu;
            return;
        }
    }
    ctx->pc = 0x100A70u;
label_100a70:
    // 0x100a70: 0x8e540004  lw          $s4, 0x4($s2)
    ctx->pc = 0x100a70u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_100a74:
    // 0x100a74: 0x12800071  beqz        $s4, . + 4 + (0x71 << 2)
label_100a78:
    if (ctx->pc == 0x100A78u) {
        ctx->pc = 0x100A7Cu;
        goto label_100a7c;
    }
    ctx->pc = 0x100A74u;
    {
        const bool branch_taken_0x100a74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x100a74) {
            ctx->pc = 0x100C3Cu;
            return;
        }
    }
    ctx->pc = 0x100A7Cu;
label_100a7c:
    // 0x100a7c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100a80:
    // 0x100a80: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x100a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_100a84:
    // 0x100a84: 0x320f809  jalr        $t9
label_100a88:
    if (ctx->pc == 0x100A88u) {
        ctx->pc = 0x100A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A84u;
        // 0x100a88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100A8Cu;
        goto label_100a8c;
    }
    ctx->pc = 0x100A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100A8Cu);
        ctx->pc = 0x100A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A84u;
        // 0x100a88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100A84u, 0x100A8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100A8Cu;
label_100a8c:
    // 0x100a8c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_100a90:
    if (ctx->pc == 0x100A90u) {
        ctx->pc = 0x100A94u;
        goto label_100a94;
    }
    ctx->pc = 0x100A8Cu;
    {
        const bool branch_taken_0x100a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100a8c) {
            ctx->pc = 0x100BA0u;
            return;
        }
    }
    ctx->pc = 0x100A94u;
label_100a94:
    // 0x100a94: 0x9242007a  lbu         $v0, 0x7A($s2)
    ctx->pc = 0x100a94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 122)));
label_100a98:
    // 0x100a98: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_100a9c:
    if (ctx->pc == 0x100A9Cu) {
        ctx->pc = 0x100AA0u;
        goto label_100aa0;
    }
    ctx->pc = 0x100A98u;
    {
        const bool branch_taken_0x100a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100a98) {
            ctx->pc = 0x100ABCu;
            return;
        }
    }
    ctx->pc = 0x100AA0u;
label_100aa0:
    // 0x100aa0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100aa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100aa4:
    // 0x100aa4: 0x8f3900f0  lw          $t9, 0xF0($t9)
    ctx->pc = 0x100aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
label_100aa8:
    // 0x100aa8: 0x320f809  jalr        $t9
label_100aac:
    if (ctx->pc == 0x100AACu) {
        ctx->pc = 0x100AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AA8u;
        // 0x100aac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100AB0u;
        goto label_100ab0;
    }
    ctx->pc = 0x100AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100AB0u);
        ctx->pc = 0x100AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AA8u;
        // 0x100aac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100AA8u, 0x100AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100AB0u;
label_100ab0:
    // 0x100ab0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100ab4:
    // 0x100ab4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_100ab8:
    if (ctx->pc == 0x100AB8u) {
        ctx->pc = 0x100ABCu;
        goto label_fallthrough_0x100ab4;
    }
    ctx->pc = 0x100AB4u;
    {
        const bool branch_taken_0x100ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x100ab4) {
            ctx->pc = 0x100AE0u;
            return;
        }
    }
label_fallthrough_0x100ab4:
    ctx->pc = 0x100ABCu;
}
