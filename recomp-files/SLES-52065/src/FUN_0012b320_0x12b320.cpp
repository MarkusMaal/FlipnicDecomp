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

// Function: FUN_0012b320
// Address: 0x12b320 - 0x12b4b8
void FUN_0012b320_0x12b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012b320_0x12b320");
#endif

    switch (ctx->pc) {
        case 0x12b320u: goto label_12b320;
        case 0x12b324u: goto label_12b324;
        case 0x12b328u: goto label_12b328;
        case 0x12b32cu: goto label_12b32c;
        case 0x12b330u: goto label_12b330;
        case 0x12b334u: goto label_12b334;
        case 0x12b338u: goto label_12b338;
        case 0x12b33cu: goto label_12b33c;
        case 0x12b340u: goto label_12b340;
        case 0x12b344u: goto label_12b344;
        case 0x12b348u: goto label_12b348;
        case 0x12b34cu: goto label_12b34c;
        case 0x12b350u: goto label_12b350;
        case 0x12b354u: goto label_12b354;
        case 0x12b358u: goto label_12b358;
        case 0x12b35cu: goto label_12b35c;
        case 0x12b360u: goto label_12b360;
        case 0x12b364u: goto label_12b364;
        case 0x12b368u: goto label_12b368;
        case 0x12b36cu: goto label_12b36c;
        case 0x12b370u: goto label_12b370;
        case 0x12b374u: goto label_12b374;
        case 0x12b378u: goto label_12b378;
        case 0x12b37cu: goto label_12b37c;
        case 0x12b380u: goto label_12b380;
        case 0x12b384u: goto label_12b384;
        case 0x12b388u: goto label_12b388;
        case 0x12b38cu: goto label_12b38c;
        case 0x12b390u: goto label_12b390;
        case 0x12b394u: goto label_12b394;
        case 0x12b398u: goto label_12b398;
        case 0x12b39cu: goto label_12b39c;
        case 0x12b3a0u: goto label_12b3a0;
        case 0x12b3a4u: goto label_12b3a4;
        case 0x12b3a8u: goto label_12b3a8;
        case 0x12b3acu: goto label_12b3ac;
        case 0x12b3b0u: goto label_12b3b0;
        case 0x12b3b4u: goto label_12b3b4;
        case 0x12b3b8u: goto label_12b3b8;
        case 0x12b3bcu: goto label_12b3bc;
        case 0x12b3c0u: goto label_12b3c0;
        case 0x12b3c4u: goto label_12b3c4;
        case 0x12b3c8u: goto label_12b3c8;
        case 0x12b3ccu: goto label_12b3cc;
        case 0x12b3d0u: goto label_12b3d0;
        case 0x12b3d4u: goto label_12b3d4;
        case 0x12b3d8u: goto label_12b3d8;
        case 0x12b3dcu: goto label_12b3dc;
        case 0x12b3e0u: goto label_12b3e0;
        case 0x12b3e4u: goto label_12b3e4;
        case 0x12b3e8u: goto label_12b3e8;
        case 0x12b3ecu: goto label_12b3ec;
        case 0x12b3f0u: goto label_12b3f0;
        case 0x12b3f4u: goto label_12b3f4;
        case 0x12b3f8u: goto label_12b3f8;
        case 0x12b3fcu: goto label_12b3fc;
        case 0x12b400u: goto label_12b400;
        case 0x12b404u: goto label_12b404;
        case 0x12b408u: goto label_12b408;
        case 0x12b40cu: goto label_12b40c;
        case 0x12b410u: goto label_12b410;
        case 0x12b414u: goto label_12b414;
        case 0x12b418u: goto label_12b418;
        case 0x12b41cu: goto label_12b41c;
        case 0x12b420u: goto label_12b420;
        case 0x12b424u: goto label_12b424;
        case 0x12b428u: goto label_12b428;
        case 0x12b42cu: goto label_12b42c;
        case 0x12b430u: goto label_12b430;
        case 0x12b434u: goto label_12b434;
        case 0x12b438u: goto label_12b438;
        case 0x12b43cu: goto label_12b43c;
        case 0x12b440u: goto label_12b440;
        case 0x12b444u: goto label_12b444;
        case 0x12b448u: goto label_12b448;
        case 0x12b44cu: goto label_12b44c;
        case 0x12b450u: goto label_12b450;
        case 0x12b454u: goto label_12b454;
        case 0x12b458u: goto label_12b458;
        case 0x12b45cu: goto label_12b45c;
        case 0x12b460u: goto label_12b460;
        case 0x12b464u: goto label_12b464;
        case 0x12b468u: goto label_12b468;
        case 0x12b46cu: goto label_12b46c;
        case 0x12b470u: goto label_12b470;
        case 0x12b474u: goto label_12b474;
        case 0x12b478u: goto label_12b478;
        case 0x12b47cu: goto label_12b47c;
        case 0x12b480u: goto label_12b480;
        case 0x12b484u: goto label_12b484;
        case 0x12b488u: goto label_12b488;
        case 0x12b48cu: goto label_12b48c;
        case 0x12b490u: goto label_12b490;
        case 0x12b494u: goto label_12b494;
        case 0x12b498u: goto label_12b498;
        case 0x12b49cu: goto label_12b49c;
        case 0x12b4a0u: goto label_12b4a0;
        case 0x12b4a4u: goto label_12b4a4;
        case 0x12b4a8u: goto label_12b4a8;
        case 0x12b4acu: goto label_12b4ac;
        case 0x12b4b0u: goto label_12b4b0;
        case 0x12b4b4u: goto label_12b4b4;
        default: break;
    }

    ctx->pc = 0x12b320u;

