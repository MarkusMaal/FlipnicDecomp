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

// Function: FUN_0017d330
// Address: 0x17d330 - 0x17d498
void FUN_0017d330_0x17d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017d330_0x17d330");
#endif

    switch (ctx->pc) {
        case 0x17d364u: goto label_17d364;
        case 0x17d374u: goto label_17d374;
        case 0x17d384u: goto label_17d384;
        case 0x17d394u: goto label_17d394;
        case 0x17d3a4u: goto label_17d3a4;
        case 0x17d3c0u: goto label_17d3c0;
        case 0x17d3e0u: goto label_17d3e0;
        case 0x17d3f4u: goto label_17d3f4;
        case 0x17d408u: goto label_17d408;
        case 0x17d424u: goto label_17d424;
        default: break;
    }

    ctx->pc = 0x17d330u;

    // 0x17d330: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17d330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17d334: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17d334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d338: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17d338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17d33c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17d33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17d340: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17d340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17d344: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17d344u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d348: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17d34c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17d34cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d350: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17d354: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d35c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D35Cu;
    SET_GPR_U32(ctx, 31, 0x17D364u);
    ctx->pc = 0x17D360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D35Cu;
    // 0x17d360: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D35Cu, 0x17D364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D364u;
label_17d364:
    // 0x17d364: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x17d364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x17d368: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x17d368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x17d36c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D36Cu;
    SET_GPR_U32(ctx, 31, 0x17D374u);
    ctx->pc = 0x17D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D36Cu;
    // 0x17d370: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D36Cu, 0x17D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D374u;
label_17d374:
    // 0x17d374: 0x26a40008  addiu       $a0, $s5, 0x8
    ctx->pc = 0x17d374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x17d378: 0x26850008  addiu       $a1, $s4, 0x8
    ctx->pc = 0x17d378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x17d37c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D37Cu;
    SET_GPR_U32(ctx, 31, 0x17D384u);
    ctx->pc = 0x17D380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D37Cu;
    // 0x17d380: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D37Cu, 0x17D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D384u;
label_17d384:
    // 0x17d384: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x17d384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x17d388: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x17d388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x17d38c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D38Cu;
    SET_GPR_U32(ctx, 31, 0x17D394u);
    ctx->pc = 0x17D390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D38Cu;
    // 0x17d390: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D38Cu, 0x17D394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D394u;
label_17d394:
    // 0x17d394: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x17d394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x17d398: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x17d398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x17d39c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D39Cu;
    SET_GPR_U32(ctx, 31, 0x17D3A4u);
    ctx->pc = 0x17D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D39Cu;
    // 0x17d3a0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D39Cu, 0x17D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3A4u;
label_17d3a4:
    // 0x17d3a4: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x17d3a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17d3a8: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x17d3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x17d3ac: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x17d3b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17d3b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17d3b8: 0xc040168  jal         func_1005A0
    ctx->pc = 0x17D3B8u;
    SET_GPR_U32(ctx, 31, 0x17D3C0u);
    ctx->pc = 0x17D3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3B8u;
    // 0x17d3bc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x17D3B8u, 0x17D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3C0u;
label_17d3c0:
    // 0x17d3c0: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x17d3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x17d3c4: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x17d3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x17d3c8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x17d3c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17d3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3d0: 0x24a5d310  addiu       $a1, $a1, -0x2CF0
    ctx->pc = 0x17d3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955792));
    // 0x17d3d4: 0x24c6d2b0  addiu       $a2, $a2, -0x2D50
    ctx->pc = 0x17d3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955696));
    // 0x17d3d8: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x17D3D8u;
    SET_GPR_U32(ctx, 31, 0x17D3E0u);
    ctx->pc = 0x17D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3D8u;
    // 0x17d3dc: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x17D3D8u, 0x17D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3E0u;
label_17d3e0:
    // 0x17d3e0: 0xaea200b0  sw          $v0, 0xB0($s5)
    ctx->pc = 0x17d3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 176), GPR_U32(ctx, 2));
    // 0x17d3e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17d3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3e8: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x17d3e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17d3ec: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x17D3ECu;
    {
        const bool branch_taken_0x17d3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D3ECu;
        // 0x17d3f0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d3ec) {
            ctx->pc = 0x17D468u;
            goto label_17d468;
        }
    }
    ctx->pc = 0x17D3F4u;
label_17d3f4:
    // 0x17d3f4: 0x8ea200b0  lw          $v0, 0xB0($s5)
    ctx->pc = 0x17d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x17d3f8: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x17d3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x17d3fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17d3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d400: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D400u;
    SET_GPR_U32(ctx, 31, 0x17D408u);
    ctx->pc = 0x17D404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D400u;
    // 0x17d404: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D400u, 0x17D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D408u;
label_17d408:
    // 0x17d408: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x17d408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x17d40c: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x17d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17d410: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x17d410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x17d414: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17d414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d418: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x17d418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17d41c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x17D41Cu;
    SET_GPR_U32(ctx, 31, 0x17D424u);
    ctx->pc = 0x17D420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D41Cu;
    // 0x17d420: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x17D41Cu, 0x17D424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D424u;
label_17d424:
    // 0x17d424: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x17d424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x17d428: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x17d428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x17d42c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x17d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x17d430: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17d430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17d434: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x17d434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17d438: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17d438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d43c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x17d43cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x17d440: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17d440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17d444: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x17d444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x17d448: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17d448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17d44c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x17d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x17d450: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x17d450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17d454: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17d454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d458: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x17d458u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x17d45c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x17d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x17d460: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17d460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17d464: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17d464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17d468:
    // 0x17d468: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x17d468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x17d46c: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x17D46Cu;
    {
        const bool branch_taken_0x17d46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D46Cu;
        // 0x17d470: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d46c) {
            ctx->pc = 0x17D3F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d3f4;
        }
    }
    ctx->pc = 0x17D474u;
    // 0x17d474: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17d474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17d478: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17d478u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17d47c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17d47cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d480: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17d480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d484: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d48c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d48cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d490: 0x3e00008  jr          $ra
    ctx->pc = 0x17D490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D490u;
        // 0x17d494: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D498u;
}
