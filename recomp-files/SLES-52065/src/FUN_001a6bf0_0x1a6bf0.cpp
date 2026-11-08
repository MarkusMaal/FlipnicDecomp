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

// Function: FUN_001a6bf0
// Address: 0x1a6bf0 - 0x1a6dcc
void FUN_001a6bf0_0x1a6bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6bf0_0x1a6bf0");
#endif

    switch (ctx->pc) {
        case 0x1a6bf0u: goto label_1a6bf0;
        case 0x1a6bf4u: goto label_1a6bf4;
        case 0x1a6bf8u: goto label_1a6bf8;
        case 0x1a6bfcu: goto label_1a6bfc;
        case 0x1a6c00u: goto label_1a6c00;
        case 0x1a6c04u: goto label_1a6c04;
        case 0x1a6c08u: goto label_1a6c08;
        case 0x1a6c0cu: goto label_1a6c0c;
        case 0x1a6c10u: goto label_1a6c10;
        case 0x1a6c14u: goto label_1a6c14;
        case 0x1a6c18u: goto label_1a6c18;
        case 0x1a6c1cu: goto label_1a6c1c;
        case 0x1a6c20u: goto label_1a6c20;
        case 0x1a6c24u: goto label_1a6c24;
        case 0x1a6c28u: goto label_1a6c28;
        case 0x1a6c2cu: goto label_1a6c2c;
        case 0x1a6c30u: goto label_1a6c30;
        case 0x1a6c34u: goto label_1a6c34;
        case 0x1a6c38u: goto label_1a6c38;
        case 0x1a6c3cu: goto label_1a6c3c;
        case 0x1a6c40u: goto label_1a6c40;
        case 0x1a6c44u: goto label_1a6c44;
        case 0x1a6c48u: goto label_1a6c48;
        case 0x1a6c4cu: goto label_1a6c4c;
        case 0x1a6c50u: goto label_1a6c50;
        case 0x1a6c54u: goto label_1a6c54;
        case 0x1a6c58u: goto label_1a6c58;
        case 0x1a6c5cu: goto label_1a6c5c;
        case 0x1a6c60u: goto label_1a6c60;
        case 0x1a6c64u: goto label_1a6c64;
        case 0x1a6c68u: goto label_1a6c68;
        case 0x1a6c6cu: goto label_1a6c6c;
        case 0x1a6c70u: goto label_1a6c70;
        case 0x1a6c74u: goto label_1a6c74;
        case 0x1a6c78u: goto label_1a6c78;
        case 0x1a6c7cu: goto label_1a6c7c;
        case 0x1a6c80u: goto label_1a6c80;
        case 0x1a6c84u: goto label_1a6c84;
        case 0x1a6c88u: goto label_1a6c88;
        case 0x1a6c8cu: goto label_1a6c8c;
        case 0x1a6c90u: goto label_1a6c90;
        case 0x1a6c94u: goto label_1a6c94;
        case 0x1a6c98u: goto label_1a6c98;
        case 0x1a6c9cu: goto label_1a6c9c;
        case 0x1a6ca0u: goto label_1a6ca0;
        case 0x1a6ca4u: goto label_1a6ca4;
        case 0x1a6ca8u: goto label_1a6ca8;
        case 0x1a6cacu: goto label_1a6cac;
        case 0x1a6cb0u: goto label_1a6cb0;
        case 0x1a6cb4u: goto label_1a6cb4;
        case 0x1a6cb8u: goto label_1a6cb8;
        case 0x1a6cbcu: goto label_1a6cbc;
        case 0x1a6cc0u: goto label_1a6cc0;
        case 0x1a6cc4u: goto label_1a6cc4;
        case 0x1a6cc8u: goto label_1a6cc8;
        case 0x1a6cccu: goto label_1a6ccc;
        case 0x1a6cd0u: goto label_1a6cd0;
        case 0x1a6cd4u: goto label_1a6cd4;
        case 0x1a6cd8u: goto label_1a6cd8;
        case 0x1a6cdcu: goto label_1a6cdc;
        case 0x1a6ce0u: goto label_1a6ce0;
        case 0x1a6ce4u: goto label_1a6ce4;
        case 0x1a6ce8u: goto label_1a6ce8;
        case 0x1a6cecu: goto label_1a6cec;
        case 0x1a6cf0u: goto label_1a6cf0;
        case 0x1a6cf4u: goto label_1a6cf4;
        case 0x1a6cf8u: goto label_1a6cf8;
        case 0x1a6cfcu: goto label_1a6cfc;
        case 0x1a6d00u: goto label_1a6d00;
        case 0x1a6d04u: goto label_1a6d04;
        case 0x1a6d08u: goto label_1a6d08;
        case 0x1a6d0cu: goto label_1a6d0c;
        case 0x1a6d10u: goto label_1a6d10;
        case 0x1a6d14u: goto label_1a6d14;
        case 0x1a6d18u: goto label_1a6d18;
        case 0x1a6d1cu: goto label_1a6d1c;
        case 0x1a6d20u: goto label_1a6d20;
        case 0x1a6d24u: goto label_1a6d24;
        case 0x1a6d28u: goto label_1a6d28;
        case 0x1a6d2cu: goto label_1a6d2c;
        case 0x1a6d30u: goto label_1a6d30;
        case 0x1a6d34u: goto label_1a6d34;
        case 0x1a6d38u: goto label_1a6d38;
        case 0x1a6d3cu: goto label_1a6d3c;
        case 0x1a6d40u: goto label_1a6d40;
        case 0x1a6d44u: goto label_1a6d44;
        case 0x1a6d48u: goto label_1a6d48;
        case 0x1a6d4cu: goto label_1a6d4c;
        case 0x1a6d50u: goto label_1a6d50;
        case 0x1a6d54u: goto label_1a6d54;
        case 0x1a6d58u: goto label_1a6d58;
        case 0x1a6d5cu: goto label_1a6d5c;
        case 0x1a6d60u: goto label_1a6d60;
        case 0x1a6d64u: goto label_1a6d64;
        case 0x1a6d68u: goto label_1a6d68;
        case 0x1a6d6cu: goto label_1a6d6c;
        case 0x1a6d70u: goto label_1a6d70;
        case 0x1a6d74u: goto label_1a6d74;
        case 0x1a6d78u: goto label_1a6d78;
        case 0x1a6d7cu: goto label_1a6d7c;
        case 0x1a6d80u: goto label_1a6d80;
        case 0x1a6d84u: goto label_1a6d84;
        case 0x1a6d88u: goto label_1a6d88;
        case 0x1a6d8cu: goto label_1a6d8c;
        case 0x1a6d90u: goto label_1a6d90;
        case 0x1a6d94u: goto label_1a6d94;
        case 0x1a6d98u: goto label_1a6d98;
        case 0x1a6d9cu: goto label_1a6d9c;
        case 0x1a6da0u: goto label_1a6da0;
        case 0x1a6da4u: goto label_1a6da4;
        case 0x1a6da8u: goto label_1a6da8;
        case 0x1a6dacu: goto label_1a6dac;
        case 0x1a6db0u: goto label_1a6db0;
        case 0x1a6db4u: goto label_1a6db4;
        case 0x1a6db8u: goto label_1a6db8;
        case 0x1a6dbcu: goto label_1a6dbc;
        case 0x1a6dc0u: goto label_1a6dc0;
        case 0x1a6dc4u: goto label_1a6dc4;
        case 0x1a6dc8u: goto label_1a6dc8;
        default: break;
    }

    ctx->pc = 0x1a6bf0u;

