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

// Function: FUN_00124a40
// Address: 0x124a40 - 0x124ba4
void FUN_00124a40_0x124a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00124a40_0x124a40");
#endif

    switch (ctx->pc) {
        case 0x124aa8u: goto label_124aa8;
        default: break;
    }

    ctx->pc = 0x124a40u;

    // 0x124a40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x124a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x124a44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x124a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x124a48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x124a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x124a4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x124a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x124a50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x124a50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x124a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x124a58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x124a58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a5c: 0x83838424  lb          $v1, -0x7BDC($gp)
    ctx->pc = 0x124a5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935588)));
    // 0x124a60: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x124A60u;
    {
        const bool branch_taken_0x124a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x124A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124A60u;
        // 0x124a64: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a60) {
            ctx->pc = 0x124AB0u;
            goto label_124ab0;
        }
    }
    ctx->pc = 0x124A68u;
    // 0x124a68: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x124a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x124a6c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x124a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x124a70: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x124a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x124a74: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x124a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x124a78: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x124a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x124a7c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x124a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x124a80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x124a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x124a84: 0xfc222d28  sd          $v0, 0x2D28($at)
    ctx->pc = 0x124a84u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B2D28u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B2D28u, _value); } while (0);
    // 0x124a88: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x124a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x124a8c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x124a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x124a90: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x124a90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x124a94: 0xfc232d20  sd          $v1, 0x2D20($at)
    ctx->pc = 0x124a94u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B2D20u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B2D20u, _value); } while (0);
    // 0x124a98: 0x24842d20  addiu       $a0, $a0, 0x2D20
    ctx->pc = 0x124a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11552));
    // 0x124a9c: 0x24a54bb0  addiu       $a1, $a1, 0x4BB0
    ctx->pc = 0x124a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19376));
    // 0x124aa0: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x124AA0u;
    SET_GPR_U32(ctx, 31, 0x124AA8u);
    ctx->pc = 0x124AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124AA0u;
    // 0x124aa4: 0x24c62d10  addiu       $a2, $a2, 0x2D10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x124AA0u, 0x124AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124AA8u;
label_124aa8:
    // 0x124aa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124aac: 0xa3838424  sb          $v1, -0x7BDC($gp)
    ctx->pc = 0x124aacu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935588), (uint8_t)GPR_U32(ctx, 3));
label_124ab0:
    // 0x124ab0: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x124ab0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x124ab4: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x124ab4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x124ab8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x124ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x124abc: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x124abcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x124ac0: 0x34660003  ori         $a2, $v1, 0x3
    ctx->pc = 0x124ac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x124ac4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x124ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x124ac8: 0x26030006  addiu       $v1, $s0, 0x6
    ctx->pc = 0x124ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x124acc: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x124accu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x124ad0: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x124ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x124ad4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x124ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x124ad8: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x124ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x124adc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x124adcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x124ae0: 0xa16a0003  sb          $t2, 0x3($t3)
    ctx->pc = 0x124ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x124ae4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x124ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x124ae8: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x124ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124aec: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x124aecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x124af0: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x124af0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x124af4: 0xa5600000  sh          $zero, 0x0($t3)
    ctx->pc = 0x124af4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x124af8: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x124af8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x124afc: 0xad69000c  sw          $t1, 0xC($t3)
    ctx->pc = 0x124afcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 9));
    // 0x124b00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x124b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x124b04: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x124b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x124b08: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x124b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x124b0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x124b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x124b10: 0xa06a0003  sb          $t2, 0x3($v1)
    ctx->pc = 0x124b10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x124b14: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x124b14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124b18: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x124b18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x124b1c: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x124b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x124b20: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x124b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x124b24: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x124b24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x124b28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x124b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x124b2c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x124b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x124b30: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x124b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x124b34: 0x78262d20  lq          $a2, 0x2D20($at)
    ctx->pc = 0x124b34u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 1), 11552)));
    // 0x124b38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x124b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x124b3c: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x124b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x124b40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x124b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x124b44: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x124b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x124b48: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x124b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x124b4c: 0xde460060  ld          $a2, 0x60($s2)
    ctx->pc = 0x124b4cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x124b50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x124b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x124b54: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x124b54u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x124b58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x124b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x124b5c: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x124b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x124b60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x124b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x124b64: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x124b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x124b68: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x124b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x124b6c: 0xde450068  ld          $a1, 0x68($s2)
    ctx->pc = 0x124b6cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x124b70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x124b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x124b74: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x124b74u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x124b78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x124b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x124b7c: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x124b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x124b80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x124b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x124b84: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x124b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x124b88: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x124b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x124b8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x124b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124b90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x124b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124b94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x124b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x124b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x124B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124B9Cu;
        // 0x124ba0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124BA4u;
}
