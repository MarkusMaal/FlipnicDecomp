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

// Function: FUN_001e2c20
// Address: 0x1e2c20 - 0x1e2d60
void FUN_001e2c20_0x1e2c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e2c20_0x1e2c20");
#endif

    switch (ctx->pc) {
        case 0x1e2c20u: goto label_1e2c20;
        case 0x1e2c24u: goto label_1e2c24;
        case 0x1e2c28u: goto label_1e2c28;
        case 0x1e2c2cu: goto label_1e2c2c;
        case 0x1e2c30u: goto label_1e2c30;
        case 0x1e2c34u: goto label_1e2c34;
        case 0x1e2c38u: goto label_1e2c38;
        case 0x1e2c3cu: goto label_1e2c3c;
        case 0x1e2c40u: goto label_1e2c40;
        case 0x1e2c44u: goto label_1e2c44;
        case 0x1e2c48u: goto label_1e2c48;
        case 0x1e2c4cu: goto label_1e2c4c;
        case 0x1e2c50u: goto label_1e2c50;
        case 0x1e2c54u: goto label_1e2c54;
        case 0x1e2c58u: goto label_1e2c58;
        case 0x1e2c5cu: goto label_1e2c5c;
        case 0x1e2c60u: goto label_1e2c60;
        case 0x1e2c64u: goto label_1e2c64;
        case 0x1e2c68u: goto label_1e2c68;
        case 0x1e2c6cu: goto label_1e2c6c;
        case 0x1e2c70u: goto label_1e2c70;
        case 0x1e2c74u: goto label_1e2c74;
        case 0x1e2c78u: goto label_1e2c78;
        case 0x1e2c7cu: goto label_1e2c7c;
        case 0x1e2c80u: goto label_1e2c80;
        case 0x1e2c84u: goto label_1e2c84;
        case 0x1e2c88u: goto label_1e2c88;
        case 0x1e2c8cu: goto label_1e2c8c;
        case 0x1e2c90u: goto label_1e2c90;
        case 0x1e2c94u: goto label_1e2c94;
        case 0x1e2c98u: goto label_1e2c98;
        case 0x1e2c9cu: goto label_1e2c9c;
        case 0x1e2ca0u: goto label_1e2ca0;
        case 0x1e2ca4u: goto label_1e2ca4;
        case 0x1e2ca8u: goto label_1e2ca8;
        case 0x1e2cacu: goto label_1e2cac;
        case 0x1e2cb0u: goto label_1e2cb0;
        case 0x1e2cb4u: goto label_1e2cb4;
        case 0x1e2cb8u: goto label_1e2cb8;
        case 0x1e2cbcu: goto label_1e2cbc;
        case 0x1e2cc0u: goto label_1e2cc0;
        case 0x1e2cc4u: goto label_1e2cc4;
        case 0x1e2cc8u: goto label_1e2cc8;
        case 0x1e2cccu: goto label_1e2ccc;
        case 0x1e2cd0u: goto label_1e2cd0;
        case 0x1e2cd4u: goto label_1e2cd4;
        case 0x1e2cd8u: goto label_1e2cd8;
        case 0x1e2cdcu: goto label_1e2cdc;
        case 0x1e2ce0u: goto label_1e2ce0;
        case 0x1e2ce4u: goto label_1e2ce4;
        case 0x1e2ce8u: goto label_1e2ce8;
        case 0x1e2cecu: goto label_1e2cec;
        case 0x1e2cf0u: goto label_1e2cf0;
        case 0x1e2cf4u: goto label_1e2cf4;
        case 0x1e2cf8u: goto label_1e2cf8;
        case 0x1e2cfcu: goto label_1e2cfc;
        case 0x1e2d00u: goto label_1e2d00;
        case 0x1e2d04u: goto label_1e2d04;
        case 0x1e2d08u: goto label_1e2d08;
        case 0x1e2d0cu: goto label_1e2d0c;
        case 0x1e2d10u: goto label_1e2d10;
        case 0x1e2d14u: goto label_1e2d14;
        case 0x1e2d18u: goto label_1e2d18;
        case 0x1e2d1cu: goto label_1e2d1c;
        case 0x1e2d20u: goto label_1e2d20;
        case 0x1e2d24u: goto label_1e2d24;
        case 0x1e2d28u: goto label_1e2d28;
        case 0x1e2d2cu: goto label_1e2d2c;
        case 0x1e2d30u: goto label_1e2d30;
        case 0x1e2d34u: goto label_1e2d34;
        case 0x1e2d38u: goto label_1e2d38;
        case 0x1e2d3cu: goto label_1e2d3c;
        case 0x1e2d40u: goto label_1e2d40;
        case 0x1e2d44u: goto label_1e2d44;
        case 0x1e2d48u: goto label_1e2d48;
        case 0x1e2d4cu: goto label_1e2d4c;
        case 0x1e2d50u: goto label_1e2d50;
        case 0x1e2d54u: goto label_1e2d54;
        case 0x1e2d58u: goto label_1e2d58;
        case 0x1e2d5cu: goto label_1e2d5c;
        default: break;
    }

    ctx->pc = 0x1e2c20u;

