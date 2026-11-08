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

// Function: FUN_00127dc0
// Address: 0x127dc0 - 0x127fb8
void FUN_00127dc0_0x127dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127dc0_0x127dc0");
#endif

    switch (ctx->pc) {
        case 0x127dc0u: goto label_127dc0;
        case 0x127dc4u: goto label_127dc4;
        case 0x127dc8u: goto label_127dc8;
        case 0x127dccu: goto label_127dcc;
        case 0x127dd0u: goto label_127dd0;
        case 0x127dd4u: goto label_127dd4;
        case 0x127dd8u: goto label_127dd8;
        case 0x127ddcu: goto label_127ddc;
        case 0x127de0u: goto label_127de0;
        case 0x127de4u: goto label_127de4;
        case 0x127de8u: goto label_127de8;
        case 0x127decu: goto label_127dec;
        case 0x127df0u: goto label_127df0;
        case 0x127df4u: goto label_127df4;
        case 0x127df8u: goto label_127df8;
        case 0x127dfcu: goto label_127dfc;
        case 0x127e00u: goto label_127e00;
        case 0x127e04u: goto label_127e04;
        case 0x127e08u: goto label_127e08;
        case 0x127e0cu: goto label_127e0c;
        case 0x127e10u: goto label_127e10;
        case 0x127e14u: goto label_127e14;
        case 0x127e18u: goto label_127e18;
        case 0x127e1cu: goto label_127e1c;
        case 0x127e20u: goto label_127e20;
        case 0x127e24u: goto label_127e24;
        case 0x127e28u: goto label_127e28;
        case 0x127e2cu: goto label_127e2c;
        case 0x127e30u: goto label_127e30;
        case 0x127e34u: goto label_127e34;
        case 0x127e38u: goto label_127e38;
        case 0x127e3cu: goto label_127e3c;
        case 0x127e40u: goto label_127e40;
        case 0x127e44u: goto label_127e44;
        case 0x127e48u: goto label_127e48;
        case 0x127e4cu: goto label_127e4c;
        case 0x127e50u: goto label_127e50;
        case 0x127e54u: goto label_127e54;
        case 0x127e58u: goto label_127e58;
        case 0x127e5cu: goto label_127e5c;
        case 0x127e60u: goto label_127e60;
        case 0x127e64u: goto label_127e64;
        case 0x127e68u: goto label_127e68;
        case 0x127e6cu: goto label_127e6c;
        case 0x127e70u: goto label_127e70;
        case 0x127e74u: goto label_127e74;
        case 0x127e78u: goto label_127e78;
        case 0x127e7cu: goto label_127e7c;
        case 0x127e80u: goto label_127e80;
        case 0x127e84u: goto label_127e84;
        case 0x127e88u: goto label_127e88;
        case 0x127e8cu: goto label_127e8c;
        case 0x127e90u: goto label_127e90;
        case 0x127e94u: goto label_127e94;
        case 0x127e98u: goto label_127e98;
        case 0x127e9cu: goto label_127e9c;
        case 0x127ea0u: goto label_127ea0;
        case 0x127ea4u: goto label_127ea4;
        case 0x127ea8u: goto label_127ea8;
        case 0x127eacu: goto label_127eac;
        case 0x127eb0u: goto label_127eb0;
        case 0x127eb4u: goto label_127eb4;
        case 0x127eb8u: goto label_127eb8;
        case 0x127ebcu: goto label_127ebc;
        case 0x127ec0u: goto label_127ec0;
        case 0x127ec4u: goto label_127ec4;
        case 0x127ec8u: goto label_127ec8;
        case 0x127eccu: goto label_127ecc;
        case 0x127ed0u: goto label_127ed0;
        case 0x127ed4u: goto label_127ed4;
        case 0x127ed8u: goto label_127ed8;
        case 0x127edcu: goto label_127edc;
        case 0x127ee0u: goto label_127ee0;
        case 0x127ee4u: goto label_127ee4;
        case 0x127ee8u: goto label_127ee8;
        case 0x127eecu: goto label_127eec;
        case 0x127ef0u: goto label_127ef0;
        case 0x127ef4u: goto label_127ef4;
        case 0x127ef8u: goto label_127ef8;
        case 0x127efcu: goto label_127efc;
        case 0x127f00u: goto label_127f00;
        case 0x127f04u: goto label_127f04;
        case 0x127f08u: goto label_127f08;
        case 0x127f0cu: goto label_127f0c;
        case 0x127f10u: goto label_127f10;
        case 0x127f14u: goto label_127f14;
        case 0x127f18u: goto label_127f18;
        case 0x127f1cu: goto label_127f1c;
        case 0x127f20u: goto label_127f20;
        case 0x127f24u: goto label_127f24;
        case 0x127f28u: goto label_127f28;
        case 0x127f2cu: goto label_127f2c;
        case 0x127f30u: goto label_127f30;
        case 0x127f34u: goto label_127f34;
        case 0x127f38u: goto label_127f38;
        case 0x127f3cu: goto label_127f3c;
        case 0x127f40u: goto label_127f40;
        case 0x127f44u: goto label_127f44;
        case 0x127f48u: goto label_127f48;
        case 0x127f4cu: goto label_127f4c;
        case 0x127f50u: goto label_127f50;
        case 0x127f54u: goto label_127f54;
        case 0x127f58u: goto label_127f58;
        case 0x127f5cu: goto label_127f5c;
        case 0x127f60u: goto label_127f60;
        case 0x127f64u: goto label_127f64;
        case 0x127f68u: goto label_127f68;
        case 0x127f6cu: goto label_127f6c;
        case 0x127f70u: goto label_127f70;
        case 0x127f74u: goto label_127f74;
        case 0x127f78u: goto label_127f78;
        case 0x127f7cu: goto label_127f7c;
        case 0x127f80u: goto label_127f80;
        case 0x127f84u: goto label_127f84;
        case 0x127f88u: goto label_127f88;
        case 0x127f8cu: goto label_127f8c;
        case 0x127f90u: goto label_127f90;
        case 0x127f94u: goto label_127f94;
        case 0x127f98u: goto label_127f98;
        case 0x127f9cu: goto label_127f9c;
        case 0x127fa0u: goto label_127fa0;
        case 0x127fa4u: goto label_127fa4;
        case 0x127fa8u: goto label_127fa8;
        case 0x127facu: goto label_127fac;
        case 0x127fb0u: goto label_127fb0;
        case 0x127fb4u: goto label_127fb4;
        default: break;
    }

    ctx->pc = 0x127dc0u;

