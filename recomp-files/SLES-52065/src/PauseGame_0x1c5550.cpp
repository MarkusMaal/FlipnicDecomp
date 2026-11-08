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

// Function: PauseGame
// Address: 0x1c5550 - 0x1c58b8
void PauseGame_0x1c5550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PauseGame_0x1c5550");
#endif

    switch (ctx->pc) {
        case 0x1c5578u: goto label_1c5578;
        case 0x1c55a0u: goto label_1c55a0;
        case 0x1c55acu: goto label_1c55ac;
        case 0x1c55b4u: goto label_1c55b4;
        case 0x1c55bcu: goto label_1c55bc;
        case 0x1c55d4u: goto label_1c55d4;
        case 0x1c55f4u: goto label_1c55f4;
        case 0x1c5614u: goto label_1c5614;
        case 0x1c5624u: goto label_1c5624;
        case 0x1c5630u: goto label_1c5630;
        case 0x1c564cu: goto label_1c564c;
        case 0x1c5654u: goto label_1c5654;
        case 0x1c566cu: goto label_1c566c;
        case 0x1c5678u: goto label_1c5678;
        case 0x1c56bcu: goto label_1c56bc;
        case 0x1c56c8u: goto label_1c56c8;
        case 0x1c56fcu: goto label_1c56fc;
        case 0x1c5708u: goto label_1c5708;
        case 0x1c5718u: goto label_1c5718;
        case 0x1c5720u: goto label_1c5720;
        case 0x1c5728u: goto label_1c5728;
        case 0x1c5738u: goto label_1c5738;
        case 0x1c5744u: goto label_1c5744;
        case 0x1c574cu: goto label_1c574c;
        case 0x1c5768u: goto label_1c5768;
        case 0x1c5770u: goto label_1c5770;
        case 0x1c577cu: goto label_1c577c;
        case 0x1c57d0u: goto label_1c57d0;
        case 0x1c57ecu: goto label_1c57ec;
        case 0x1c57f8u: goto label_1c57f8;
        case 0x1c5808u: goto label_1c5808;
        case 0x1c5814u: goto label_1c5814;
        case 0x1c582cu: goto label_1c582c;
        case 0x1c5838u: goto label_1c5838;
        case 0x1c5848u: goto label_1c5848;
        case 0x1c5854u: goto label_1c5854;
        case 0x1c586cu: goto label_1c586c;
        case 0x1c5878u: goto label_1c5878;
        case 0x1c5888u: goto label_1c5888;
        case 0x1c5894u: goto label_1c5894;
        default: break;
    }

    ctx->pc = 0x1c5550u;

    // 0x1c5550: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c5550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c5554: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c5554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c5558: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c5558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c555c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c555cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c5560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c5560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c5564: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5568: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1c5568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1c556c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c556cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5570: 0xc045c98  jal         func_117260
    ctx->pc = 0x1C5570u;
    SET_GPR_U32(ctx, 31, 0x1C5578u);
    ctx->pc = 0x1C5574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5570u;
    // 0x1c5574: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1C5570u, 0x1C5578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5578u;
label_1c5578:
    // 0x1c5578: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1c5578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1c557c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1c557cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1c5580: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1c5580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1c5584: 0x2463bb90  addiu       $v1, $v1, -0x4470
    ctx->pc = 0x1c5584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949776));
    // 0x1c5588: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1c5588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1c558c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5590: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1c5590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1c5594: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c5594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5598: 0xc06e060  jal         func_1B8180
    ctx->pc = 0x1C5598u;
    SET_GPR_U32(ctx, 31, 0x1C55A0u);
    ctx->pc = 0x1C559Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5598u;
    // 0x1c559c: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8180u, 0x1C5598u, 0x1C55A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55A0u;
label_1c55a0:
    // 0x1c55a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c55a4: 0xc06f8bc  jal         func_1BE2F0
    ctx->pc = 0x1C55A4u;
    SET_GPR_U32(ctx, 31, 0x1C55ACu);
    ctx->pc = 0x1C55A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C55A4u;
    // 0x1c55a8: 0x2444003c  addiu       $a0, $v0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE2F0u, 0x1C55A4u, 0x1C55ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55ACu;
