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

// Function: FUN_001b5e80
// Address: 0x1b5e80 - 0x1b5fd4
void FUN_001b5e80_0x1b5e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5e80_0x1b5e80");
#endif

    switch (ctx->pc) {
        case 0x1b5e80u: goto label_1b5e80;
        case 0x1b5e84u: goto label_1b5e84;
        case 0x1b5e88u: goto label_1b5e88;
        case 0x1b5e8cu: goto label_1b5e8c;
        case 0x1b5e90u: goto label_1b5e90;
        case 0x1b5e94u: goto label_1b5e94;
        case 0x1b5e98u: goto label_1b5e98;
        case 0x1b5e9cu: goto label_1b5e9c;
        case 0x1b5ea0u: goto label_1b5ea0;
        case 0x1b5ea4u: goto label_1b5ea4;
        case 0x1b5ea8u: goto label_1b5ea8;
        case 0x1b5eacu: goto label_1b5eac;
        case 0x1b5eb0u: goto label_1b5eb0;
        case 0x1b5eb4u: goto label_1b5eb4;
        case 0x1b5eb8u: goto label_1b5eb8;
        case 0x1b5ebcu: goto label_1b5ebc;
        case 0x1b5ec0u: goto label_1b5ec0;
        case 0x1b5ec4u: goto label_1b5ec4;
        case 0x1b5ec8u: goto label_1b5ec8;
        case 0x1b5eccu: goto label_1b5ecc;
        case 0x1b5ed0u: goto label_1b5ed0;
        case 0x1b5ed4u: goto label_1b5ed4;
        case 0x1b5ed8u: goto label_1b5ed8;
        case 0x1b5edcu: goto label_1b5edc;
        case 0x1b5ee0u: goto label_1b5ee0;
        case 0x1b5ee4u: goto label_1b5ee4;
        case 0x1b5ee8u: goto label_1b5ee8;
        case 0x1b5eecu: goto label_1b5eec;
        case 0x1b5ef0u: goto label_1b5ef0;
        case 0x1b5ef4u: goto label_1b5ef4;
        case 0x1b5ef8u: goto label_1b5ef8;
        case 0x1b5efcu: goto label_1b5efc;
        case 0x1b5f00u: goto label_1b5f00;
        case 0x1b5f04u: goto label_1b5f04;
        case 0x1b5f08u: goto label_1b5f08;
        case 0x1b5f0cu: goto label_1b5f0c;
        case 0x1b5f10u: goto label_1b5f10;
        case 0x1b5f14u: goto label_1b5f14;
        case 0x1b5f18u: goto label_1b5f18;
        case 0x1b5f1cu: goto label_1b5f1c;
        case 0x1b5f20u: goto label_1b5f20;
        case 0x1b5f24u: goto label_1b5f24;
        case 0x1b5f28u: goto label_1b5f28;
        case 0x1b5f2cu: goto label_1b5f2c;
        case 0x1b5f30u: goto label_1b5f30;
        case 0x1b5f34u: goto label_1b5f34;
        case 0x1b5f38u: goto label_1b5f38;
        case 0x1b5f3cu: goto label_1b5f3c;
        case 0x1b5f40u: goto label_1b5f40;
        case 0x1b5f44u: goto label_1b5f44;
        case 0x1b5f48u: goto label_1b5f48;
        case 0x1b5f4cu: goto label_1b5f4c;
        case 0x1b5f50u: goto label_1b5f50;
        case 0x1b5f54u: goto label_1b5f54;
        case 0x1b5f58u: goto label_1b5f58;
        case 0x1b5f5cu: goto label_1b5f5c;
        case 0x1b5f60u: goto label_1b5f60;
        case 0x1b5f64u: goto label_1b5f64;
        case 0x1b5f68u: goto label_1b5f68;
        case 0x1b5f6cu: goto label_1b5f6c;
        case 0x1b5f70u: goto label_1b5f70;
        case 0x1b5f74u: goto label_1b5f74;
        case 0x1b5f78u: goto label_1b5f78;
        case 0x1b5f7cu: goto label_1b5f7c;
        case 0x1b5f80u: goto label_1b5f80;
        case 0x1b5f84u: goto label_1b5f84;
        case 0x1b5f88u: goto label_1b5f88;
        case 0x1b5f8cu: goto label_1b5f8c;
        case 0x1b5f90u: goto label_1b5f90;
        case 0x1b5f94u: goto label_1b5f94;
        case 0x1b5f98u: goto label_1b5f98;
        case 0x1b5f9cu: goto label_1b5f9c;
        case 0x1b5fa0u: goto label_1b5fa0;
        case 0x1b5fa4u: goto label_1b5fa4;
        case 0x1b5fa8u: goto label_1b5fa8;
        case 0x1b5facu: goto label_1b5fac;
        case 0x1b5fb0u: goto label_1b5fb0;
        case 0x1b5fb4u: goto label_1b5fb4;
        case 0x1b5fb8u: goto label_1b5fb8;
        case 0x1b5fbcu: goto label_1b5fbc;
        case 0x1b5fc0u: goto label_1b5fc0;
        case 0x1b5fc4u: goto label_1b5fc4;
        case 0x1b5fc8u: goto label_1b5fc8;
        case 0x1b5fccu: goto label_1b5fcc;
        case 0x1b5fd0u: goto label_1b5fd0;
        default: break;
    }

    ctx->pc = 0x1b5e80u;