label_127dc0:
    // 0x127dc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x127dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_127dc4:
    // 0x127dc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x127dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_127dc8:
    // 0x127dc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x127dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_127dcc:
    // 0x127dcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x127dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_127dd0:
    // 0x127dd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x127dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_127dd4:
    // 0x127dd4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x127dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_127dd8:
    // 0x127dd8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x127dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_127ddc:
    // 0x127ddc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127ddcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127de0:
    // 0x127de0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x127de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_127de4:
    // 0x127de4: 0x320f809  jalr        $t9
label_127de8:
    if (ctx->pc == 0x127DE8u) {
        ctx->pc = 0x127DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DE4u;
        // 0x127de8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127DECu;
        goto label_127dec;
    }
    ctx->pc = 0x127DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127DECu);
        ctx->pc = 0x127DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DE4u;
        // 0x127de8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127DE4u, 0x127DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127DECu;
label_127dec:
    // 0x127dec: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x127decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_127df0:
    // 0x127df0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127df4:
    // 0x127df4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x127df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_127df8:
    // 0x127df8: 0x320f809  jalr        $t9
label_127dfc:
    if (ctx->pc == 0x127DFCu) {
        ctx->pc = 0x127DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DF8u;
        // 0x127dfc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E00u;
        goto label_127e00;
    }
    ctx->pc = 0x127DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127E00u);
        ctx->pc = 0x127DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DF8u;
        // 0x127dfc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127DF8u, 0x127E00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127E00u;
