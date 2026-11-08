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

// Function: entry_00117744
// Address: 0x117744 - 0x1178e0
void entry_00117744_0x117744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117744_0x117744");
#endif

    switch (ctx->pc) {
        case 0x117768u: goto label_117768;
        case 0x117780u: goto label_117780;
        case 0x117798u: goto label_117798;
        case 0x1177b0u: goto label_1177b0;
        case 0x1177c8u: goto label_1177c8;
        case 0x1177e0u: goto label_1177e0;
        case 0x1177f8u: goto label_1177f8;
        case 0x117810u: goto label_117810;
        case 0x117828u: goto label_117828;
        case 0x117840u: goto label_117840;
        case 0x117858u: goto label_117858;
        case 0x117870u: goto label_117870;
        case 0x117888u: goto label_117888;
        case 0x1178a0u: goto label_1178a0;
        case 0x1178b8u: goto label_1178b8;
        case 0x1178d0u: goto label_1178d0;
        default: break;
    }

    ctx->pc = 0x117744u;

label_117744:
    // 0x117744: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x117744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
label_117748:
    // 0x117748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11774c:
    // 0x11774c: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x11774cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_117750:
    // 0x117750: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x117750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_117754:
    // 0x117754: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x117754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_117758:
    // 0x117758: 0x84450004  lh          $a1, 0x4($v0)
    ctx->pc = 0x117758u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_11775c:
    // 0x11775c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x11775cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_117760:
    // 0x117760: 0x320f809  jalr        $t9
label_117764:
    if (ctx->pc == 0x117764u) {
        ctx->pc = 0x117764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117760u;
        // 0x117764: 0x24520004  addiu       $s2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117768u;
        goto label_117768;
    }
    ctx->pc = 0x117760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117768u);
        ctx->pc = 0x117764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117760u;
        // 0x117764: 0x24520004  addiu       $s2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117760u, 0x117768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117768u;
label_117768:
    // 0x117768: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11776c:
    // 0x11776c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11776cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117770:
    // 0x117770: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x117770u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_117774:
    // 0x117774: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x117774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_117778:
    // 0x117778: 0x320f809  jalr        $t9
label_11777c:
    if (ctx->pc == 0x11777Cu) {
        ctx->pc = 0x11777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117778u;
        // 0x11777c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117780u;
        goto label_117780;
    }
    ctx->pc = 0x117778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117780u);
        ctx->pc = 0x11777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117778u;
        // 0x11777c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117778u, 0x117780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117780u;
label_117780:
    // 0x117780: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_117784:
    // 0x117784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117788:
    // 0x117788: 0x86450004  lh          $a1, 0x4($s2)
    ctx->pc = 0x117788u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_11778c:
    // 0x11778c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x11778cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_117790:
    // 0x117790: 0x320f809  jalr        $t9
label_117794:
    if (ctx->pc == 0x117794u) {
        ctx->pc = 0x117794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117790u;
        // 0x117794: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117798u;
        goto label_117798;
    }
    ctx->pc = 0x117790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117798u);
        ctx->pc = 0x117794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117790u;
        // 0x117794: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117790u, 0x117798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117798u;
label_117798:
    // 0x117798: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11779c:
    // 0x11779c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11779cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1177a0:
    // 0x1177a0: 0x86450006  lh          $a1, 0x6($s2)
    ctx->pc = 0x1177a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_1177a4:
    // 0x1177a4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x1177a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_1177a8:
    // 0x1177a8: 0x320f809  jalr        $t9
label_1177ac:
    if (ctx->pc == 0x1177ACu) {
        ctx->pc = 0x1177ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177A8u;
        // 0x1177ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1177B0u;
        goto label_1177b0;
    }
    ctx->pc = 0x1177A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1177B0u);
        ctx->pc = 0x1177ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177A8u;
        // 0x1177ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1177A8u, 0x1177B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1177B0u;
label_1177b0:
    // 0x1177b0: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1177b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1177b4:
    // 0x1177b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1177b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1177b8:
    // 0x1177b8: 0x86450008  lh          $a1, 0x8($s2)
    ctx->pc = 0x1177b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_1177bc:
    // 0x1177bc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1177bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1177c0:
    // 0x1177c0: 0x320f809  jalr        $t9
