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

// Function: FUN_001dfbd0
// Address: 0x1dfbd0 - 0x1dfec0
void FUN_001dfbd0_0x1dfbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dfbd0_0x1dfbd0");
#endif

    switch (ctx->pc) {
        case 0x1dfbd0u: goto label_1dfbd0;
        case 0x1dfbd4u: goto label_1dfbd4;
        case 0x1dfbd8u: goto label_1dfbd8;
        case 0x1dfbdcu: goto label_1dfbdc;
        case 0x1dfbe0u: goto label_1dfbe0;
        case 0x1dfbe4u: goto label_1dfbe4;
        case 0x1dfbe8u: goto label_1dfbe8;
        case 0x1dfbecu: goto label_1dfbec;
        case 0x1dfbf0u: goto label_1dfbf0;
        case 0x1dfbf4u: goto label_1dfbf4;
        case 0x1dfbf8u: goto label_1dfbf8;
        case 0x1dfbfcu: goto label_1dfbfc;
        case 0x1dfc00u: goto label_1dfc00;
        case 0x1dfc04u: goto label_1dfc04;
        case 0x1dfc08u: goto label_1dfc08;
        case 0x1dfc0cu: goto label_1dfc0c;
        case 0x1dfc10u: goto label_1dfc10;
        case 0x1dfc14u: goto label_1dfc14;
        case 0x1dfc18u: goto label_1dfc18;
        case 0x1dfc1cu: goto label_1dfc1c;
        case 0x1dfc20u: goto label_1dfc20;
        case 0x1dfc24u: goto label_1dfc24;
        case 0x1dfc28u: goto label_1dfc28;
        case 0x1dfc2cu: goto label_1dfc2c;
        case 0x1dfc30u: goto label_1dfc30;
        case 0x1dfc34u: goto label_1dfc34;
        case 0x1dfc38u: goto label_1dfc38;
        case 0x1dfc3cu: goto label_1dfc3c;
        case 0x1dfc40u: goto label_1dfc40;
        case 0x1dfc44u: goto label_1dfc44;
        case 0x1dfc48u: goto label_1dfc48;
        case 0x1dfc4cu: goto label_1dfc4c;
        case 0x1dfc50u: goto label_1dfc50;
        case 0x1dfc54u: goto label_1dfc54;
        case 0x1dfc58u: goto label_1dfc58;
        case 0x1dfc5cu: goto label_1dfc5c;
        case 0x1dfc60u: goto label_1dfc60;
        case 0x1dfc64u: goto label_1dfc64;
        case 0x1dfc68u: goto label_1dfc68;
        case 0x1dfc6cu: goto label_1dfc6c;
        case 0x1dfc70u: goto label_1dfc70;
        case 0x1dfc74u: goto label_1dfc74;
        case 0x1dfc78u: goto label_1dfc78;
        case 0x1dfc7cu: goto label_1dfc7c;
        case 0x1dfc80u: goto label_1dfc80;
        case 0x1dfc84u: goto label_1dfc84;
        case 0x1dfc88u: goto label_1dfc88;
        case 0x1dfc8cu: goto label_1dfc8c;
        case 0x1dfc90u: goto label_1dfc90;
        case 0x1dfc94u: goto label_1dfc94;
        case 0x1dfc98u: goto label_1dfc98;
        case 0x1dfc9cu: goto label_1dfc9c;
        case 0x1dfca0u: goto label_1dfca0;
        case 0x1dfca4u: goto label_1dfca4;
        case 0x1dfca8u: goto label_1dfca8;
        case 0x1dfcacu: goto label_1dfcac;
        case 0x1dfcb0u: goto label_1dfcb0;
        case 0x1dfcb4u: goto label_1dfcb4;
        case 0x1dfcb8u: goto label_1dfcb8;
        case 0x1dfcbcu: goto label_1dfcbc;
        case 0x1dfcc0u: goto label_1dfcc0;
        case 0x1dfcc4u: goto label_1dfcc4;
        case 0x1dfcc8u: goto label_1dfcc8;
        case 0x1dfcccu: goto label_1dfccc;
        case 0x1dfcd0u: goto label_1dfcd0;
        case 0x1dfcd4u: goto label_1dfcd4;
        case 0x1dfcd8u: goto label_1dfcd8;
        case 0x1dfcdcu: goto label_1dfcdc;
        case 0x1dfce0u: goto label_1dfce0;
        case 0x1dfce4u: goto label_1dfce4;
        case 0x1dfce8u: goto label_1dfce8;
        case 0x1dfcecu: goto label_1dfcec;
        case 0x1dfcf0u: goto label_1dfcf0;
        case 0x1dfcf4u: goto label_1dfcf4;
        case 0x1dfcf8u: goto label_1dfcf8;
        case 0x1dfcfcu: goto label_1dfcfc;
        case 0x1dfd00u: goto label_1dfd00;
        case 0x1dfd04u: goto label_1dfd04;
        case 0x1dfd08u: goto label_1dfd08;
        case 0x1dfd0cu: goto label_1dfd0c;
        case 0x1dfd10u: goto label_1dfd10;
        case 0x1dfd14u: goto label_1dfd14;
        case 0x1dfd18u: goto label_1dfd18;
        case 0x1dfd1cu: goto label_1dfd1c;
        case 0x1dfd20u: goto label_1dfd20;
        case 0x1dfd24u: goto label_1dfd24;
        case 0x1dfd28u: goto label_1dfd28;
        case 0x1dfd2cu: goto label_1dfd2c;
        case 0x1dfd30u: goto label_1dfd30;
        case 0x1dfd34u: goto label_1dfd34;
        case 0x1dfd38u: goto label_1dfd38;
        case 0x1dfd3cu: goto label_1dfd3c;
        case 0x1dfd40u: goto label_1dfd40;
        case 0x1dfd44u: goto label_1dfd44;
        case 0x1dfd48u: goto label_1dfd48;
        case 0x1dfd4cu: goto label_1dfd4c;
        case 0x1dfd50u: goto label_1dfd50;
        case 0x1dfd54u: goto label_1dfd54;
        case 0x1dfd58u: goto label_1dfd58;
        case 0x1dfd5cu: goto label_1dfd5c;
        case 0x1dfd60u: goto label_1dfd60;
        case 0x1dfd64u: goto label_1dfd64;
        case 0x1dfd68u: goto label_1dfd68;
        case 0x1dfd6cu: goto label_1dfd6c;
        case 0x1dfd70u: goto label_1dfd70;
        case 0x1dfd74u: goto label_1dfd74;
        case 0x1dfd78u: goto label_1dfd78;
        case 0x1dfd7cu: goto label_1dfd7c;
        case 0x1dfd80u: goto label_1dfd80;
        case 0x1dfd84u: goto label_1dfd84;
        case 0x1dfd88u: goto label_1dfd88;
        case 0x1dfd8cu: goto label_1dfd8c;
        case 0x1dfd90u: goto label_1dfd90;
        case 0x1dfd94u: goto label_1dfd94;
        case 0x1dfd98u: goto label_1dfd98;
        case 0x1dfd9cu: goto label_1dfd9c;
        case 0x1dfda0u: goto label_1dfda0;
        case 0x1dfda4u: goto label_1dfda4;
        case 0x1dfda8u: goto label_1dfda8;
        case 0x1dfdacu: goto label_1dfdac;
        case 0x1dfdb0u: goto label_1dfdb0;
        case 0x1dfdb4u: goto label_1dfdb4;
        case 0x1dfdb8u: goto label_1dfdb8;
        case 0x1dfdbcu: goto label_1dfdbc;
        case 0x1dfdc0u: goto label_1dfdc0;
        case 0x1dfdc4u: goto label_1dfdc4;
        case 0x1dfdc8u: goto label_1dfdc8;
        case 0x1dfdccu: goto label_1dfdcc;
        case 0x1dfdd0u: goto label_1dfdd0;
        case 0x1dfdd4u: goto label_1dfdd4;
        case 0x1dfdd8u: goto label_1dfdd8;
        case 0x1dfddcu: goto label_1dfddc;
        case 0x1dfde0u: goto label_1dfde0;
        case 0x1dfde4u: goto label_1dfde4;
        case 0x1dfde8u: goto label_1dfde8;
        case 0x1dfdecu: goto label_1dfdec;
        case 0x1dfdf0u: goto label_1dfdf0;
        case 0x1dfdf4u: goto label_1dfdf4;
        case 0x1dfdf8u: goto label_1dfdf8;
        case 0x1dfdfcu: goto label_1dfdfc;
        case 0x1dfe00u: goto label_1dfe00;
        case 0x1dfe04u: goto label_1dfe04;
        case 0x1dfe08u: goto label_1dfe08;
        case 0x1dfe0cu: goto label_1dfe0c;
        case 0x1dfe10u: goto label_1dfe10;
        case 0x1dfe14u: goto label_1dfe14;
        case 0x1dfe18u: goto label_1dfe18;
        case 0x1dfe1cu: goto label_1dfe1c;
        case 0x1dfe20u: goto label_1dfe20;
        case 0x1dfe24u: goto label_1dfe24;
        case 0x1dfe28u: goto label_1dfe28;
        case 0x1dfe2cu: goto label_1dfe2c;
        case 0x1dfe30u: goto label_1dfe30;
        case 0x1dfe34u: goto label_1dfe34;
        case 0x1dfe38u: goto label_1dfe38;
        case 0x1dfe3cu: goto label_1dfe3c;
        case 0x1dfe40u: goto label_1dfe40;
        case 0x1dfe44u: goto label_1dfe44;
        case 0x1dfe48u: goto label_1dfe48;
        case 0x1dfe4cu: goto label_1dfe4c;
        case 0x1dfe50u: goto label_1dfe50;
        case 0x1dfe54u: goto label_1dfe54;
        case 0x1dfe58u: goto label_1dfe58;
        case 0x1dfe5cu: goto label_1dfe5c;
        case 0x1dfe60u: goto label_1dfe60;
        case 0x1dfe64u: goto label_1dfe64;
        case 0x1dfe68u: goto label_1dfe68;
        case 0x1dfe6cu: goto label_1dfe6c;
        case 0x1dfe70u: goto label_1dfe70;
        case 0x1dfe74u: goto label_1dfe74;
        case 0x1dfe78u: goto label_1dfe78;
        case 0x1dfe7cu: goto label_1dfe7c;
        case 0x1dfe80u: goto label_1dfe80;
        case 0x1dfe84u: goto label_1dfe84;
        case 0x1dfe88u: goto label_1dfe88;
        case 0x1dfe8cu: goto label_1dfe8c;
        case 0x1dfe90u: goto label_1dfe90;
        case 0x1dfe94u: goto label_1dfe94;
        case 0x1dfe98u: goto label_1dfe98;
        case 0x1dfe9cu: goto label_1dfe9c;
        case 0x1dfea0u: goto label_1dfea0;
        case 0x1dfea4u: goto label_1dfea4;
        case 0x1dfea8u: goto label_1dfea8;
        case 0x1dfeacu: goto label_1dfeac;
        case 0x1dfeb0u: goto label_1dfeb0;
        case 0x1dfeb4u: goto label_1dfeb4;
        case 0x1dfeb8u: goto label_1dfeb8;
        case 0x1dfebcu: goto label_1dfebc;
        default: break;
    }

    ctx->pc = 0x1dfbd0u;

