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

// Function: FUN_00113e80
// Address: 0x113e80 - 0x11400c
void FUN_00113e80_0x113e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00113e80_0x113e80");
#endif

    switch (ctx->pc) {
        case 0x113e80u: goto label_113e80;
        case 0x113e84u: goto label_113e84;
        case 0x113e88u: goto label_113e88;
        case 0x113e8cu: goto label_113e8c;
        case 0x113e90u: goto label_113e90;
        case 0x113e94u: goto label_113e94;
        case 0x113e98u: goto label_113e98;
        case 0x113e9cu: goto label_113e9c;
        case 0x113ea0u: goto label_113ea0;
        case 0x113ea4u: goto label_113ea4;
        case 0x113ea8u: goto label_113ea8;
        case 0x113eacu: goto label_113eac;
        case 0x113eb0u: goto label_113eb0;
        case 0x113eb4u: goto label_113eb4;
        case 0x113eb8u: goto label_113eb8;
        case 0x113ebcu: goto label_113ebc;
        case 0x113ec0u: goto label_113ec0;
        case 0x113ec4u: goto label_113ec4;
        case 0x113ec8u: goto label_113ec8;
        case 0x113eccu: goto label_113ecc;
        case 0x113ed0u: goto label_113ed0;
        case 0x113ed4u: goto label_113ed4;
        case 0x113ed8u: goto label_113ed8;
        case 0x113edcu: goto label_113edc;
        case 0x113ee0u: goto label_113ee0;
        case 0x113ee4u: goto label_113ee4;
        case 0x113ee8u: goto label_113ee8;
        case 0x113eecu: goto label_113eec;
        case 0x113ef0u: goto label_113ef0;
        case 0x113ef4u: goto label_113ef4;
        case 0x113ef8u: goto label_113ef8;
        case 0x113efcu: goto label_113efc;
        case 0x113f00u: goto label_113f00;
        case 0x113f04u: goto label_113f04;
        case 0x113f08u: goto label_113f08;
        case 0x113f0cu: goto label_113f0c;
        case 0x113f10u: goto label_113f10;
        case 0x113f14u: goto label_113f14;
        case 0x113f18u: goto label_113f18;
        case 0x113f1cu: goto label_113f1c;
        case 0x113f20u: goto label_113f20;
        case 0x113f24u: goto label_113f24;
        case 0x113f28u: goto label_113f28;
        case 0x113f2cu: goto label_113f2c;
        case 0x113f30u: goto label_113f30;
        case 0x113f34u: goto label_113f34;
        case 0x113f38u: goto label_113f38;
        case 0x113f3cu: goto label_113f3c;
        case 0x113f40u: goto label_113f40;
        case 0x113f44u: goto label_113f44;
        case 0x113f48u: goto label_113f48;
        case 0x113f4cu: goto label_113f4c;
        case 0x113f50u: goto label_113f50;
        case 0x113f54u: goto label_113f54;
        case 0x113f58u: goto label_113f58;
        case 0x113f5cu: goto label_113f5c;
        case 0x113f60u: goto label_113f60;
        case 0x113f64u: goto label_113f64;
        case 0x113f68u: goto label_113f68;
        case 0x113f6cu: goto label_113f6c;
        case 0x113f70u: goto label_113f70;
        case 0x113f74u: goto label_113f74;
        case 0x113f78u: goto label_113f78;
        case 0x113f7cu: goto label_113f7c;
        case 0x113f80u: goto label_113f80;
        case 0x113f84u: goto label_113f84;
        case 0x113f88u: goto label_113f88;
        case 0x113f8cu: goto label_113f8c;
        case 0x113f90u: goto label_113f90;
        case 0x113f94u: goto label_113f94;
        case 0x113f98u: goto label_113f98;
        case 0x113f9cu: goto label_113f9c;
        case 0x113fa0u: goto label_113fa0;
        case 0x113fa4u: goto label_113fa4;
        case 0x113fa8u: goto label_113fa8;
        case 0x113facu: goto label_113fac;
        case 0x113fb0u: goto label_113fb0;
        case 0x113fb4u: goto label_113fb4;
        case 0x113fb8u: goto label_113fb8;
        case 0x113fbcu: goto label_113fbc;
        case 0x113fc0u: goto label_113fc0;
        case 0x113fc4u: goto label_113fc4;
        case 0x113fc8u: goto label_113fc8;
        case 0x113fccu: goto label_113fcc;
        case 0x113fd0u: goto label_113fd0;
        case 0x113fd4u: goto label_113fd4;
        case 0x113fd8u: goto label_113fd8;
        case 0x113fdcu: goto label_113fdc;
        case 0x113fe0u: goto label_113fe0;
        case 0x113fe4u: goto label_113fe4;
        case 0x113fe8u: goto label_113fe8;
        case 0x113fecu: goto label_113fec;
        case 0x113ff0u: goto label_113ff0;
        case 0x113ff4u: goto label_113ff4;
        case 0x113ff8u: goto label_113ff8;
        case 0x113ffcu: goto label_113ffc;
        case 0x114000u: goto label_114000;
        case 0x114004u: goto label_114004;
        case 0x114008u: goto label_114008;
        default: break;
    }

    ctx->pc = 0x113e80u;

