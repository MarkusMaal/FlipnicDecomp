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

// Function: FUN_00121dd0
// Address: 0x121dd0 - 0x121ef4
void FUN_00121dd0_0x121dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00121dd0_0x121dd0");
#endif

    switch (ctx->pc) {
        case 0x121dd0u: goto label_121dd0;
        case 0x121dd4u: goto label_121dd4;
        case 0x121dd8u: goto label_121dd8;
        case 0x121ddcu: goto label_121ddc;
        case 0x121de0u: goto label_121de0;
        case 0x121de4u: goto label_121de4;
        case 0x121de8u: goto label_121de8;
        case 0x121decu: goto label_121dec;
        case 0x121df0u: goto label_121df0;
        case 0x121df4u: goto label_121df4;
        case 0x121df8u: goto label_121df8;
        case 0x121dfcu: goto label_121dfc;
        case 0x121e00u: goto label_121e00;
        case 0x121e04u: goto label_121e04;
        case 0x121e08u: goto label_121e08;
        case 0x121e0cu: goto label_121e0c;
        case 0x121e10u: goto label_121e10;
        case 0x121e14u: goto label_121e14;
        case 0x121e18u: goto label_121e18;
        case 0x121e1cu: goto label_121e1c;
        case 0x121e20u: goto label_121e20;
        case 0x121e24u: goto label_121e24;
        case 0x121e28u: goto label_121e28;
        case 0x121e2cu: goto label_121e2c;
        case 0x121e30u: goto label_121e30;
        case 0x121e34u: goto label_121e34;
        case 0x121e38u: goto label_121e38;
        case 0x121e3cu: goto label_121e3c;
        case 0x121e40u: goto label_121e40;
        case 0x121e44u: goto label_121e44;
        case 0x121e48u: goto label_121e48;
        case 0x121e4cu: goto label_121e4c;
        case 0x121e50u: goto label_121e50;
        case 0x121e54u: goto label_121e54;
        case 0x121e58u: goto label_121e58;
        case 0x121e5cu: goto label_121e5c;
        case 0x121e60u: goto label_121e60;
        case 0x121e64u: goto label_121e64;
        case 0x121e68u: goto label_121e68;
        case 0x121e6cu: goto label_121e6c;
        case 0x121e70u: goto label_121e70;
        case 0x121e74u: goto label_121e74;
        case 0x121e78u: goto label_121e78;
        case 0x121e7cu: goto label_121e7c;
        case 0x121e80u: goto label_121e80;
        case 0x121e84u: goto label_121e84;
        case 0x121e88u: goto label_121e88;
        case 0x121e8cu: goto label_121e8c;
        case 0x121e90u: goto label_121e90;
        case 0x121e94u: goto label_121e94;
        case 0x121e98u: goto label_121e98;
        case 0x121e9cu: goto label_121e9c;
        case 0x121ea0u: goto label_121ea0;
        case 0x121ea4u: goto label_121ea4;
        case 0x121ea8u: goto label_121ea8;
        case 0x121eacu: goto label_121eac;
        case 0x121eb0u: goto label_121eb0;
        case 0x121eb4u: goto label_121eb4;
        case 0x121eb8u: goto label_121eb8;
        case 0x121ebcu: goto label_121ebc;
        case 0x121ec0u: goto label_121ec0;
        case 0x121ec4u: goto label_121ec4;
        case 0x121ec8u: goto label_121ec8;
        case 0x121eccu: goto label_121ecc;
        case 0x121ed0u: goto label_121ed0;
        case 0x121ed4u: goto label_121ed4;
        case 0x121ed8u: goto label_121ed8;
        case 0x121edcu: goto label_121edc;
        case 0x121ee0u: goto label_121ee0;
        case 0x121ee4u: goto label_121ee4;
        case 0x121ee8u: goto label_121ee8;
        case 0x121eecu: goto label_121eec;
        case 0x121ef0u: goto label_121ef0;
        default: break;
    }

    ctx->pc = 0x121dd0u;

