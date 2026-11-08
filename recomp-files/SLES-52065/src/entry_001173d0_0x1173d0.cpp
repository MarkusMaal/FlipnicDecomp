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

// Function: entry_001173d0
// Address: 0x1173d0 - 0x117504
void entry_001173d0_0x1173d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001173d0_0x1173d0");
#endif

    switch (ctx->pc) {
        case 0x1173f0u: goto label_1173f0;
        case 0x11742cu: goto label_11742c;
        case 0x117440u: goto label_117440;
        case 0x117460u: goto label_117460;
        case 0x117480u: goto label_117480;
        case 0x117488u: goto label_117488;
        case 0x117490u: goto label_117490;
        case 0x1174a8u: goto label_1174a8;
        case 0x1174d0u: goto label_1174d0;
        case 0x1174ecu: goto label_1174ec;
        case 0x1174fcu: goto label_1174fc;
        default: break;
    }

    ctx->pc = 0x1173d0u;

label_1173d0:
    // 0x1173d0: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x1173d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
label_1173d4:
    // 0x1173d4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1173d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1173d8:
    // 0x1173d8: 0x2442d6c0  addiu       $v0, $v0, -0x2940
    ctx->pc = 0x1173d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956736));
label_1173dc:
    // 0x1173dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1173dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1173e0:
    // 0x1173e0: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x1173e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1173e4:
    // 0x1173e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1173e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1173e8:
    // 0x1173e8: 0xc04b018  jal         func_12C060
label_1173ec:
    if (ctx->pc == 0x1173ECu) {
        ctx->pc = 0x1173ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173E8u;
        // 0x1173ec: 0x722021  addu        $a0, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1173F0u;
        goto label_1173f0;
    }
    ctx->pc = 0x1173E8u;
    SET_GPR_U32(ctx, 31, 0x1173F0u);
    ctx->pc = 0x1173ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1173E8u;
    // 0x1173ec: 0x722021  addu        $a0, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C060u, 0x1173E8u, 0x1173F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173F0u;
label_1173f0:
    // 0x1173f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1173f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1173f4:
    // 0x1173f4: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1173f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1173f8:
    // 0x1173f8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1173f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1173fc:
    // 0x1173fc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_117400:
    if (ctx->pc == 0x117400u) {
        ctx->pc = 0x117400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173FCu;
        // 0x117400: 0x26520078  addiu       $s2, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117404u;
        goto label_117404;
    }
    ctx->pc = 0x1173FCu;
    {
        const bool branch_taken_0x1173fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173FCu;
        // 0x117400: 0x26520078  addiu       $s2, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173fc) {
            ctx->pc = 0x1173D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1173d0;
        }
    }
    ctx->pc = 0x117404u;
label_117404:
    // 0x117404: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x117404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_117408:
    // 0x117408: 0xaf808330  sw          $zero, -0x7CD0($gp)
    ctx->pc = 0x117408u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935344), GPR_U32(ctx, 0));
label_11740c:
    // 0x11740c: 0x2442d980  addiu       $v0, $v0, -0x2680
    ctx->pc = 0x11740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957440));
label_117410:
    // 0x117410: 0xaf828328  sw          $v0, -0x7CD8($gp)
    ctx->pc = 0x117410u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935336), GPR_U32(ctx, 2));
label_117414:
    // 0x117414: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x117414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
label_117418:
    // 0x117418: 0x2442d980  addiu       $v0, $v0, -0x2680
    ctx->pc = 0x117418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957440));
label_11741c:
    // 0x11741c: 0xaf82832c  sw          $v0, -0x7CD4($gp)
    ctx->pc = 0x11741cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935340), GPR_U32(ctx, 2));
label_117420:
    // 0x117420: 0x8f828328  lw          $v0, -0x7CD8($gp)
    ctx->pc = 0x117420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935336)));
label_117424:
    // 0x117424: 0xc0827aa  jal         func_209EA8
label_117428:
    if (ctx->pc == 0x117428u) {
        ctx->pc = 0x117428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117424u;
        // 0x117428: 0xaf828334  sw          $v0, -0x7CCC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11742Cu;
        goto label_11742c;
    }
    ctx->pc = 0x117424u;
    SET_GPR_U32(ctx, 31, 0x11742Cu);
    ctx->pc = 0x117428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117424u;
    // 0x117428: 0xaf828334  sw          $v0, -0x7CCC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935348), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209EA8u, 0x117424u, 0x11742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11742Cu;