label_1e2c20:
    // 0x1e2c20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e2c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e2c24:
    // 0x1e2c24: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e2c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e2c28:
    // 0x1e2c28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e2c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e2c2c:
    // 0x1e2c2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e2c2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e2c30:
    // 0x1e2c30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e2c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e2c34:
    // 0x1e2c34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e2c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e2c38:
    // 0x1e2c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e2c3c:
    // 0x1e2c3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e2c3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e2c40:
    // 0x1e2c40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e2c44:
    // 0x1e2c44: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e2c48:
    if (ctx->pc == 0x1E2C48u) {
        ctx->pc = 0x1E2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C44u;
        // 0x1e2c48: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C4Cu;
        goto label_1e2c4c;
    }
    ctx->pc = 0x1E2C44u;
    {
        const bool branch_taken_0x1e2c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C44u;
        // 0x1e2c48: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c44) {
            ctx->pc = 0x1E2C74u;
            goto label_1e2c74;
        }
    }
    ctx->pc = 0x1E2C4Cu;
label_1e2c4c:
    // 0x1e2c4c: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1e2c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2c50:
    // 0x1e2c50: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_1e2c54:
    // 0x1e2c54: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1e2c58:
    // 0x1e2c58: 0x2463c098  addiu       $v1, $v1, -0x3F68
    ctx->pc = 0x1e2c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951064));
label_1e2c5c:
    // 0x1e2c5c: 0x2442c1b8  addiu       $v0, $v0, -0x3E48
    ctx->pc = 0x1e2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951352));
label_1e2c60:
    // 0x1e2c60: 0x24a40018  addiu       $a0, $a1, 0x18
    ctx->pc = 0x1e2c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_1e2c64:
    // 0x1e2c64: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1e2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1e2c68:
    // 0x1e2c68: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e2c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2c6c:
    // 0x1e2c6c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1e2c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_1e2c70:
    // 0x1e2c70: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1e2c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_1e2c74:
    // 0x1e2c74: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2c78:
    // 0x1e2c78: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x1e2c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_1e2c7c:
    // 0x1e2c7c: 0x2484c1a0  addiu       $a0, $a0, -0x3E60
    ctx->pc = 0x1e2c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951328));
label_1e2c80:
    // 0x1e2c80: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e2c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_1e2c84:
    // 0x1e2c84: 0x2463c1ac  addiu       $v1, $v1, -0x3E54
    ctx->pc = 0x1e2c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951340));
label_1e2c88:
    // 0x1e2c88: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e2c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e2c8c:
    // 0x1e2c8c: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x1e2c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_1e2c90:
    // 0x1e2c90: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2c94:
    // 0x1e2c94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2c98:
    // 0x1e2c98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e2c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e2c9c:
    // 0x1e2c9c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2ca0:
    // 0x1e2ca0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e2ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2ca4:
    // 0x1e2ca4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1e2ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1e2ca8:
    // 0x1e2ca8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e2cac:
    // 0x1e2cac: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x1e2cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_1e2cb0:
    // 0x1e2cb0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2cb4:
    // 0x1e2cb4: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1e2cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
label_1e2cb8:
    // 0x1e2cb8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2cbc:
    // 0x1e2cbc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e2cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2cc0:
    // 0x1e2cc0: 0xc078584  jal         func_1E1610
label_1e2cc4:
    if (ctx->pc == 0x1E2CC4u) {
        ctx->pc = 0x1E2CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CC0u;
        // 0x1e2cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2CC8u;
        goto label_1e2cc8;
    }
    ctx->pc = 0x1E2CC0u;
    SET_GPR_U32(ctx, 31, 0x1E2CC8u);
    ctx->pc = 0x1E2CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2CC0u;
    // 0x1e2cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1610u, 0x1E2CC0u, 0x1E2CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2CC8u;
label_1e2cc8:
    // 0x1e2cc8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e2ccc:
    // 0x1e2ccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e2cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2cd0:
    // 0x1e2cd0: 0xc04805c  jal         func_120170
label_1e2cd4:
    if (ctx->pc == 0x1E2CD4u) {
        ctx->pc = 0x1E2CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CD0u;
        // 0x1e2cd4: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2CD8u;
        goto label_1e2cd8;
    }
    ctx->pc = 0x1E2CD0u;
    SET_GPR_U32(ctx, 31, 0x1E2CD8u);
    ctx->pc = 0x1E2CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2CD0u;
    // 0x1e2cd4: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120170u, 0x1E2CD0u, 0x1E2CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2CD8u;
label_1e2cd8:
    // 0x1e2cd8: 0x93828744  lbu         $v0, -0x78BC($gp)
    ctx->pc = 0x1e2cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936388)));
label_1e2cdc:
    // 0x1e2cdc: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x1e2cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1e2ce0:
    // 0x1e2ce0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e2ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e2ce4:
    // 0x1e2ce4: 0x83a5006c  lb          $a1, 0x6C($sp)
    ctx->pc = 0x1e2ce4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 108)));
