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

// Function: FUN_00119d90
// Address: 0x119d90 - 0x119e24
void FUN_00119d90_0x119d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119d90_0x119d90");
#endif

    switch (ctx->pc) {
        case 0x119d90u: goto label_119d90;
        case 0x119d94u: goto label_119d94;
        case 0x119d98u: goto label_119d98;
        case 0x119d9cu: goto label_119d9c;
        case 0x119da0u: goto label_119da0;
        case 0x119da4u: goto label_119da4;
        case 0x119da8u: goto label_119da8;
        case 0x119dacu: goto label_119dac;
        case 0x119db0u: goto label_119db0;
        case 0x119db4u: goto label_119db4;
        case 0x119db8u: goto label_119db8;
        case 0x119dbcu: goto label_119dbc;
        case 0x119dc0u: goto label_119dc0;
        case 0x119dc4u: goto label_119dc4;
        case 0x119dc8u: goto label_119dc8;
        case 0x119dccu: goto label_119dcc;
        case 0x119dd0u: goto label_119dd0;
        case 0x119dd4u: goto label_119dd4;
        case 0x119dd8u: goto label_119dd8;
        case 0x119ddcu: goto label_119ddc;
        case 0x119de0u: goto label_119de0;
        case 0x119de4u: goto label_119de4;
        case 0x119de8u: goto label_119de8;
        case 0x119decu: goto label_119dec;
        case 0x119df0u: goto label_119df0;
        case 0x119df4u: goto label_119df4;
        case 0x119df8u: goto label_119df8;
        case 0x119dfcu: goto label_119dfc;
        case 0x119e00u: goto label_119e00;
        case 0x119e04u: goto label_119e04;
        case 0x119e08u: goto label_119e08;
        case 0x119e0cu: goto label_119e0c;
        case 0x119e10u: goto label_119e10;
        case 0x119e14u: goto label_119e14;
        case 0x119e18u: goto label_119e18;
        case 0x119e1cu: goto label_119e1c;
        case 0x119e20u: goto label_119e20;
        default: break;
    }

    ctx->pc = 0x119d90u;

label_119d90:
    // 0x119d90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_119d94:
    // 0x119d94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_119d98:
    // 0x119d98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x119d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_119d9c:
    // 0x119d9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x119d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_119da0:
    // 0x119da0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x119da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_119da4:
    // 0x119da4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x119da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_119da8:
    // 0x119da8: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x119da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_119dac:
    // 0x119dac: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x119dacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_119db0:
    // 0x119db0: 0x620000c  bltz        $s1, . + 4 + (0xC << 2)
label_119db4:
    if (ctx->pc == 0x119DB4u) {
        ctx->pc = 0x119DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DB0u;
        // 0x119db4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119DB8u;
        goto label_119db8;
    }
    ctx->pc = 0x119DB0u;
    {
        const bool branch_taken_0x119db0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x119DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DB0u;
        // 0x119db4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119db0) {
            ctx->pc = 0x119DE4u;
            goto label_119de4;
        }
    }
    ctx->pc = 0x119DB8u;
label_119db8:
    // 0x119db8: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x119db8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_119dbc:
    // 0x119dbc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x119dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_119dc0:
    // 0x119dc0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x119dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_119dc4:
    // 0x119dc4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119dc8:
    // 0x119dc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119dcc:
    // 0x119dcc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x119dccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_119dd0:
    // 0x119dd0: 0x320f809  jalr        $t9
label_119dd4:
    if (ctx->pc == 0x119DD4u) {
        ctx->pc = 0x119DD8u;
        goto label_119dd8;
    }
    ctx->pc = 0x119DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119DD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119DD0u, 0x119DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119DD8u;
label_119dd8:
    // 0x119dd8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x119dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_119ddc:
    // 0x119ddc: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
label_119de0:
    if (ctx->pc == 0x119DE0u) {
        ctx->pc = 0x119DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DDCu;
        // 0x119de0: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119DE4u;
        goto label_119de4;
    }
    ctx->pc = 0x119DDCu;
    {
        const bool branch_taken_0x119ddc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x119DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DDCu;
        // 0x119de0: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ddc) {
            ctx->pc = 0x119DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119dbc;
        }
    }
    ctx->pc = 0x119DE4u;
label_119de4:
    // 0x119de4: 0x0  nop
    ctx->pc = 0x119de4u;
    // NOP
label_119de8:
    // 0x119de8: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x119de8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_119dec:
    // 0x119dec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_119df0:
    // 0x119df0: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x119df0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_119df4:
    // 0x119df4: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x119df4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_119df8:
    // 0x119df8: 0x2842012c  slti        $v0, $v0, 0x12C
    ctx->pc = 0x119df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
label_119dfc:
    // 0x119dfc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_119e00:
    if (ctx->pc == 0x119E00u) {
        ctx->pc = 0x119E04u;
        goto label_119e04;
    }
    ctx->pc = 0x119DFCu;
    {
        const bool branch_taken_0x119dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119dfc) {
            ctx->pc = 0x119E08u;
            goto label_119e08;
        }
    }
    ctx->pc = 0x119E04u;
label_119e04:
    // 0x119e04: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x119e04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
label_119e08:
    // 0x119e08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_119e0c:
    // 0x119e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x119e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_119e10:
    // 0x119e10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x119e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_119e14:
    // 0x119e14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x119e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_119e18:
    // 0x119e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x119e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_119e1c:
    // 0x119e1c: 0x3e00008  jr          $ra
label_119e20:
    if (ctx->pc == 0x119E20u) {
        ctx->pc = 0x119E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E1Cu;
        // 0x119e20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119E24u;
        goto label_fallthrough_0x119e1c;
    }
    ctx->pc = 0x119E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E1Cu;
        // 0x119e20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x119e1c:
    ctx->pc = 0x119E24u;
}