label_11742c:
    // 0x11742c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11742cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117430:
    // 0x117430: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x117430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117434:
    // 0x117434: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x117434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_117438:
    // 0x117438: 0xc082742  jal         func_209D08
label_11743c:
    if (ctx->pc == 0x11743Cu) {
        ctx->pc = 0x11743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117438u;
        // 0x11743c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117440u;
        goto label_117440;
    }
    ctx->pc = 0x117438u;
    SET_GPR_U32(ctx, 31, 0x117440u);
    ctx->pc = 0x11743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117438u;
    // 0x11743c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209D08u, 0x117438u, 0x117440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117440u;
label_117440:
    // 0x117440: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x117440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_117444:
    // 0x117444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x117444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117448:
    // 0x117448: 0x2484d8c0  addiu       $a0, $a0, -0x2740
    ctx->pc = 0x117448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957248));
label_11744c:
    // 0x11744c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x11744cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_117450:
    // 0x117450: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x117450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_117454:
    // 0x117454: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x117454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117458:
    // 0x117458: 0xc0827f0  jal         func_209FC0
label_11745c:
    if (ctx->pc == 0x11745Cu) {
        ctx->pc = 0x11745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117458u;
        // 0x11745c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117460u;
        goto label_117460;
    }
    ctx->pc = 0x117458u;
    SET_GPR_U32(ctx, 31, 0x117460u);
    ctx->pc = 0x11745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117458u;
    // 0x11745c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209FC0u, 0x117458u, 0x117460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117460u;
label_117460:
    // 0x117460: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x117460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_117464:
    // 0x117464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x117464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117468:
    // 0x117468: 0x2484d8f0  addiu       $a0, $a0, -0x2710
    ctx->pc = 0x117468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957296));
label_11746c:
    // 0x11746c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x11746cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_117470:
    // 0x117470: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x117470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_117474:
    // 0x117474: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x117474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117478:
    // 0x117478: 0xc0827f0  jal         func_209FC0
label_11747c:
    if (ctx->pc == 0x11747Cu) {
        ctx->pc = 0x11747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117478u;
        // 0x11747c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117480u;
        goto label_117480;
    }
    ctx->pc = 0x117478u;
    SET_GPR_U32(ctx, 31, 0x117480u);
    ctx->pc = 0x11747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117478u;
    // 0x11747c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209FC0u, 0x117478u, 0x117480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117480u;
label_117480:
    // 0x117480: 0xc04bf64  jal         func_12FD90
label_117484:
    if (ctx->pc == 0x117484u) {
        ctx->pc = 0x117488u;
        goto label_117488;
    }
    ctx->pc = 0x117480u;
    SET_GPR_U32(ctx, 31, 0x117488u);
    ctx->pc = 0x12FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD90u, 0x117480u, 0x117488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117488u;
label_117488:
    // 0x117488: 0xc06d058  jal         func_1B4160
label_11748c:
    if (ctx->pc == 0x11748Cu) {
        ctx->pc = 0x117490u;
        goto label_117490;
    }
    ctx->pc = 0x117488u;
    SET_GPR_U32(ctx, 31, 0x117490u);
    ctx->pc = 0x1B4160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4160u, 0x117488u, 0x117490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117490u;
label_117490:
    // 0x117490: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x117490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_117494:
    // 0x117494: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x117494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_117498:
    // 0x117498: 0x24a5e570  addiu       $a1, $a1, -0x1A90
    ctx->pc = 0x117498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960496));
label_11749c:
    // 0x11749c: 0x27868334  addiu       $a2, $gp, -0x7CCC
    ctx->pc = 0x11749cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1174a0:
    // 0x1174a0: 0xc06d05c  jal         func_1B4170
label_1174a4:
    if (ctx->pc == 0x1174A4u) {
        ctx->pc = 0x1174A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174A0u;
        // 0x1174a4: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1174A8u;
        goto label_1174a8;
    }
    ctx->pc = 0x1174A0u;
    SET_GPR_U32(ctx, 31, 0x1174A8u);
    ctx->pc = 0x1174A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1174A0u;
    // 0x1174a4: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4170u, 0x1174A0u, 0x1174A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1174A8u;
