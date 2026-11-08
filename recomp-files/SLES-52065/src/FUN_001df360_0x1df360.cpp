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

// Function: FUN_001df360
// Address: 0x1df360 - 0x1df554
void FUN_001df360_0x1df360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001df360_0x1df360");
#endif

    switch (ctx->pc) {
        case 0x1df3c0u: goto label_1df3c0;
        case 0x1df3f4u: goto label_1df3f4;
        case 0x1df3fcu: goto label_1df3fc;
        case 0x1df408u: goto label_1df408;
        case 0x1df420u: goto label_1df420;
        case 0x1df42cu: goto label_1df42c;
        case 0x1df43cu: goto label_1df43c;
        case 0x1df44cu: goto label_1df44c;
        case 0x1df4a8u: goto label_1df4a8;
        case 0x1df4ecu: goto label_1df4ec;
        case 0x1df508u: goto label_1df508;
        case 0x1df514u: goto label_1df514;
        default: break;
    }

    ctx->pc = 0x1df360u;

    // 0x1df360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1df360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1df364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df368: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1df368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1df36c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1df36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1df370: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1df370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1df374: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1df374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1df378: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1df378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1df37c: 0x480006b  bltz        $a0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1DF37Cu;
    {
        const bool branch_taken_0x1df37c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1DF380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF37Cu;
        // 0x1df380: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df37c) {
            ctx->pc = 0x1DF52Cu;
            goto label_1df52c;
        }
    }
    ctx->pc = 0x1DF384u;
    // 0x1df384: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1df384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1df388: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1df388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1df38c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DF38Cu;
    {
        const bool branch_taken_0x1df38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF38Cu;
        // 0x1df390: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df38c) {
            ctx->pc = 0x1DF3C8u;
            goto label_1df3c8;
        }
    }
    ctx->pc = 0x1DF394u;
    // 0x1df394: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1df394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1df398: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1df398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1df39c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1df39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df3a0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1df3a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1df3a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1df3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df3a8: 0x491c0  sll         $s2, $a0, 7
    ctx->pc = 0x1df3a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1df3ac: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1df3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1df3b0: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1df3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1df3b4: 0x8c849f08  lw          $a0, -0x60F8($a0)
    ctx->pc = 0x1df3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294942472)));
    // 0x1df3b8: 0xc077dd8  jal         func_1DF760
    ctx->pc = 0x1DF3B8u;
    SET_GPR_U32(ctx, 31, 0x1DF3C0u);
    ctx->pc = 0x1DF3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF3B8u;
    // 0x1df3bc: 0x3c150039  lui         $s5, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF760u, 0x1DF3B8u, 0x1DF3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF3C0u;
label_1df3c0:
    // 0x1df3c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF3C0u;
    {
        const bool branch_taken_0x1df3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df3c0) {
            ctx->pc = 0x1DF3D0u;
            goto label_1df3d0;
        }
    }
    ctx->pc = 0x1DF3C8u;
label_1df3c8:
    // 0x1df3c8: 0x491c0  sll         $s2, $a0, 7
    ctx->pc = 0x1df3c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1df3cc: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1df3ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
label_1df3d0:
    // 0x1df3d0: 0x340280bc  ori         $v0, $zero, 0x80BC
    ctx->pc = 0x1df3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32956);
    // 0x1df3d4: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x1df3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x1df3d8: 0x26b39f00  addiu       $s3, $s5, -0x6100
    ctx->pc = 0x1df3d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942464));
    // 0x1df3dc: 0x2538821  addu        $s1, $s2, $s3
    ctx->pc = 0x1df3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1df3e0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1df3e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1df3e4: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1df3e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1df3e8: 0xde250038  ld          $a1, 0x38($s1)
    ctx->pc = 0x1df3e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1df3ec: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1DF3ECu;
    SET_GPR_U32(ctx, 31, 0x1DF3F4u);
    ctx->pc = 0x1DF3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF3ECu;
    // 0x1df3f0: 0xfe220030  sd          $v0, 0x30($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1DF3ECu, 0x1DF3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF3F4u;
label_1df3f4:
    // 0x1df3f4: 0xc074c4c  jal         func_1D3130
    ctx->pc = 0x1DF3F4u;
    SET_GPR_U32(ctx, 31, 0x1DF3FCu);
    ctx->pc = 0x1DF3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF3F4u;
    // 0x1df3f8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3130u, 0x1DF3F4u, 0x1DF3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF3FCu;
label_1df3fc:
    // 0x1df3fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1df3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df400: 0xc08218c  jal         func_208630
    ctx->pc = 0x1DF400u;
    SET_GPR_U32(ctx, 31, 0x1DF408u);
    ctx->pc = 0x1DF404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF400u;
    // 0x1df404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1DF400u, 0x1DF408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF408u;
label_1df408:
    // 0x1df408: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF408u;
    {
        const bool branch_taken_0x1df408 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1df408) {
            ctx->pc = 0x1DF420u;
            goto label_1df420;
        }
    }
    ctx->pc = 0x1DF410u;
    // 0x1df410: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1df410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1df414: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1df414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1df418: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1DF418u;
    SET_GPR_U32(ctx, 31, 0x1DF420u);
    ctx->pc = 0x1DF41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF418u;
    // 0x1df41c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DF418u, 0x1DF420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF420u;
label_1df420:
    // 0x1df420: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1df420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df424: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DF424u;
    SET_GPR_U32(ctx, 31, 0x1DF42Cu);
    ctx->pc = 0x1DF428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF424u;
    // 0x1df428: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DF424u, 0x1DF42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF42Cu;
