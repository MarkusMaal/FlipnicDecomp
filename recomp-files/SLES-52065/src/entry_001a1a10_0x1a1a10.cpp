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

// Function: entry_001a1a10
// Address: 0x1a1a10 - 0x1a1ab4
void entry_001a1a10_0x1a1a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1a10_0x1a1a10");
#endif

    switch (ctx->pc) {
        case 0x1a1a1cu: goto label_1a1a1c;
        case 0x1a1a54u: goto label_1a1a54;
        case 0x1a1a7cu: goto label_1a1a7c;
        case 0x1a1aa8u: goto label_1a1aa8;
        default: break;
    }

    ctx->pc = 0x1a1a10u;

label_1a1a10:
    // 0x1a1a10: 0x8e850698  lw          $a1, 0x698($s4)
    ctx->pc = 0x1a1a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1688)));
label_1a1a14:
    // 0x1a1a14: 0xc068358  jal         func_1A0D60
label_1a1a18:
    if (ctx->pc == 0x1A1A18u) {
        ctx->pc = 0x1A1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A14u;
        // 0x1a1a18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1A1Cu;
        goto label_1a1a1c;
    }
    ctx->pc = 0x1A1A14u;
    SET_GPR_U32(ctx, 31, 0x1A1A1Cu);
    ctx->pc = 0x1A1A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A14u;
    // 0x1a1a18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D60u, 0x1A1A14u, 0x1A1A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A1Cu;
label_1a1a1c:
    // 0x1a1a1c: 0x8e8309d8  lw          $v1, 0x9D8($s4)
    ctx->pc = 0x1a1a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2520)));
label_1a1a20:
    // 0x1a1a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a1a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1a24:
    // 0x1a1a24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1a1a24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1a1a28:
    // 0x1a1a28: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x1a1a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_1a1a2c:
    // 0x1a1a2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a1a30:
    // 0x1a1a30: 0xae830688  sw          $v1, 0x688($s4)
    ctx->pc = 0x1a1a30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 3));
label_1a1a34:
    // 0x1a1a34: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x1a1a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
label_1a1a38:
    // 0x1a1a38: 0x1c600072  bgtz        $v1, . + 4 + (0x72 << 2)
label_1a1a3c:
    if (ctx->pc == 0x1A1A3Cu) {
        ctx->pc = 0x1A1A40u;
        goto label_1a1a40;
    }
    ctx->pc = 0x1A1A38u;
    {
        const bool branch_taken_0x1a1a38 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a1a38) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A1A40u;
label_1a1a40:
    // 0x1a1a40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a1a40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a1a44:
    // 0x1a1a44: 0x268408c0  addiu       $a0, $s4, 0x8C0
    ctx->pc = 0x1a1a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2240));
label_1a1a48:
    // 0x1a1a48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1a4c:
    // 0x1a1a4c: 0xc069994  jal         func_1A6650
label_1a1a50:
    if (ctx->pc == 0x1A1A50u) {
        ctx->pc = 0x1A1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A4Cu;
        // 0x1a1a50: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1A54u;
        goto label_1a1a54;
    }
    ctx->pc = 0x1A1A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A1A54u);
    ctx->pc = 0x1A1A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A4Cu;
    // 0x1a1a50: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6650u, 0x1A1A4Cu, 0x1A1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A54u;
label_1a1a54:
    // 0x1a1a54: 0xa280068c  sb          $zero, 0x68C($s4)
    ctx->pc = 0x1a1a54u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1676), (uint8_t)GPR_U32(ctx, 0));
label_1a1a58:
    // 0x1a1a58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a1a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a1a5c:
    // 0x1a1a5c: 0x8e8209d0  lw          $v0, 0x9D0($s4)
    ctx->pc = 0x1a1a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2512)));
label_1a1a60:
    // 0x1a1a60: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1a1a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a1a64:
    // 0x1a1a64: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1a1a64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1a1a68:
    // 0x1a1a68: 0x8e8209d4  lw          $v0, 0x9D4($s4)
    ctx->pc = 0x1a1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2516)));
label_1a1a6c:
    // 0x1a1a6c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1a1a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1a1a70:
    // 0x1a1a70: 0x8e8209d8  lw          $v0, 0x9D8($s4)
    ctx->pc = 0x1a1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2520)));
label_1a1a74:
    // 0x1a1a74: 0xc063e08  jal         func_18F820
label_1a1a78:
    if (ctx->pc == 0x1A1A78u) {
        ctx->pc = 0x1A1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A74u;
        // 0x1a1a78: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1A7Cu;
        goto label_1a1a7c;
    }
    ctx->pc = 0x1A1A74u;
    SET_GPR_U32(ctx, 31, 0x1A1A7Cu);
    ctx->pc = 0x1A1A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A74u;
    // 0x1a1a78: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A1A74u, 0x1A1A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A7Cu;
label_1a1a7c:
    // 0x1a1a7c: 0x8e830c78  lw          $v1, 0xC78($s4)
    ctx->pc = 0x1a1a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3192)));
label_1a1a80:
    // 0x1a1a80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a1a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1a84:
    // 0x1a1a84: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a1a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a1a88:
    // 0x1a1a88: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a1a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a1a8c:
    // 0x1a1a8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a1a90:
    // 0x1a1a90: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a1a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a1a94:
    // 0x1a1a94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a1a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1a98:
    // 0x1a1a98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a1a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a1a9c:
    // 0x1a1a9c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a1a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a1aa0:
    // 0x1a1aa0: 0x320f809  jalr        $t9
label_1a1aa4:
    if (ctx->pc == 0x1A1AA4u) {
        ctx->pc = 0x1A1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AA0u;
        // 0x1a1aa4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AA8u;
        goto label_1a1aa8;
    }
    ctx->pc = 0x1A1AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A1AA8u);
        ctx->pc = 0x1A1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AA0u;
        // 0x1a1aa4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1AA0u, 0x1A1AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1AA8u;
label_1a1aa8:
    // 0x1a1aa8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a1aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a1aac:
    // 0x1a1aac: 0x10000055  b           . + 4 + (0x55 << 2)
label_1a1ab0:
    if (ctx->pc == 0x1A1AB0u) {
        ctx->pc = 0x1A1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AACu;
        // 0x1a1ab0: 0xae830c7c  sw          $v1, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AB4u;
        goto label_fallthrough_0x1a1aac;
    }
    ctx->pc = 0x1A1AACu;
    {
        const bool branch_taken_0x1a1aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AACu;
        // 0x1a1ab0: 0xae830c7c  sw          $v1, 0xC7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1aac) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
label_fallthrough_0x1a1aac:
    ctx->pc = 0x1A1AB4u;
}