label_1a6bf0:
    // 0x1a6bf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a6bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a6bf4:
    // 0x1a6bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a6bf8:
    // 0x1a6bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a6bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a6bfc:
    // 0x1a6bfc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6c00:
    // 0x1a6c00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a6c04:
    if (ctx->pc == 0x1A6C04u) {
        ctx->pc = 0x1A6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C00u;
        // 0x1a6c04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C08u;
        goto label_1a6c08;
    }
    ctx->pc = 0x1A6C00u;
    {
        const bool branch_taken_0x1a6c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C00u;
        // 0x1a6c04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c00) {
            ctx->pc = 0x1A6C10u;
            goto label_1a6c10;
        }
    }
    ctx->pc = 0x1A6C08u;
label_1a6c08:
    // 0x1a6c08: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1a6c0c:
    if (ctx->pc == 0x1A6C0Cu) {
        ctx->pc = 0x1A6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C08u;
        // 0x1a6c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C10u;
        goto label_1a6c10;
    }
    ctx->pc = 0x1A6C08u;
    {
        const bool branch_taken_0x1a6c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C08u;
        // 0x1a6c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c08) {
            ctx->pc = 0x1A6DBCu;
            goto label_1a6dbc;
        }
    }
    ctx->pc = 0x1A6C10u;