label_121dd0:
    // 0x121dd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x121dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_121dd4:
    // 0x121dd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x121dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121dd8:
    // 0x121dd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x121dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_121ddc:
    // 0x121ddc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x121ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_121de0:
    // 0x121de0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x121de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_121de4:
    // 0x121de4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x121de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_121de8:
    // 0x121de8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x121de8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_121dec:
    // 0x121dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x121decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_121df0:
    // 0x121df0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x121df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_121df4:
    // 0x121df4: 0x8cc4001c  lw          $a0, 0x1C($a2)
    ctx->pc = 0x121df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_121df8:
    // 0x121df8: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x121df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_121dfc:
    // 0x121dfc: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_121e00:
    if (ctx->pc == 0x121E00u) {
        ctx->pc = 0x121E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DFCu;
        // 0x121e00: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E04u;
        goto label_121e04;
    }
    ctx->pc = 0x121DFCu;
    {
        const bool branch_taken_0x121dfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x121E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121DFCu;
        // 0x121e00: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121dfc) {
            ctx->pc = 0x121E0Cu;
            goto label_121e0c;
        }
    }
    ctx->pc = 0x121E04u;
label_121e04:
    // 0x121e04: 0x1000000b  b           . + 4 + (0xB << 2)
label_121e08:
    if (ctx->pc == 0x121E08u) {
        ctx->pc = 0x121E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E04u;
        // 0x121e08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E0Cu;
        goto label_121e0c;
    }
    ctx->pc = 0x121E04u;
    {
        const bool branch_taken_0x121e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E04u;
        // 0x121e08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121e04) {
            ctx->pc = 0x121E34u;
            goto label_121e34;
        }
    }
    ctx->pc = 0x121E0Cu;
label_121e0c:
    // 0x121e0c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x121e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_121e10:
    // 0x121e10: 0x8e442030  lw          $a0, 0x2030($s2)
    ctx->pc = 0x121e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8240)));
label_121e14:
    // 0x121e14: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x121e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_121e18:
    // 0x121e18: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x121e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_121e1c:
    // 0x121e1c: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x121e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_121e20:
    // 0x121e20: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x121e20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_121e24:
    // 0x121e24: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_121e28:
    if (ctx->pc == 0x121E28u) {
        ctx->pc = 0x121E2Cu;
        goto label_121e2c;
    }
    ctx->pc = 0x121E24u;
    {
        const bool branch_taken_0x121e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x121e24) {
            ctx->pc = 0x121E34u;
            goto label_121e34;
        }
    }
    ctx->pc = 0x121E2Cu;
label_121e2c:
    // 0x121e2c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x121e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_121e30:
    // 0x121e30: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x121e30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_121e34:
    // 0x121e34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x121e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_121e38:
    // 0x121e38: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_121e3c:
    if (ctx->pc == 0x121E3Cu) {
        ctx->pc = 0x121E40u;
        goto label_121e40;
    }
    ctx->pc = 0x121E38u;
    {
        const bool branch_taken_0x121e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x121e38) {
            ctx->pc = 0x121EB4u;
            goto label_121eb4;
        }
    }
    ctx->pc = 0x121E40u;
label_121e40:
    // 0x121e40: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x121e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121e44:
    // 0x121e44: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x121e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_121e48:
    // 0x121e48: 0x320f809  jalr        $t9
label_121e4c:
    if (ctx->pc == 0x121E4Cu) {
        ctx->pc = 0x121E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E48u;
        // 0x121e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E50u;
        goto label_121e50;
    }
    ctx->pc = 0x121E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121E50u);
        ctx->pc = 0x121E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E48u;
        // 0x121e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121E48u, 0x121E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121E50u;
label_121e50:
    // 0x121e50: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_121e54:
    if (ctx->pc == 0x121E54u) {
        ctx->pc = 0x121E58u;
        goto label_121e58;
    }
    ctx->pc = 0x121E50u;
    {
        const bool branch_taken_0x121e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121e50) {
            ctx->pc = 0x121ED8u;
            goto label_121ed8;
        }
    }
    ctx->pc = 0x121E58u;
label_121e58:
    // 0x121e58: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x121e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121e5c:
    // 0x121e5c: 0x8e130018  lw          $s3, 0x18($s0)
    ctx->pc = 0x121e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_121e60:
    // 0x121e60: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x121e60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_121e64:
    // 0x121e64: 0x320f809  jalr        $t9
label_121e68:
    if (ctx->pc == 0x121E68u) {
        ctx->pc = 0x121E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E64u;
        // 0x121e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E6Cu;
        goto label_121e6c;
    }
    ctx->pc = 0x121E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121E6Cu);
        ctx->pc = 0x121E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E64u;
        // 0x121e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121E64u, 0x121E6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121E6Cu;