label_1b5e80:
    // 0x1b5e80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b5e84:
    // 0x1b5e84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b5e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b5e88:
    // 0x1b5e88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b5e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b5e8c:
    // 0x1b5e8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b5e90:
    // 0x1b5e90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b5e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b5e94:
    // 0x1b5e94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5e98:
    // 0x1b5e98: 0x12200047  beqz        $s1, . + 4 + (0x47 << 2)
label_1b5e9c:
    if (ctx->pc == 0x1B5E9Cu) {
        ctx->pc = 0x1B5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E98u;
        // 0x1b5e9c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EA0u;
        goto label_1b5ea0;
    }
    ctx->pc = 0x1B5E98u;
    {
        const bool branch_taken_0x1b5e98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E98u;
        // 0x1b5e9c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e98) {
            ctx->pc = 0x1B5FB8u;
            goto label_1b5fb8;
        }
    }
    ctx->pc = 0x1B5EA0u;
label_1b5ea0:
    // 0x1b5ea0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b5ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1b5ea4:
    // 0x1b5ea4: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1b5ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_1b5ea8:
    // 0x1b5ea8: 0xc06d800  jal         func_1B6000
label_1b5eac:
    if (ctx->pc == 0x1B5EACu) {
        ctx->pc = 0x1B5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EA8u;
        // 0x1b5eac: 0xac20f268  sw          $zero, -0xD98($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294963816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EB0u;
        goto label_1b5eb0;
    }
    ctx->pc = 0x1B5EA8u;
    SET_GPR_U32(ctx, 31, 0x1B5EB0u);
    ctx->pc = 0x1B5EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5EA8u;
    // 0x1b5eac: 0xac20f268  sw          $zero, -0xD98($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963816), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6000u, 0x1B5EA8u, 0x1B5EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5EB0u;
label_1b5eb0:
    // 0x1b5eb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b5eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5eb4:
    // 0x1b5eb4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b5eb8:
    if (ctx->pc == 0x1B5EB8u) {
        ctx->pc = 0x1B5EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EB4u;
        // 0x1b5eb8: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EBCu;
        goto label_1b5ebc;
    }
    ctx->pc = 0x1B5EB4u;
    {
        const bool branch_taken_0x1b5eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EB4u;
        // 0x1b5eb8: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5eb4) {
            ctx->pc = 0x1B5EE0u;
            goto label_1b5ee0;
        }
    }
    ctx->pc = 0x1B5EBCu;
label_1b5ebc:
    // 0x1b5ebc: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1b5ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1b5ec0:
    // 0x1b5ec0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1b5ec4:
    if (ctx->pc == 0x1B5EC4u) {
        ctx->pc = 0x1B5EC8u;
        goto label_1b5ec8;
    }
    ctx->pc = 0x1B5EC0u;
    {
        const bool branch_taken_0x1b5ec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ec0) {
            ctx->pc = 0x1B5ED8u;
            goto label_1b5ed8;
        }
    }
    ctx->pc = 0x1B5EC8u;
label_1b5ec8:
    // 0x1b5ec8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b5ec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5ecc:
    // 0x1b5ecc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1b5eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1b5ed0:
    // 0x1b5ed0: 0x320f809  jalr        $t9
label_1b5ed4:
    if (ctx->pc == 0x1B5ED4u) {
        ctx->pc = 0x1B5ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5ED0u;
        // 0x1b5ed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5ED8u;
        goto label_1b5ed8;
    }
    ctx->pc = 0x1B5ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B5ED8u);
        ctx->pc = 0x1B5ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5ED0u;
        // 0x1b5ed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5ED0u, 0x1B5ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5ED8u;