label_1a6c10:
    // 0x1a6c10: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x1a6c10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
label_1a6c14:
    // 0x1a6c14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6c18:
    // 0x1a6c18: 0xc04c6d8  jal         func_131B60
label_1a6c1c:
    if (ctx->pc == 0x1A6C1Cu) {
        ctx->pc = 0x1A6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C18u;
        // 0x1a6c1c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C20u;
        goto label_1a6c20;
    }
    ctx->pc = 0x1A6C18u;
    SET_GPR_U32(ctx, 31, 0x1A6C20u);
    ctx->pc = 0x1A6C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C18u;
    // 0x1a6c1c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B60u, 0x1A6C18u, 0x1A6C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C20u;
label_1a6c20:
    // 0x1a6c20: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1a6c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6c24:
    // 0x1a6c24: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1a6c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1a6c28:
    // 0x1a6c28: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1a6c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1a6c2c:
    // 0x1a6c2c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a6c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a6c30:
    // 0x1a6c30: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1a6c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6c34:
    // 0x1a6c34: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1a6c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1a6c38:
    // 0x1a6c38: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1a6c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6c3c:
    // 0x1a6c3c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1a6c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1a6c40:
    // 0x1a6c40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6c44:
    // 0x1a6c44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6c48:
    // 0x1a6c48: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1a6c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1a6c4c:
    // 0x1a6c4c: 0x320f809  jalr        $t9
label_1a6c50:
    if (ctx->pc == 0x1A6C50u) {
        ctx->pc = 0x1A6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C4Cu;
        // 0x1a6c50: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C54u;
        goto label_1a6c54;
    }
    ctx->pc = 0x1A6C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6C54u);
        ctx->pc = 0x1A6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C4Cu;
        // 0x1a6c50: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6C4Cu, 0x1A6C54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6C54u;
label_1a6c54:
    // 0x1a6c54: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1a6c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a6c58:
    // 0x1a6c58: 0x2c810007  sltiu       $at, $a0, 0x7
    ctx->pc = 0x1a6c58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1a6c5c:
    // 0x1a6c5c: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
label_1a6c60:
    if (ctx->pc == 0x1A6C60u) {
        ctx->pc = 0x1A6C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C5Cu;
        // 0x1a6c60: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C64u;
        goto label_1a6c64;
    }
    ctx->pc = 0x1A6C5Cu;
    {
        const bool branch_taken_0x1a6c5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C5Cu;
        // 0x1a6c60: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c5c) {
            ctx->pc = 0x1A6DB4u;
            goto label_1a6db4;
        }
    }
    ctx->pc = 0x1A6C64u;
label_1a6c64:
    // 0x1a6c64: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a6c68:
    // 0x1a6c68: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x1a6c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
