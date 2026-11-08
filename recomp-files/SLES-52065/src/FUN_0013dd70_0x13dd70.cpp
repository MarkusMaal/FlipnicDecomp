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

// Function: FUN_0013dd70
// Address: 0x13dd70 - 0x13de8c
void FUN_0013dd70_0x13dd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013dd70_0x13dd70");
#endif

    switch (ctx->pc) {
        case 0x13dd70u: goto label_13dd70;
        case 0x13dd74u: goto label_13dd74;
        case 0x13dd78u: goto label_13dd78;
        case 0x13dd7cu: goto label_13dd7c;
        case 0x13dd80u: goto label_13dd80;
        case 0x13dd84u: goto label_13dd84;
        case 0x13dd88u: goto label_13dd88;
        case 0x13dd8cu: goto label_13dd8c;
        case 0x13dd90u: goto label_13dd90;
        case 0x13dd94u: goto label_13dd94;
        case 0x13dd98u: goto label_13dd98;
        case 0x13dd9cu: goto label_13dd9c;
        case 0x13dda0u: goto label_13dda0;
        case 0x13dda4u: goto label_13dda4;
        case 0x13dda8u: goto label_13dda8;
        case 0x13ddacu: goto label_13ddac;
        case 0x13ddb0u: goto label_13ddb0;
        case 0x13ddb4u: goto label_13ddb4;
        case 0x13ddb8u: goto label_13ddb8;
        case 0x13ddbcu: goto label_13ddbc;
        case 0x13ddc0u: goto label_13ddc0;
        case 0x13ddc4u: goto label_13ddc4;
        case 0x13ddc8u: goto label_13ddc8;
        case 0x13ddccu: goto label_13ddcc;
        case 0x13ddd0u: goto label_13ddd0;
        case 0x13ddd4u: goto label_13ddd4;
        case 0x13ddd8u: goto label_13ddd8;
        case 0x13dddcu: goto label_13dddc;
        case 0x13dde0u: goto label_13dde0;
        case 0x13dde4u: goto label_13dde4;
        case 0x13dde8u: goto label_13dde8;
        case 0x13ddecu: goto label_13ddec;
        case 0x13ddf0u: goto label_13ddf0;
        case 0x13ddf4u: goto label_13ddf4;
        case 0x13ddf8u: goto label_13ddf8;
        case 0x13ddfcu: goto label_13ddfc;
        case 0x13de00u: goto label_13de00;
        case 0x13de04u: goto label_13de04;
        case 0x13de08u: goto label_13de08;
        case 0x13de0cu: goto label_13de0c;
        case 0x13de10u: goto label_13de10;
        case 0x13de14u: goto label_13de14;
        case 0x13de18u: goto label_13de18;
        case 0x13de1cu: goto label_13de1c;
        case 0x13de20u: goto label_13de20;
        case 0x13de24u: goto label_13de24;
        case 0x13de28u: goto label_13de28;
        case 0x13de2cu: goto label_13de2c;
        case 0x13de30u: goto label_13de30;
        case 0x13de34u: goto label_13de34;
        case 0x13de38u: goto label_13de38;
        case 0x13de3cu: goto label_13de3c;
        case 0x13de40u: goto label_13de40;
        case 0x13de44u: goto label_13de44;
        case 0x13de48u: goto label_13de48;
        case 0x13de4cu: goto label_13de4c;
        case 0x13de50u: goto label_13de50;
        case 0x13de54u: goto label_13de54;
        case 0x13de58u: goto label_13de58;
        case 0x13de5cu: goto label_13de5c;
        case 0x13de60u: goto label_13de60;
        case 0x13de64u: goto label_13de64;
        case 0x13de68u: goto label_13de68;
        case 0x13de6cu: goto label_13de6c;
        case 0x13de70u: goto label_13de70;
        case 0x13de74u: goto label_13de74;
        case 0x13de78u: goto label_13de78;
        case 0x13de7cu: goto label_13de7c;
        case 0x13de80u: goto label_13de80;
        case 0x13de84u: goto label_13de84;
        case 0x13de88u: goto label_13de88;
        default: break;
    }

    ctx->pc = 0x13dd70u;