label_1dfbd0:
    // 0x1dfbd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dfbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1dfbd4:
    // 0x1dfbd4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1dfbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1dfbd8:
    // 0x1dfbd8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1dfbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1dfbdc:
    // 0x1dfbdc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1dfbdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfbe0:
    // 0x1dfbe0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1dfbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1dfbe4:
    // 0x1dfbe4: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1dfbe4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
label_1dfbe8:
    // 0x1dfbe8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1dfbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1dfbec:
    // 0x1dfbec: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1dfbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_1dfbf0:
    // 0x1dfbf0: 0x3c170039  lui         $s7, 0x39
    ctx->pc = 0x1dfbf0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)57 << 16));
label_1dfbf4:
    // 0x1dfbf4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1dfbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_1dfbf8:
    // 0x1dfbf8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1dfbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1dfbfc:
    // 0x1dfbfc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1dfbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1dfc00:
    // 0x1dfc00: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1dfc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1dfc04:
    // 0x1dfc04: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1dfc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_1dfc08:
    // 0x1dfc08: 0xc07d0d8  jal         func_1F4360
label_1dfc0c:
    if (ctx->pc == 0x1DFC0Cu) {
        ctx->pc = 0x1DFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC08u;
        // 0x1dfc0c: 0x3c1e0039  lui         $fp, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFC10u;
        goto label_1dfc10;
    }
    ctx->pc = 0x1DFC08u;
    SET_GPR_U32(ctx, 31, 0x1DFC10u);
    ctx->pc = 0x1DFC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC08u;
    // 0x1dfc0c: 0x3c1e0039  lui         $fp, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DFC08u, 0x1DFC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC10u;