label_1a6c6c:
    // 0x1a6c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a6c70:
    // 0x1a6c70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a6c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6c74:
    // 0x1a6c74: 0x400008  jr          $v0
label_1a6c78:
    if (ctx->pc == 0x1A6C78u) {
        ctx->pc = 0x1A6C7Cu;
        goto label_1a6c7c;
    }
    ctx->pc = 0x1A6C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6C7Cu: goto label_1a6c7c;
            case 0x1A6CB4u: goto label_1a6cb4;
            case 0x1A6CF4u: goto label_1a6cf4;
            case 0x1A6CFCu: goto label_1a6cfc;
            case 0x1A6D28u: goto label_1a6d28;
            case 0x1A6D4Cu: goto label_1a6d4c;
            case 0x1A6D78u: goto label_1a6d78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6C74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A6C7Cu;
label_1a6c7c:
    // 0x1a6c7c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6c80:
    // 0x1a6c80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6c84:
    // 0x1a6c84: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a6c84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a6c88:
    // 0x1a6c88: 0x320f809  jalr        $t9
label_1a6c8c:
    if (ctx->pc == 0x1A6C8Cu) {
        ctx->pc = 0x1A6C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C88u;
        // 0x1a6c8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C90u;
        goto label_1a6c90;
    }
    ctx->pc = 0x1A6C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6C90u);
        ctx->pc = 0x1A6C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C88u;
        // 0x1a6c8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6C88u, 0x1A6C90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6C90u;
label_1a6c90:
    // 0x1a6c90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6c94:
    // 0x1a6c94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6c98:
    // 0x1a6c98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6c98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6c9c:
    // 0x1a6c9c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a6c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a6ca0:
    // 0x1a6ca0: 0x320f809  jalr        $t9
label_1a6ca4:
    if (ctx->pc == 0x1A6CA4u) {
        ctx->pc = 0x1A6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CA0u;
        // 0x1a6ca4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6CA8u;
        goto label_1a6ca8;
    }
    ctx->pc = 0x1A6CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6CA8u);
        ctx->pc = 0x1A6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CA0u;
        // 0x1a6ca4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6CA0u, 0x1A6CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6CA8u;
label_1a6ca8:
    // 0x1a6ca8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a6ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a6cac:
    // 0x1a6cac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6cb0:
    // 0x1a6cb0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a6cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1a6cb4:
    // 0x1a6cb4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6cb8:
    // 0x1a6cb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6cbc:
    // 0x1a6cbc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a6cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a6cc0:
    // 0x1a6cc0: 0x320f809  jalr        $t9
label_1a6cc4:
    if (ctx->pc == 0x1A6CC4u) {
        ctx->pc = 0x1A6CC8u;
        goto label_1a6cc8;
    }
    ctx->pc = 0x1A6CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6CC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6CC0u, 0x1A6CC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6CC8u;
label_1a6cc8:
    // 0x1a6cc8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1a6ccc:
    if (ctx->pc == 0x1A6CCCu) {
        ctx->pc = 0x1A6CD0u;
        goto label_1a6cd0;
    }
    ctx->pc = 0x1A6CC8u;
    {
        const bool branch_taken_0x1a6cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6cc8) {
            ctx->pc = 0x1A6DB4u;
            goto label_1a6db4;
        }
    }
    ctx->pc = 0x1A6CD0u;
label_1a6cd0:
    // 0x1a6cd0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6cd4:
    // 0x1a6cd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6cd8:
    // 0x1a6cd8: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x1a6cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_1a6cdc:
    // 0x1a6cdc: 0x320f809  jalr        $t9
label_1a6ce0:
    if (ctx->pc == 0x1A6CE0u) {
        ctx->pc = 0x1A6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CDCu;
        // 0x1a6ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6CE4u;
        goto label_1a6ce4;
    }
    ctx->pc = 0x1A6CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6CE4u);
        ctx->pc = 0x1A6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CDCu;
        // 0x1a6ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6CDCu, 0x1A6CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6CE4u;