label_1177c4:
    if (ctx->pc == 0x1177C4u) {
        ctx->pc = 0x1177C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177C0u;
        // 0x1177c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1177C8u;
        goto label_1177c8;
    }
    ctx->pc = 0x1177C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1177C8u);
        ctx->pc = 0x1177C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177C0u;
        // 0x1177c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1177C0u, 0x1177C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1177C8u;
label_1177c8:
    // 0x1177c8: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1177c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1177cc:
    // 0x1177cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1177ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1177d0:
    // 0x1177d0: 0x8645000a  lh          $a1, 0xA($s2)
    ctx->pc = 0x1177d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_1177d4:
    // 0x1177d4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1177d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1177d8:
    // 0x1177d8: 0x320f809  jalr        $t9
label_1177dc:
    if (ctx->pc == 0x1177DCu) {
        ctx->pc = 0x1177DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177D8u;
        // 0x1177dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1177E0u;
        goto label_1177e0;
    }
    ctx->pc = 0x1177D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1177E0u);
        ctx->pc = 0x1177DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177D8u;
        // 0x1177dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1177D8u, 0x1177E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1177E0u;
label_1177e0:
    // 0x1177e0: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1177e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1177e4:
    // 0x1177e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1177e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1177e8:
    // 0x1177e8: 0x8645000c  lh          $a1, 0xC($s2)
    ctx->pc = 0x1177e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_1177ec:
    // 0x1177ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1177ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1177f0:
    // 0x1177f0: 0x320f809  jalr        $t9
label_1177f4:
    if (ctx->pc == 0x1177F4u) {
        ctx->pc = 0x1177F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177F0u;
        // 0x1177f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1177F8u;
        goto label_1177f8;
    }
    ctx->pc = 0x1177F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1177F8u);
        ctx->pc = 0x1177F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177F0u;
        // 0x1177f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1177F0u, 0x1177F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1177F8u;
label_1177f8:
    // 0x1177f8: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1177f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1177fc:
    // 0x1177fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1177fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117800:
    // 0x117800: 0x8645000e  lh          $a1, 0xE($s2)
    ctx->pc = 0x117800u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_117804:
    // 0x117804: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x117804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_117808:
    // 0x117808: 0x320f809  jalr        $t9
label_11780c:
    if (ctx->pc == 0x11780Cu) {
        ctx->pc = 0x11780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117808u;
        // 0x11780c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117810u;
        goto label_117810;
    }
    ctx->pc = 0x117808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117810u);
        ctx->pc = 0x11780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117808u;
        // 0x11780c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117808u, 0x117810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117810u;
label_117810:
    // 0x117810: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_117814:
    // 0x117814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117818:
    // 0x117818: 0x86450010  lh          $a1, 0x10($s2)
    ctx->pc = 0x117818u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_11781c:
    // 0x11781c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x11781cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_117820:
    // 0x117820: 0x320f809  jalr        $t9
label_117824:
    if (ctx->pc == 0x117824u) {
        ctx->pc = 0x117824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117820u;
        // 0x117824: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117828u;
        goto label_117828;
    }
    ctx->pc = 0x117820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117828u);
        ctx->pc = 0x117824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117820u;
        // 0x117824: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117820u, 0x117828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117828u;
label_117828:
    // 0x117828: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11782c:
    // 0x11782c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11782cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117830:
    // 0x117830: 0x86450012  lh          $a1, 0x12($s2)
    ctx->pc = 0x117830u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_117834:
    // 0x117834: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x117834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_117838:
    // 0x117838: 0x320f809  jalr        $t9
label_11783c:
    if (ctx->pc == 0x11783Cu) {
        ctx->pc = 0x11783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117838u;
        // 0x11783c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117840u;
        goto label_117840;
    }
    ctx->pc = 0x117838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117840u);
        ctx->pc = 0x11783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117838u;
        // 0x11783c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117838u, 0x117840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117840u;
label_117840:
    // 0x117840: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_117844:
    // 0x117844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117848:
    // 0x117848: 0x86450014  lh          $a1, 0x14($s2)
    ctx->pc = 0x117848u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_11784c:
    // 0x11784c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x11784cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_117850:
    // 0x117850: 0x320f809  jalr        $t9
label_117854:
    if (ctx->pc == 0x117854u) {
        ctx->pc = 0x117854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117850u;
        // 0x117854: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117858u;
        goto label_117858;
    }
    ctx->pc = 0x117850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117858u);
        ctx->pc = 0x117854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117850u;
        // 0x117854: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117850u, 0x117858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117858u;