label_1dfc10:
    // 0x1dfc10: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1dfc10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dfc14:
    // 0x1dfc14: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1dfc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1dfc18:
    // 0x1dfc18: 0x24529f00  addiu       $s2, $v0, -0x6100
    ctx->pc = 0x1dfc18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942464));
label_1dfc1c:
    // 0x1dfc1c: 0x0  nop
    ctx->pc = 0x1dfc1cu;
    // NOP
label_1dfc20:
    // 0x1dfc20: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1dfc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1dfc24:
    // 0x1dfc24: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1dfc24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1dfc28:
    // 0x1dfc28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dfc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dfc2c:
    // 0x1dfc2c: 0xaea0ab10  sw          $zero, -0x54F0($s5)
    ctx->pc = 0x1dfc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294945552), GPR_U32(ctx, 0));
label_1dfc30:
    // 0x1dfc30: 0xac80ab14  sw          $zero, -0x54EC($a0)
    ctx->pc = 0x1dfc30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294945556), GPR_U32(ctx, 0));
label_1dfc34:
    // 0x1dfc34: 0x14620076  bne         $v1, $v0, . + 4 + (0x76 << 2)
label_1dfc38:
    if (ctx->pc == 0x1DFC38u) {
        ctx->pc = 0x1DFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC34u;
        // 0x1dfc38: 0xa3d4a300  sb          $s4, -0x5D00($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 4294943488), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFC3Cu;
        goto label_1dfc3c;
    }
    ctx->pc = 0x1DFC34u;
    {
        const bool branch_taken_0x1dfc34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC34u;
        // 0x1dfc38: 0xa3d4a300  sb          $s4, -0x5D00($fp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 30), 4294943488), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc34) {
            ctx->pc = 0x1DFE10u;
            goto label_1dfe10;
        }
    }
    ctx->pc = 0x1DFC3Cu;
label_1dfc3c:
    // 0x1dfc3c: 0xde500048  ld          $s0, 0x48($s2)
    ctx->pc = 0x1dfc3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 72)));
label_1dfc40:
    // 0x1dfc40: 0xc0821ba  jal         func_2086E8
label_1dfc44:
    if (ctx->pc == 0x1DFC44u) {
        ctx->pc = 0x1DFC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC40u;
        // 0x1dfc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFC48u;
        goto label_1dfc48;
    }
    ctx->pc = 0x1DFC40u;
    SET_GPR_U32(ctx, 31, 0x1DFC48u);
    ctx->pc = 0x1DFC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC40u;
    // 0x1dfc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1DFC40u, 0x1DFC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC48u;
label_1dfc48:
    // 0x1dfc48: 0xc08218c  jal         func_208630
label_1dfc4c:
    if (ctx->pc == 0x1DFC4Cu) {
        ctx->pc = 0x1DFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC48u;
        // 0x1dfc4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFC50u;
        goto label_1dfc50;
    }
    ctx->pc = 0x1DFC48u;
    SET_GPR_U32(ctx, 31, 0x1DFC50u);
    ctx->pc = 0x1DFC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC48u;
    // 0x1dfc4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1DFC48u, 0x1DFC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC50u;
label_1dfc50:
    // 0x1dfc50: 0xde510038  ld          $s1, 0x38($s2)
    ctx->pc = 0x1dfc50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 18), 56)));
label_1dfc54:
    // 0x1dfc54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dfc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dfc58:
    // 0x1dfc58: 0xc0820d8  jal         func_208360
label_1dfc5c:
    if (ctx->pc == 0x1DFC5Cu) {
        ctx->pc = 0x1DFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC58u;
        // 0x1dfc5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFC60u;
        goto label_1dfc60;
    }
    ctx->pc = 0x1DFC58u;
    SET_GPR_U32(ctx, 31, 0x1DFC60u);
    ctx->pc = 0x1DFC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC58u;
    // 0x1dfc5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DFC58u, 0x1DFC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC60u;