label_1a6ce4:
    // 0x1a6ce4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a6ce8:
    // 0x1a6ce8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6cec:
    // 0x1a6cec: 0x10000031  b           . + 4 + (0x31 << 2)
label_1a6cf0:
    if (ctx->pc == 0x1A6CF0u) {
        ctx->pc = 0x1A6CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CECu;
        // 0x1a6cf0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6CF4u;
        goto label_1a6cf4;
    }
    ctx->pc = 0x1A6CECu;
    {
        const bool branch_taken_0x1a6cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CECu;
        // 0x1a6cf0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cec) {
            ctx->pc = 0x1A6DB4u;
            goto label_1a6db4;
        }
    }
    ctx->pc = 0x1A6CF4u;
label_1a6cf4:
    // 0x1a6cf4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1a6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a6cf8:
    // 0x1a6cf8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a6cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1a6cfc:
    // 0x1a6cfc: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x1a6cfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
label_1a6d00:
    // 0x1a6d00: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_1a6d04:
    if (ctx->pc == 0x1A6D04u) {
        ctx->pc = 0x1A6D08u;
        goto label_1a6d08;
    }
    ctx->pc = 0x1A6D00u;
    {
        const bool branch_taken_0x1a6d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6d00) {
            ctx->pc = 0x1A6DB4u;
            goto label_1a6db4;
        }
    }
    ctx->pc = 0x1A6D08u;
label_1a6d08:
    // 0x1a6d08: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a6d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a6d0c:
    // 0x1a6d0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a6d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a6d10:
    // 0x1a6d10: 0x1c400028  bgtz        $v0, . + 4 + (0x28 << 2)
label_1a6d14:
    if (ctx->pc == 0x1A6D14u) {
        ctx->pc = 0x1A6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D10u;
        // 0x1a6d14: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D18u;
        goto label_1a6d18;
    }
    ctx->pc = 0x1A6D10u;
    {
        const bool branch_taken_0x1a6d10 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D10u;
        // 0x1a6d14: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d10) {
            ctx->pc = 0x1A6DB4u;
            goto label_1a6db4;
        }
    }
    ctx->pc = 0x1A6D18u;
label_1a6d18:
    // 0x1a6d18: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a6d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a6d1c:
    // 0x1a6d1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6d20:
    // 0x1a6d20: 0x10000024  b           . + 4 + (0x24 << 2)
label_1a6d24:
    if (ctx->pc == 0x1A6D24u) {
        ctx->pc = 0x1A6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D20u;
        // 0x1a6d24: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D28u;
        goto label_1a6d28;
    }
    ctx->pc = 0x1A6D20u;
    {
        const bool branch_taken_0x1a6d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D20u;
        // 0x1a6d24: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d20) {
            ctx->pc = 0x1A6DB4u;
            goto label_1a6db4;
        }
    }
    ctx->pc = 0x1A6D28u;
label_1a6d28:
    // 0x1a6d28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d2c:
    // 0x1a6d2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a6d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a6d30:
    // 0x1a6d30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6d30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6d34:
    // 0x1a6d34: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a6d34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a6d38:
    // 0x1a6d38: 0x320f809  jalr        $t9
label_1a6d3c:
    if (ctx->pc == 0x1A6D3Cu) {
        ctx->pc = 0x1A6D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D38u;
        // 0x1a6d3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D40u;
        goto label_1a6d40;
    }
    ctx->pc = 0x1A6D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6D40u);
        ctx->pc = 0x1A6D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D38u;
        // 0x1a6d3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6D38u, 0x1A6D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6D40u;