label_121e6c:
    // 0x121e6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x121e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_121e70:
    // 0x121e70: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x121e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_121e74:
    // 0x121e74: 0xc047d94  jal         func_11F650
label_121e78:
    if (ctx->pc == 0x121E78u) {
        ctx->pc = 0x121E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E74u;
        // 0x121e78: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E7Cu;
        goto label_121e7c;
    }
    ctx->pc = 0x121E74u;
    SET_GPR_U32(ctx, 31, 0x121E7Cu);
    ctx->pc = 0x121E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121E74u;
    // 0x121e78: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F650u, 0x121E74u, 0x121E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E7Cu;
label_121e7c:
    // 0x121e7c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x121e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_121e80:
    // 0x121e80: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x121e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_121e84:
    // 0x121e84: 0x8e422030  lw          $v0, 0x2030($s2)
    ctx->pc = 0x121e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8240)));
label_121e88:
    // 0x121e88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x121e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_121e8c:
    // 0x121e8c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x121e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121e90:
    // 0x121e90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x121e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_121e94:
    // 0x121e94: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x121e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121e98:
    // 0x121e98: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x121e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_121e9c:
    // 0x121e9c: 0x320f809  jalr        $t9
label_121ea0:
    if (ctx->pc == 0x121EA0u) {
        ctx->pc = 0x121EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E9Cu;
        // 0x121ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121EA4u;
        goto label_121ea4;
    }
    ctx->pc = 0x121E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121EA4u);
        ctx->pc = 0x121EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E9Cu;
        // 0x121ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121E9Cu, 0x121EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121EA4u;
label_121ea4:
    // 0x121ea4: 0xc05f378  jal         func_17CDE0
label_121ea8:
    if (ctx->pc == 0x121EA8u) {
        ctx->pc = 0x121EACu;
        goto label_121eac;
    }
    ctx->pc = 0x121EA4u;
    SET_GPR_U32(ctx, 31, 0x121EACu);
    ctx->pc = 0x17CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CDE0u, 0x121EA4u, 0x121EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121EACu;
label_121eac:
    // 0x121eac: 0x1000000b  b           . + 4 + (0xB << 2)
label_121eb0:
    if (ctx->pc == 0x121EB0u) {
        ctx->pc = 0x121EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EACu;
        // 0x121eb0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121EB4u;
        goto label_121eb4;
    }
    ctx->pc = 0x121EACu;
    {
        const bool branch_taken_0x121eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EACu;
        // 0x121eb0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121eac) {
            ctx->pc = 0x121EDCu;
            goto label_121edc;
        }
    }
    ctx->pc = 0x121EB4u;
label_121eb4:
    // 0x121eb4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x121eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_121eb8:
    // 0x121eb8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_121ebc:
    if (ctx->pc == 0x121EBCu) {
        ctx->pc = 0x121EC0u;
        goto label_121ec0;
    }
    ctx->pc = 0x121EB8u;
    {
        const bool branch_taken_0x121eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x121eb8) {
            ctx->pc = 0x121ED8u;
            goto label_121ed8;
        }
    }
    ctx->pc = 0x121EC0u;
label_121ec0:
    // 0x121ec0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x121ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121ec4:
    // 0x121ec4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x121ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_121ec8:
    // 0x121ec8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x121ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_121ecc:
    // 0x121ecc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x121eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_121ed0:
    // 0x121ed0: 0x320f809  jalr        $t9
label_121ed4:
    if (ctx->pc == 0x121ED4u) {
        ctx->pc = 0x121ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121ED0u;
        // 0x121ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121ED8u;
        goto label_121ed8;
    }
    ctx->pc = 0x121ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121ED8u);
        ctx->pc = 0x121ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121ED0u;
        // 0x121ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121ED0u, 0x121ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121ED8u;
label_121ed8:
    // 0x121ed8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x121ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_121edc:
    // 0x121edc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x121edcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_121ee0:
    // 0x121ee0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x121ee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_121ee4:
    // 0x121ee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x121ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_121ee8:
    // 0x121ee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x121ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_121eec:
    // 0x121eec: 0x3e00008  jr          $ra
label_121ef0:
    if (ctx->pc == 0x121EF0u) {
        ctx->pc = 0x121EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EECu;
        // 0x121ef0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121EF4u;
        goto label_fallthrough_0x121eec;
    }
    ctx->pc = 0x121EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EECu;
        // 0x121ef0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x121eec:
    ctx->pc = 0x121EF4u;
}