label_1dfc60:
    // 0x1dfc60: 0xc0821ba  jal         func_2086E8
label_1dfc64:
    if (ctx->pc == 0x1DFC64u) {
        ctx->pc = 0x1DFC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC60u;
        // 0x1dfc64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFC68u;
        goto label_1dfc68;
    }
    ctx->pc = 0x1DFC60u;
    SET_GPR_U32(ctx, 31, 0x1DFC68u);
    ctx->pc = 0x1DFC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC60u;
    // 0x1dfc64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1DFC60u, 0x1DFC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC68u;
label_1dfc68:
    // 0x1dfc68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dfc6c:
    // 0x1dfc6c: 0xde450040  ld          $a1, 0x40($s2)
    ctx->pc = 0x1dfc6cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 64)));
label_1dfc70:
    // 0x1dfc70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dfc70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dfc74:
    // 0x1dfc74: 0xc081ffe  jal         func_207FF8
label_1dfc78:
    if (ctx->pc == 0x1DFC78u) {
        ctx->pc = 0x1DFC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC74u;
        // 0x1dfc78: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFC7Cu;
        goto label_1dfc7c;
    }
    ctx->pc = 0x1DFC74u;
    SET_GPR_U32(ctx, 31, 0x1DFC7Cu);
    ctx->pc = 0x1DFC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC74u;
    // 0x1dfc78: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DFC74u, 0x1DFC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC7Cu;
label_1dfc7c:
    // 0x1dfc7c: 0xde440078  ld          $a0, 0x78($s2)
    ctx->pc = 0x1dfc7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 120)));
label_1dfc80:
    // 0x1dfc80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dfc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dfc84:
    // 0x1dfc84: 0x340580b2  ori         $a1, $zero, 0x80B2
    ctx->pc = 0x1dfc84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
label_1dfc88:
    // 0x1dfc88: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1dfc88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_1dfc8c:
    // 0x1dfc8c: 0xc0820d8  jal         func_208360
label_1dfc90:
    if (ctx->pc == 0x1DFC90u) {
        ctx->pc = 0x1DFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC8Cu;
        // 0x1dfc90: 0xfe500048  sd          $s0, 0x48($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFC94u;
        goto label_1dfc94;
    }
    ctx->pc = 0x1DFC8Cu;
    SET_GPR_U32(ctx, 31, 0x1DFC94u);
    ctx->pc = 0x1DFC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC8Cu;
    // 0x1dfc90: 0xfe500048  sd          $s0, 0x48($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DFC8Cu, 0x1DFC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC94u;
label_1dfc94:
    // 0x1dfc94: 0xde440058  ld          $a0, 0x58($s2)
    ctx->pc = 0x1dfc94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 88)));
label_1dfc98:
    // 0x1dfc98: 0xc081ffe  jal         func_207FF8
label_1dfc9c:
    if (ctx->pc == 0x1DFC9Cu) {
        ctx->pc = 0x1DFC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC98u;
        // 0x1dfc9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFCA0u;
        goto label_1dfca0;
    }
    ctx->pc = 0x1DFC98u;
    SET_GPR_U32(ctx, 31, 0x1DFCA0u);
    ctx->pc = 0x1DFC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC98u;
    // 0x1dfc9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DFC98u, 0x1DFCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCA0u;
label_1dfca0:
    // 0x1dfca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dfca4:
    // 0x1dfca4: 0xc0821ba  jal         func_2086E8
label_1dfca8:
    if (ctx->pc == 0x1DFCA8u) {
        ctx->pc = 0x1DFCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCA4u;
        // 0x1dfca8: 0xfe420058  sd          $v0, 0x58($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFCACu;
        goto label_1dfcac;
    }
    ctx->pc = 0x1DFCA4u;
    SET_GPR_U32(ctx, 31, 0x1DFCACu);
    ctx->pc = 0x1DFCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCA4u;
    // 0x1dfca8: 0xfe420058  sd          $v0, 0x58($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1DFCA4u, 0x1DFCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCACu;
label_1dfcac:
    // 0x1dfcac: 0xc08218c  jal         func_208630
label_1dfcb0:
    if (ctx->pc == 0x1DFCB0u) {
        ctx->pc = 0x1DFCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCACu;
        // 0x1dfcb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFCB4u;
        goto label_1dfcb4;
    }
    ctx->pc = 0x1DFCACu;
    SET_GPR_U32(ctx, 31, 0x1DFCB4u);
    ctx->pc = 0x1DFCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCACu;
    // 0x1dfcb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1DFCACu, 0x1DFCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCB4u;
label_1dfcb4:
    // 0x1dfcb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dfcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dfcb8:
    // 0x1dfcb8: 0xc0820d8  jal         func_208360
label_1dfcbc:
    if (ctx->pc == 0x1DFCBCu) {
        ctx->pc = 0x1DFCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCB8u;
        // 0x1dfcbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFCC0u;
        goto label_1dfcc0;
    }
    ctx->pc = 0x1DFCB8u;
    SET_GPR_U32(ctx, 31, 0x1DFCC0u);
    ctx->pc = 0x1DFCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCB8u;
    // 0x1dfcbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DFCB8u, 0x1DFCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCC0u;
label_1dfcc0:
    // 0x1dfcc0: 0xc0821ba  jal         func_2086E8
label_1dfcc4:
    if (ctx->pc == 0x1DFCC4u) {
        ctx->pc = 0x1DFCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCC0u;
        // 0x1dfcc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFCC8u;
        goto label_1dfcc8;
    }
    ctx->pc = 0x1DFCC0u;
    SET_GPR_U32(ctx, 31, 0x1DFCC8u);
    ctx->pc = 0x1DFCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCC0u;
    // 0x1dfcc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1DFCC0u, 0x1DFCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCC8u;