label_1c55ac:
    // 0x1c55ac: 0xc06d410  jal         func_1B5040
    ctx->pc = 0x1C55ACu;
    SET_GPR_U32(ctx, 31, 0x1C55B4u);
    ctx->pc = 0x1B5040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5040u, 0x1C55ACu, 0x1C55B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55B4u;
label_1c55b4:
    // 0x1c55b4: 0xc0485a4  jal         func_121690
    ctx->pc = 0x1C55B4u;
    SET_GPR_U32(ctx, 31, 0x1C55BCu);
    ctx->pc = 0x1C55B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C55B4u;
    // 0x1c55b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121690u, 0x1C55B4u, 0x1C55BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55BCu;
label_1c55bc:
    // 0x1c55bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c55bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c55c0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1c55c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c55c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c55c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c55c8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1c55c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1c55cc: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x1C55CCu;
    SET_GPR_U32(ctx, 31, 0x1C55D4u);
    ctx->pc = 0x1C55D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C55CCu;
    // 0x1c55d0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1C55CCu, 0x1C55D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55D4u;
label_1c55d4:
    // 0x1c55d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c55d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c55d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c55dc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1c55dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1c55e0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1c55e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c55e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c55e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c55e8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1c55e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c55ec: 0xc053c00  jal         func_14F000
    ctx->pc = 0x1C55ECu;
    SET_GPR_U32(ctx, 31, 0x1C55F4u);
    ctx->pc = 0x1C55F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C55ECu;
    // 0x1c55f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x1C55ECu, 0x1C55F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C55F4u;
label_1c55f4:
    // 0x1c55f4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c55f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c55f8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c55f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c55fc: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1c55fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1c5600: 0x24a51f08  addiu       $a1, $a1, 0x1F08
    ctx->pc = 0x1c5600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7944));
    // 0x1c5604: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x1c5604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1c5608: 0x2462003c  addiu       $v0, $v1, 0x3C
    ctx->pc = 0x1c5608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1c560c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C560Cu;
    SET_GPR_U32(ctx, 31, 0x1C5614u);
    ctx->pc = 0x1C5610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C560Cu;
    // 0x1c5610: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C560Cu, 0x1C5614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5614u;
label_1c5614:
    // 0x1c5614: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c5614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5618: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x1c5618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1c561c: 0xc06e114  jal         func_1B8450
    ctx->pc = 0x1C561Cu;
    SET_GPR_U32(ctx, 31, 0x1C5624u);
    ctx->pc = 0x1C5620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C561Cu;
    // 0x1c5620: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8450u, 0x1C561Cu, 0x1C5624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5624u;
label_1c5624:
    // 0x1c5624: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1c5624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1c5628: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C5628u;
    SET_GPR_U32(ctx, 31, 0x1C5630u);
    ctx->pc = 0x1C562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5628u;
    // 0x1c562c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C5628u, 0x1C5630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5630u;
label_1c5630:
    // 0x1c5630: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c5630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5634: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c5634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5638: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x1c5638u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1c563c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1c563cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c5640: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C5640u;
    {
        const bool branch_taken_0x1c5640 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5640u;
        // 0x1c5644: 0x24500014  addiu       $s0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5640) {
            ctx->pc = 0x1C56E8u;
            goto label_1c56e8;
        }
    }
    ctx->pc = 0x1C5648u;
    // 0x1c5648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c564c:
    // 0x1c564c: 0xc06e598  jal         func_1B9660
    ctx->pc = 0x1C564Cu;
    SET_GPR_U32(ctx, 31, 0x1C5654u);
    ctx->pc = 0x1C5650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C564Cu;
    // 0x1c5650: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9660u, 0x1C564Cu, 0x1C5654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5654u;
