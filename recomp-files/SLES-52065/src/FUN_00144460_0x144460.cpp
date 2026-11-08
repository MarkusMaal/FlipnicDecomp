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

// Function: FUN_00144460
// Address: 0x144460 - 0x14456c
void FUN_00144460_0x144460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144460_0x144460");
#endif

    switch (ctx->pc) {
        case 0x144498u: goto label_144498;
        case 0x1444a8u: goto label_1444a8;
        case 0x1444b0u: goto label_1444b0;
        case 0x1444bcu: goto label_1444bc;
        case 0x1444ccu: goto label_1444cc;
        case 0x1444d4u: goto label_1444d4;
        case 0x1444e4u: goto label_1444e4;
        case 0x1444f4u: goto label_1444f4;
        case 0x144500u: goto label_144500;
        case 0x14451cu: goto label_14451c;
        case 0x144528u: goto label_144528;
        case 0x144534u: goto label_144534;
        case 0x14454cu: goto label_14454c;
        default: break;
    }

    ctx->pc = 0x144460u;

    // 0x144460: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x144460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x144464: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x144464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x144468: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x144468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14446c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14446cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144470: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144474: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144478: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x144478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14447c: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x14447Cu;
    {
        const bool branch_taken_0x14447c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x144480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14447Cu;
        // 0x144480: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14447c) {
            ctx->pc = 0x14454Cu;
            goto label_14454c;
        }
    }
    ctx->pc = 0x144484u;
    // 0x144484: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x144484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x144488: 0x244291c0  addiu       $v0, $v0, -0x6E40
    ctx->pc = 0x144488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939072));
    // 0x14448c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14448cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x144490: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x144490u;
    SET_GPR_U32(ctx, 31, 0x144498u);
    ctx->pc = 0x144494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144490u;
    // 0x144494: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x144490u, 0x144498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144498u;
label_144498:
    // 0x144498: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x144498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14449c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x14449cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1444a0: 0xc048920  jal         func_122480
    ctx->pc = 0x1444A0u;
    SET_GPR_U32(ctx, 31, 0x1444A8u);
    ctx->pc = 0x1444A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444A0u;
    // 0x1444a4: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x1444A0u, 0x1444A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444A8u;
label_1444a8:
    // 0x1444a8: 0xc04c260  jal         func_130980
    ctx->pc = 0x1444A8u;
    SET_GPR_U32(ctx, 31, 0x1444B0u);
    ctx->pc = 0x130980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130980u, 0x1444A8u, 0x1444B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444B0u;
label_1444b0:
    // 0x1444b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1444b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1444b4: 0xc080748  jal         func_201D20
    ctx->pc = 0x1444B4u;
    SET_GPR_U32(ctx, 31, 0x1444BCu);
    ctx->pc = 0x1444B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444B4u;
    // 0x1444b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1444B4u, 0x1444BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444BCu;
label_1444bc:
    // 0x1444bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1444bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1444c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1444c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1444c4: 0xc048884  jal         func_122210
    ctx->pc = 0x1444C4u;
    SET_GPR_U32(ctx, 31, 0x1444CCu);
    ctx->pc = 0x1444C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444C4u;
    // 0x1444c8: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x1444C4u, 0x1444CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444CCu;
label_1444cc:
    // 0x1444cc: 0xc080748  jal         func_201D20
    ctx->pc = 0x1444CCu;
    SET_GPR_U32(ctx, 31, 0x1444D4u);
    ctx->pc = 0x1444D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444CCu;
    // 0x1444d0: 0x260400fc  addiu       $a0, $s0, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1444CCu, 0x1444D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444D4u;
label_1444d4:
    // 0x1444d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1444d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1444d8: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1444d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1444dc: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x1444DCu;
    SET_GPR_U32(ctx, 31, 0x1444E4u);
    ctx->pc = 0x1444E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444DCu;
    // 0x1444e0: 0x260500fc  addiu       $a1, $s0, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x1444DCu, 0x1444E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444E4u;
label_1444e4:
    // 0x1444e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1444e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1444e8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1444e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1444ec: 0xc046c14  jal         func_11B050
    ctx->pc = 0x1444ECu;
    SET_GPR_U32(ctx, 31, 0x1444F4u);
    ctx->pc = 0x1444F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444ECu;
    // 0x1444f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x1444ECu, 0x1444F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444F4u;
label_1444f4:
    // 0x1444f4: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1444f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1444f8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1444F8u;
    SET_GPR_U32(ctx, 31, 0x144500u);
    ctx->pc = 0x1444FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444F8u;
    // 0x1444fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1444F8u, 0x144500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144500u;
label_144500:
    // 0x144500: 0x260400e8  addiu       $a0, $s0, 0xE8
    ctx->pc = 0x144500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
    // 0x144504: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x144504u;
    {
        const bool branch_taken_0x144504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x144504) {
            ctx->pc = 0x14451Cu;
            goto label_14451c;
        }
    }
    ctx->pc = 0x14450Cu;
    // 0x14450c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14450Cu;
    {
        const bool branch_taken_0x14450c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x144510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14450Cu;
        // 0x144510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14450c) {
            ctx->pc = 0x14451Cu;
            goto label_14451c;
        }
    }
    ctx->pc = 0x144514u;
    // 0x144514: 0xc048414  jal         func_121050
    ctx->pc = 0x144514u;
    SET_GPR_U32(ctx, 31, 0x14451Cu);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x144514u, 0x14451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14451Cu;
label_14451c:
    // 0x14451c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x14451cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x144520: 0xc0505fc  jal         func_1417F0
    ctx->pc = 0x144520u;
    SET_GPR_U32(ctx, 31, 0x144528u);
    ctx->pc = 0x144524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144520u;
    // 0x144524: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1417F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1417F0u, 0x144520u, 0x144528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144528u;
label_144528:
    // 0x144528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14452c: 0xc04cec4  jal         func_133B10
    ctx->pc = 0x14452Cu;
    SET_GPR_U32(ctx, 31, 0x144534u);
    ctx->pc = 0x144530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14452Cu;
    // 0x144530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133B10u, 0x14452Cu, 0x144534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144534u;
label_144534:
    // 0x144534: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x144534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x144538: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x144538u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14453c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14453Cu;
    {
        const bool branch_taken_0x14453c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x144540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14453Cu;
        // 0x144540: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14453c) {
            ctx->pc = 0x144550u;
            goto label_144550;
        }
    }
    ctx->pc = 0x144544u;
    // 0x144544: 0xc0401a4  jal         func_100690
    ctx->pc = 0x144544u;
    SET_GPR_U32(ctx, 31, 0x14454Cu);
    ctx->pc = 0x144548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144544u;
    // 0x144548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x144544u, 0x14454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14454Cu;
label_14454c:
    // 0x14454c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14454cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_144550:
    // 0x144550: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x144550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144554: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x144554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144558: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14455c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14455cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144564: 0x3e00008  jr          $ra
    ctx->pc = 0x144564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144564u;
        // 0x144568: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14456Cu;
}