label_12b320:
    // 0x12b320: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12b320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_12b324:
    // 0x12b324: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x12b324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_12b328:
    // 0x12b328: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12b328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_12b32c:
    // 0x12b32c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12b32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_12b330:
    // 0x12b330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12b330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12b334:
    // 0x12b334: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12b334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12b338:
    // 0x12b338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12b338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12b33c:
    // 0x12b33c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12b33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b340:
    // 0x12b340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12b344:
    // 0x12b344: 0xc07fe6c  jal         func_1FF9B0
label_12b348:
    if (ctx->pc == 0x12B348u) {
        ctx->pc = 0x12B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B344u;
        // 0x12b348: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B34Cu;
        goto label_12b34c;
    }
    ctx->pc = 0x12B344u;
    SET_GPR_U32(ctx, 31, 0x12B34Cu);
    ctx->pc = 0x12B348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B344u;
    // 0x12b348: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x12B344u, 0x12B34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B34Cu;
label_12b34c:
    // 0x12b34c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x12b34cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12b350:
    // 0x12b350: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12b350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_12b354:
    // 0x12b354: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12b354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12b358:
    // 0x12b358: 0x24a5ec50  addiu       $a1, $a1, -0x13B0
    ctx->pc = 0x12b358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962256));
label_12b35c:
    // 0x12b35c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x12b35cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_12b360:
    // 0x12b360: 0x320f809  jalr        $t9
label_12b364:
    if (ctx->pc == 0x12B364u) {
        ctx->pc = 0x12B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B360u;
        // 0x12b364: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B368u;
        goto label_12b368;
    }
    ctx->pc = 0x12B360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B368u);
        ctx->pc = 0x12B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B360u;
        // 0x12b364: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B360u, 0x12B368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B368u;
label_12b368:
    // 0x12b368: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12b368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b36c:
    // 0x12b36c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x12b36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12b370:
    // 0x12b370: 0xc04c6f0  jal         func_131BC0
label_12b374:
    if (ctx->pc == 0x12B374u) {
        ctx->pc = 0x12B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B370u;
        // 0x12b374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B378u;
        goto label_12b378;
    }
    ctx->pc = 0x12B370u;
    SET_GPR_U32(ctx, 31, 0x12B378u);
    ctx->pc = 0x12B374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B370u;
    // 0x12b374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BC0u, 0x12B370u, 0x12B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B378u;
label_12b378:
    // 0x12b378: 0xc0401bc  jal         func_1006F0
