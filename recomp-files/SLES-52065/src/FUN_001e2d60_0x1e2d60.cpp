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

// Function: FUN_001e2d60
// Address: 0x1e2d60 - 0x1e2e9c
void FUN_001e2d60_0x1e2d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e2d60_0x1e2d60");
#endif

    switch (ctx->pc) {
        case 0x1e2d60u: goto label_1e2d60;
        case 0x1e2d64u: goto label_1e2d64;
        case 0x1e2d68u: goto label_1e2d68;
        case 0x1e2d6cu: goto label_1e2d6c;
        case 0x1e2d70u: goto label_1e2d70;
        case 0x1e2d74u: goto label_1e2d74;
        case 0x1e2d78u: goto label_1e2d78;
        case 0x1e2d7cu: goto label_1e2d7c;
        case 0x1e2d80u: goto label_1e2d80;
        case 0x1e2d84u: goto label_1e2d84;
        case 0x1e2d88u: goto label_1e2d88;
        case 0x1e2d8cu: goto label_1e2d8c;
        case 0x1e2d90u: goto label_1e2d90;
        case 0x1e2d94u: goto label_1e2d94;
        case 0x1e2d98u: goto label_1e2d98;
        case 0x1e2d9cu: goto label_1e2d9c;
        case 0x1e2da0u: goto label_1e2da0;
        case 0x1e2da4u: goto label_1e2da4;
        case 0x1e2da8u: goto label_1e2da8;
        case 0x1e2dacu: goto label_1e2dac;
        case 0x1e2db0u: goto label_1e2db0;
        case 0x1e2db4u: goto label_1e2db4;
        case 0x1e2db8u: goto label_1e2db8;
        case 0x1e2dbcu: goto label_1e2dbc;
        case 0x1e2dc0u: goto label_1e2dc0;
        case 0x1e2dc4u: goto label_1e2dc4;
        case 0x1e2dc8u: goto label_1e2dc8;
        case 0x1e2dccu: goto label_1e2dcc;
        case 0x1e2dd0u: goto label_1e2dd0;
        case 0x1e2dd4u: goto label_1e2dd4;
        case 0x1e2dd8u: goto label_1e2dd8;
        case 0x1e2ddcu: goto label_1e2ddc;
        case 0x1e2de0u: goto label_1e2de0;
        case 0x1e2de4u: goto label_1e2de4;
        case 0x1e2de8u: goto label_1e2de8;
        case 0x1e2decu: goto label_1e2dec;
        case 0x1e2df0u: goto label_1e2df0;
        case 0x1e2df4u: goto label_1e2df4;
        case 0x1e2df8u: goto label_1e2df8;
        case 0x1e2dfcu: goto label_1e2dfc;
        case 0x1e2e00u: goto label_1e2e00;
        case 0x1e2e04u: goto label_1e2e04;
        case 0x1e2e08u: goto label_1e2e08;
        case 0x1e2e0cu: goto label_1e2e0c;
        case 0x1e2e10u: goto label_1e2e10;
        case 0x1e2e14u: goto label_1e2e14;
        case 0x1e2e18u: goto label_1e2e18;
        case 0x1e2e1cu: goto label_1e2e1c;
        case 0x1e2e20u: goto label_1e2e20;
        case 0x1e2e24u: goto label_1e2e24;
        case 0x1e2e28u: goto label_1e2e28;
        case 0x1e2e2cu: goto label_1e2e2c;
        case 0x1e2e30u: goto label_1e2e30;
        case 0x1e2e34u: goto label_1e2e34;
        case 0x1e2e38u: goto label_1e2e38;
        case 0x1e2e3cu: goto label_1e2e3c;
        case 0x1e2e40u: goto label_1e2e40;
        case 0x1e2e44u: goto label_1e2e44;
        case 0x1e2e48u: goto label_1e2e48;
        case 0x1e2e4cu: goto label_1e2e4c;
        case 0x1e2e50u: goto label_1e2e50;
        case 0x1e2e54u: goto label_1e2e54;
        case 0x1e2e58u: goto label_1e2e58;
        case 0x1e2e5cu: goto label_1e2e5c;
        case 0x1e2e60u: goto label_1e2e60;
        case 0x1e2e64u: goto label_1e2e64;
        case 0x1e2e68u: goto label_1e2e68;
        case 0x1e2e6cu: goto label_1e2e6c;
        case 0x1e2e70u: goto label_1e2e70;
        case 0x1e2e74u: goto label_1e2e74;
        case 0x1e2e78u: goto label_1e2e78;
        case 0x1e2e7cu: goto label_1e2e7c;
        case 0x1e2e80u: goto label_1e2e80;
        case 0x1e2e84u: goto label_1e2e84;
        case 0x1e2e88u: goto label_1e2e88;
        case 0x1e2e8cu: goto label_1e2e8c;
        case 0x1e2e90u: goto label_1e2e90;
        case 0x1e2e94u: goto label_1e2e94;
        case 0x1e2e98u: goto label_1e2e98;
        default: break;
    }

    ctx->pc = 0x1e2d60u;