label_127e00:
    // 0x127e00: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x127e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_127e04:
    // 0x127e04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127e08:
    // 0x127e08: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x127e08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_127e0c:
    // 0x127e0c: 0x320f809  jalr        $t9
label_127e10:
    if (ctx->pc == 0x127E10u) {
        ctx->pc = 0x127E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E0Cu;
        // 0x127e10: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E14u;
        goto label_127e14;
    }
    ctx->pc = 0x127E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127E14u);
        ctx->pc = 0x127E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E0Cu;
        // 0x127e10: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127E0Cu, 0x127E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127E14u;
label_127e14:
    // 0x127e14: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x127e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_127e18:
    // 0x127e18: 0x12020050  beq         $s0, $v0, . + 4 + (0x50 << 2)
label_127e1c:
    if (ctx->pc == 0x127E1Cu) {
        ctx->pc = 0x127E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E18u;
        // 0x127e1c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E20u;
        goto label_127e20;
    }
    ctx->pc = 0x127E18u;
    {
        const bool branch_taken_0x127e18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x127E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E18u;
        // 0x127e1c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e18) {
            ctx->pc = 0x127F5Cu;
            goto label_127f5c;
        }
    }
    ctx->pc = 0x127E20u;
label_127e20:
    // 0x127e20: 0x1202003d  beq         $s0, $v0, . + 4 + (0x3D << 2)
label_127e24:
    if (ctx->pc == 0x127E24u) {
        ctx->pc = 0x127E28u;
        goto label_127e28;
    }
    ctx->pc = 0x127E20u;
    {
        const bool branch_taken_0x127e20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127e20) {
            ctx->pc = 0x127F18u;
            goto label_127f18;
        }
    }
    ctx->pc = 0x127E28u;
label_127e28:
    // 0x127e28: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x127e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_127e2c:
    // 0x127e2c: 0x12020029  beq         $s0, $v0, . + 4 + (0x29 << 2)
label_127e30:
    if (ctx->pc == 0x127E30u) {
        ctx->pc = 0x127E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E2Cu;
        // 0x127e30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E34u;
        goto label_127e34;
    }
    ctx->pc = 0x127E2Cu;
    {
        const bool branch_taken_0x127e2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x127E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E2Cu;
        // 0x127e30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e2c) {
            ctx->pc = 0x127ED4u;
            goto label_127ed4;
        }
    }
    ctx->pc = 0x127E34u;
label_127e34:
    // 0x127e34: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
label_127e38:
    if (ctx->pc == 0x127E38u) {
        ctx->pc = 0x127E3Cu;
        goto label_127e3c;
    }
    ctx->pc = 0x127E34u;
    {
        const bool branch_taken_0x127e34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x127e34) {
            ctx->pc = 0x127E90u;
            goto label_127e90;
        }
    }
    ctx->pc = 0x127E3Cu;
label_127e3c:
    // 0x127e3c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_127e40:
    if (ctx->pc == 0x127E40u) {
        ctx->pc = 0x127E44u;
        goto label_127e44;
    }
    ctx->pc = 0x127E3Cu;
    {
        const bool branch_taken_0x127e3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x127e3c) {
            ctx->pc = 0x127E4Cu;
            goto label_127e4c;
        }
    }
    ctx->pc = 0x127E44u;
label_127e44:
    // 0x127e44: 0x10000057  b           . + 4 + (0x57 << 2)
label_127e48:
    if (ctx->pc == 0x127E48u) {
        ctx->pc = 0x127E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E44u;
        // 0x127e48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E4Cu;
        goto label_127e4c;
    }
    ctx->pc = 0x127E44u;
    {
        const bool branch_taken_0x127e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E44u;
        // 0x127e48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e44) {
            ctx->pc = 0x127FA4u;
            goto label_127fa4;
        }
    }
    ctx->pc = 0x127E4Cu;