label_12b37c:
    if (ctx->pc == 0x12B37Cu) {
        ctx->pc = 0x12B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B378u;
        // 0x12b37c: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B380u;
        goto label_12b380;
    }
    ctx->pc = 0x12B378u;
    SET_GPR_U32(ctx, 31, 0x12B380u);
    ctx->pc = 0x12B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B378u;
    // 0x12b37c: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x12B378u, 0x12B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B380u;
label_12b380:
    // 0x12b380: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12b384:
    if (ctx->pc == 0x12B384u) {
        ctx->pc = 0x12B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B380u;
        // 0x12b384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B388u;
        goto label_12b388;
    }
    ctx->pc = 0x12B380u;
    {
        const bool branch_taken_0x12b380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B380u;
        // 0x12b384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b380) {
            ctx->pc = 0x12B390u;
            goto label_12b390;
        }
    }
    ctx->pc = 0x12B388u;
label_12b388:
    // 0x12b388: 0xc04a93c  jal         func_12A4F0
label_12b38c:
    if (ctx->pc == 0x12B38Cu) {
        ctx->pc = 0x12B390u;
        goto label_12b390;
    }
    ctx->pc = 0x12B388u;
    SET_GPR_U32(ctx, 31, 0x12B390u);
    ctx->pc = 0x12A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A4F0u, 0x12B388u, 0x12B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B390u;
label_12b390:
    // 0x12b390: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x12b390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_12b394:
    // 0x12b394: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12b394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b398:
    // 0x12b398: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x12b398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12b39c:
    // 0x12b39c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x12b39cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_12b3a0:
    // 0x12b3a0: 0x320f809  jalr        $t9
label_12b3a4:
    if (ctx->pc == 0x12B3A4u) {
        ctx->pc = 0x12B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3A0u;
        // 0x12b3a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3A8u;
        goto label_12b3a8;
    }
    ctx->pc = 0x12B3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B3A8u);
        ctx->pc = 0x12B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3A0u;
        // 0x12b3a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B3A0u, 0x12B3A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B3A8u;
label_12b3a8:
    // 0x12b3a8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x12b3a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12b3ac:
    // 0x12b3ac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12b3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_12b3b0:
    // 0x12b3b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12b3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12b3b4:
    // 0x12b3b4: 0x24a5ec58  addiu       $a1, $a1, -0x13A8
    ctx->pc = 0x12b3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962264));
label_12b3b8:
    // 0x12b3b8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x12b3b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_12b3bc:
    // 0x12b3bc: 0x320f809  jalr        $t9
label_12b3c0:
    if (ctx->pc == 0x12B3C0u) {
        ctx->pc = 0x12B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3BCu;
        // 0x12b3c0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3C4u;
        goto label_12b3c4;
    }
    ctx->pc = 0x12B3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B3C4u);
        ctx->pc = 0x12B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3BCu;
        // 0x12b3c0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B3BCu, 0x12B3C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B3C4u;
label_12b3c4:
    // 0x12b3c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12b3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b3c8:
    // 0x12b3c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x12b3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12b3cc:
    // 0x12b3cc: 0xc04c6f0  jal         func_131BC0
label_12b3d0:
    if (ctx->pc == 0x12B3D0u) {
        ctx->pc = 0x12B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3CCu;
        // 0x12b3d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3D4u;
        goto label_12b3d4;
    }
    ctx->pc = 0x12B3CCu;
    SET_GPR_U32(ctx, 31, 0x12B3D4u);
    ctx->pc = 0x12B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3CCu;
    // 0x12b3d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BC0u, 0x12B3CCu, 0x12B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3D4u;
label_12b3d4:
    // 0x12b3d4: 0xc0401bc  jal         func_1006F0
label_12b3d8:
    if (ctx->pc == 0x12B3D8u) {
        ctx->pc = 0x12B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3D4u;
        // 0x12b3d8: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3DCu;
        goto label_12b3dc;
    }
    ctx->pc = 0x12B3D4u;
    SET_GPR_U32(ctx, 31, 0x12B3DCu);
    ctx->pc = 0x12B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B3D4u;
    // 0x12b3d8: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x12B3D4u, 0x12B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3DCu;