label_1e2d60:
    // 0x1e2d60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e2d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e2d64:
    // 0x1e2d64: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e2d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e2d68:
    // 0x1e2d68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e2d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e2d6c:
    // 0x1e2d6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e2d6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e2d70:
    // 0x1e2d70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e2d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e2d74:
    // 0x1e2d74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e2d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e2d78:
    // 0x1e2d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e2d7c:
    // 0x1e2d7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e2d7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e2d80:
    // 0x1e2d80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e2d84:
    // 0x1e2d84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e2d88:
    if (ctx->pc == 0x1E2D88u) {
        ctx->pc = 0x1E2D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D84u;
        // 0x1e2d88: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D8Cu;
        goto label_1e2d8c;
    }
    ctx->pc = 0x1E2D84u;
    {
        const bool branch_taken_0x1e2d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D84u;
        // 0x1e2d88: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d84) {
            ctx->pc = 0x1E2DB4u;
            goto label_1e2db4;
        }
    }
    ctx->pc = 0x1E2D8Cu;
label_1e2d8c:
    // 0x1e2d8c: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1e2d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2d90:
    // 0x1e2d90: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e2d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_1e2d94:
    // 0x1e2d94: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e2d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1e2d98:
    // 0x1e2d98: 0x2463c098  addiu       $v1, $v1, -0x3F68
    ctx->pc = 0x1e2d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951064));
label_1e2d9c:
    // 0x1e2d9c: 0x2442c0e8  addiu       $v0, $v0, -0x3F18
    ctx->pc = 0x1e2d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951144));
label_1e2da0:
    // 0x1e2da0: 0x24a40018  addiu       $a0, $a1, 0x18
    ctx->pc = 0x1e2da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_1e2da4:
    // 0x1e2da4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1e2da4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1e2da8:
    // 0x1e2da8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e2da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2dac:
    // 0x1e2dac: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1e2dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_1e2db0:
    // 0x1e2db0: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1e2db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_1e2db4:
    // 0x1e2db4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2db8:
    // 0x1e2db8: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x1e2db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_1e2dbc:
    // 0x1e2dbc: 0x2484c0d0  addiu       $a0, $a0, -0x3F30
    ctx->pc = 0x1e2dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951120));
label_1e2dc0:
    // 0x1e2dc0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_1e2dc4:
    // 0x1e2dc4: 0x2463c0dc  addiu       $v1, $v1, -0x3F24
    ctx->pc = 0x1e2dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951132));
label_1e2dc8:
    // 0x1e2dc8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e2dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e2dcc:
    // 0x1e2dcc: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x1e2dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_1e2dd0:
    // 0x1e2dd0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2dd4:
    // 0x1e2dd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2dd8:
    // 0x1e2dd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e2dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1e2ddc:
    // 0x1e2ddc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2de0:
    // 0x1e2de0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e2de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2de4:
    // 0x1e2de4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1e2de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1e2de8:
    // 0x1e2de8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e2dec:
    // 0x1e2dec: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x1e2decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_1e2df0:
    // 0x1e2df0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2df4:
    // 0x1e2df4: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1e2df4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
label_1e2df8:
    // 0x1e2df8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2dfc:
    // 0x1e2dfc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e2dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2e00:
    // 0x1e2e00: 0xc078584  jal         func_1E1610
label_1e2e04:
    if (ctx->pc == 0x1E2E04u) {
        ctx->pc = 0x1E2E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E00u;
        // 0x1e2e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E08u;
        goto label_1e2e08;
    }
    ctx->pc = 0x1E2E00u;
    SET_GPR_U32(ctx, 31, 0x1E2E08u);
    ctx->pc = 0x1E2E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E00u;
    // 0x1e2e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1610u, 0x1E2E00u, 0x1E2E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E08u;
label_1e2e08:
    // 0x1e2e08: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e2e0c:
    // 0x1e2e0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e2e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2e10:
    // 0x1e2e10: 0xc04805c  jal         func_120170
label_1e2e14:
    if (ctx->pc == 0x1E2E14u) {
        ctx->pc = 0x1E2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E10u;
        // 0x1e2e14: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E18u;
        goto label_1e2e18;
    }
    ctx->pc = 0x1E2E10u;
    SET_GPR_U32(ctx, 31, 0x1E2E18u);
    ctx->pc = 0x1E2E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E10u;
    // 0x1e2e14: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120170u, 0x1E2E10u, 0x1E2E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E18u;
label_1e2e18:
    // 0x1e2e18: 0x93828748  lbu         $v0, -0x78B8($gp)
    ctx->pc = 0x1e2e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936392)));