label_113e80:
    // 0x113e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x113e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_113e84:
    // 0x113e84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x113e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_113e88:
    // 0x113e88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x113e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_113e8c:
    // 0x113e8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x113e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_113e90:
    // 0x113e90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x113e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_113e94:
    // 0x113e94: 0xc059720  jal         func_165C80
label_113e98:
    if (ctx->pc == 0x113E98u) {
        ctx->pc = 0x113E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E94u;
        // 0x113e98: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113E9Cu;
        goto label_113e9c;
    }
    ctx->pc = 0x113E94u;
    SET_GPR_U32(ctx, 31, 0x113E9Cu);
    ctx->pc = 0x113E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E94u;
    // 0x113e98: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165C80u, 0x113E94u, 0x113E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E9Cu;
label_113e9c:
    // 0x113e9c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x113e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_113ea0:
    // 0x113ea0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x113ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_113ea4:
    // 0x113ea4: 0x240202c8  addiu       $v0, $zero, 0x2C8
    ctx->pc = 0x113ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 712));
label_113ea8:
    // 0x113ea8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x113ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113eac:
    // 0x113eac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x113eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113eb0:
    // 0x113eb0: 0xa064002b  sb          $a0, 0x2B($v1)
    ctx->pc = 0x113eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 4));
label_113eb4:
    // 0x113eb4: 0xae420254  sw          $v0, 0x254($s2)
    ctx->pc = 0x113eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 596), GPR_U32(ctx, 2));
label_113eb8:
    // 0x113eb8: 0xae400258  sw          $zero, 0x258($s2)
    ctx->pc = 0x113eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 0));
label_113ebc:
    // 0x113ebc: 0xae40025c  sw          $zero, 0x25C($s2)
    ctx->pc = 0x113ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 604), GPR_U32(ctx, 0));
label_113ec0:
    // 0x113ec0: 0xae400260  sw          $zero, 0x260($s2)
    ctx->pc = 0x113ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 0));
label_113ec4:
    // 0x113ec4: 0xae40026c  sw          $zero, 0x26C($s2)
    ctx->pc = 0x113ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 0));
label_113ec8:
    // 0x113ec8: 0xae440274  sw          $a0, 0x274($s2)
    ctx->pc = 0x113ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 628), GPR_U32(ctx, 4));
label_113ecc:
    // 0x113ecc: 0xae4002a0  sw          $zero, 0x2A0($s2)
    ctx->pc = 0x113eccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 672), GPR_U32(ctx, 0));
label_113ed0:
    // 0x113ed0: 0x1000000b  b           . + 4 + (0xB << 2)
label_113ed4:
    if (ctx->pc == 0x113ED4u) {
        ctx->pc = 0x113ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113ED0u;
        // 0x113ed4: 0xa2400285  sb          $zero, 0x285($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 645), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113ED8u;
        goto label_113ed8;
    }
    ctx->pc = 0x113ED0u;
    {
        const bool branch_taken_0x113ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113ED0u;
        // 0x113ed4: 0xa2400285  sb          $zero, 0x285($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 645), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ed0) {
            ctx->pc = 0x113F00u;
            goto label_113f00;
        }
    }
    ctx->pc = 0x113ED8u;
label_113ed8:
    // 0x113ed8: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x113ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_113edc:
    // 0x113edc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113ee0:
    // 0x113ee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113ee4:
    // 0x113ee4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x113ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113ee8:
    // 0x113ee8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x113ee8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113eec:
    // 0x113eec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x113eecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113ef0:
    // 0x113ef0: 0xc043e58  jal         func_10F960