label_1c5654:
    // 0x1c5654: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c5654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5658: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x1c5658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1c565c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C565Cu;
    {
        const bool branch_taken_0x1c565c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C565Cu;
        // 0x1c5660: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c565c) {
            ctx->pc = 0x1C56D4u;
            goto label_1c56d4;
        }
    }
    ctx->pc = 0x1C5664u;
    // 0x1c5664: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1C5664u;
    SET_GPR_U32(ctx, 31, 0x1C566Cu);
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1C5664u, 0x1C566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C566Cu;
label_1c566c:
    // 0x1c566c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5670: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C5670u;
    {
        const bool branch_taken_0x1c5670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5670u;
        // 0x1c5674: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5670) {
            ctx->pc = 0x1C56BCu;
            goto label_1c56bc;
        }
    }
    ctx->pc = 0x1C5678u;
label_1c5678:
    // 0x1c5678: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1c5678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c567c: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x1c567cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x1c5680: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1c5680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1c5684: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c5684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c5688: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1c5688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1c568c: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x1c568cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5690: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1c5690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5694: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5698: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c569c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x1c569cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c56a0: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x1c56a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1c56a4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1c56a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1c56a8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1c56a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1c56ac: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x1c56acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1c56b0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1c56b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1c56b4: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1C56B4u;
    SET_GPR_U32(ctx, 31, 0x1C56BCu);
    ctx->pc = 0x1C56B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56B4u;
    // 0x1c56b8: 0xe4600034  swc1        $f0, 0x34($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1C56B4u, 0x1C56BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56BCu;
label_1c56bc:
    // 0x1c56bc: 0x0  nop
    ctx->pc = 0x1c56bcu;
    // NOP
    // 0x1c56c0: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1C56C0u;
    SET_GPR_U32(ctx, 31, 0x1C56C8u);
    ctx->pc = 0x1C56C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56C0u;
    // 0x1c56c4: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1C56C0u, 0x1C56C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56C8u;
label_1c56c8:
    // 0x1c56c8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x1c56c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1c56cc: 0x1462ffea  bne         $v1, $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1C56CCu;
    {
        const bool branch_taken_0x1c56cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c56cc) {
            ctx->pc = 0x1C5678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5678;
        }
    }
    ctx->pc = 0x1C56D4u;
label_1c56d4:
    // 0x1c56d4: 0x0  nop
    ctx->pc = 0x1c56d4u;
    // NOP
    // 0x1c56d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c56d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c56dc: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1c56dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c56e0: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1C56E0u;
    {
        const bool branch_taken_0x1c56e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C56E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56E0u;
        // 0x1c56e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56e0) {
            ctx->pc = 0x1C564Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c564c;
        }
    }
    ctx->pc = 0x1C56E8u;
label_1c56e8:
    // 0x1c56e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c56e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c56ec: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1c56ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1c56f0: 0x24a51f20  addiu       $a1, $a1, 0x1F20
    ctx->pc = 0x1c56f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7968));
    // 0x1c56f4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C56F4u;
    SET_GPR_U32(ctx, 31, 0x1C56FCu);
    ctx->pc = 0x1C56F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56F4u;
    // 0x1c56f8: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C56F4u, 0x1C56FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56FCu;
label_1c56fc:
    // 0x1c56fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c56fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5700: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1C5700u;
    SET_GPR_U32(ctx, 31, 0x1C5708u);
    ctx->pc = 0x1C5704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5700u;
    // 0x1c5704: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1C5700u, 0x1C5708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5708u;
label_1c5708:
    // 0x1c5708: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c5708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c570c: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1c570cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1c5710: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C5710u;
    SET_GPR_U32(ctx, 31, 0x1C5718u);
    ctx->pc = 0x1C5714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5710u;
    // 0x1c5714: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C5710u, 0x1C5718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5718u;
label_1c5718:
    // 0x1c5718: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c5718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c571c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c571cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c5720:
    // 0x1c5720: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C5720u;
    SET_GPR_U32(ctx, 31, 0x1C5728u);
    ctx->pc = 0x1C5724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5720u;
    // 0x1c5724: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C5720u, 0x1C5728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5728u;