label_13dd70:
    // 0x13dd70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13dd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_13dd74:
    // 0x13dd74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13dd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_13dd78:
    // 0x13dd78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13dd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_13dd7c:
    // 0x13dd7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13dd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13dd80:
    // 0x13dd80: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13dd80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13dd84:
    // 0x13dd84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13dd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13dd88:
    // 0x13dd88: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13dd88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13dd8c:
    // 0x13dd8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13dd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13dd90:
    // 0x13dd90: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13dd90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13dd94:
    // 0x13dd94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13dd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13dd98:
    // 0x13dd98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13dd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13dd9c:
    // 0x13dd9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13dd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13dda0:
    // 0x13dda0: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x13dda0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_13dda4:
    // 0x13dda4: 0x8f3900dc  lw          $t9, 0xDC($t9)
    ctx->pc = 0x13dda4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 220)));
label_13dda8:
    // 0x13dda8: 0x320f809  jalr        $t9
label_13ddac:
    if (ctx->pc == 0x13DDACu) {
        ctx->pc = 0x13DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDA8u;
        // 0x13ddac: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DDB0u;
        goto label_13ddb0;
    }
    ctx->pc = 0x13DDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DDB0u);
        ctx->pc = 0x13DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDA8u;
        // 0x13ddac: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DDA8u, 0x13DDB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DDB0u;
label_13ddb0:
    // 0x13ddb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ddb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ddb4:
    // 0x13ddb4: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x13ddb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_13ddb8:
    // 0x13ddb8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_13ddbc:
    if (ctx->pc == 0x13DDBCu) {
        ctx->pc = 0x13DDC0u;
        goto label_13ddc0;
    }
    ctx->pc = 0x13DDB8u;
    {
        const bool branch_taken_0x13ddb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ddb8) {
            ctx->pc = 0x13DDC4u;
            goto label_13ddc4;
        }
    }
    ctx->pc = 0x13DDC0u;
label_13ddc0:
    // 0x13ddc0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x13ddc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13ddc4:
    // 0x13ddc4: 0x8ea30194  lw          $v1, 0x194($s5)
    ctx->pc = 0x13ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 404)));
label_13ddc8:
    // 0x13ddc8: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x13ddc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_13ddcc:
    // 0x13ddcc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_13ddd0:
    if (ctx->pc == 0x13DDD0u) {
        ctx->pc = 0x13DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDCCu;
        // 0x13ddd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DDD4u;
        goto label_13ddd4;
    }
    ctx->pc = 0x13DDCCu;
    {
        const bool branch_taken_0x13ddcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDCCu;
        // 0x13ddd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddcc) {
            ctx->pc = 0x13DDE0u;
            goto label_13dde0;
        }
    }
    ctx->pc = 0x13DDD4u;
label_13ddd4:
    // 0x13ddd4: 0x26a40190  addiu       $a0, $s5, 0x190
    ctx->pc = 0x13ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
label_13ddd8:
    // 0x13ddd8: 0xc0484a8  jal         func_1212A0
label_13dddc:
    if (ctx->pc == 0x13DDDCu) {
        ctx->pc = 0x13DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDD8u;
        // 0x13dddc: 0x27868098  addiu       $a2, $gp, -0x7F68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DDE0u;
        goto label_13dde0;
    }
    ctx->pc = 0x13DDD8u;
    SET_GPR_U32(ctx, 31, 0x13DDE0u);
    ctx->pc = 0x13DDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DDD8u;
    // 0x13dddc: 0x27868098  addiu       $a2, $gp, -0x7F68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1212A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1212A0u, 0x13DDD8u, 0x13DDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DDE0u;
label_13dde0:
    // 0x13dde0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x13dde0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13dde4:
    // 0x13dde4: 0x1000000e  b           . + 4 + (0xE << 2)
label_13dde8:
    if (ctx->pc == 0x13DDE8u) {
        ctx->pc = 0x13DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDE4u;
        // 0x13dde8: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DDECu;
        goto label_13ddec;
    }
    ctx->pc = 0x13DDE4u;
    {
        const bool branch_taken_0x13dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDE4u;
        // 0x13dde8: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dde4) {
            ctx->pc = 0x13DE20u;
            goto label_13de20;
        }
    }
    ctx->pc = 0x13DDECu;
label_13ddec:
    // 0x13ddec: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x13ddecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_13ddf0:
    // 0x13ddf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13ddf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13ddf4:
    // 0x13ddf4: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x13ddf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_13ddf8:
    // 0x13ddf8: 0x320f809  jalr        $t9
label_13ddfc:
    if (ctx->pc == 0x13DDFCu) {
        ctx->pc = 0x13DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDF8u;
        // 0x13ddfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DE00u;
        goto label_13de00;
    }
    ctx->pc = 0x13DDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DE00u);
        ctx->pc = 0x13DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDF8u;
        // 0x13ddfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DDF8u, 0x13DE00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DE00u;