label_117858:
    // 0x117858: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11785c:
    // 0x11785c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11785cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117860:
    // 0x117860: 0x86450016  lh          $a1, 0x16($s2)
    ctx->pc = 0x117860u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
label_117864:
    // 0x117864: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x117864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_117868:
    // 0x117868: 0x320f809  jalr        $t9
label_11786c:
    if (ctx->pc == 0x11786Cu) {
        ctx->pc = 0x11786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117868u;
        // 0x11786c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117870u;
        goto label_117870;
    }
    ctx->pc = 0x117868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117870u);
        ctx->pc = 0x11786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117868u;
        // 0x11786c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117868u, 0x117870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117870u;
label_117870:
    // 0x117870: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_117874:
    // 0x117874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117878:
    // 0x117878: 0x86450018  lh          $a1, 0x18($s2)
    ctx->pc = 0x117878u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_11787c:
    // 0x11787c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x11787cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_117880:
    // 0x117880: 0x320f809  jalr        $t9
label_117884:
    if (ctx->pc == 0x117884u) {
        ctx->pc = 0x117884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117880u;
        // 0x117884: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117888u;
        goto label_117888;
    }
    ctx->pc = 0x117880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117888u);
        ctx->pc = 0x117884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117880u;
        // 0x117884: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117880u, 0x117888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117888u;
label_117888:
    // 0x117888: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11788c:
    // 0x11788c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11788cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117890:
    // 0x117890: 0x8645001a  lh          $a1, 0x1A($s2)
    ctx->pc = 0x117890u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
label_117894:
    // 0x117894: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x117894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_117898:
    // 0x117898: 0x320f809  jalr        $t9
label_11789c:
    if (ctx->pc == 0x11789Cu) {
        ctx->pc = 0x11789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117898u;
        // 0x11789c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178A0u;
        goto label_1178a0;
    }
    ctx->pc = 0x117898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1178A0u);
        ctx->pc = 0x11789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117898u;
        // 0x11789c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117898u, 0x1178A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1178A0u;
label_1178a0:
    // 0x1178a0: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1178a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1178a4:
    // 0x1178a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1178a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1178a8:
    // 0x1178a8: 0x8645001c  lh          $a1, 0x1C($s2)
    ctx->pc = 0x1178a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
label_1178ac:
    // 0x1178ac: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1178acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1178b0:
    // 0x1178b0: 0x320f809  jalr        $t9
label_1178b4:
    if (ctx->pc == 0x1178B4u) {
        ctx->pc = 0x1178B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178B0u;
        // 0x1178b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178B8u;
        goto label_1178b8;
    }
    ctx->pc = 0x1178B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1178B8u);
        ctx->pc = 0x1178B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178B0u;
        // 0x1178b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1178B0u, 0x1178B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1178B8u;
label_1178b8:
    // 0x1178b8: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1178b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1178bc:
    // 0x1178bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1178bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1178c0:
    // 0x1178c0: 0x8645001e  lh          $a1, 0x1E($s2)
    ctx->pc = 0x1178c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
label_1178c4:
    // 0x1178c4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1178c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1178c8:
    // 0x1178c8: 0x320f809  jalr        $t9
label_1178cc:
    if (ctx->pc == 0x1178CCu) {
        ctx->pc = 0x1178CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178C8u;
        // 0x1178cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178D0u;
        goto label_1178d0;
    }
    ctx->pc = 0x1178C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1178D0u);
        ctx->pc = 0x1178CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178C8u;
        // 0x1178cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1178C8u, 0x1178D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1178D0u;
label_1178d0:
    // 0x1178d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1178d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1178d4:
    // 0x1178d4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1178d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1178d8:
    // 0x1178d8: 0x1460ff9a  bnez        $v1, . + 4 + (-0x66 << 2)
label_1178dc:
    if (ctx->pc == 0x1178DCu) {
        ctx->pc = 0x1178DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178D8u;
        // 0x1178dc: 0x26730078  addiu       $s3, $s3, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178E0u;
        goto label_fallthrough_0x1178d8;
    }
    ctx->pc = 0x1178D8u;
    {
        const bool branch_taken_0x1178d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1178DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178D8u;
        // 0x1178dc: 0x26730078  addiu       $s3, $s3, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178d8) {
            ctx->pc = 0x117744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117744;
        }
    }
label_fallthrough_0x1178d8:
    ctx->pc = 0x1178E0u;
}