label_127e4c:
    // 0x127e4c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x127e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_127e50:
    // 0x127e50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127e54:
    // 0x127e54: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x127e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_127e58:
    // 0x127e58: 0x320f809  jalr        $t9
label_127e5c:
    if (ctx->pc == 0x127E5Cu) {
        ctx->pc = 0x127E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E58u;
        // 0x127e5c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E60u;
        goto label_127e60;
    }
    ctx->pc = 0x127E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127E60u);
        ctx->pc = 0x127E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E58u;
        // 0x127e5c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127E58u, 0x127E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127E60u;
label_127e60:
    // 0x127e60: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x127e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_127e64:
    // 0x127e64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127e68:
    // 0x127e68: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x127e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_127e6c:
    // 0x127e6c: 0x320f809  jalr        $t9
label_127e70:
    if (ctx->pc == 0x127E70u) {
        ctx->pc = 0x127E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E6Cu;
        // 0x127e70: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E74u;
        goto label_127e74;
    }
    ctx->pc = 0x127E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127E74u);
        ctx->pc = 0x127E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E6Cu;
        // 0x127e70: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127E6Cu, 0x127E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127E74u;
label_127e74:
    // 0x127e74: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x127e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_127e78:
    // 0x127e78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127e7c:
    // 0x127e7c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x127e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_127e80:
    // 0x127e80: 0x320f809  jalr        $t9
label_127e84:
    if (ctx->pc == 0x127E84u) {
        ctx->pc = 0x127E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E80u;
        // 0x127e84: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x127E88u;
        goto label_127e88;
    }
    ctx->pc = 0x127E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127E88u);
        ctx->pc = 0x127E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E80u;
        // 0x127e84: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127E80u, 0x127E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127E88u;
label_127e88:
    // 0x127e88: 0x10000045  b           . + 4 + (0x45 << 2)
label_127e8c:
    if (ctx->pc == 0x127E8Cu) {
        ctx->pc = 0x127E90u;
        goto label_127e90;
    }
    ctx->pc = 0x127E88u;
    {
        const bool branch_taken_0x127e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127e88) {
            ctx->pc = 0x127FA0u;
            goto label_127fa0;
        }
    }
    ctx->pc = 0x127E90u;
label_127e90:
    // 0x127e90: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x127e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_127e94:
    // 0x127e94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127e94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127e98:
    // 0x127e98: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x127e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_127e9c:
    // 0x127e9c: 0x320f809  jalr        $t9
label_127ea0:
    if (ctx->pc == 0x127EA0u) {
        ctx->pc = 0x127EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E9Cu;
        // 0x127ea0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127EA4u;
        goto label_127ea4;
    }
    ctx->pc = 0x127E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127EA4u);
        ctx->pc = 0x127EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E9Cu;
        // 0x127ea0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127E9Cu, 0x127EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127EA4u;
label_127ea4:
    // 0x127ea4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x127ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_127ea8:
    // 0x127ea8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127ea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127eac:
    // 0x127eac: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x127eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_127eb0:
    // 0x127eb0: 0x320f809  jalr        $t9
label_127eb4:
    if (ctx->pc == 0x127EB4u) {
        ctx->pc = 0x127EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EB0u;
        // 0x127eb4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127EB8u;
        goto label_127eb8;
    }
    ctx->pc = 0x127EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127EB8u);
        ctx->pc = 0x127EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EB0u;
        // 0x127eb4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127EB0u, 0x127EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127EB8u;
label_127eb8:
    // 0x127eb8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x127eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_127ebc:
    // 0x127ebc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127ec0:
    // 0x127ec0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x127ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_127ec4:
    // 0x127ec4: 0x320f809  jalr        $t9
label_127ec8:
    if (ctx->pc == 0x127EC8u) {
        ctx->pc = 0x127EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EC4u;
        // 0x127ec8: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x127ECCu;
        goto label_127ecc;
    }
    ctx->pc = 0x127EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127ECCu);
        ctx->pc = 0x127EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EC4u;
        // 0x127ec8: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127EC4u, 0x127ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127ECCu;