label_1dfcc8:
    // 0x1dfcc8: 0x1262000e  beq         $s3, $v0, . + 4 + (0xE << 2)
label_1dfccc:
    if (ctx->pc == 0x1DFCCCu) {
        ctx->pc = 0x1DFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCC8u;
        // 0x1dfccc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFCD0u;
        goto label_1dfcd0;
    }
    ctx->pc = 0x1DFCC8u;
    {
        const bool branch_taken_0x1dfcc8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCC8u;
        // 0x1dfccc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfcc8) {
            ctx->pc = 0x1DFD04u;
            goto label_1dfd04;
        }
    }
    ctx->pc = 0x1DFCD0u;
label_1dfcd0:
    // 0x1dfcd0: 0x1053000d  beq         $v0, $s3, . + 4 + (0xD << 2)
label_1dfcd4:
    if (ctx->pc == 0x1DFCD4u) {
        ctx->pc = 0x1DFCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCD0u;
        // 0x1dfcd4: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFCD8u;
        goto label_1dfcd8;
    }
    ctx->pc = 0x1DFCD0u;
    {
        const bool branch_taken_0x1dfcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1DFCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCD0u;
        // 0x1dfcd4: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfcd0) {
            ctx->pc = 0x1DFD08u;
            goto label_1dfd08;
        }
    }
    ctx->pc = 0x1DFCD8u;
label_1dfcd8:
    // 0x1dfcd8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1dfcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1dfcdc:
    // 0x1dfcdc: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x1dfcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1dfce0:
    // 0x1dfce0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dfce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dfce4:
    // 0x1dfce4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1dfce4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1dfce8:
    // 0x1dfce8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1dfcec:
    if (ctx->pc == 0x1DFCECu) {
        ctx->pc = 0x1DFCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCE8u;
        // 0x1dfcec: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFCF0u;
        goto label_1dfcf0;
    }
    ctx->pc = 0x1DFCE8u;
    {
        const bool branch_taken_0x1dfce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCE8u;
        // 0x1dfcec: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfce8) {
            ctx->pc = 0x1DFD04u;
            goto label_1dfd04;
        }
    }
    ctx->pc = 0x1DFCF0u;
label_1dfcf0:
    // 0x1dfcf0: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1dfcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1dfcf4:
    // 0x1dfcf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dfcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dfcf8:
    // 0x1dfcf8: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1dfcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_1dfcfc:
    // 0x1dfcfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dfcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1dfd00:
    // 0x1dfd00: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x1dfd00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_1dfd04:
    // 0x1dfd04: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1dfd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1dfd08:
    // 0x1dfd08: 0x26500060  addiu       $s0, $s2, 0x60
    ctx->pc = 0x1dfd08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_1dfd0c:
    // 0x1dfd0c: 0x10000032  b           . + 4 + (0x32 << 2)
label_1dfd10:
    if (ctx->pc == 0x1DFD10u) {
        ctx->pc = 0x1DFD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD0Cu;
        // 0x1dfd10: 0x2451a040  addiu       $s1, $v0, -0x5FC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD14u;
        goto label_1dfd14;
    }
    ctx->pc = 0x1DFD0Cu;
    {
        const bool branch_taken_0x1dfd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD0Cu;
        // 0x1dfd10: 0x2451a040  addiu       $s1, $v0, -0x5FC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd0c) {
            ctx->pc = 0x1DFDD8u;
            goto label_1dfdd8;
        }
    }
    ctx->pc = 0x1DFD14u;
label_1dfd14:
    // 0x1dfd14: 0x0  nop
    ctx->pc = 0x1dfd14u;
    // NOP
label_1dfd18:
    // 0x1dfd18: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1dfd18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfd1c:
    // 0x1dfd1c: 0x4630007  bgezl       $v1, . + 4 + (0x7 << 2)
label_1dfd20:
    if (ctx->pc == 0x1DFD20u) {
        ctx->pc = 0x1DFD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD1Cu;
        // 0x1dfd20: 0x92420068  lbu         $v0, 0x68($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD24u;
        goto label_1dfd24;
    }
    ctx->pc = 0x1DFD1Cu;
    {
        const bool branch_taken_0x1dfd1c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1dfd1c) {
            ctx->pc = 0x1DFD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFD1Cu;
            // 0x1dfd20: 0x92420068  lbu         $v0, 0x68($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFD3Cu;
            goto label_1dfd3c;
        }
    }
    ctx->pc = 0x1DFD24u;
label_1dfd24:
    // 0x1dfd24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dfd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfd28:
    // 0x1dfd28: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1dfd28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfd2c:
    // 0x1dfd2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dfd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dfd30:
    // 0x1dfd30: 0xa2430068  sb          $v1, 0x68($s2)
    ctx->pc = 0x1dfd30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 3));
label_1dfd34:
    // 0x1dfd34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dfd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dfd38:
    // 0x1dfd38: 0x92420068  lbu         $v0, 0x68($s2)
    ctx->pc = 0x1dfd38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
label_1dfd3c:
    // 0x1dfd3c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1dfd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_1dfd40:
    // 0x1dfd40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dfd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1dfd44:
    // 0x1dfd44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1dfd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1dfd48:
    // 0x1dfd48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dfd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfd4c:
    // 0x1dfd4c: 0x60f809  jalr        $v1
label_1dfd50:
    if (ctx->pc == 0x1DFD50u) {
        ctx->pc = 0x1DFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD4Cu;
        // 0x1dfd50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD54u;
        goto label_1dfd54;
    }
    ctx->pc = 0x1DFD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DFD54u);
        ctx->pc = 0x1DFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD4Cu;
        // 0x1dfd50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFD4Cu, 0x1DFD54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DFD54u;
