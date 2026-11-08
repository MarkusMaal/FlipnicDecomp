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

// Function: FUN_00106ec0
// Address: 0x106ec0 - 0x106f74
void FUN_00106ec0_0x106ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106ec0_0x106ec0");
#endif

    switch (ctx->pc) {
        case 0x106ec0u: goto label_106ec0;
        case 0x106ec4u: goto label_106ec4;
        case 0x106ec8u: goto label_106ec8;
        case 0x106eccu: goto label_106ecc;
        case 0x106ed0u: goto label_106ed0;
        case 0x106ed4u: goto label_106ed4;
        case 0x106ed8u: goto label_106ed8;
        case 0x106edcu: goto label_106edc;
        case 0x106ee0u: goto label_106ee0;
        case 0x106ee4u: goto label_106ee4;
        case 0x106ee8u: goto label_106ee8;
        case 0x106eecu: goto label_106eec;
        case 0x106ef0u: goto label_106ef0;
        case 0x106ef4u: goto label_106ef4;
        case 0x106ef8u: goto label_106ef8;
        case 0x106efcu: goto label_106efc;
        case 0x106f00u: goto label_106f00;
        case 0x106f04u: goto label_106f04;
        case 0x106f08u: goto label_106f08;
        case 0x106f0cu: goto label_106f0c;
        case 0x106f10u: goto label_106f10;
        case 0x106f14u: goto label_106f14;
        case 0x106f18u: goto label_106f18;
        case 0x106f1cu: goto label_106f1c;
        case 0x106f20u: goto label_106f20;
        case 0x106f24u: goto label_106f24;
        case 0x106f28u: goto label_106f28;
        case 0x106f2cu: goto label_106f2c;
        case 0x106f30u: goto label_106f30;
        case 0x106f34u: goto label_106f34;
        case 0x106f38u: goto label_106f38;
        case 0x106f3cu: goto label_106f3c;
        case 0x106f40u: goto label_106f40;
        case 0x106f44u: goto label_106f44;
        case 0x106f48u: goto label_106f48;
        case 0x106f4cu: goto label_106f4c;
        case 0x106f50u: goto label_106f50;
        case 0x106f54u: goto label_106f54;
        case 0x106f58u: goto label_106f58;
        case 0x106f5cu: goto label_106f5c;
        case 0x106f60u: goto label_106f60;
        case 0x106f64u: goto label_106f64;
        case 0x106f68u: goto label_106f68;
        case 0x106f6cu: goto label_106f6c;
        case 0x106f70u: goto label_106f70;
        default: break;
    }

    ctx->pc = 0x106ec0u;

label_106ec0:
    // 0x106ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_106ec4:
    // 0x106ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x106ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_106ec8:
    // 0x106ec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_106ecc:
    // 0x106ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_106ed0:
    // 0x106ed0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_106ed4:
    // 0x106ed4: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_106ed8:
    if (ctx->pc == 0x106ED8u) {
        ctx->pc = 0x106ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106ED4u;
        // 0x106ed8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106EDCu;
        goto label_106edc;
    }
    ctx->pc = 0x106ED4u;
    {
        const bool branch_taken_0x106ed4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106ED4u;
        // 0x106ed8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ed4) {
            ctx->pc = 0x106F5Cu;
            goto label_106f5c;
        }
    }
    ctx->pc = 0x106EDCu;
label_106edc:
    // 0x106edc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_106ee0:
    // 0x106ee0: 0x244280b0  addiu       $v0, $v0, -0x7F50
    ctx->pc = 0x106ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934704));
label_106ee4:
    // 0x106ee4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x106ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_106ee8:
    // 0x106ee8: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x106ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_106eec:
    // 0x106eec: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_106ef0:
    if (ctx->pc == 0x106EF0u) {
        ctx->pc = 0x106EF4u;
        goto label_106ef4;
    }
    ctx->pc = 0x106EECu;
    {
        const bool branch_taken_0x106eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x106eec) {
            ctx->pc = 0x106F0Cu;
            goto label_106f0c;
        }
    }
    ctx->pc = 0x106EF4u;
label_106ef4:
    // 0x106ef4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_106ef8:
    if (ctx->pc == 0x106EF8u) {
        ctx->pc = 0x106EFCu;
        goto label_106efc;
    }
    ctx->pc = 0x106EF4u;
    {
        const bool branch_taken_0x106ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x106ef4) {
            ctx->pc = 0x106F0Cu;
            goto label_106f0c;
        }
    }
    ctx->pc = 0x106EFCu;