label_127ecc:
    // 0x127ecc: 0x10000034  b           . + 4 + (0x34 << 2)
label_127ed0:
    if (ctx->pc == 0x127ED0u) {
        ctx->pc = 0x127ED4u;
        goto label_127ed4;
    }
    ctx->pc = 0x127ECCu;
    {
        const bool branch_taken_0x127ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127ecc) {
            ctx->pc = 0x127FA0u;
            goto label_127fa0;
        }
    }
    ctx->pc = 0x127ED4u;
label_127ed4:
    // 0x127ed4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x127ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_127ed8:
    // 0x127ed8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127ed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127edc:
    // 0x127edc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x127edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_127ee0:
    // 0x127ee0: 0x320f809  jalr        $t9
label_127ee4:
    if (ctx->pc == 0x127EE4u) {
        ctx->pc = 0x127EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EE0u;
        // 0x127ee4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127EE8u;
        goto label_127ee8;
    }
    ctx->pc = 0x127EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127EE8u);
        ctx->pc = 0x127EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EE0u;
        // 0x127ee4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127EE0u, 0x127EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127EE8u;
label_127ee8:
    // 0x127ee8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x127ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_127eec:
    // 0x127eec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127ef0:
    // 0x127ef0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x127ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_127ef4:
    // 0x127ef4: 0x320f809  jalr        $t9
label_127ef8:
    if (ctx->pc == 0x127EF8u) {
        ctx->pc = 0x127EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EF4u;
        // 0x127ef8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127EFCu;
        goto label_127efc;
    }
    ctx->pc = 0x127EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127EFCu);
        ctx->pc = 0x127EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EF4u;
        // 0x127ef8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127EF4u, 0x127EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127EFCu;
label_127efc:
    // 0x127efc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x127efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_127f00:
    // 0x127f00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127f04:
    // 0x127f04: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x127f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_127f08:
    // 0x127f08: 0x320f809  jalr        $t9
label_127f0c:
    if (ctx->pc == 0x127F0Cu) {
        ctx->pc = 0x127F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F08u;
        // 0x127f0c: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F10u;
        goto label_127f10;
    }
    ctx->pc = 0x127F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127F10u);
        ctx->pc = 0x127F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F08u;
        // 0x127f0c: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F08u, 0x127F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127F10u;
label_127f10:
    // 0x127f10: 0x10000023  b           . + 4 + (0x23 << 2)
label_127f14:
    if (ctx->pc == 0x127F14u) {
        ctx->pc = 0x127F18u;
        goto label_127f18;
    }
    ctx->pc = 0x127F10u;
    {
        const bool branch_taken_0x127f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f10) {
            ctx->pc = 0x127FA0u;
            goto label_127fa0;
        }
    }
    ctx->pc = 0x127F18u;
label_127f18:
    // 0x127f18: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x127f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_127f1c:
    // 0x127f1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127f20:
    // 0x127f20: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x127f20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_127f24:
    // 0x127f24: 0x320f809  jalr        $t9
label_127f28:
    if (ctx->pc == 0x127F28u) {
        ctx->pc = 0x127F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F24u;
        // 0x127f28: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F2Cu;
        goto label_127f2c;
    }
    ctx->pc = 0x127F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127F2Cu);
        ctx->pc = 0x127F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F24u;
        // 0x127f28: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F24u, 0x127F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127F2Cu;
label_127f2c:
    // 0x127f2c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x127f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_127f30:
    // 0x127f30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127f30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127f34:
    // 0x127f34: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x127f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_127f38:
    // 0x127f38: 0x320f809  jalr        $t9
label_127f3c:
    if (ctx->pc == 0x127F3Cu) {
        ctx->pc = 0x127F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F38u;
        // 0x127f3c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F40u;
        goto label_127f40;
    }
    ctx->pc = 0x127F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127F40u);
        ctx->pc = 0x127F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F38u;
        // 0x127f3c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F38u, 0x127F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127F40u;