label_1a6d40:
    // 0x1a6d40: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a6d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a6d44:
    // 0x1a6d44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6d48:
    // 0x1a6d48: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a6d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1a6d4c:
    // 0x1a6d4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d50:
    // 0x1a6d50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6d50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6d54:
    // 0x1a6d54: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a6d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a6d58:
    // 0x1a6d58: 0x320f809  jalr        $t9
label_1a6d5c:
    if (ctx->pc == 0x1A6D5Cu) {
        ctx->pc = 0x1A6D60u;
        goto label_1a6d60;
    }
    ctx->pc = 0x1A6D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6D60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6D58u, 0x1A6D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6D60u;
label_1a6d60:
    // 0x1a6d60: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1a6d64:
    if (ctx->pc == 0x1A6D64u) {
        ctx->pc = 0x1A6D68u;
        goto label_1a6d68;
    }
    ctx->pc = 0x1A6D60u;
    {
        const bool branch_taken_0x1a6d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6d60) {
            ctx->pc = 0x1A6DB4u;
            goto label_1a6db4;
        }
    }
    ctx->pc = 0x1A6D68u;
label_1a6d68:
    // 0x1a6d68: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a6d6c:
    // 0x1a6d6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6d70:
    // 0x1a6d70: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a6d74:
    if (ctx->pc == 0x1A6D74u) {
        ctx->pc = 0x1A6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D70u;
        // 0x1a6d74: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D78u;
        goto label_1a6d78;
    }
    ctx->pc = 0x1A6D70u;
    {
        const bool branch_taken_0x1a6d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D70u;
        // 0x1a6d74: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d70) {
            ctx->pc = 0x1A6DB4u;
            goto label_1a6db4;
        }
    }
    ctx->pc = 0x1A6D78u;
label_1a6d78:
    // 0x1a6d78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d7c:
    // 0x1a6d7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6d80:
    // 0x1a6d80: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1a6d80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1a6d84:
    // 0x1a6d84: 0x320f809  jalr        $t9
label_1a6d88:
    if (ctx->pc == 0x1A6D88u) {
        ctx->pc = 0x1A6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D84u;
        // 0x1a6d88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D8Cu;
        goto label_1a6d8c;
    }
    ctx->pc = 0x1A6D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6D8Cu);
        ctx->pc = 0x1A6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D84u;
        // 0x1a6d88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6D84u, 0x1A6D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6D8Cu;
label_1a6d8c:
    // 0x1a6d8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d90:
    // 0x1a6d90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6d94:
    // 0x1a6d94: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a6d94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a6d98:
    // 0x1a6d98: 0x320f809  jalr        $t9
label_1a6d9c:
    if (ctx->pc == 0x1A6D9Cu) {
        ctx->pc = 0x1A6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D98u;
        // 0x1a6d9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DA0u;
        goto label_1a6da0;
    }
    ctx->pc = 0x1A6D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6DA0u);
        ctx->pc = 0x1A6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D98u;
        // 0x1a6d9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6D98u, 0x1A6DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6DA0u;
label_1a6da0:
    // 0x1a6da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6da4:
    // 0x1a6da4: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x1a6da4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
label_1a6da8:
    // 0x1a6da8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a6dac:
    // 0x1a6dac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6db0:
    // 0x1a6db0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a6db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1a6db4:
    // 0x1a6db4: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x1a6db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_1a6db8:
    // 0x1a6db8: 0x0  nop
    ctx->pc = 0x1a6db8u;
    // NOP
label_1a6dbc:
    // 0x1a6dbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a6dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6dc0:
    // 0x1a6dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a6dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6dc4:
    // 0x1a6dc4: 0x3e00008  jr          $ra
label_1a6dc8:
    if (ctx->pc == 0x1A6DC8u) {
        ctx->pc = 0x1A6DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DC4u;
        // 0x1a6dc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DCCu;
        goto label_fallthrough_0x1a6dc4;
    }
    ctx->pc = 0x1A6DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DC4u;
        // 0x1a6dc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a6dc4:
    ctx->pc = 0x1A6DCCu;
}