label_12b3dc:
    // 0x12b3dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12b3e0:
    if (ctx->pc == 0x12B3E0u) {
        ctx->pc = 0x12B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3DCu;
        // 0x12b3e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B3E4u;
        goto label_12b3e4;
    }
    ctx->pc = 0x12B3DCu;
    {
        const bool branch_taken_0x12b3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3DCu;
        // 0x12b3e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b3dc) {
            ctx->pc = 0x12B3ECu;
            goto label_12b3ec;
        }
    }
    ctx->pc = 0x12B3E4u;
label_12b3e4:
    // 0x12b3e4: 0xc04a93c  jal         func_12A4F0
label_12b3e8:
    if (ctx->pc == 0x12B3E8u) {
        ctx->pc = 0x12B3ECu;
        goto label_12b3ec;
    }
    ctx->pc = 0x12B3E4u;
    SET_GPR_U32(ctx, 31, 0x12B3ECu);
    ctx->pc = 0x12A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A4F0u, 0x12B3E4u, 0x12B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3ECu;
label_12b3ec:
    // 0x12b3ec: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x12b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_12b3f0:
    // 0x12b3f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12b3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b3f4:
    // 0x12b3f4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x12b3f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12b3f8:
    // 0x12b3f8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x12b3f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_12b3fc:
    // 0x12b3fc: 0x320f809  jalr        $t9
label_12b400:
    if (ctx->pc == 0x12B400u) {
        ctx->pc = 0x12B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3FCu;
        // 0x12b400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B404u;
        goto label_12b404;
    }
    ctx->pc = 0x12B3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B404u);
        ctx->pc = 0x12B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3FCu;
        // 0x12b400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B3FCu, 0x12B404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B404u;
label_12b404:
    // 0x12b404: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x12b404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_12b408:
    // 0x12b408: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12b408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_12b40c:
    // 0x12b40c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12b40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12b410:
    // 0x12b410: 0x24a5ec60  addiu       $a1, $a1, -0x13A0
    ctx->pc = 0x12b410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962272));
label_12b414:
    // 0x12b414: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x12b414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_12b418:
    // 0x12b418: 0x320f809  jalr        $t9
label_12b41c:
    if (ctx->pc == 0x12B41Cu) {
        ctx->pc = 0x12B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B418u;
        // 0x12b41c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B420u;
        goto label_12b420;
    }
    ctx->pc = 0x12B418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B420u);
        ctx->pc = 0x12B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B418u;
        // 0x12b41c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B418u, 0x12B420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B420u;
label_12b420:
    // 0x12b420: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12b420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b424:
    // 0x12b424: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x12b424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12b428:
    // 0x12b428: 0xc04c6f0  jal         func_131BC0
label_12b42c:
    if (ctx->pc == 0x12B42Cu) {
        ctx->pc = 0x12B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B428u;
        // 0x12b42c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B430u;
        goto label_12b430;
    }
    ctx->pc = 0x12B428u;
    SET_GPR_U32(ctx, 31, 0x12B430u);
    ctx->pc = 0x12B42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B428u;
    // 0x12b42c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BC0u, 0x12B428u, 0x12B430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B430u;
label_12b430:
    // 0x12b430: 0xc0401bc  jal         func_1006F0
label_12b434:
    if (ctx->pc == 0x12B434u) {
        ctx->pc = 0x12B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B430u;
        // 0x12b434: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B438u;
        goto label_12b438;
    }
    ctx->pc = 0x12B430u;
    SET_GPR_U32(ctx, 31, 0x12B438u);
    ctx->pc = 0x12B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B430u;
    // 0x12b434: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x12B430u, 0x12B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B438u;