label_13de00:
    // 0x13de00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13de04:
    if (ctx->pc == 0x13DE04u) {
        ctx->pc = 0x13DE08u;
        goto label_13de08;
    }
    ctx->pc = 0x13DE00u;
    {
        const bool branch_taken_0x13de00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13de00) {
            ctx->pc = 0x13DE14u;
            goto label_13de14;
        }
    }
    ctx->pc = 0x13DE08u;
label_13de08:
    // 0x13de08: 0x8ea30198  lw          $v1, 0x198($s5)
    ctx->pc = 0x13de08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 408)));
label_13de0c:
    // 0x13de0c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_13de10:
    // 0x13de10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13de10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_13de14:
    // 0x13de14: 0x0  nop
    ctx->pc = 0x13de14u;
    // NOP
label_13de18:
    // 0x13de18: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x13de18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_13de1c:
    // 0x13de1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13de1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13de20:
    // 0x13de20: 0x230182b  sltu        $v1, $s1, $s0
    ctx->pc = 0x13de20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_13de24:
    // 0x13de24: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_13de28:
    if (ctx->pc == 0x13DE28u) {
        ctx->pc = 0x13DE2Cu;
        goto label_13de2c;
    }
    ctx->pc = 0x13DE24u;
    {
        const bool branch_taken_0x13de24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13de24) {
            ctx->pc = 0x13DDECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ddec;
        }
    }
    ctx->pc = 0x13DE2Cu;
label_13de2c:
    // 0x13de2c: 0x92a4018a  lbu         $a0, 0x18A($s5)
    ctx->pc = 0x13de2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 394)));
label_13de30:
    // 0x13de30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13de30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13de34:
    // 0x13de34: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_13de38:
    if (ctx->pc == 0x13DE38u) {
        ctx->pc = 0x13DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE34u;
        // 0x13de38: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DE3Cu;
        goto label_13de3c;
    }
    ctx->pc = 0x13DE34u;
    {
        const bool branch_taken_0x13de34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x13DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE34u;
        // 0x13de38: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de34) {
            ctx->pc = 0x13DE50u;
            goto label_13de50;
        }
    }
    ctx->pc = 0x13DE3Cu;
label_13de3c:
    // 0x13de3c: 0x1e600003  bgtz        $s3, . + 4 + (0x3 << 2)
label_13de40:
    if (ctx->pc == 0x13DE40u) {
        ctx->pc = 0x13DE44u;
        goto label_13de44;
    }
    ctx->pc = 0x13DE3Cu;
    {
        const bool branch_taken_0x13de3c = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x13de3c) {
            ctx->pc = 0x13DE4Cu;
            goto label_13de4c;
        }
    }
    ctx->pc = 0x13DE44u;
label_13de44:
    // 0x13de44: 0x8ea30198  lw          $v1, 0x198($s5)
    ctx->pc = 0x13de44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 408)));
label_13de48:
    // 0x13de48: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x13de48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
label_13de4c:
    // 0x13de4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13de4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13de50:
    // 0x13de50: 0x12630005  beq         $s3, $v1, . + 4 + (0x5 << 2)
label_13de54:
    if (ctx->pc == 0x13DE54u) {
        ctx->pc = 0x13DE58u;
        goto label_13de58;
    }
    ctx->pc = 0x13DE50u;
    {
        const bool branch_taken_0x13de50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x13de50) {
            ctx->pc = 0x13DE68u;
            goto label_13de68;
        }
    }
    ctx->pc = 0x13DE58u;
label_13de58:
    // 0x13de58: 0x8ea30198  lw          $v1, 0x198($s5)
    ctx->pc = 0x13de58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 408)));
label_13de5c:
    // 0x13de5c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x13de5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_13de60:
    // 0x13de60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13de60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_13de64:
    // 0x13de64: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x13de64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
label_13de68:
    // 0x13de68: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13de68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_13de6c:
    // 0x13de6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13de6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13de70:
    // 0x13de70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13de70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13de74:
    // 0x13de74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13de74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13de78:
    // 0x13de78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13de78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13de7c:
    // 0x13de7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13de7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13de80:
    // 0x13de80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13de80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13de84:
    // 0x13de84: 0x3e00008  jr          $ra
label_13de88:
    if (ctx->pc == 0x13DE88u) {
        ctx->pc = 0x13DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE84u;
        // 0x13de88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DE8Cu;
        goto label_fallthrough_0x13de84;
    }
    ctx->pc = 0x13DE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE84u;
        // 0x13de88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13de84:
    ctx->pc = 0x13DE8Cu;
}