label_113ef4:
    if (ctx->pc == 0x113EF4u) {
        ctx->pc = 0x113EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EF0u;
        // 0x113ef4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113EF8u;
        goto label_113ef8;
    }
    ctx->pc = 0x113EF0u;
    SET_GPR_U32(ctx, 31, 0x113EF8u);
    ctx->pc = 0x113EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113EF0u;
    // 0x113ef4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F960u, 0x113EF0u, 0x113EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113EF8u;
label_113ef8:
    // 0x113ef8: 0x26310044  addiu       $s1, $s1, 0x44
    ctx->pc = 0x113ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_113efc:
    // 0x113efc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x113efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_113f00:
    // 0x113f00: 0x8e4202a4  lw          $v0, 0x2A4($s2)
    ctx->pc = 0x113f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 676)));
label_113f04:
    // 0x113f04: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x113f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_113f08:
    // 0x113f08: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_113f0c:
    if (ctx->pc == 0x113F0Cu) {
        ctx->pc = 0x113F10u;
        goto label_113f10;
    }
    ctx->pc = 0x113F08u;
    {
        const bool branch_taken_0x113f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113f08) {
            ctx->pc = 0x113ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113ed8;
        }
    }
    ctx->pc = 0x113F10u;
label_113f10:
    // 0x113f10: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x113f10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_113f14:
    // 0x113f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113f18:
    // 0x113f18: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x113f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_113f1c:
    // 0x113f1c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x113f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_113f20:
    // 0x113f20: 0x320f809  jalr        $t9
label_113f24:
    if (ctx->pc == 0x113F24u) {
        ctx->pc = 0x113F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F20u;
        // 0x113f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113F28u;
        goto label_113f28;
    }
    ctx->pc = 0x113F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x113F28u);
        ctx->pc = 0x113F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F20u;
        // 0x113f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113F20u, 0x113F28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113F28u;
label_113f28:
    // 0x113f28: 0x8f83824c  lw          $v1, -0x7DB4($gp)
    ctx->pc = 0x113f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935116)));
label_113f2c:
    // 0x113f2c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_113f30:
    if (ctx->pc == 0x113F30u) {
        ctx->pc = 0x113F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F2Cu;
        // 0x113f30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113F34u;
        goto label_113f34;
    }
    ctx->pc = 0x113F2Cu;
    {
        const bool branch_taken_0x113f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F2Cu;
        // 0x113f30: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f2c) {
            ctx->pc = 0x113FACu;
            goto label_113fac;
        }
    }
    ctx->pc = 0x113F34u;
label_113f34:
    // 0x113f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_113f38:
    // 0x113f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113f3c:
    // 0x113f3c: 0xa242007a  sb          $v0, 0x7A($s2)
    ctx->pc = 0x113f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 122), (uint8_t)GPR_U32(ctx, 2));
label_113f40:
    // 0x113f40: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x113f40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_113f44:
    // 0x113f44: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x113f44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_113f48:
    // 0x113f48: 0x320f809  jalr        $t9
label_113f4c:
    if (ctx->pc == 0x113F4Cu) {
        ctx->pc = 0x113F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F48u;
        // 0x113f4c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113F50u;
        goto label_113f50;
    }
    ctx->pc = 0x113F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x113F50u);
        ctx->pc = 0x113F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F48u;
        // 0x113f4c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113F48u, 0x113F50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113F50u;
label_113f50:
    // 0x113f50: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x113f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_113f54:
    // 0x113f54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_113f58:
    // 0x113f58: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x113f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_113f5c:
    // 0x113f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113f60:
    // 0x113f60: 0x8f82824c  lw          $v0, -0x7DB4($gp)
    ctx->pc = 0x113f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935116)));
label_113f64:
    // 0x113f64: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x113f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_113f68:
    // 0x113f68: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x113f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_113f6c:
    // 0x113f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x113f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_113f70:
    // 0x113f70: 0x320f809  jalr        $t9
label_113f74:
    if (ctx->pc == 0x113F74u) {
        ctx->pc = 0x113F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F70u;
        // 0x113f74: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x113F78u;
        goto label_113f78;
    }
    ctx->pc = 0x113F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x113F78u);
        ctx->pc = 0x113F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F70u;
        // 0x113f74: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113F70u, 0x113F78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113F78u;
label_113f78:
    // 0x113f78: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x113f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_113f7c:
    // 0x113f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113f80:
    // 0x113f80: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x113f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_113f84:
    // 0x113f84: 0x320f809  jalr        $t9