label_1dfd54:
    // 0x1dfd54: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x1dfd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1dfd58:
    // 0x1dfd58: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_1dfd5c:
    if (ctx->pc == 0x1DFD5Cu) {
        ctx->pc = 0x1DFD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD58u;
        // 0x1dfd5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD60u;
        goto label_1dfd60;
    }
    ctx->pc = 0x1DFD58u;
    {
        const bool branch_taken_0x1dfd58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD58u;
        // 0x1dfd5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd58) {
            ctx->pc = 0x1DFDF8u;
            goto label_1dfdf8;
        }
    }
    ctx->pc = 0x1DFD60u;
label_1dfd60:
    // 0x1dfd60: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dfd64:
    if (ctx->pc == 0x1DFD64u) {
        ctx->pc = 0x1DFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD60u;
        // 0x1dfd64: 0x26460060  addiu       $a2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD68u;
        goto label_1dfd68;
    }
    ctx->pc = 0x1DFD60u;
    {
        const bool branch_taken_0x1dfd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD60u;
        // 0x1dfd64: 0x26460060  addiu       $a2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd60) {
            ctx->pc = 0x1DFD70u;
            goto label_1dfd70;
        }
    }
    ctx->pc = 0x1DFD68u;
label_1dfd68:
    // 0x1dfd68: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x1dfd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1dfd6c:
    // 0x1dfd6c: 0x0  nop
    ctx->pc = 0x1dfd6cu;
    // NOP
label_1dfd70:
    // 0x1dfd70: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1dfd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1dfd74:
    // 0x1dfd74: 0x529f8  dsll        $a1, $a1, 7
    ctx->pc = 0x1dfd74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 7);
label_1dfd78:
    // 0x1dfd78: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1dfd78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1dfd7c:
    // 0x1dfd7c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1dfd7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfd80:
    // 0x1dfd80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dfd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dfd84:
    // 0x1dfd84: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1dfd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_1dfd88:
    // 0x1dfd88: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1dfd88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1dfd8c:
    // 0x1dfd8c: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x1dfd8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_1dfd90:
    // 0x1dfd90: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
label_1dfd94:
    if (ctx->pc == 0x1DFD94u) {
        ctx->pc = 0x1DFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD90u;
        // 0x1dfd94: 0xa3282d  daddu       $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD98u;
        goto label_1dfd98;
    }
    ctx->pc = 0x1DFD90u;
    {
        const bool branch_taken_0x1dfd90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD90u;
        // 0x1dfd94: 0xa3282d  daddu       $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd90) {
            ctx->pc = 0x1DFD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfd68;
        }
    }
    ctx->pc = 0x1DFD98u;
label_1dfd98:
    // 0x1dfd98: 0x4a20005  bltzl       $a1, . + 4 + (0x5 << 2)
label_1dfd9c:
    if (ctx->pc == 0x1DFD9Cu) {
        ctx->pc = 0x1DFD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD98u;
        // 0x1dfd9c: 0x5107a  dsrl        $v0, $a1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFDA0u;
        goto label_1dfda0;
    }
    ctx->pc = 0x1DFD98u;
    {
        const bool branch_taken_0x1dfd98 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1dfd98) {
            ctx->pc = 0x1DFD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFD98u;
            // 0x1dfd9c: 0x5107a  dsrl        $v0, $a1, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFDB0u;
            goto label_1dfdb0;
        }
    }
    ctx->pc = 0x1DFDA0u;
label_1dfda0:
    // 0x1dfda0: 0xc081a60  jal         func_206980
label_1dfda4:
    if (ctx->pc == 0x1DFDA4u) {
        ctx->pc = 0x1DFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDA0u;
        // 0x1dfda4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFDA8u;
        goto label_1dfda8;
    }
    ctx->pc = 0x1DFDA0u;
    SET_GPR_U32(ctx, 31, 0x1DFDA8u);
    ctx->pc = 0x1DFDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDA0u;
    // 0x1dfda4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1DFDA0u, 0x1DFDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDA8u;
label_1dfda8:
    // 0x1dfda8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1dfdac:
    if (ctx->pc == 0x1DFDACu) {
        ctx->pc = 0x1DFDB0u;
        goto label_1dfdb0;
    }
    ctx->pc = 0x1DFDA8u;
    {
        const bool branch_taken_0x1dfda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfda8) {
            ctx->pc = 0x1DFDC8u;
            goto label_1dfdc8;
        }
    }
    ctx->pc = 0x1DFDB0u;
label_1dfdb0:
    // 0x1dfdb0: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x1dfdb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1dfdb4:
    // 0x1dfdb4: 0xc081a60  jal         func_206980
label_1dfdb8:
    if (ctx->pc == 0x1DFDB8u) {
        ctx->pc = 0x1DFDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDB4u;
        // 0x1dfdb8: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFDBCu;
        goto label_1dfdbc;
    }
    ctx->pc = 0x1DFDB4u;
    SET_GPR_U32(ctx, 31, 0x1DFDBCu);
    ctx->pc = 0x1DFDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDB4u;
    // 0x1dfdb8: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1DFDB4u, 0x1DFDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDBCu;
label_1dfdbc:
    // 0x1dfdbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dfdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dfdc0:
    // 0x1dfdc0: 0xc081ffe  jal         func_207FF8
label_1dfdc4:
    if (ctx->pc == 0x1DFDC4u) {
        ctx->pc = 0x1DFDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDC0u;
        // 0x1dfdc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFDC8u;
        goto label_1dfdc8;
    }
    ctx->pc = 0x1DFDC0u;
    SET_GPR_U32(ctx, 31, 0x1DFDC8u);
    ctx->pc = 0x1DFDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDC0u;
    // 0x1dfdc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DFDC0u, 0x1DFDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDC8u;