label_127f40:
    // 0x127f40: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x127f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_127f44:
    // 0x127f44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127f44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127f48:
    // 0x127f48: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x127f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_127f4c:
    // 0x127f4c: 0x320f809  jalr        $t9
label_127f50:
    if (ctx->pc == 0x127F50u) {
        ctx->pc = 0x127F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F4Cu;
        // 0x127f50: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F54u;
        goto label_127f54;
    }
    ctx->pc = 0x127F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127F54u);
        ctx->pc = 0x127F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F4Cu;
        // 0x127f50: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F4Cu, 0x127F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127F54u;
label_127f54:
    // 0x127f54: 0x10000012  b           . + 4 + (0x12 << 2)
label_127f58:
    if (ctx->pc == 0x127F58u) {
        ctx->pc = 0x127F5Cu;
        goto label_127f5c;
    }
    ctx->pc = 0x127F54u;
    {
        const bool branch_taken_0x127f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f54) {
            ctx->pc = 0x127FA0u;
            goto label_127fa0;
        }
    }
    ctx->pc = 0x127F5Cu;
label_127f5c:
    // 0x127f5c: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x127f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_127f60:
    // 0x127f60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127f64:
    // 0x127f64: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x127f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_127f68:
    // 0x127f68: 0x320f809  jalr        $t9
label_127f6c:
    if (ctx->pc == 0x127F6Cu) {
        ctx->pc = 0x127F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F68u;
        // 0x127f6c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F70u;
        goto label_127f70;
    }
    ctx->pc = 0x127F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127F70u);
        ctx->pc = 0x127F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F68u;
        // 0x127f6c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F68u, 0x127F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127F70u;
label_127f70:
    // 0x127f70: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x127f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_127f74:
    // 0x127f74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127f74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127f78:
    // 0x127f78: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x127f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_127f7c:
    // 0x127f7c: 0x320f809  jalr        $t9
label_127f80:
    if (ctx->pc == 0x127F80u) {
        ctx->pc = 0x127F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F7Cu;
        // 0x127f80: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F84u;
        goto label_127f84;
    }
    ctx->pc = 0x127F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127F84u);
        ctx->pc = 0x127F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F7Cu;
        // 0x127f80: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F7Cu, 0x127F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127F84u;
label_127f84:
    // 0x127f84: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x127f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_127f88:
    // 0x127f88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127f8c:
    // 0x127f8c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x127f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_127f90:
    // 0x127f90: 0x320f809  jalr        $t9
label_127f94:
    if (ctx->pc == 0x127F94u) {
        ctx->pc = 0x127F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F90u;
        // 0x127f94: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x127F98u;
        goto label_127f98;
    }
    ctx->pc = 0x127F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127F98u);
        ctx->pc = 0x127F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F90u;
        // 0x127f94: 0xc7ac005c  lwc1        $f12, 0x5C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127F90u, 0x127F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127F98u;
label_127f98:
    // 0x127f98: 0xc04a5c8  jal         func_129720
label_127f9c:
    if (ctx->pc == 0x127F9Cu) {
        ctx->pc = 0x127F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127F98u;
        // 0x127f9c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127FA0u;
        goto label_127fa0;
    }
    ctx->pc = 0x127F98u;
    SET_GPR_U32(ctx, 31, 0x127FA0u);
    ctx->pc = 0x127F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F98u;
    // 0x127f9c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129720u, 0x127F98u, 0x127FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127FA0u;
label_127fa0:
    // 0x127fa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x127fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_127fa4:
    // 0x127fa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127fa8:
    // 0x127fa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x127fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_127fac:
    // 0x127fac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x127facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_127fb0:
    // 0x127fb0: 0x3e00008  jr          $ra
label_127fb4:
    if (ctx->pc == 0x127FB4u) {
        ctx->pc = 0x127FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FB0u;
        // 0x127fb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127FB8u;
        goto label_fallthrough_0x127fb0;
    }
    ctx->pc = 0x127FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127FB0u;
        // 0x127fb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x127fb0:
    ctx->pc = 0x127FB8u;
}