label_1174a8:
    // 0x1174a8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1174a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1174ac:
    // 0x1174ac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1174acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1174b0:
    // 0x1174b0: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1174b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1174b4:
    // 0x1174b4: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1174b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1174b8:
    // 0x1174b8: 0x24a5e578  addiu       $a1, $a1, -0x1A88
    ctx->pc = 0x1174b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960504));
label_1174bc:
    // 0x1174bc: 0x27868334  addiu       $a2, $gp, -0x7CCC
    ctx->pc = 0x1174bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1174c0:
    // 0x1174c0: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1174c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1174c4:
    // 0x1174c4: 0xaf838350  sw          $v1, -0x7CB0($gp)
    ctx->pc = 0x1174c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935376), GPR_U32(ctx, 3));
label_1174c8:
    // 0x1174c8: 0xc06d05c  jal         func_1B4170
label_1174cc:
    if (ctx->pc == 0x1174CCu) {
        ctx->pc = 0x1174CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174C8u;
        // 0x1174cc: 0xaf828354  sw          $v0, -0x7CAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1174D0u;
        goto label_1174d0;
    }
    ctx->pc = 0x1174C8u;
    SET_GPR_U32(ctx, 31, 0x1174D0u);
    ctx->pc = 0x1174CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1174C8u;
    // 0x1174cc: 0xaf828354  sw          $v0, -0x7CAC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935380), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4170u, 0x1174C8u, 0x1174D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1174D0u;
label_1174d0:
    // 0x1174d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1174d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1174d4:
    // 0x1174d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1174d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1174d8:
    // 0x1174d8: 0xaf828320  sw          $v0, -0x7CE0($gp)
    ctx->pc = 0x1174d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935328), GPR_U32(ctx, 2));
label_1174dc:
    // 0x1174dc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1174dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1174e0:
    // 0x1174e0: 0xaf838358  sw          $v1, -0x7CA8($gp)
    ctx->pc = 0x1174e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935384), GPR_U32(ctx, 3));
label_1174e4:
    // 0x1174e4: 0xc045e58  jal         func_117960
label_1174e8:
    if (ctx->pc == 0x1174E8u) {
        ctx->pc = 0x1174E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174E4u;
        // 0x1174e8: 0xaf82835c  sw          $v0, -0x7CA4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1174ECu;
        goto label_1174ec;
    }
    ctx->pc = 0x1174E4u;
    SET_GPR_U32(ctx, 31, 0x1174ECu);
    ctx->pc = 0x1174E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1174E4u;
    // 0x1174e8: 0xaf82835c  sw          $v0, -0x7CA4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935388), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117960u, 0x1174E4u, 0x1174ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1174ECu;
label_1174ec:
    // 0x1174ec: 0x8e79000c  lw          $t9, 0xC($s3)
    ctx->pc = 0x1174ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1174f0:
    // 0x1174f0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x1174f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_1174f4:
    // 0x1174f4: 0x320f809  jalr        $t9
label_1174f8:
    if (ctx->pc == 0x1174F8u) {
        ctx->pc = 0x1174F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174F4u;
        // 0x1174f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1174FCu;
        goto label_1174fc;
    }
    ctx->pc = 0x1174F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1174FCu);
        ctx->pc = 0x1174F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174F4u;
        // 0x1174f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1174F4u, 0x1174FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1174FCu;
label_1174fc:
    // 0x1174fc: 0xc07e048  jal         func_1F8120
label_117500:
    if (ctx->pc == 0x117500u) {
        ctx->pc = 0x117500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174FCu;
        // 0x117500: 0xaf808348  sw          $zero, -0x7CB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117504u;
        goto label_fallthrough_0x1174fc;
    }
    ctx->pc = 0x1174FCu;
    SET_GPR_U32(ctx, 31, 0x117504u);
    ctx->pc = 0x117500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1174FCu;
    // 0x117500: 0xaf808348  sw          $zero, -0x7CB8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935368), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8120u, 0x1174FCu, 0x117504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1174fc:
    ctx->pc = 0x117504u;
}