label_106efc:
    // 0x106efc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x106efcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_106f00:
    // 0x106f00: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x106f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_106f04:
    // 0x106f04: 0x320f809  jalr        $t9
label_106f08:
    if (ctx->pc == 0x106F08u) {
        ctx->pc = 0x106F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F04u;
        // 0x106f08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F0Cu;
        goto label_106f0c;
    }
    ctx->pc = 0x106F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x106F0Cu);
        ctx->pc = 0x106F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F04u;
        // 0x106f08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106F04u, 0x106F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106F0Cu;
label_106f0c:
    // 0x106f0c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_106f10:
    if (ctx->pc == 0x106F10u) {
        ctx->pc = 0x106F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F0Cu;
        // 0x106f10: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F14u;
        goto label_106f14;
    }
    ctx->pc = 0x106F0Cu;
    {
        const bool branch_taken_0x106f0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F0Cu;
        // 0x106f10: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f0c) {
            ctx->pc = 0x106F48u;
            goto label_106f48;
        }
    }
    ctx->pc = 0x106F14u;
label_106f14:
    // 0x106f14: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_106f18:
    // 0x106f18: 0x24427a50  addiu       $v0, $v0, 0x7A50
    ctx->pc = 0x106f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31312));
label_106f1c:
    // 0x106f1c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x106f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_106f20:
    // 0x106f20: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x106f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_106f24:
    // 0x106f24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_106f28:
    if (ctx->pc == 0x106F28u) {
        ctx->pc = 0x106F2Cu;
        goto label_106f2c;
    }
    ctx->pc = 0x106F24u;
    {
        const bool branch_taken_0x106f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x106f24) {
            ctx->pc = 0x106F34u;
            goto label_106f34;
        }
    }
    ctx->pc = 0x106F2Cu;
label_106f2c:
    // 0x106f2c: 0xc04018c  jal         func_100630
label_106f30:
    if (ctx->pc == 0x106F30u) {
        ctx->pc = 0x106F34u;
        goto label_106f34;
    }
    ctx->pc = 0x106F2Cu;
    SET_GPR_U32(ctx, 31, 0x106F34u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x106F2Cu, 0x106F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106F34u;
label_106f34:
    // 0x106f34: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_106f38:
    if (ctx->pc == 0x106F38u) {
        ctx->pc = 0x106F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F34u;
        // 0x106f38: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F3Cu;
        goto label_106f3c;
    }
    ctx->pc = 0x106F34u;
    {
        const bool branch_taken_0x106f34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F34u;
        // 0x106f38: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f34) {
            ctx->pc = 0x106F44u;
            goto label_106f44;
        }
    }
    ctx->pc = 0x106F3Cu;
label_106f3c:
    // 0x106f3c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x106f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
label_106f40:
    // 0x106f40: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x106f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_106f44:
    // 0x106f44: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x106f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_106f48:
    // 0x106f48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x106f48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_106f4c:
    // 0x106f4c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_106f50:
    if (ctx->pc == 0x106F50u) {
        ctx->pc = 0x106F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F4Cu;
        // 0x106f50: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F54u;
        goto label_106f54;
    }
    ctx->pc = 0x106F4Cu;
    {
        const bool branch_taken_0x106f4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x106F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F4Cu;
        // 0x106f50: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f4c) {
            ctx->pc = 0x106F60u;
            goto label_106f60;
        }
    }
    ctx->pc = 0x106F54u;
label_106f54:
    // 0x106f54: 0xc0401a4  jal         func_100690
label_106f58:
    if (ctx->pc == 0x106F58u) {
        ctx->pc = 0x106F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F54u;
        // 0x106f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F5Cu;
        goto label_106f5c;
    }
    ctx->pc = 0x106F54u;
    SET_GPR_U32(ctx, 31, 0x106F5Cu);
    ctx->pc = 0x106F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106F54u;
    // 0x106f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x106F54u, 0x106F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106F5Cu;
label_106f5c:
    // 0x106f5c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x106f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106f60:
    // 0x106f60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x106f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_106f64:
    // 0x106f64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x106f64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_106f68:
    // 0x106f68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_106f6c:
    // 0x106f6c: 0x3e00008  jr          $ra
label_106f70:
    if (ctx->pc == 0x106F70u) {
        ctx->pc = 0x106F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F6Cu;
        // 0x106f70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106F74u;
        goto label_fallthrough_0x106f6c;
    }
    ctx->pc = 0x106F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F6Cu;
        // 0x106f70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x106f6c:
    ctx->pc = 0x106F74u;
}