label_1b5ed8:
    // 0x1b5ed8: 0xc048974  jal         func_1225D0
label_1b5edc:
    if (ctx->pc == 0x1B5EDCu) {
        ctx->pc = 0x1B5EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5ED8u;
        // 0x1b5edc: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EE0u;
        goto label_1b5ee0;
    }
    ctx->pc = 0x1B5ED8u;
    SET_GPR_U32(ctx, 31, 0x1B5EE0u);
    ctx->pc = 0x1B5EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5ED8u;
    // 0x1b5edc: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B5ED8u, 0x1B5EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5EE0u;
label_1b5ee0:
    // 0x1b5ee0: 0xc06d7fc  jal         func_1B5FF0
label_1b5ee4:
    if (ctx->pc == 0x1B5EE4u) {
        ctx->pc = 0x1B5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EE0u;
        // 0x1b5ee4: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EE8u;
        goto label_1b5ee8;
    }
    ctx->pc = 0x1B5EE0u;
    SET_GPR_U32(ctx, 31, 0x1B5EE8u);
    ctx->pc = 0x1B5EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5EE0u;
    // 0x1b5ee4: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5FF0u, 0x1B5EE0u, 0x1B5EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5EE8u;
label_1b5ee8:
    // 0x1b5ee8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1b5ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1b5eec:
    // 0x1b5eec: 0x1462fff3  bne         $v1, $v0, . + 4 + (-0xD << 2)
label_1b5ef0:
    if (ctx->pc == 0x1B5EF0u) {
        ctx->pc = 0x1B5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EECu;
        // 0x1b5ef0: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EF4u;
        goto label_1b5ef4;
    }
    ctx->pc = 0x1B5EECu;
    {
        const bool branch_taken_0x1b5eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EECu;
        // 0x1b5ef0: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5eec) {
            ctx->pc = 0x1B5EBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5ebc;
        }
    }
    ctx->pc = 0x1B5EF4u;
label_1b5ef4:
    // 0x1b5ef4: 0xc06db2c  jal         func_1B6CB0
label_1b5ef8:
    if (ctx->pc == 0x1B5EF8u) {
        ctx->pc = 0x1B5EFCu;
        goto label_1b5efc;
    }
    ctx->pc = 0x1B5EF4u;
    SET_GPR_U32(ctx, 31, 0x1B5EFCu);
    ctx->pc = 0x1B6CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CB0u, 0x1B5EF4u, 0x1B5EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5EFCu;
label_1b5efc:
    // 0x1b5efc: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1b5efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1b5f00:
    // 0x1b5f00: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1b5f04:
    if (ctx->pc == 0x1B5F04u) {
        ctx->pc = 0x1B5F08u;
        goto label_1b5f08;
    }
    ctx->pc = 0x1B5F00u;
    {
        const bool branch_taken_0x1b5f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f00) {
            ctx->pc = 0x1B5F18u;
            goto label_1b5f18;
        }
    }
    ctx->pc = 0x1B5F08u;
label_1b5f08:
    // 0x1b5f08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b5f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5f0c:
    // 0x1b5f0c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1b5f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1b5f10:
    // 0x1b5f10: 0x320f809  jalr        $t9
label_1b5f14:
    if (ctx->pc == 0x1B5F14u) {
        ctx->pc = 0x1B5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F10u;
        // 0x1b5f14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F18u;
        goto label_1b5f18;
    }
    ctx->pc = 0x1B5F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B5F18u);
        ctx->pc = 0x1B5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F10u;
        // 0x1b5f14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5F10u, 0x1B5F18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5F18u;
label_1b5f18:
    // 0x1b5f18: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1b5f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1b5f1c:
    // 0x1b5f1c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1b5f20:
    if (ctx->pc == 0x1B5F20u) {
        ctx->pc = 0x1B5F24u;
        goto label_1b5f24;
    }
    ctx->pc = 0x1B5F1Cu;
    {
        const bool branch_taken_0x1b5f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f1c) {
            ctx->pc = 0x1B5F34u;
            goto label_1b5f34;
        }
    }
    ctx->pc = 0x1B5F24u;
label_1b5f24:
    // 0x1b5f24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b5f24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5f28:
    // 0x1b5f28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1b5f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1b5f2c:
    // 0x1b5f2c: 0x320f809  jalr        $t9