label_1df42c:
    // 0x1df42c: 0xde250078  ld          $a1, 0x78($s1)
    ctx->pc = 0x1df42cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1df430: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1df430u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1df434: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1DF434u;
    SET_GPR_U32(ctx, 31, 0x1DF43Cu);
    ctx->pc = 0x1DF438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF434u;
    // 0x1df438: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1DF434u, 0x1DF43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF43Cu;
label_1df43c:
    // 0x1df43c: 0x340580b2  ori         $a1, $zero, 0x80B2
    ctx->pc = 0x1df43cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x1df440: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1df440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1df444: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DF444u;
    SET_GPR_U32(ctx, 31, 0x1DF44Cu);
    ctx->pc = 0x1DF448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF444u;
    // 0x1df448: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DF444u, 0x1DF44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF44Cu;
label_1df44c:
    // 0x1df44c: 0x2535021  addu        $t2, $s2, $s3
    ctx->pc = 0x1df44cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1df450: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x1df450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1df454: 0x26430060  addiu       $v1, $s2, 0x60
    ctx->pc = 0x1df454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1df458: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1df458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1df45c: 0x2454821  addu        $t1, $s2, $a1
    ctx->pc = 0x1df45cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1df460: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1df460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1df464: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1df464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1df468: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1df468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1df46c: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1df46cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1df470: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1df470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1df474: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1df474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df478: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df47c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1df47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df480: 0xad47001c  sw          $a3, 0x1C($t2)
    ctx->pc = 0x1df480u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 7));
    // 0x1df484: 0xfca20040  sd          $v0, 0x40($a1)
    ctx->pc = 0x1df484u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 2));
    // 0x1df488: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x1df488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x1df48c: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x1df48cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x1df490: 0xfd220050  sd          $v0, 0x50($t1)
    ctx->pc = 0x1df490u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 80), GPR_U64(ctx, 2));
    // 0x1df494: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1df494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1df498: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df49c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x1df49cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x1df4a0: 0x26270060  addiu       $a3, $s1, 0x60
    ctx->pc = 0x1df4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1df4a4: 0x0  nop
    ctx->pc = 0x1df4a4u;
    // NOP
label_1df4a8:
    // 0x1df4a8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1df4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1df4ac: 0x631f8  dsll        $a2, $a2, 7
    ctx->pc = 0x1df4acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 7);
    // 0x1df4b0: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x1df4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1df4b4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1df4b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df4b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1df4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1df4bc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1df4bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df4c0: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x1df4c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1df4c4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1df4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1df4c8: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1df4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1df4cc: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DF4CCu;
    {
        const bool branch_taken_0x1df4cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF4CCu;
        // 0x1df4d0: 0xc2302d  daddu       $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4cc) {
            ctx->pc = 0x1DF4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df4a8;
        }
    }
    ctx->pc = 0x1DF4D4u;
    // 0x1df4d4: 0x26a39f00  addiu       $v1, $s5, -0x6100
    ctx->pc = 0x1df4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942464));
    // 0x1df4d8: 0x26420050  addiu       $v0, $s2, 0x50
    ctx->pc = 0x1df4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1df4dc: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF4DCu;
    {
        const bool branch_taken_0x1df4dc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1DF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF4DCu;
        // 0x1df4e0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4dc) {
            ctx->pc = 0x1DF4F8u;
            goto label_1df4f8;
        }
    }
    ctx->pc = 0x1DF4E4u;
    // 0x1df4e4: 0xc081a60  jal         func_206980
    ctx->pc = 0x1DF4E4u;
    SET_GPR_U32(ctx, 31, 0x1DF4ECu);
    ctx->pc = 0x1DF4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF4E4u;
    // 0x1df4e8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1DF4E4u, 0x1DF4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF4ECu;
label_1df4ec:
    // 0x1df4ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF4ECu;
    {
        const bool branch_taken_0x1df4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df4ec) {
            ctx->pc = 0x1DF514u;
            goto label_1df514;
        }
    }
    ctx->pc = 0x1DF4F4u;
    // 0x1df4f4: 0x0  nop
    ctx->pc = 0x1df4f4u;
    // NOP
label_1df4f8:
    // 0x1df4f8: 0x6107a  dsrl        $v0, $a2, 1
    ctx->pc = 0x1df4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> 1);
    // 0x1df4fc: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x1df4fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1df500: 0xc081a60  jal         func_206980
    ctx->pc = 0x1DF500u;
    SET_GPR_U32(ctx, 31, 0x1DF508u);
    ctx->pc = 0x1DF504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF500u;
    // 0x1df504: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1DF500u, 0x1DF508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF508u;
label_1df508:
    // 0x1df508: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df50c: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1DF50Cu;
    SET_GPR_U32(ctx, 31, 0x1DF514u);
    ctx->pc = 0x1DF510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF50Cu;
    // 0x1df510: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DF50Cu, 0x1DF514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF514u;
label_1df514:
    // 0x1df514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df518: 0x26a29f00  addiu       $v0, $s5, -0x6100
    ctx->pc = 0x1df518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942464));
    // 0x1df51c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1df51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df520: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1df520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1df524: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x1df524u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x1df528: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1df528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1df52c:
    // 0x1df52c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df52cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df534: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1df534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df538: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1df538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df53c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1df53cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df540: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1df540u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df544: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1df544u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1df548: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1df548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df54c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF54Cu;
        // 0x1df550: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF554u;
}
