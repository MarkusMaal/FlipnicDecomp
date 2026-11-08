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

// Function: entry_001db35c
// Address: 0x1db35c - 0x1db634
void entry_001db35c_0x1db35c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db35c_0x1db35c");
#endif

    ctx->pc = 0x1db35cu;

    // 0x1db35c: 0x7c000b5  bltz        $fp, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1DB35Cu;
    {
        const bool branch_taken_0x1db35c = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x1DB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB35Cu;
        // 0x1db360: 0x1e10c0  sll         $v0, $fp, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db35c) {
            ctx->pc = 0x1DB634u;
            return;
        }
    }
    ctx->pc = 0x1DB364u;
    // 0x1db364: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1db364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1db368: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x1db368u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1db36c: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x1db36cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x1db370: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db374: 0x24637330  addiu       $v1, $v1, 0x7330
    ctx->pc = 0x1db374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1db378: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1db378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1db37c: 0x256b7344  addiu       $t3, $t3, 0x7344
    ctx->pc = 0x1db37cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 29508));
    // 0x1db380: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1db380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1db384: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1db384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1db388: 0x244a00b0  addiu       $t2, $v0, 0xB0
    ctx->pc = 0x1db388u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1db38c: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x1db38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1db390: 0x14b5821  addu        $t3, $t2, $t3
    ctx->pc = 0x1db390u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1db394: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1db394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1db398: 0xafab0058  sw          $t3, 0x58($sp)
    ctx->pc = 0x1db398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 11));
    // 0x1db39c: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x1db39cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1db3a0: 0xafab005c  sw          $t3, 0x5C($sp)
    ctx->pc = 0x1db3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 11));
    // 0x1db3a4: 0x2055821  addu        $t3, $s0, $a1
    ctx->pc = 0x1db3a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1db3a8: 0x244c0040  addiu       $t4, $v0, 0x40
    ctx->pc = 0x1db3a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1db3ac: 0xafab0060  sw          $t3, 0x60($sp)
    ctx->pc = 0x1db3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 11));
    // 0x1db3b0: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x1db3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1db3b4: 0x1845821  addu        $t3, $t4, $a0
    ctx->pc = 0x1db3b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1db3b8: 0xafab001c  sw          $t3, 0x1C($sp)
    ctx->pc = 0x1db3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 11));
    // 0x1db3bc: 0x2235821  addu        $t3, $s1, $v1
    ctx->pc = 0x1db3bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1db3c0: 0x244f0050  addiu       $t7, $v0, 0x50
    ctx->pc = 0x1db3c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1db3c4: 0xafab0024  sw          $t3, 0x24($sp)
    ctx->pc = 0x1db3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
    // 0x1db3c8: 0x244d0080  addiu       $t5, $v0, 0x80
    ctx->pc = 0x1db3c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1db3cc: 0x1e45821  addu        $t3, $t7, $a0
    ctx->pc = 0x1db3ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1db3d0: 0xafab0028  sw          $t3, 0x28($sp)
    ctx->pc = 0x1db3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
    // 0x1db3d4: 0x1a35821  addu        $t3, $t5, $v1
    ctx->pc = 0x1db3d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1db3d8: 0x244e00a0  addiu       $t6, $v0, 0xA0
    ctx->pc = 0x1db3d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1db3dc: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x1db3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1db3e0: 0xafab0030  sw          $t3, 0x30($sp)
    ctx->pc = 0x1db3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 11));
    // 0x1db3e4: 0x1c45821  addu        $t3, $t6, $a0
    ctx->pc = 0x1db3e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1db3e8: 0x24480090  addiu       $t0, $v0, 0x90
    ctx->pc = 0x1db3e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1db3ec: 0xafab0038  sw          $t3, 0x38($sp)
    ctx->pc = 0x1db3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 11));
    // 0x1db3f0: 0x24550060  addiu       $s5, $v0, 0x60
    ctx->pc = 0x1db3f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1db3f4: 0x1075821  addu        $t3, $t0, $a3
    ctx->pc = 0x1db3f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1db3f8: 0xafab003c  sw          $t3, 0x3C($sp)
    ctx->pc = 0x1db3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 11));
    // 0x1db3fc: 0x2a45821  addu        $t3, $s5, $a0
    ctx->pc = 0x1db3fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1db400: 0x24530070  addiu       $s3, $v0, 0x70
    ctx->pc = 0x1db400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1db404: 0xafab0040  sw          $t3, 0x40($sp)
    ctx->pc = 0x1db404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 11));
    // 0x1db408: 0x245200d0  addiu       $s2, $v0, 0xD0
    ctx->pc = 0x1db408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1db40c: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x1db40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1db410: 0x2635821  addu        $t3, $s3, $v1
    ctx->pc = 0x1db410u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1db414: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x1db414u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db418: 0xafab0044  sw          $t3, 0x44($sp)
    ctx->pc = 0x1db418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 11));
    // 0x1db41c: 0x2465821  addu        $t3, $s2, $a2
    ctx->pc = 0x1db41cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1db420: 0xafab004c  sw          $t3, 0x4C($sp)
    ctx->pc = 0x1db420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 11));
    // 0x1db424: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x1db424u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db428: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x1db428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x1db42c: 0x455821  addu        $t3, $v0, $a1
    ctx->pc = 0x1db42cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1db430: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x1db430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x1db434: 0x2075821  addu        $t3, $s0, $a3
    ctx->pc = 0x1db434u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1db438: 0xafab000c  sw          $t3, 0xC($sp)
    ctx->pc = 0x1db438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x1db43c: 0x1045821  addu        $t3, $t0, $a0
    ctx->pc = 0x1db43cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1db440: 0xafab0034  sw          $t3, 0x34($sp)
    ctx->pc = 0x1db440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 11));
    // 0x1db444: 0x2275821  addu        $t3, $s1, $a3
    ctx->pc = 0x1db444u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1db448: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x1db448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x1db44c: 0x1855821  addu        $t3, $t4, $a1
    ctx->pc = 0x1db44cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1db450: 0xafab0014  sw          $t3, 0x14($sp)
    ctx->pc = 0x1db450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 11));
    // 0x1db454: 0x1e35821  addu        $t3, $t7, $v1
    ctx->pc = 0x1db454u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x1db458: 0x183c021  addu        $t8, $t4, $v1
    ctx->pc = 0x1db458u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1db45c: 0x1876021  addu        $t4, $t4, $a3
    ctx->pc = 0x1db45cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x1db460: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x1db460u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1db464: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1db464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1db468: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1db468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x1db46c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1db46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1db470: 0xafab0018  sw          $t3, 0x18($sp)
    ctx->pc = 0x1db470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 11));
    // 0x1db474: 0x2655821  addu        $t3, $s3, $a1
    ctx->pc = 0x1db474u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1db478: 0x47c821  addu        $t9, $v0, $a3
    ctx->pc = 0x1db478u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1db47c: 0xafab0020  sw          $t3, 0x20($sp)
    ctx->pc = 0x1db47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 11));
    // 0x1db480: 0x24637344  addiu       $v1, $v1, 0x7344
    ctx->pc = 0x1db480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29508));
    // 0x1db484: 0x320582d  daddu       $t3, $t9, $zero
    ctx->pc = 0x1db484u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db488: 0xafab002c  sw          $t3, 0x2C($sp)
    ctx->pc = 0x1db488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 11));
    // 0x1db48c: 0x1055821  addu        $t3, $t0, $a1
    ctx->pc = 0x1db48cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1db490: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1db490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1db494: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x1db494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1db498: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x1db498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x1db49c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1db49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1db4a0: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1db4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1db4a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1db4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1db4a8: 0x224a021  addu        $s4, $s1, $a0
    ctx->pc = 0x1db4a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1db4ac: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1db4acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1db4b0: 0x1e5b021  addu        $s6, $t7, $a1
    ctx->pc = 0x1db4b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x1db4b4: 0x1e77821  addu        $t7, $t7, $a3
    ctx->pc = 0x1db4b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x1db4b8: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1db4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1db4bc: 0x3c090022  lui         $t1, 0x22
    ctx->pc = 0x1db4bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)34 << 16));
    // 0x1db4c0: 0x2529a000  addiu       $t1, $t1, -0x6000
    ctx->pc = 0x1db4c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942720));
    // 0x1db4c4: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x1db4c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1db4c8: 0x2463a03c  addiu       $v1, $v1, -0x5FC4
    ctx->pc = 0x1db4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942780));
    // 0x1db4cc: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x1db4ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x1db4d0: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x1db4d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x1db4d4: 0xafaa0050  sw          $t2, 0x50($sp)
    ctx->pc = 0x1db4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 10));
    // 0x1db4d8: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x1db4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x1db4dc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1db4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db4e0: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x1db4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x1db4e4: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1db4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1db4e8: 0xada90000  sw          $t1, 0x0($t5)
    ctx->pc = 0x1db4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
    // 0x1db4ec: 0x240a007f  addiu       $t2, $zero, 0x7F
    ctx->pc = 0x1db4ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1db4f0: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x1db4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x1db4f4: 0x2679821  addu        $s3, $s3, $a3
    ctx->pc = 0x1db4f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1db4f8: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x1db4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x1db4fc: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1db4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1db500: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x1db500u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x1db504: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x1db504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1db508: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db50c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1db50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1db510: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1db510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1db514: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1db514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1db518: 0x8fab0004  lw          $t3, 0x4($sp)
    ctx->pc = 0x1db518u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1db51c: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1db51cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1db520: 0xaf200000  sw          $zero, 0x0($t9)
    ctx->pc = 0x1db520u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
    // 0x1db524: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1db524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db528: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1db528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1db52c: 0xaee00020  sw          $zero, 0x20($s7)
    ctx->pc = 0x1db52cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 0));
    // 0x1db530: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1db530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1db534: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x1db534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1db538: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1db538u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1db53c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1db53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1db540: 0xaf0a0000  sw          $t2, 0x0($t8)
    ctx->pc = 0x1db540u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 10));
    // 0x1db544: 0xae8a0000  sw          $t2, 0x0($s4)
    ctx->pc = 0x1db544u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 10));
    // 0x1db548: 0x8fab0010  lw          $t3, 0x10($sp)
    ctx->pc = 0x1db548u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db54c: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1db54cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1db550: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x1db550u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x1db554: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1db554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1db558: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x1db558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x1db55c: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x1db55cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x1db560: 0x8fab0018  lw          $t3, 0x18($sp)
    ctx->pc = 0x1db560u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1db564: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x1db564u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x1db568: 0x240b1000  addiu       $t3, $zero, 0x1000
    ctx->pc = 0x1db568u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1db56c: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x1db56cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x1db570: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1db570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1db574: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1db574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1db578: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1db578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db57c: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x1db57cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x1db580: 0xae2b0000  sw          $t3, 0x0($s1)
    ctx->pc = 0x1db580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 11));
    // 0x1db584: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x1db584u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1db588: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1db588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1db58c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1db58cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1db590: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1db590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1db594: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1db594u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1db598: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db59c: 0xaeab0000  sw          $t3, 0x0($s5)
    ctx->pc = 0x1db59cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 11));
    // 0x1db5a0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1db5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1db5a4: 0xac650074  sw          $a1, 0x74($v1)
    ctx->pc = 0x1db5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 5));
    // 0x1db5a8: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x1db5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x1db5ac: 0x8fab0034  lw          $t3, 0x34($sp)
    ctx->pc = 0x1db5acu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1db5b0: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1db5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1db5b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1db5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db5b8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1db5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1db5bc: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1db5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1db5c0: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x1db5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1db5c4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1db5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1db5c8: 0x8fab0044  lw          $t3, 0x44($sp)
    ctx->pc = 0x1db5c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1db5cc: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1db5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1db5d0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1db5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db5d4: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x1db5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x1db5d8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1db5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1db5dc: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x1db5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x1db5e0: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1db5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1db5e4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1db5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1db5e8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1db5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1db5ec: 0x8fab0048  lw          $t3, 0x48($sp)
    ctx->pc = 0x1db5ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1db5f0: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1db5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1db5f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1db5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1db5f8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1db5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1db5fc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1db5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1db600: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1db600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1db604: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1db604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db608: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1db608u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1db60c: 0x8fab0054  lw          $t3, 0x54($sp)
    ctx->pc = 0x1db60cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1db610: 0xe56000c0  swc1        $f0, 0xC0($t3)
    ctx->pc = 0x1db610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 192), bits); }
    // 0x1db614: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1db614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1db618: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1db618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1db61c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1db61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1db620: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1db620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1db624: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1db624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1db628: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1db628u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1db62c: 0x8fab005c  lw          $t3, 0x5C($sp)
    ctx->pc = 0x1db62cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1db630: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1db630u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x1db634u;
}