label_1c5728:
    // 0x1c5728: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c5728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c572c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c572cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5730: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C5730u;
    SET_GPR_U32(ctx, 31, 0x1C5738u);
    ctx->pc = 0x1C5734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5730u;
    // 0x1c5734: 0x24a55940  addiu       $a1, $a1, 0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C5730u, 0x1C5738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5738u;
label_1c5738:
    // 0x1c5738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c573c: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C573Cu;
    SET_GPR_U32(ctx, 31, 0x1C5744u);
    ctx->pc = 0x1C5740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C573Cu;
    // 0x1c5740: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C573Cu, 0x1C5744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5744u;
label_1c5744:
    // 0x1c5744: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C5744u;
    SET_GPR_U32(ctx, 31, 0x1C574Cu);
    ctx->pc = 0x1C5748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5744u;
    // 0x1c5748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C5744u, 0x1C574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C574Cu;
label_1c574c:
    // 0x1c574c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c574cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c5750: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x1c5750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c5754: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C5754u;
    {
        const bool branch_taken_0x1c5754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5754u;
        // 0x1c5758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5754) {
            ctx->pc = 0x1C5720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5720;
        }
    }
    ctx->pc = 0x1C575Cu;
    // 0x1c575c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c575cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5760: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C5760u;
    SET_GPR_U32(ctx, 31, 0x1C5768u);
    ctx->pc = 0x1C5764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5760u;
    // 0x1c5764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C5760u, 0x1C5768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5768u;
label_1c5768:
    // 0x1c5768: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C5768u;
    SET_GPR_U32(ctx, 31, 0x1C5770u);
    ctx->pc = 0x1C576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5768u;
    // 0x1c576c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C5768u, 0x1C5770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5770u;
label_1c5770:
    // 0x1c5770: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c5770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5774: 0xc0718e4  jal         func_1C6390
    ctx->pc = 0x1C5774u;
    SET_GPR_U32(ctx, 31, 0x1C577Cu);
    ctx->pc = 0x1C5778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5774u;
    // 0x1c5778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6390u, 0x1C5774u, 0x1C577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C577Cu;
label_1c577c:
    // 0x1c577c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5780: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5784: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1c5784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1c5788: 0xac440064  sw          $a0, 0x64($v0)
    ctx->pc = 0x1c5788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
    // 0x1c578c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5790: 0xac440068  sw          $a0, 0x68($v0)
    ctx->pc = 0x1c5790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 4));
    // 0x1c5794: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c5794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5798: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x1c5798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x1c579c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c57a0: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1c57a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1c57a4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c57a8: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x1c57a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
    // 0x1c57ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c57acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c57b0: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x1c57b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x1c57b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c57b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c57b8: 0xa040006d  sb          $zero, 0x6D($v0)
    ctx->pc = 0x1c57b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 109), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c57bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c57bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c57c0: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1c57c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1c57c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c57c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c57c8: 0xc06d2f4  jal         func_1B4BD0
    ctx->pc = 0x1C57C8u;
    SET_GPR_U32(ctx, 31, 0x1C57D0u);
    ctx->pc = 0x1C57CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57C8u;
    // 0x1c57cc: 0xa040006c  sb          $zero, 0x6C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 108), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4BD0u, 0x1C57C8u, 0x1C57D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57D0u;
label_1c57d0:
    // 0x1c57d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c57d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c57d4: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1C57D4u;
    {
        const bool branch_taken_0x1c57d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C57D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57D4u;
        // 0x1c57d8: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57d4) {
            ctx->pc = 0x1C5898u;
            goto label_1c5898;
        }
    }
    ctx->pc = 0x1C57DCu;
    // 0x1c57dc: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c57dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c57e0: 0x24a51f40  addiu       $a1, $a1, 0x1F40
    ctx->pc = 0x1c57e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8000));
    // 0x1c57e4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C57E4u;
    SET_GPR_U32(ctx, 31, 0x1C57ECu);
    ctx->pc = 0x1C57E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57E4u;
    // 0x1c57e8: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C57E4u, 0x1C57ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57ECu;
