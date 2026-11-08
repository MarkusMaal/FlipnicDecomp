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

// Function: entry_001db854
// Address: 0x1db854 - 0x1dbb30
void entry_001db854_0x1db854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db854_0x1db854");
#endif

    ctx->pc = 0x1db854u;

    // 0x1db854: 0x7c000b6  bltz        $fp, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1DB854u;
    {
        const bool branch_taken_0x1db854 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x1DB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB854u;
        // 0x1db858: 0x1e10c0  sll         $v0, $fp, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db854) {
            ctx->pc = 0x1DBB30u;
            return;
        }
    }
    ctx->pc = 0x1DB85Cu;
    // 0x1db85c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1db85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1db860: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x1db860u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1db864: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x1db864u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x1db868: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db86c: 0x24637330  addiu       $v1, $v1, 0x7330
    ctx->pc = 0x1db86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1db870: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1db870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1db874: 0x256b7344  addiu       $t3, $t3, 0x7344
    ctx->pc = 0x1db874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 29508));
    // 0x1db878: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1db878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1db87c: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1db87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1db880: 0x244a00b0  addiu       $t2, $v0, 0xB0
    ctx->pc = 0x1db880u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1db884: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x1db884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1db888: 0x14b5821  addu        $t3, $t2, $t3
    ctx->pc = 0x1db888u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1db88c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1db88cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1db890: 0xafab01dc  sw          $t3, 0x1DC($sp)
    ctx->pc = 0x1db890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 11));
    // 0x1db894: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x1db894u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1db898: 0xafab01e0  sw          $t3, 0x1E0($sp)
    ctx->pc = 0x1db898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 11));
    // 0x1db89c: 0x2055821  addu        $t3, $s0, $a1
    ctx->pc = 0x1db89cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1db8a0: 0x244c0040  addiu       $t4, $v0, 0x40
    ctx->pc = 0x1db8a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1db8a4: 0xafab01e4  sw          $t3, 0x1E4($sp)
    ctx->pc = 0x1db8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 11));
    // 0x1db8a8: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x1db8a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1db8ac: 0x1845821  addu        $t3, $t4, $a0
    ctx->pc = 0x1db8acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1db8b0: 0xafab01a0  sw          $t3, 0x1A0($sp)
    ctx->pc = 0x1db8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 11));
    // 0x1db8b4: 0x2235821  addu        $t3, $s1, $v1
    ctx->pc = 0x1db8b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1db8b8: 0x244f0050  addiu       $t7, $v0, 0x50
    ctx->pc = 0x1db8b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1db8bc: 0xafab01a8  sw          $t3, 0x1A8($sp)
    ctx->pc = 0x1db8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 11));
    // 0x1db8c0: 0x244d0080  addiu       $t5, $v0, 0x80
    ctx->pc = 0x1db8c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1db8c4: 0x1e45821  addu        $t3, $t7, $a0
    ctx->pc = 0x1db8c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1db8c8: 0xafab01ac  sw          $t3, 0x1AC($sp)
    ctx->pc = 0x1db8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 11));
    // 0x1db8cc: 0x1a35821  addu        $t3, $t5, $v1
    ctx->pc = 0x1db8ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1db8d0: 0x244e00a0  addiu       $t6, $v0, 0xA0
    ctx->pc = 0x1db8d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1db8d4: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x1db8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1db8d8: 0xafab01b4  sw          $t3, 0x1B4($sp)
    ctx->pc = 0x1db8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 11));
    // 0x1db8dc: 0x1c45821  addu        $t3, $t6, $a0
    ctx->pc = 0x1db8dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1db8e0: 0x24480090  addiu       $t0, $v0, 0x90
    ctx->pc = 0x1db8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1db8e4: 0xafab01bc  sw          $t3, 0x1BC($sp)
    ctx->pc = 0x1db8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 11));
    // 0x1db8e8: 0x24550060  addiu       $s5, $v0, 0x60
    ctx->pc = 0x1db8e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1db8ec: 0x1075821  addu        $t3, $t0, $a3
    ctx->pc = 0x1db8ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1db8f0: 0xafab01c0  sw          $t3, 0x1C0($sp)
    ctx->pc = 0x1db8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 11));
    // 0x1db8f4: 0x2a45821  addu        $t3, $s5, $a0
    ctx->pc = 0x1db8f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1db8f8: 0x24530070  addiu       $s3, $v0, 0x70
    ctx->pc = 0x1db8f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1db8fc: 0xafab01c4  sw          $t3, 0x1C4($sp)
    ctx->pc = 0x1db8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 11));
    // 0x1db900: 0x245200d0  addiu       $s2, $v0, 0xD0
    ctx->pc = 0x1db900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1db904: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x1db904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1db908: 0x2635821  addu        $t3, $s3, $v1
    ctx->pc = 0x1db908u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1db90c: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x1db90cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db910: 0xafab01c8  sw          $t3, 0x1C8($sp)
    ctx->pc = 0x1db910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 11));
    // 0x1db914: 0x2465821  addu        $t3, $s2, $a2
    ctx->pc = 0x1db914u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1db918: 0xafab01d0  sw          $t3, 0x1D0($sp)
    ctx->pc = 0x1db918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 11));
    // 0x1db91c: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x1db91cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db920: 0xafab0184  sw          $t3, 0x184($sp)
    ctx->pc = 0x1db920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 11));
    // 0x1db924: 0x455821  addu        $t3, $v0, $a1
    ctx->pc = 0x1db924u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1db928: 0xafab0188  sw          $t3, 0x188($sp)
    ctx->pc = 0x1db928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 11));
    // 0x1db92c: 0x2075821  addu        $t3, $s0, $a3
    ctx->pc = 0x1db92cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1db930: 0xafab018c  sw          $t3, 0x18C($sp)
    ctx->pc = 0x1db930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 11));
    // 0x1db934: 0x1045821  addu        $t3, $t0, $a0
    ctx->pc = 0x1db934u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1db938: 0xafab01b8  sw          $t3, 0x1B8($sp)
    ctx->pc = 0x1db938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 11));
    // 0x1db93c: 0x2275821  addu        $t3, $s1, $a3
    ctx->pc = 0x1db93cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1db940: 0xafab0190  sw          $t3, 0x190($sp)
    ctx->pc = 0x1db940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 11));
    // 0x1db944: 0x2245821  addu        $t3, $s1, $a0
    ctx->pc = 0x1db944u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1db948: 0xafab0194  sw          $t3, 0x194($sp)
    ctx->pc = 0x1db948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 11));
    // 0x1db94c: 0x1855821  addu        $t3, $t4, $a1
    ctx->pc = 0x1db94cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1db950: 0xafab0198  sw          $t3, 0x198($sp)
    ctx->pc = 0x1db950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 11));
    // 0x1db954: 0x1e35821  addu        $t3, $t7, $v1
    ctx->pc = 0x1db954u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x1db958: 0x183c021  addu        $t8, $t4, $v1
    ctx->pc = 0x1db958u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1db95c: 0x1876021  addu        $t4, $t4, $a3
    ctx->pc = 0x1db95cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x1db960: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x1db960u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1db964: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1db964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1db968: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x1db968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
    // 0x1db96c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1db96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1db970: 0xafab019c  sw          $t3, 0x19C($sp)
    ctx->pc = 0x1db970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 11));
    // 0x1db974: 0x2655821  addu        $t3, $s3, $a1
    ctx->pc = 0x1db974u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1db978: 0x47c821  addu        $t9, $v0, $a3
    ctx->pc = 0x1db978u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1db97c: 0xafab01a4  sw          $t3, 0x1A4($sp)
    ctx->pc = 0x1db97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 11));
    // 0x1db980: 0x24637344  addiu       $v1, $v1, 0x7344
    ctx->pc = 0x1db980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29508));
    // 0x1db984: 0x320582d  daddu       $t3, $t9, $zero
    ctx->pc = 0x1db984u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db988: 0xafab01b0  sw          $t3, 0x1B0($sp)
    ctx->pc = 0x1db988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 11));
    // 0x1db98c: 0x1055821  addu        $t3, $t0, $a1
    ctx->pc = 0x1db98cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1db990: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1db990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1db994: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x1db994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1db998: 0xafa301cc  sw          $v1, 0x1CC($sp)
    ctx->pc = 0x1db998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 3));
    // 0x1db99c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1db99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1db9a0: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1db9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1db9a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1db9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1db9a8: 0x1e5b021  addu        $s6, $t7, $a1
    ctx->pc = 0x1db9a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x1db9ac: 0x1e77821  addu        $t7, $t7, $a3
    ctx->pc = 0x1db9acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x1db9b0: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1db9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1db9b4: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x1db9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1db9b8: 0x3c090022  lui         $t1, 0x22
    ctx->pc = 0x1db9b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)34 << 16));
    // 0x1db9bc: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x1db9bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1db9c0: 0x2529a000  addiu       $t1, $t1, -0x6000
    ctx->pc = 0x1db9c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942720));
    // 0x1db9c4: 0x2463a03c  addiu       $v1, $v1, -0x5FC4
    ctx->pc = 0x1db9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942780));
    // 0x1db9c8: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x1db9c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x1db9cc: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x1db9ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x1db9d0: 0xafaa01d4  sw          $t2, 0x1D4($sp)
    ctx->pc = 0x1db9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 10));
    // 0x1db9d4: 0x240a007f  addiu       $t2, $zero, 0x7F
    ctx->pc = 0x1db9d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1db9d8: 0xafa601d8  sw          $a2, 0x1D8($sp)
    ctx->pc = 0x1db9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 6));
    // 0x1db9dc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1db9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db9e0: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x1db9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x1db9e4: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1db9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1db9e8: 0xada90000  sw          $t1, 0x0($t5)
    ctx->pc = 0x1db9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
    // 0x1db9ec: 0x24140040  addiu       $s4, $zero, 0x40
    ctx->pc = 0x1db9ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1db9f0: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x1db9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x1db9f4: 0x2679821  addu        $s3, $s3, $a3
    ctx->pc = 0x1db9f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1db9f8: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x1db9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x1db9fc: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1db9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1dba00: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x1dba00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x1dba04: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x1dba04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1dba08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dba08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dba0c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1dba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dba10: 0x8fa501bc  lw          $a1, 0x1BC($sp)
    ctx->pc = 0x1dba10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x1dba14: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dba14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1dba18: 0x8fab0184  lw          $t3, 0x184($sp)
    ctx->pc = 0x1dba18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1dba1c: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1dba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1dba20: 0xaf200000  sw          $zero, 0x0($t9)
    ctx->pc = 0x1dba20u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
    // 0x1dba24: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1dba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dba28: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dba28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dba2c: 0xaee00020  sw          $zero, 0x20($s7)
    ctx->pc = 0x1dba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 0));
    // 0x1dba30: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1dba30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1dba34: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x1dba34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1dba38: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dba38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dba3c: 0xaf0a0000  sw          $t2, 0x0($t8)
    ctx->pc = 0x1dba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 10));
    // 0x1dba40: 0x8fab0194  lw          $t3, 0x194($sp)
    ctx->pc = 0x1dba40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1dba44: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1dba44u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1dba48: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1dba48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1dba4c: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x1dba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x1dba50: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x1dba50u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x1dba54: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1dba54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1dba58: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x1dba58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x1dba5c: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x1dba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
    // 0x1dba60: 0x8fab019c  lw          $t3, 0x19C($sp)
    ctx->pc = 0x1dba60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1dba64: 0xad740000  sw          $s4, 0x0($t3)
    ctx->pc = 0x1dba64u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 20));
    // 0x1dba68: 0x240b1000  addiu       $t3, $zero, 0x1000
    ctx->pc = 0x1dba68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dba6c: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x1dba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x1dba70: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1dba70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1dba74: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dba74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1dba78: 0x8fa501a4  lw          $a1, 0x1A4($sp)
    ctx->pc = 0x1dba78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x1dba7c: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x1dba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x1dba80: 0xae2b0000  sw          $t3, 0x0($s1)
    ctx->pc = 0x1dba80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 11));
    // 0x1dba84: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1dba84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1dba88: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dba88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dba8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dba90: 0x8fa501ac  lw          $a1, 0x1AC($sp)
    ctx->pc = 0x1dba90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x1dba94: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dba94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dba98: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x1dba98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    // 0x1dba9c: 0x8fab01b0  lw          $t3, 0x1B0($sp)
    ctx->pc = 0x1dba9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1dbaa0: 0xad630074  sw          $v1, 0x74($t3)
    ctx->pc = 0x1dbaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 116), GPR_U32(ctx, 3));
    // 0x1dbaa4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1dbaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1dbaa8: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x1dbaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1dbaac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dbaacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dbab0: 0x8fab01b4  lw          $t3, 0x1B4($sp)
    ctx->pc = 0x1dbab0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1dbab4: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1dbab4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1dbab8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dbab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dbabc: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1dbabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1dbac0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dbac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dbac4: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x1dbac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x1dbac8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dbac8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dbacc: 0x8fab01c4  lw          $t3, 0x1C4($sp)
    ctx->pc = 0x1dbaccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1dbad0: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x1dbad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x1dbad4: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1dbad4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1dbad8: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x1dbad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x1dbadc: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1dbadcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1dbae0: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1dbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1dbae4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dbae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dbae8: 0x8fa301cc  lw          $v1, 0x1CC($sp)
    ctx->pc = 0x1dbae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1dbaec: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dbaecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1dbaf0: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x1dbaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1dbaf4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1dbaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1dbaf8: 0x8fab0184  lw          $t3, 0x184($sp)
    ctx->pc = 0x1dbaf8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1dbafc: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1dbafcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1dbb00: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dbb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dbb04: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbb04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1dbb08: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x1dbb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x1dbb0c: 0xe46000c0  swc1        $f0, 0xC0($v1)
    ctx->pc = 0x1dbb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x1dbb10: 0x8fa501d4  lw          $a1, 0x1D4($sp)
    ctx->pc = 0x1dbb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1dbb14: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1dbb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1dbb18: 0x8fab018c  lw          $t3, 0x18C($sp)
    ctx->pc = 0x1dbb18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1dbb1c: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1dbb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1dbb20: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x1dbb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1dbb24: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1dbb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1dbb28: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1dbb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1dbb2c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dbb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x1dbb30u;
}