label_1b5f30:
    if (ctx->pc == 0x1B5F30u) {
        ctx->pc = 0x1B5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F2Cu;
        // 0x1b5f30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F34u;
        goto label_1b5f34;
    }
    ctx->pc = 0x1B5F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B5F34u);
        ctx->pc = 0x1B5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F2Cu;
        // 0x1b5f30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5F2Cu, 0x1B5F34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5F34u;
label_1b5f34:
    // 0x1b5f34: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1b5f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_1b5f38:
    // 0x1b5f38: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x1b5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_1b5f3c:
    // 0x1b5f3c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1b5f40:
    if (ctx->pc == 0x1B5F40u) {
        ctx->pc = 0x1B5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F3Cu;
        // 0x1b5f40: 0xae200030  sw          $zero, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F44u;
        goto label_1b5f44;
    }
    ctx->pc = 0x1B5F3Cu;
    {
        const bool branch_taken_0x1b5f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F3Cu;
        // 0x1b5f40: 0xae200030  sw          $zero, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f3c) {
            ctx->pc = 0x1B5F74u;
            goto label_1b5f74;
        }
    }
    ctx->pc = 0x1B5F44u;
label_1b5f44:
    // 0x1b5f44: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1b5f48:
    if (ctx->pc == 0x1B5F48u) {
        ctx->pc = 0x1B5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F44u;
        // 0x1b5f48: 0x26320020  addiu       $s2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F4Cu;
        goto label_1b5f4c;
    }
    ctx->pc = 0x1B5F44u;
    {
        const bool branch_taken_0x1b5f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F44u;
        // 0x1b5f48: 0x26320020  addiu       $s2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f44) {
            ctx->pc = 0x1B5F74u;
            goto label_1b5f74;
        }
    }
    ctx->pc = 0x1B5F4Cu;
label_1b5f4c:
    // 0x1b5f4c: 0xc06d7f8  jal         func_1B5FE0
label_1b5f50:
    if (ctx->pc == 0x1B5F50u) {
        ctx->pc = 0x1B5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F4Cu;
        // 0x1b5f50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F54u;
        goto label_1b5f54;
    }
    ctx->pc = 0x1B5F4Cu;
    SET_GPR_U32(ctx, 31, 0x1B5F54u);
    ctx->pc = 0x1B5F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5F4Cu;
    // 0x1b5f50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5FE0u, 0x1B5F4Cu, 0x1B5F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5F54u;
label_1b5f54:
    // 0x1b5f54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5f58:
    // 0x1b5f58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b5f5c:
    if (ctx->pc == 0x1B5F5Cu) {
        ctx->pc = 0x1B5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F58u;
        // 0x1b5f5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F60u;
        goto label_1b5f60;
    }
    ctx->pc = 0x1B5F58u;
    {
        const bool branch_taken_0x1b5f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F58u;
        // 0x1b5f5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f58) {
            ctx->pc = 0x1B5F74u;
            goto label_1b5f74;
        }
    }
    ctx->pc = 0x1B5F60u;
label_1b5f60:
    // 0x1b5f60: 0xc06d7f8  jal         func_1B5FE0
label_1b5f64:
    if (ctx->pc == 0x1B5F64u) {
        ctx->pc = 0x1B5F68u;
        goto label_1b5f68;
    }
    ctx->pc = 0x1B5F60u;
    SET_GPR_U32(ctx, 31, 0x1B5F68u);
    ctx->pc = 0x1B5FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5FE0u, 0x1B5F60u, 0x1B5F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5F68u;
label_1b5f68:
    // 0x1b5f68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b5f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5f6c:
    // 0x1b5f6c: 0xc06dab4  jal         func_1B6AD0
label_1b5f70:
    if (ctx->pc == 0x1B5F70u) {
        ctx->pc = 0x1B5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F6Cu;
        // 0x1b5f70: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F74u;
        goto label_1b5f74;
    }
    ctx->pc = 0x1B5F6Cu;
    SET_GPR_U32(ctx, 31, 0x1B5F74u);
    ctx->pc = 0x1B5F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5F6Cu;
    // 0x1b5f70: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6AD0u, 0x1B5F6Cu, 0x1B5F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5F74u;
label_1b5f74:
    // 0x1b5f74: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_1b5f78:
    if (ctx->pc == 0x1B5F78u) {
        ctx->pc = 0x1B5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F74u;
        // 0x1b5f78: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F7Cu;
        goto label_1b5f7c;
    }
    ctx->pc = 0x1B5F74u;
    {
        const bool branch_taken_0x1b5f74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F74u;
        // 0x1b5f78: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f74) {
            ctx->pc = 0x1B5FA4u;
            goto label_1b5fa4;
        }
    }
    ctx->pc = 0x1B5F7Cu;
