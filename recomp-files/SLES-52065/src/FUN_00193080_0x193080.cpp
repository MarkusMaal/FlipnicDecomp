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

// Function: FUN_00193080
// Address: 0x193080 - 0x193124
void FUN_00193080_0x193080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193080_0x193080");
#endif

    switch (ctx->pc) {
        case 0x193080u: goto label_193080;
        case 0x193084u: goto label_193084;
        case 0x193088u: goto label_193088;
        case 0x19308cu: goto label_19308c;
        case 0x193090u: goto label_193090;
        case 0x193094u: goto label_193094;
        case 0x193098u: goto label_193098;
        case 0x19309cu: goto label_19309c;
        case 0x1930a0u: goto label_1930a0;
        case 0x1930a4u: goto label_1930a4;
        case 0x1930a8u: goto label_1930a8;
        case 0x1930acu: goto label_1930ac;
        case 0x1930b0u: goto label_1930b0;
        case 0x1930b4u: goto label_1930b4;
        case 0x1930b8u: goto label_1930b8;
        case 0x1930bcu: goto label_1930bc;
        case 0x1930c0u: goto label_1930c0;
        case 0x1930c4u: goto label_1930c4;
        case 0x1930c8u: goto label_1930c8;
        case 0x1930ccu: goto label_1930cc;
        case 0x1930d0u: goto label_1930d0;
        case 0x1930d4u: goto label_1930d4;
        case 0x1930d8u: goto label_1930d8;
        case 0x1930dcu: goto label_1930dc;
        case 0x1930e0u: goto label_1930e0;
        case 0x1930e4u: goto label_1930e4;
        case 0x1930e8u: goto label_1930e8;
        case 0x1930ecu: goto label_1930ec;
        case 0x1930f0u: goto label_1930f0;
        case 0x1930f4u: goto label_1930f4;
        case 0x1930f8u: goto label_1930f8;
        case 0x1930fcu: goto label_1930fc;
        case 0x193100u: goto label_193100;
        case 0x193104u: goto label_193104;
        case 0x193108u: goto label_193108;
        case 0x19310cu: goto label_19310c;
        case 0x193110u: goto label_193110;
        case 0x193114u: goto label_193114;
        case 0x193118u: goto label_193118;
        case 0x19311cu: goto label_19311c;
        case 0x193120u: goto label_193120;
        default: break;
    }

    ctx->pc = 0x193080u;

label_193080:
    // 0x193080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_193084:
    // 0x193084: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x193084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_193088:
    // 0x193088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19308c:
    // 0x19308c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x19308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_193090:
    // 0x193090: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x193090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_193094:
    // 0x193094: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_193098:
    // 0x193098: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x193098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19309c:
    // 0x19309c: 0x10c20014  beq         $a2, $v0, . + 4 + (0x14 << 2)
label_1930a0:
    if (ctx->pc == 0x1930A0u) {
        ctx->pc = 0x1930A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19309Cu;
        // 0x1930a0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1930A4u;
        goto label_1930a4;
    }
    ctx->pc = 0x19309Cu;
    {
        const bool branch_taken_0x19309c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1930A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19309Cu;
        // 0x1930a0: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19309c) {
            ctx->pc = 0x1930F0u;
            goto label_1930f0;
        }
    }
    ctx->pc = 0x1930A4u;
label_1930a4:
    // 0x1930a4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1930a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1930a8:
    // 0x1930a8: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
label_1930ac:
    if (ctx->pc == 0x1930ACu) {
        ctx->pc = 0x1930ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930A8u;
        // 0x1930ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1930B0u;
        goto label_1930b0;
    }
    ctx->pc = 0x1930A8u;
    {
        const bool branch_taken_0x1930a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1930ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930A8u;
        // 0x1930ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930a8) {
            ctx->pc = 0x1930D8u;
            goto label_1930d8;
        }
    }
    ctx->pc = 0x1930B0u;
label_1930b0:
    // 0x1930b0: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
label_1930b4:
    if (ctx->pc == 0x1930B4u) {
        ctx->pc = 0x1930B8u;
        goto label_1930b8;
    }
    ctx->pc = 0x1930B0u;
    {
        const bool branch_taken_0x1930b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1930b0) {
            ctx->pc = 0x1930C0u;
            goto label_1930c0;
        }
    }
    ctx->pc = 0x1930B8u;
label_1930b8:
    // 0x1930b8: 0x10000013  b           . + 4 + (0x13 << 2)
