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

// Function: entry_001f140c
// Address: 0x1f140c - 0x1f1484
void entry_001f140c_0x1f140c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f140c_0x1f140c");
#endif

    switch (ctx->pc) {
        case 0x1f1428u: goto label_1f1428;
        case 0x1f1464u: goto label_1f1464;
        case 0x1f1474u: goto label_1f1474;
        case 0x1f147cu: goto label_1f147c;
        default: break;
    }

    ctx->pc = 0x1f140cu;

    // 0x1f140c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1410: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f1410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f1414: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f1414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1418: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f1418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f141c: 0x2694ee40  addiu       $s4, $s4, -0x11C0
    ctx->pc = 0x1f141cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    // 0x1f1420: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F1420u;
    SET_GPR_U32(ctx, 31, 0x1F1428u);
    ctx->pc = 0x1F1424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1420u;
    // 0x1f1424: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F1420u, 0x1F1428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1428u;
label_1f1428:
    // 0x1f1428: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f1428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f142c: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1f142cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1f1430: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f1430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1434: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1f1434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1f1438: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f1438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f143c: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f143cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f1440: 0x26e7e200  addiu       $a3, $s7, -0x1E00
    ctx->pc = 0x1f1440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f1444: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x1f1444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x1f1448: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f1448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f144c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1f144cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f1450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1454: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1f1454u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1458: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f1458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f145c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F145Cu;
    SET_GPR_U32(ctx, 31, 0x1F1464u);
    ctx->pc = 0x1F1460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F145Cu;
    // 0x1f1460: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F145Cu, 0x1F1464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1464u;
label_1f1464:
    // 0x1f1464: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1464u;
    {
        const bool branch_taken_0x1f1464 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1464u;
        // 0x1f1468: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1464) {
            ctx->pc = 0x1F1484u;
            return;
        }
    }
    ctx->pc = 0x1F146Cu;
    // 0x1f146c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F146Cu;
    SET_GPR_U32(ctx, 31, 0x1F1474u);
    ctx->pc = 0x1F1470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F146Cu;
    // 0x1f1470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F146Cu, 0x1F1474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1474u;
label_1f1474:
    // 0x1f1474: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1474u;
    SET_GPR_U32(ctx, 31, 0x1F147Cu);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1474u, 0x1F147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F147Cu;
label_1f147c:
    // 0x1f147c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F147Cu;
    {
        const bool branch_taken_0x1f147c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F147Cu;
        // 0x1f1480: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f147c) {
            ctx->pc = 0x1F14BCu;
            return;
        }
    }
    ctx->pc = 0x1F1484u;
}