label_1c57ec:
    // 0x1c57ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c57ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57f0: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1C57F0u;
    SET_GPR_U32(ctx, 31, 0x1C57F8u);
    ctx->pc = 0x1C57F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57F0u;
    // 0x1c57f4: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1C57F0u, 0x1C57F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57F8u;
label_1c57f8:
    // 0x1c57f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c57f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57fc: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c57fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c5800: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C5800u;
    SET_GPR_U32(ctx, 31, 0x1C5808u);
    ctx->pc = 0x1C5804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5800u;
    // 0x1c5804: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C5800u, 0x1C5808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5808u;
label_1c5808:
    // 0x1c5808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c580c: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C580Cu;
    SET_GPR_U32(ctx, 31, 0x1C5814u);
    ctx->pc = 0x1C5810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C580Cu;
    // 0x1c5810: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C580Cu, 0x1C5814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5814u;
label_1c5814:
    // 0x1c5814: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c5814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c5818: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c5818u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c581c: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1c581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1c5820: 0x24a51f20  addiu       $a1, $a1, 0x1F20
    ctx->pc = 0x1c5820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7968));
    // 0x1c5824: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C5824u;
    SET_GPR_U32(ctx, 31, 0x1C582Cu);
    ctx->pc = 0x1C5828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5824u;
    // 0x1c5828: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C5824u, 0x1C582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C582Cu;
label_1c582c:
    // 0x1c582c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c582cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5830: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1C5830u;
    SET_GPR_U32(ctx, 31, 0x1C5838u);
    ctx->pc = 0x1C5834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5830u;
    // 0x1c5834: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1C5830u, 0x1C5838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5838u;
label_1c5838:
    // 0x1c5838: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c5838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c583c: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1c583cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1c5840: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C5840u;
    SET_GPR_U32(ctx, 31, 0x1C5848u);
    ctx->pc = 0x1C5844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5840u;
    // 0x1c5844: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C5840u, 0x1C5848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5848u;
label_1c5848:
    // 0x1c5848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c584c: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C584Cu;
    SET_GPR_U32(ctx, 31, 0x1C5854u);
    ctx->pc = 0x1C5850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C584Cu;
    // 0x1c5850: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C584Cu, 0x1C5854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5854u;
label_1c5854:
    // 0x1c5854: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c5854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c5858: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c5858u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c585c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c585cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c5860: 0x24a51f60  addiu       $a1, $a1, 0x1F60
    ctx->pc = 0x1c5860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8032));
    // 0x1c5864: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C5864u;
    SET_GPR_U32(ctx, 31, 0x1C586Cu);
    ctx->pc = 0x1C5868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5864u;
    // 0x1c5868: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C5864u, 0x1C586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C586Cu;
label_1c586c:
    // 0x1c586c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c586cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5870: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1C5870u;
    SET_GPR_U32(ctx, 31, 0x1C5878u);
    ctx->pc = 0x1C5874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5870u;
    // 0x1c5874: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1C5870u, 0x1C5878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5878u;
label_1c5878:
    // 0x1c5878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c587c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c5880: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C5880u;
    SET_GPR_U32(ctx, 31, 0x1C5888u);
    ctx->pc = 0x1C5884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5880u;
    // 0x1c5884: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C5880u, 0x1C5888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5888u;
label_1c5888:
    // 0x1c5888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c588c: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C588Cu;
    SET_GPR_U32(ctx, 31, 0x1C5894u);
    ctx->pc = 0x1C5890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C588Cu;
    // 0x1c5890: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C588Cu, 0x1C5894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5894u;
label_1c5894:
    // 0x1c5894: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c5894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
label_1c5898:
    // 0x1c5898: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c5898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c589c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c589cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c58a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c58a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c58a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c58a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c58a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c58a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c58ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c58acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c58b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C58B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58B0u;
        // 0x1c58b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C58B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C58B8u;
}