label_1dfdc8:
    // 0x1dfdc8: 0xde440050  ld          $a0, 0x50($s2)
    ctx->pc = 0x1dfdc8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 80)));
label_1dfdcc:
    // 0x1dfdcc: 0xc081ffe  jal         func_207FF8
label_1dfdd0:
    if (ctx->pc == 0x1DFDD0u) {
        ctx->pc = 0x1DFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDCCu;
        // 0x1dfdd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFDD4u;
        goto label_1dfdd4;
    }
    ctx->pc = 0x1DFDCCu;
    SET_GPR_U32(ctx, 31, 0x1DFDD4u);
    ctx->pc = 0x1DFDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDCCu;
    // 0x1dfdd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DFDCCu, 0x1DFDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDD4u;
label_1dfdd4:
    // 0x1dfdd4: 0xfe420050  sd          $v0, 0x50($s2)
    ctx->pc = 0x1dfdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 2));
label_1dfdd8:
    // 0x1dfdd8: 0xde450050  ld          $a1, 0x50($s2)
    ctx->pc = 0x1dfdd8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 80)));
label_1dfddc:
    // 0x1dfddc: 0xc082014  jal         func_208050
label_1dfde0:
    if (ctx->pc == 0x1DFDE0u) {
        ctx->pc = 0x1DFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDDCu;
        // 0x1dfde0: 0xde440048  ld          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFDE4u;
        goto label_1dfde4;
    }
    ctx->pc = 0x1DFDDCu;
    SET_GPR_U32(ctx, 31, 0x1DFDE4u);
    ctx->pc = 0x1DFDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDDCu;
    // 0x1dfde0: 0xde440048  ld          $a0, 0x48($s2) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1DFDDCu, 0x1DFDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDE4u;
label_1dfde4:
    // 0x1dfde4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dfde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfde8:
    // 0x1dfde8: 0xc082178  jal         func_2085E0
label_1dfdec:
    if (ctx->pc == 0x1DFDECu) {
        ctx->pc = 0x1DFDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDE8u;
        // 0x1dfdec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFDF0u;
        goto label_1dfdf0;
    }
    ctx->pc = 0x1DFDE8u;
    SET_GPR_U32(ctx, 31, 0x1DFDF0u);
    ctx->pc = 0x1DFDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDE8u;
    // 0x1dfdec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1DFDE8u, 0x1DFDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDF0u;
label_1dfdf0:
    // 0x1dfdf0: 0x443ffc9  bgezl       $v0, . + 4 + (-0x37 << 2)
label_1dfdf4:
    if (ctx->pc == 0x1DFDF4u) {
        ctx->pc = 0x1DFDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDF0u;
        // 0x1dfdf4: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFDF8u;
        goto label_1dfdf8;
    }
    ctx->pc = 0x1DFDF0u;
    {
        const bool branch_taken_0x1dfdf0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1dfdf0) {
            ctx->pc = 0x1DFDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFDF0u;
            // 0x1dfdf4: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfd18;
        }
    }
    ctx->pc = 0x1DFDF8u;
label_1dfdf8:
    // 0x1dfdf8: 0x8ea5ab10  lw          $a1, -0x54F0($s5)
    ctx->pc = 0x1dfdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945552)));
label_1dfdfc:
    // 0x1dfdfc: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_1dfe00:
    if (ctx->pc == 0x1DFE00u) {
        ctx->pc = 0x1DFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDFCu;
        // 0x1dfe00: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE04u;
        goto label_1dfe04;
    }
    ctx->pc = 0x1DFDFCu;
    {
        const bool branch_taken_0x1dfdfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfdfc) {
            ctx->pc = 0x1DFE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFDFCu;
            // 0x1dfe00: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFE14u;
            goto label_1dfe14;
        }
    }
    ctx->pc = 0x1DFE04u;
label_1dfe04:
    // 0x1dfe04: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1dfe04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1dfe08:
    // 0x1dfe08: 0xc07548a  jal         func_1D5228
label_1dfe0c:
    if (ctx->pc == 0x1DFE0Cu) {
        ctx->pc = 0x1DFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE08u;
        // 0x1dfe0c: 0x26e6a310  addiu       $a2, $s7, -0x5CF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE10u;
        goto label_1dfe10;
    }
    ctx->pc = 0x1DFE08u;
    SET_GPR_U32(ctx, 31, 0x1DFE10u);
    ctx->pc = 0x1DFE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE08u;
    // 0x1dfe0c: 0x26e6a310  addiu       $a2, $s7, -0x5CF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5228u, 0x1DFE08u, 0x1DFE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE10u;
label_1dfe10:
    // 0x1dfe10: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1dfe10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1dfe14:
    // 0x1dfe14: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x1dfe14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
label_1dfe18:
    // 0x1dfe18: 0x1440ff81  bnez        $v0, . + 4 + (-0x7F << 2)
label_1dfe1c:
    if (ctx->pc == 0x1DFE1Cu) {
        ctx->pc = 0x1DFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE18u;
        // 0x1dfe1c: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE20u;
        goto label_1dfe20;
    }
    ctx->pc = 0x1DFE18u;
    {
        const bool branch_taken_0x1dfe18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE18u;
        // 0x1dfe1c: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe18) {
            ctx->pc = 0x1DFC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfc20;
        }
    }
    ctx->pc = 0x1DFE20u;
label_1dfe20:
    // 0x1dfe20: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1dfe20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
label_1dfe24:
    // 0x1dfe24: 0x8e62b320  lw          $v0, -0x4CE0($s3)
    ctx->pc = 0x1dfe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947616)));