label_1930bc:
    if (ctx->pc == 0x1930BCu) {
        ctx->pc = 0x1930BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930B8u;
        // 0x1930bc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1930C0u;
        goto label_1930c0;
    }
    ctx->pc = 0x1930B8u;
    {
        const bool branch_taken_0x1930b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1930BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930B8u;
        // 0x1930bc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930b8) {
            ctx->pc = 0x193108u;
            goto label_193108;
        }
    }
    ctx->pc = 0x1930C0u;
label_1930c0:
    // 0x1930c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1930c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1930c4:
    // 0x1930c4: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x1930c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_1930c8:
    // 0x1930c8: 0x320f809  jalr        $t9
label_1930cc:
    if (ctx->pc == 0x1930CCu) {
        ctx->pc = 0x1930CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930C8u;
        // 0x1930cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1930D0u;
        goto label_1930d0;
    }
    ctx->pc = 0x1930C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1930D0u);
        ctx->pc = 0x1930CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930C8u;
        // 0x1930cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1930C8u, 0x1930D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1930D0u;
label_1930d0:
    // 0x1930d0: 0x10000012  b           . + 4 + (0x12 << 2)
label_1930d4:
    if (ctx->pc == 0x1930D4u) {
        ctx->pc = 0x1930D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930D0u;
        // 0x1930d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1930D8u;
        goto label_1930d8;
    }
    ctx->pc = 0x1930D0u;
    {
        const bool branch_taken_0x1930d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1930D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930D0u;
        // 0x1930d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930d0) {
            ctx->pc = 0x19311Cu;
            goto label_19311c;
        }
    }
    ctx->pc = 0x1930D8u;
label_1930d8:
    // 0x1930d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1930d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1930dc:
    // 0x1930dc: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x1930dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_1930e0:
    // 0x1930e0: 0x320f809  jalr        $t9
label_1930e4:
    if (ctx->pc == 0x1930E4u) {
        ctx->pc = 0x1930E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930E0u;
        // 0x1930e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1930E8u;
        goto label_1930e8;
    }
    ctx->pc = 0x1930E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1930E8u);
        ctx->pc = 0x1930E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930E0u;
        // 0x1930e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1930E0u, 0x1930E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1930E8u;
label_1930e8:
    // 0x1930e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1930ec:
    if (ctx->pc == 0x1930ECu) {
        ctx->pc = 0x1930F0u;
        goto label_1930f0;
    }
    ctx->pc = 0x1930E8u;
    {
        const bool branch_taken_0x1930e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1930e8) {
            ctx->pc = 0x193118u;
            goto label_193118;
        }
    }
    ctx->pc = 0x1930F0u;
label_1930f0:
    // 0x1930f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1930f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1930f4:
    // 0x1930f4: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x1930f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_1930f8:
    // 0x1930f8: 0x320f809  jalr        $t9
label_1930fc:
    if (ctx->pc == 0x1930FCu) {
        ctx->pc = 0x1930FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930F8u;
        // 0x1930fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193100u;
        goto label_193100;
    }
    ctx->pc = 0x1930F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193100u);
        ctx->pc = 0x1930FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1930F8u;
        // 0x1930fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1930F8u, 0x193100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193100u;
label_193100:
    // 0x193100: 0x10000005  b           . + 4 + (0x5 << 2)
label_193104:
    if (ctx->pc == 0x193104u) {
        ctx->pc = 0x193108u;
        goto label_193108;
    }
    ctx->pc = 0x193100u;
    {
        const bool branch_taken_0x193100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193100) {
            ctx->pc = 0x193118u;
            goto label_193118;
        }
    }
    ctx->pc = 0x193108u;
label_193108:
    // 0x193108: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x193108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19310c:
    // 0x19310c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19310cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_193110:
    // 0x193110: 0x320f809  jalr        $t9
label_193114:
    if (ctx->pc == 0x193114u) {
        ctx->pc = 0x193114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193110u;
        // 0x193114: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193118u;
        goto label_193118;
    }
    ctx->pc = 0x193110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193118u);
        ctx->pc = 0x193114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193110u;
        // 0x193114: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193110u, 0x193118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193118u;
label_193118:
    // 0x193118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19311c:
    // 0x19311c: 0x3e00008  jr          $ra
label_193120:
    if (ctx->pc == 0x193120u) {
        ctx->pc = 0x193120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19311Cu;
        // 0x193120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193124u;
        goto label_fallthrough_0x19311c;
    }
    ctx->pc = 0x19311Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19311Cu;
        // 0x193120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19311Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19311c:
    ctx->pc = 0x193124u;
}