label_1b5f7c:
    // 0x1b5f7c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_1b5f80:
    if (ctx->pc == 0x1B5F80u) {
        ctx->pc = 0x1B5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F7Cu;
        // 0x1b5f80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F84u;
        goto label_1b5f84;
    }
    ctx->pc = 0x1B5F7Cu;
    {
        const bool branch_taken_0x1b5f7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F7Cu;
        // 0x1b5f80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f7c) {
            ctx->pc = 0x1B5FA0u;
            goto label_1b5fa0;
        }
    }
    ctx->pc = 0x1B5F84u;
label_1b5f84:
    // 0x1b5f84: 0xc04fc50  jal         func_13F140
label_1b5f88:
    if (ctx->pc == 0x1B5F88u) {
        ctx->pc = 0x1B5F8Cu;
        goto label_1b5f8c;
    }
    ctx->pc = 0x1B5F84u;
    SET_GPR_U32(ctx, 31, 0x1B5F8Cu);
    ctx->pc = 0x13F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F140u, 0x1B5F84u, 0x1B5F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5F8Cu;
label_1b5f8c:
    // 0x1b5f8c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1b5f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1b5f90:
    // 0x1b5f90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1b5f94:
    if (ctx->pc == 0x1B5F94u) {
        ctx->pc = 0x1B5F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F90u;
        // 0x1b5f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F98u;
        goto label_1b5f98;
    }
    ctx->pc = 0x1B5F90u;
    {
        const bool branch_taken_0x1b5f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F90u;
        // 0x1b5f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f90) {
            ctx->pc = 0x1B5FA0u;
            goto label_1b5fa0;
        }
    }
    ctx->pc = 0x1B5F98u;
label_1b5f98:
    // 0x1b5f98: 0xc04f118  jal         func_13C460
label_1b5f9c:
    if (ctx->pc == 0x1B5F9Cu) {
        ctx->pc = 0x1B5FA0u;
        goto label_1b5fa0;
    }
    ctx->pc = 0x1B5F98u;
    SET_GPR_U32(ctx, 31, 0x1B5FA0u);
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x1B5F98u, 0x1B5FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FA0u;
label_1b5fa0:
    // 0x1b5fa0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1b5fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1b5fa4:
    // 0x1b5fa4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b5fa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1b5fa8:
    // 0x1b5fa8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1b5fac:
    if (ctx->pc == 0x1B5FACu) {
        ctx->pc = 0x1B5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FA8u;
        // 0x1b5fac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5FB0u;
        goto label_1b5fb0;
    }
    ctx->pc = 0x1B5FA8u;
    {
        const bool branch_taken_0x1b5fa8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FA8u;
        // 0x1b5fac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fa8) {
            ctx->pc = 0x1B5FBCu;
            goto label_1b5fbc;
        }
    }
    ctx->pc = 0x1B5FB0u;
label_1b5fb0:
    // 0x1b5fb0: 0xc0401a4  jal         func_100690
label_1b5fb4:
    if (ctx->pc == 0x1B5FB4u) {
        ctx->pc = 0x1B5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FB0u;
        // 0x1b5fb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5FB8u;
        goto label_1b5fb8;
    }
    ctx->pc = 0x1B5FB0u;
    SET_GPR_U32(ctx, 31, 0x1B5FB8u);
    ctx->pc = 0x1B5FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5FB0u;
    // 0x1b5fb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B5FB0u, 0x1B5FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FB8u;
label_1b5fb8:
    // 0x1b5fb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b5fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5fbc:
    // 0x1b5fbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b5fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5fc0:
    // 0x1b5fc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b5fc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5fc4:
    // 0x1b5fc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b5fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5fc8:
    // 0x1b5fc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5fcc:
    // 0x1b5fcc: 0x3e00008  jr          $ra
label_1b5fd0:
    if (ctx->pc == 0x1B5FD0u) {
        ctx->pc = 0x1B5FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FCCu;
        // 0x1b5fd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5FD4u;
        goto label_fallthrough_0x1b5fcc;
    }
    ctx->pc = 0x1B5FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FCCu;
        // 0x1b5fd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b5fcc:
    ctx->pc = 0x1B5FD4u;
}