label_1dfe28:
    // 0x1dfe28: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1dfe2c:
    if (ctx->pc == 0x1DFE2Cu) {
        ctx->pc = 0x1DFE30u;
        goto label_1dfe30;
    }
    ctx->pc = 0x1DFE28u;
    {
        const bool branch_taken_0x1dfe28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfe28) {
            ctx->pc = 0x1DFE80u;
            goto label_1dfe80;
        }
    }
    ctx->pc = 0x1DFE30u;
label_1dfe30:
    // 0x1dfe30: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_1dfe34:
    if (ctx->pc == 0x1DFE34u) {
        ctx->pc = 0x1DFE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE30u;
        // 0x1dfe34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE38u;
        goto label_1dfe38;
    }
    ctx->pc = 0x1DFE30u;
    {
        const bool branch_taken_0x1dfe30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DFE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE30u;
        // 0x1dfe34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe30) {
            ctx->pc = 0x1DFE7Cu;
            goto label_1dfe7c;
        }
    }
    ctx->pc = 0x1DFE38u;
label_1dfe38:
    // 0x1dfe38: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1dfe38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1dfe3c:
    // 0x1dfe3c: 0x2452ab20  addiu       $s2, $v0, -0x54E0
    ctx->pc = 0x1dfe3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945568));
label_1dfe40:
    // 0x1dfe40: 0x26540002  addiu       $s4, $s2, 0x2
    ctx->pc = 0x1dfe40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_1dfe44:
    // 0x1dfe44: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x1dfe44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1dfe48:
    // 0x1dfe48: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1dfe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1dfe4c:
    // 0x1dfe4c: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x1dfe4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1dfe50:
    // 0x1dfe50: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1dfe50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfe54:
    // 0x1dfe54: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1dfe54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfe58:
    // 0x1dfe58: 0xc07548a  jal         func_1D5228
label_1dfe5c:
    if (ctx->pc == 0x1DFE5Cu) {
        ctx->pc = 0x1DFE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE58u;
        // 0x1dfe5c: 0x2343021  addu        $a2, $s1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE60u;
        goto label_1dfe60;
    }
    ctx->pc = 0x1DFE58u;
    SET_GPR_U32(ctx, 31, 0x1DFE60u);
    ctx->pc = 0x1DFE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE58u;
    // 0x1dfe5c: 0x2343021  addu        $a2, $s1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5228u, 0x1DFE58u, 0x1DFE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE60u;
label_1dfe60:
    // 0x1dfe60: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1dfe60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfe64:
    // 0x1dfe64: 0x8e63b320  lw          $v1, -0x4CE0($s3)
    ctx->pc = 0x1dfe64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947616)));
label_1dfe68:
    // 0x1dfe68: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1dfe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1dfe6c:
    // 0x1dfe6c: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x1dfe6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1dfe70:
    // 0x1dfe70: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1dfe70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1dfe74:
    // 0x1dfe74: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_1dfe78:
    if (ctx->pc == 0x1DFE78u) {
        ctx->pc = 0x1DFE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE74u;
        // 0x1dfe78: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE7Cu;
        goto label_1dfe7c;
    }
    ctx->pc = 0x1DFE74u;
    {
        const bool branch_taken_0x1dfe74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE74u;
        // 0x1dfe78: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe74) {
            ctx->pc = 0x1DFE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfe48;
        }
    }
    ctx->pc = 0x1DFE7Cu;
label_1dfe7c:
    // 0x1dfe7c: 0xae60b320  sw          $zero, -0x4CE0($s3)
    ctx->pc = 0x1dfe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294947616), GPR_U32(ctx, 0));
label_1dfe80:
    // 0x1dfe80: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_1dfe84:
    if (ctx->pc == 0x1DFE84u) {
        ctx->pc = 0x1DFE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE80u;
        // 0x1dfe84: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE88u;
        goto label_1dfe88;
    }
    ctx->pc = 0x1DFE80u;
    {
        const bool branch_taken_0x1dfe80 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE80u;
        // 0x1dfe84: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe80) {
            ctx->pc = 0x1DFE94u;
            goto label_1dfe94;
        }
    }
    ctx->pc = 0x1DFE88u;
label_1dfe88:
    // 0x1dfe88: 0xc07d0ea  jal         func_1F43A8
label_1dfe8c:
    if (ctx->pc == 0x1DFE8Cu) {
        ctx->pc = 0x1DFE90u;
        goto label_1dfe90;
    }
    ctx->pc = 0x1DFE88u;
    SET_GPR_U32(ctx, 31, 0x1DFE90u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1DFE88u, 0x1DFE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE90u;
label_1dfe90:
    // 0x1dfe90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dfe90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dfe94:
    // 0x1dfe94: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1dfe94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1dfe98:
    // 0x1dfe98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1dfe98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1dfe9c:
    // 0x1dfe9c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1dfe9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1dfea0:
    // 0x1dfea0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1dfea0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1dfea4:
    // 0x1dfea4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1dfea4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1dfea8:
    // 0x1dfea8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1dfea8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1dfeac:
    // 0x1dfeac: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1dfeacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1dfeb0:
    // 0x1dfeb0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1dfeb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1dfeb4:
    // 0x1dfeb4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1dfeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1dfeb8:
    // 0x1dfeb8: 0x3e00008  jr          $ra
label_1dfebc:
    if (ctx->pc == 0x1DFEBCu) {
        ctx->pc = 0x1DFEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEB8u;
        // 0x1dfebc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFEC0u;
        goto label_fallthrough_0x1dfeb8;
    }
    ctx->pc = 0x1DFEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEB8u;
        // 0x1dfebc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dfeb8:
    ctx->pc = 0x1DFEC0u;
}