label_1e2e1c:
    // 0x1e2e1c: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x1e2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1e2e20:
    // 0x1e2e20: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e2e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e2e24:
    // 0x1e2e24: 0x83a5006c  lb          $a1, 0x6C($sp)
    ctx->pc = 0x1e2e24u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 108)));
label_1e2e28:
    // 0x1e2e28: 0xc079750  jal         func_1E5D40
label_1e2e2c:
    if (ctx->pc == 0x1E2E2Cu) {
        ctx->pc = 0x1E2E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E28u;
        // 0x1e2e2c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E30u;
        goto label_1e2e30;
    }
    ctx->pc = 0x1E2E28u;
    SET_GPR_U32(ctx, 31, 0x1E2E30u);
    ctx->pc = 0x1E2E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E28u;
    // 0x1e2e2c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5D40u, 0x1E2E28u, 0x1E2E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E30u;
label_1e2e30:
    // 0x1e2e30: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1e2e30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2e34:
    // 0x1e2e34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e2e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e2e38:
    // 0x1e2e38: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1e2e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1e2e3c:
    // 0x1e2e3c: 0x320f809  jalr        $t9
label_1e2e40:
    if (ctx->pc == 0x1E2E40u) {
        ctx->pc = 0x1E2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E3Cu;
        // 0x1e2e40: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E44u;
        goto label_1e2e44;
    }
    ctx->pc = 0x1E2E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2E44u);
        ctx->pc = 0x1E2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E3Cu;
        // 0x1e2e40: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2E3Cu, 0x1E2E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2E44u;
label_1e2e44:
    // 0x1e2e44: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x1e2e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1e2e48:
    // 0x1e2e48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e2e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e2e4c:
    // 0x1e2e4c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1e2e50:
    if (ctx->pc == 0x1E2E50u) {
        ctx->pc = 0x1E2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E4Cu;
        // 0x1e2e50: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E54u;
        goto label_1e2e54;
    }
    ctx->pc = 0x1E2E4Cu;
    {
        const bool branch_taken_0x1e2e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E4Cu;
        // 0x1e2e50: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e4c) {
            ctx->pc = 0x1E2E78u;
            goto label_1e2e78;
        }
    }
    ctx->pc = 0x1E2E54u;
label_1e2e54:
    // 0x1e2e54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e2e58:
    // 0x1e2e58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e2e5c:
    // 0x1e2e5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e2e60:
    if (ctx->pc == 0x1E2E60u) {
        ctx->pc = 0x1E2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E5Cu;
        // 0x1e2e60: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E64u;
        goto label_1e2e64;
    }
    ctx->pc = 0x1E2E5Cu;
    {
        const bool branch_taken_0x1e2e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E5Cu;
        // 0x1e2e60: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e5c) {
            ctx->pc = 0x1E2E78u;
            goto label_1e2e78;
        }
    }
    ctx->pc = 0x1E2E64u;
label_1e2e64:
    // 0x1e2e64: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e2e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1e2e68:
    // 0x1e2e68: 0xc0483d8  jal         func_120F60
label_1e2e6c:
    if (ctx->pc == 0x1E2E6Cu) {
        ctx->pc = 0x1E2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E68u;
        // 0x1e2e6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E70u;
        goto label_1e2e70;
    }
    ctx->pc = 0x1E2E68u;
    SET_GPR_U32(ctx, 31, 0x1E2E70u);
    ctx->pc = 0x1E2E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E68u;
    // 0x1e2e6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120F60u, 0x1E2E68u, 0x1E2E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E70u;
label_1e2e70:
    // 0x1e2e70: 0xc0401a4  jal         func_100690
label_1e2e74:
    if (ctx->pc == 0x1E2E74u) {
        ctx->pc = 0x1E2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E70u;
        // 0x1e2e74: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E78u;
        goto label_1e2e78;
    }
    ctx->pc = 0x1E2E70u;
    SET_GPR_U32(ctx, 31, 0x1E2E78u);
    ctx->pc = 0x1E2E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E70u;
    // 0x1e2e74: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E2E70u, 0x1E2E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E78u;
label_1e2e78:
    // 0x1e2e78: 0xa6130044  sh          $s3, 0x44($s0)
    ctx->pc = 0x1e2e78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 19));
label_1e2e7c:
    // 0x1e2e7c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1e2e80:
    // 0x1e2e80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e2e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2e84:
    // 0x1e2e84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e2e84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e2e88:
    // 0x1e2e88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e2e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e2e8c:
    // 0x1e2e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2e90:
    // 0x1e2e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2e94:
    // 0x1e2e94: 0x3e00008  jr          $ra
label_1e2e98:
    if (ctx->pc == 0x1E2E98u) {
        ctx->pc = 0x1E2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E94u;
        // 0x1e2e98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E9Cu;
        goto label_fallthrough_0x1e2e94;
    }
    ctx->pc = 0x1E2E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E94u;
        // 0x1e2e98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e2e94:
    ctx->pc = 0x1E2E9Cu;
}