label_1e2ce8:
    // 0x1e2ce8: 0xc04815c  jal         func_120570
label_1e2cec:
    if (ctx->pc == 0x1E2CECu) {
        ctx->pc = 0x1E2CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CE8u;
        // 0x1e2cec: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2CF0u;
        goto label_1e2cf0;
    }
    ctx->pc = 0x1E2CE8u;
    SET_GPR_U32(ctx, 31, 0x1E2CF0u);
    ctx->pc = 0x1E2CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2CE8u;
    // 0x1e2cec: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120570u, 0x1E2CE8u, 0x1E2CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2CF0u;
label_1e2cf0:
    // 0x1e2cf0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1e2cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2cf4:
    // 0x1e2cf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e2cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e2cf8:
    // 0x1e2cf8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e2cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e2cfc:
    // 0x1e2cfc: 0x320f809  jalr        $t9
label_1e2d00:
    if (ctx->pc == 0x1E2D00u) {
        ctx->pc = 0x1E2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CFCu;
        // 0x1e2d00: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D04u;
        goto label_1e2d04;
    }
    ctx->pc = 0x1E2CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2D04u);
        ctx->pc = 0x1E2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CFCu;
        // 0x1e2d00: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2CFCu, 0x1E2D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2D04u;
label_1e2d04:
    // 0x1e2d04: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x1e2d04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1e2d08:
    // 0x1e2d08: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x1e2d08u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
label_1e2d0c:
    // 0x1e2d0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e2d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2d10:
    // 0x1e2d10: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1e2d14:
    if (ctx->pc == 0x1E2D14u) {
        ctx->pc = 0x1E2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D10u;
        // 0x1e2d14: 0x139e3f  dsra32      $s3, $s3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D18u;
        goto label_1e2d18;
    }
    ctx->pc = 0x1E2D10u;
    {
        const bool branch_taken_0x1e2d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D10u;
        // 0x1e2d14: 0x139e3f  dsra32      $s3, $s3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d10) {
            ctx->pc = 0x1E2D3Cu;
            goto label_1e2d3c;
        }
    }
    ctx->pc = 0x1E2D18u;
label_1e2d18:
    // 0x1e2d18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e2d1c:
    // 0x1e2d1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e2d20:
    // 0x1e2d20: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e2d24:
    if (ctx->pc == 0x1E2D24u) {
        ctx->pc = 0x1E2D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D20u;
        // 0x1e2d24: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D28u;
        goto label_1e2d28;
    }
    ctx->pc = 0x1E2D20u;
    {
        const bool branch_taken_0x1e2d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D20u;
        // 0x1e2d24: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d20) {
            ctx->pc = 0x1E2D3Cu;
            goto label_1e2d3c;
        }
    }
    ctx->pc = 0x1E2D28u;
label_1e2d28:
    // 0x1e2d28: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e2d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1e2d2c:
    // 0x1e2d2c: 0xc0483d8  jal         func_120F60
label_1e2d30:
    if (ctx->pc == 0x1E2D30u) {
        ctx->pc = 0x1E2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D2Cu;
        // 0x1e2d30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D34u;
        goto label_1e2d34;
    }
    ctx->pc = 0x1E2D2Cu;
    SET_GPR_U32(ctx, 31, 0x1E2D34u);
    ctx->pc = 0x1E2D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2D2Cu;
    // 0x1e2d30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120F60u, 0x1E2D2Cu, 0x1E2D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2D34u;
label_1e2d34:
    // 0x1e2d34: 0xc0401a4  jal         func_100690
label_1e2d38:
    if (ctx->pc == 0x1E2D38u) {
        ctx->pc = 0x1E2D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D34u;
        // 0x1e2d38: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D3Cu;
        goto label_1e2d3c;
    }
    ctx->pc = 0x1E2D34u;
    SET_GPR_U32(ctx, 31, 0x1E2D3Cu);
    ctx->pc = 0x1E2D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2D34u;
    // 0x1e2d38: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E2D34u, 0x1E2D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2D3Cu;
label_1e2d3c:
    // 0x1e2d3c: 0xa2130044  sb          $s3, 0x44($s0)
    ctx->pc = 0x1e2d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 19));
label_1e2d40:
    // 0x1e2d40: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2d44:
    // 0x1e2d44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e2d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2d48:
    // 0x1e2d48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e2d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e2d4c:
    // 0x1e2d4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e2d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e2d50:
    // 0x1e2d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2d54:
    // 0x1e2d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2d58:
    // 0x1e2d58: 0x3e00008  jr          $ra
label_1e2d5c:
    if (ctx->pc == 0x1E2D5Cu) {
        ctx->pc = 0x1E2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D58u;
        // 0x1e2d5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D60u;
        goto label_fallthrough_0x1e2d58;
    }
    ctx->pc = 0x1E2D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D58u;
        // 0x1e2d5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e2d58:
    ctx->pc = 0x1E2D60u;
}
