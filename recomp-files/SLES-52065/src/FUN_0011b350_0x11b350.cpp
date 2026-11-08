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

// Function: FUN_0011b350
// Address: 0x11b350 - 0x11b4a8
void FUN_0011b350_0x11b350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011b350_0x11b350");
#endif

    switch (ctx->pc) {
        case 0x11b388u: goto label_11b388;
        default: break;
    }

    ctx->pc = 0x11b350u;

    // 0x11b350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11b354: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11b354u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11b358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11b35c: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x11b35cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b360: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11b360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11b364: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x11b364u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b368: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11b368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b36c: 0x240e003a  addiu       $t6, $zero, 0x3A
    ctx->pc = 0x11b36cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x11b370: 0x240f005c  addiu       $t7, $zero, 0x5C
    ctx->pc = 0x11b370u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x11b374: 0x240c002c  addiu       $t4, $zero, 0x2C
    ctx->pc = 0x11b374u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x11b378: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x11b378u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11b37c: 0x240a002e  addiu       $t2, $zero, 0x2E
    ctx->pc = 0x11b37cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x11b380: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x11b380u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b384: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x11b384u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_11b388:
    // 0x11b388: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x11b388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11b38c: 0x81300000  lb          $s0, 0x0($t1)
    ctx->pc = 0x11b38cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11b390: 0x1300000a  beqz        $t8, . + 4 + (0xA << 2)
    ctx->pc = 0x11B390u;
    {
        const bool branch_taken_0x11b390 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B390u;
        // 0x11b394: 0xa1100000  sb          $s0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b390) {
            ctx->pc = 0x11B3BCu;
            goto label_11b3bc;
        }
    }
    ctx->pc = 0x11B398u;
    // 0x11b398: 0x108e3c  dsll32      $s1, $s0, 24
    ctx->pc = 0x11b398u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) << (32 + 24));
    // 0x11b39c: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x11b39cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x11b3a0: 0x2a290061  slti        $t1, $s1, 0x61
    ctx->pc = 0x11b3a0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x11b3a4: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B3A4u;
    {
        const bool branch_taken_0x11b3a4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3A4u;
        // 0x11b3a8: 0x2a21007b  slti        $at, $s1, 0x7B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)123) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3a4) {
            ctx->pc = 0x11B3BCu;
            goto label_11b3bc;
        }
    }
    ctx->pc = 0x11B3ACu;
    // 0x11b3ac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B3ACu;
    {
        const bool branch_taken_0x11b3ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3ACu;
        // 0x11b3b0: 0x2629ffe0  addiu       $t1, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3ac) {
            ctx->pc = 0x11B3BCu;
            goto label_11b3bc;
        }
    }
    ctx->pc = 0x11B3B4u;
    // 0x11b3b4: 0x9863c  dsll32      $s0, $t1, 24
    ctx->pc = 0x11b3b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) << (32 + 24));
    // 0x11b3b8: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x11b3b8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_11b3bc:
    // 0x11b3bc: 0x0  nop
    ctx->pc = 0x11b3bcu;
    // NOP
    // 0x11b3c0: 0x10863c  dsll32      $s0, $s0, 24
    ctx->pc = 0x11b3c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 24));
    // 0x11b3c4: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x11b3c4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x11b3c8: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B3C8u;
    {
        const bool branch_taken_0x11b3c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x11b3c8) {
            ctx->pc = 0x11B3ECu;
            goto label_11b3ec;
        }
    }
    ctx->pc = 0x11B3D0u;
    // 0x11b3d0: 0x120e0006  beq         $s0, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B3D0u;
    {
        const bool branch_taken_0x11b3d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        if (branch_taken_0x11b3d0) {
            ctx->pc = 0x11B3ECu;
            goto label_11b3ec;
        }
    }
    ctx->pc = 0x11B3D8u;
    // 0x11b3d8: 0x8c890534  lw          $t1, 0x534($a0)
    ctx->pc = 0x11b3d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1332)));
    // 0x11b3dc: 0x152d0008  bne         $t1, $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B3DCu;
    {
        const bool branch_taken_0x11b3dc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 13));
        if (branch_taken_0x11b3dc) {
            ctx->pc = 0x11B400u;
            goto label_11b400;
        }
    }
    ctx->pc = 0x11B3E4u;
    // 0x11b3e4: 0x160c0006  bne         $s0, $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B3E4u;
    {
        const bool branch_taken_0x11b3e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 12));
        if (branch_taken_0x11b3e4) {
            ctx->pc = 0x11B400u;
            goto label_11b400;
        }
    }
    ctx->pc = 0x11B3ECu;