label_12b438:
    // 0x12b438: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12b43c:
    if (ctx->pc == 0x12B43Cu) {
        ctx->pc = 0x12B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B438u;
        // 0x12b43c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B440u;
        goto label_12b440;
    }
    ctx->pc = 0x12B438u;
    {
        const bool branch_taken_0x12b438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B438u;
        // 0x12b43c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b438) {
            ctx->pc = 0x12B448u;
            goto label_12b448;
        }
    }
    ctx->pc = 0x12B440u;
label_12b440:
    // 0x12b440: 0xc04a93c  jal         func_12A4F0
label_12b444:
    if (ctx->pc == 0x12B444u) {
        ctx->pc = 0x12B448u;
        goto label_12b448;
    }
    ctx->pc = 0x12B440u;
    SET_GPR_U32(ctx, 31, 0x12B448u);
    ctx->pc = 0x12A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A4F0u, 0x12B440u, 0x12B448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B448u;
label_12b448:
    // 0x12b448: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x12b448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_12b44c:
    // 0x12b44c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12b44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b450:
    // 0x12b450: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x12b450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12b454:
    // 0x12b454: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x12b454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_12b458:
    // 0x12b458: 0x320f809  jalr        $t9
label_12b45c:
    if (ctx->pc == 0x12B45Cu) {
        ctx->pc = 0x12B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B458u;
        // 0x12b45c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B460u;
        goto label_12b460;
    }
    ctx->pc = 0x12B458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B460u);
        ctx->pc = 0x12B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B458u;
        // 0x12b45c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B458u, 0x12B460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B460u;
label_12b460:
    // 0x12b460: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12b460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_12b464:
    // 0x12b464: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_12b468:
    if (ctx->pc == 0x12B468u) {
        ctx->pc = 0x12B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B464u;
        // 0x12b468: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B46Cu;
        goto label_12b46c;
    }
    ctx->pc = 0x12B464u;
    {
        const bool branch_taken_0x12b464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B464u;
        // 0x12b468: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b464) {
            ctx->pc = 0x12B49Cu;
            goto label_12b49c;
        }
    }
    ctx->pc = 0x12B46Cu;
label_12b46c:
    // 0x12b46c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12b46cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b470:
    // 0x12b470: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x12b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_12b474:
    // 0x12b474: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x12b474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_12b478:
    // 0x12b478: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12b478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_12b47c:
    // 0x12b47c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12b47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12b480:
    // 0x12b480: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x12b480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_12b484:
    // 0x12b484: 0x320f809  jalr        $t9
label_12b488:
    if (ctx->pc == 0x12B488u) {
        ctx->pc = 0x12B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B484u;
        // 0x12b488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B48Cu;
        goto label_12b48c;
    }
    ctx->pc = 0x12B484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B48Cu);
        ctx->pc = 0x12B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B484u;
        // 0x12b488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B484u, 0x12B48Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B48Cu;
label_12b48c:
    // 0x12b48c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12b48cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12b490:
    // 0x12b490: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x12b490u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_12b494:
    // 0x12b494: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_12b498:
    if (ctx->pc == 0x12B498u) {
        ctx->pc = 0x12B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B494u;
        // 0x12b498: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B49Cu;
        goto label_12b49c;
    }
    ctx->pc = 0x12B494u;
    {
        const bool branch_taken_0x12b494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B494u;
        // 0x12b498: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b494) {
            ctx->pc = 0x12B470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b470;
        }
    }
    ctx->pc = 0x12B49Cu;
label_12b49c:
    // 0x12b49c: 0x0  nop
    ctx->pc = 0x12b49cu;
    // NOP
label_12b4a0:
    // 0x12b4a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12b4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12b4a4:
    // 0x12b4a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12b4a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12b4a8:
    // 0x12b4a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12b4a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12b4ac:
    // 0x12b4ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12b4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12b4b0:
    // 0x12b4b0: 0x3e00008  jr          $ra
label_12b4b4:
    if (ctx->pc == 0x12B4B4u) {
        ctx->pc = 0x12B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4B0u;
        // 0x12b4b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B4B8u;
        goto label_fallthrough_0x12b4b0;
    }
    ctx->pc = 0x12B4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4B0u;
        // 0x12b4b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12b4b0:
    ctx->pc = 0x12B4B8u;
}