label_113f88:
    if (ctx->pc == 0x113F88u) {
        ctx->pc = 0x113F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F84u;
        // 0x113f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113F8Cu;
        goto label_113f8c;
    }
    ctx->pc = 0x113F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x113F8Cu);
        ctx->pc = 0x113F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F84u;
        // 0x113f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113F84u, 0x113F8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113F8Cu;
label_113f8c:
    // 0x113f8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x113f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_113f90:
    // 0x113f90: 0xc045004  jal         func_114010
label_113f94:
    if (ctx->pc == 0x113F94u) {
        ctx->pc = 0x113F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F90u;
        // 0x113f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113F98u;
        goto label_113f98;
    }
    ctx->pc = 0x113F90u;
    SET_GPR_U32(ctx, 31, 0x113F98u);
    ctx->pc = 0x113F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F90u;
    // 0x113f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114010u, 0x113F90u, 0x113F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F98u;
label_113f98:
    // 0x113f98: 0xc780824c  lwc1        $f0, -0x7DB4($gp)
    ctx->pc = 0x113f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_113f9c:
    // 0x113f9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x113f9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_113fa0:
    // 0x113fa0: 0xe6400280  swc1        $f0, 0x280($s2)
    ctx->pc = 0x113fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 640), bits); }
label_113fa4:
    // 0x113fa4: 0x10000002  b           . + 4 + (0x2 << 2)
label_113fa8:
    if (ctx->pc == 0x113FA8u) {
        ctx->pc = 0x113FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FA4u;
        // 0x113fa8: 0xae400270  sw          $zero, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113FACu;
        goto label_113fac;
    }
    ctx->pc = 0x113FA4u;
    {
        const bool branch_taken_0x113fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FA4u;
        // 0x113fa8: 0xae400270  sw          $zero, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fa4) {
            ctx->pc = 0x113FB0u;
            goto label_113fb0;
        }
    }
    ctx->pc = 0x113FACu;
label_113fac:
    // 0x113fac: 0xae430270  sw          $v1, 0x270($s2)
    ctx->pc = 0x113facu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 3));
label_113fb0:
    // 0x113fb0: 0x8f88824c  lw          $t0, -0x7DB4($gp)
    ctx->pc = 0x113fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935116)));
label_113fb4:
    // 0x113fb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x113fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113fb8:
    // 0x113fb8: 0x92450255  lbu         $a1, 0x255($s2)
    ctx->pc = 0x113fb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_113fbc:
    // 0x113fbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x113fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_113fc0:
    // 0x113fc0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x113fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_113fc4:
    // 0x113fc4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x113fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_113fc8:
    // 0x113fc8: 0xc8380a  movz        $a3, $a2, $t0
    ctx->pc = 0x113fc8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
label_113fcc:
    // 0x113fcc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x113fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_113fd0:
    // 0x113fd0: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x113fd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_113fd4:
    // 0x113fd4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x113fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_113fd8:
    // 0x113fd8: 0xa2430255  sb          $v1, 0x255($s2)
    ctx->pc = 0x113fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 3));
label_113fdc:
    // 0x113fdc: 0x8e430230  lw          $v1, 0x230($s2)
    ctx->pc = 0x113fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 560)));
label_113fe0:
    // 0x113fe0: 0xac640320  sw          $a0, 0x320($v1)
    ctx->pc = 0x113fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 800), GPR_U32(ctx, 4));
label_113fe4:
    // 0x113fe4: 0x8e430234  lw          $v1, 0x234($s2)
    ctx->pc = 0x113fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 564)));
label_113fe8:
    // 0x113fe8: 0xac640320  sw          $a0, 0x320($v1)
    ctx->pc = 0x113fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 800), GPR_U32(ctx, 4));
label_113fec:
    // 0x113fec: 0x8e430238  lw          $v1, 0x238($s2)
    ctx->pc = 0x113fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 568)));
label_113ff0:
    // 0x113ff0: 0xac640320  sw          $a0, 0x320($v1)
    ctx->pc = 0x113ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 800), GPR_U32(ctx, 4));
label_113ff4:
    // 0x113ff4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x113ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_113ff8:
    // 0x113ff8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x113ff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_113ffc:
    // 0x113ffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x113ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_114000:
    // 0x114000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x114000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_114004:
    // 0x114004: 0x3e00008  jr          $ra
label_114008:
    if (ctx->pc == 0x114008u) {
        ctx->pc = 0x114008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114004u;
        // 0x114008: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11400Cu;
        goto label_fallthrough_0x114004;
    }
    ctx->pc = 0x114004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114004u;
        // 0x114008: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x114004:
    ctx->pc = 0x11400Cu;
}