label_11b3ec:
    // 0x11b3ec: 0x0  nop
    ctx->pc = 0x11b3ecu;
    // NOP
    // 0x11b3f0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x11b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b3f4: 0x160c0002  bne         $s0, $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x11B3F4u;
    {
        const bool branch_taken_0x11b3f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 12));
        ctx->pc = 0x11B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3F4u;
        // 0x11b3f8: 0x24180001  addiu       $t8, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3f4) {
            ctx->pc = 0x11B400u;
            goto label_11b400;
        }
    }
    ctx->pc = 0x11B3FCu;
    // 0x11b3fc: 0x300c82d  daddu       $t9, $t8, $zero
    ctx->pc = 0x11b3fcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_11b400:
    // 0x11b400: 0x8c910534  lw          $s1, 0x534($a0)
    ctx->pc = 0x11b400u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1332)));
    // 0x11b404: 0x162d0003  bne         $s1, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B404u;
    {
        const bool branch_taken_0x11b404 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 13));
        if (branch_taken_0x11b404) {
            ctx->pc = 0x11B414u;
            goto label_11b414;
        }
    }
    ctx->pc = 0x11B40Cu;
    // 0x11b40c: 0x172b0008  bne         $t9, $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B40Cu;
    {
        const bool branch_taken_0x11b40c = (GPR_U64(ctx, 25) != GPR_U64(ctx, 11));
        if (branch_taken_0x11b40c) {
            ctx->pc = 0x11B430u;
            goto label_11b430;
        }
    }
    ctx->pc = 0x11B414u;
label_11b414:
    // 0x11b414: 0x0  nop
    ctx->pc = 0x11b414u;
    // NOP
    // 0x11b418: 0x160a0005  bne         $s0, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B418u;
    {
        const bool branch_taken_0x11b418 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 10));
        if (branch_taken_0x11b418) {
            ctx->pc = 0x11B430u;
            goto label_11b430;
        }
    }
    ctx->pc = 0x11B420u;
    // 0x11b420: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x11b420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11b424: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11b424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b428: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x11B428u;
    {
        const bool branch_taken_0x11b428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B428u;
        // 0x11b42c: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b428) {
            ctx->pc = 0x11B498u;
            goto label_11b498;
        }
    }
    ctx->pc = 0x11B430u;
label_11b430:
    // 0x11b430: 0x81090000  lb          $t1, 0x0($t0)
    ctx->pc = 0x11b430u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11b434: 0x15200014  bnez        $t1, . + 4 + (0x14 << 2)
    ctx->pc = 0x11B434u;
    {
        const bool branch_taken_0x11b434 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b434) {
            ctx->pc = 0x11B488u;
            goto label_11b488;
        }
    }
    ctx->pc = 0x11B43Cu;
    // 0x11b43c: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x11b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11b440: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x11b440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x11b444: 0x8084ffff  lb          $a0, -0x1($a0)
    ctx->pc = 0x11b444u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x11b448: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x11B448u;
    {
        const bool branch_taken_0x11b448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x11B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B448u;
        // 0x11b44c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b448) {
            ctx->pc = 0x11B498u;
            goto label_11b498;
        }
    }
    ctx->pc = 0x11B450u;
    // 0x11b450: 0x14e40005  bne         $a3, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B450u;
    {
        const bool branch_taken_0x11b450 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x11b450) {
            ctx->pc = 0x11B468u;
            goto label_11b468;
        }
    }
    ctx->pc = 0x11B458u;
    // 0x11b458: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x11b458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11b45c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11b45cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b460: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11B460u;
    {
        const bool branch_taken_0x11b460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B460u;
        // 0x11b464: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b460) {
            ctx->pc = 0x11B498u;
            goto label_11b498;
        }
    }
    ctx->pc = 0x11B468u;
label_11b468:
    // 0x11b468: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11b468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11b46c: 0x1223000a  beq         $s1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11B46Cu;
    {
        const bool branch_taken_0x11b46c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x11b46c) {
            ctx->pc = 0x11B498u;
            goto label_11b498;
        }
    }
    ctx->pc = 0x11B474u;
    // 0x11b474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b478: 0xa1050000  sb          $a1, 0x0($t0)
    ctx->pc = 0x11b478u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x11b47c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x11b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11b480: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11B480u;
    {
        const bool branch_taken_0x11b480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B480u;
        // 0x11b484: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b480) {
            ctx->pc = 0x11B498u;
            goto label_11b498;
        }
    }
    ctx->pc = 0x11B488u;
label_11b488:
    // 0x11b488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b48c: 0x28480160  slti        $t0, $v0, 0x160
    ctx->pc = 0x11b48cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)352) ? 1 : 0);
    // 0x11b490: 0x1500ffbd  bnez        $t0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x11B490u;
    {
        const bool branch_taken_0x11b490 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B490u;
        // 0x11b494: 0xa24821  addu        $t1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b490) {
            ctx->pc = 0x11B388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b388;
        }
    }
    ctx->pc = 0x11B498u;
label_11b498:
    // 0x11b498: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11b498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b49c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11b49cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4A0u;
        // 0x11b4a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B4A8u;
}
