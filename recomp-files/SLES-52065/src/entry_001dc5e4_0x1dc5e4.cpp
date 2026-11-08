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

// Function: entry_001dc5e4
// Address: 0x1dc5e4 - 0x1dc8b4
void entry_001dc5e4_0x1dc5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc5e4_0x1dc5e4");
#endif

    ctx->pc = 0x1dc5e4u;

    // 0x1dc5e4: 0x7c000b3  bltz        $fp, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1DC5E4u;
    {
        const bool branch_taken_0x1dc5e4 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x1DC5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5E4u;
        // 0x1dc5e8: 0x1e10c0  sll         $v0, $fp, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5e4) {
            ctx->pc = 0x1DC8B4u;
            return;
        }
    }
    ctx->pc = 0x1DC5ECu;
    // 0x1dc5ec: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dc5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dc5f0: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x1dc5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1dc5f4: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1dc5f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1dc5f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc5fc: 0x24637330  addiu       $v1, $v1, 0x7330
    ctx->pc = 0x1dc5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dc600: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1dc600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1dc604: 0x25297344  addiu       $t1, $t1, 0x7344
    ctx->pc = 0x1dc604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29508));
    // 0x1dc608: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dc608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dc60c: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x1dc60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1dc610: 0x244a00b0  addiu       $t2, $v0, 0xB0
    ctx->pc = 0x1dc610u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1dc614: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1dc614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dc618: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1dc618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1dc61c: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1dc61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1dc620: 0xafa90054  sw          $t1, 0x54($sp)
    ctx->pc = 0x1dc620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 9));
    // 0x1dc624: 0x2054821  addu        $t1, $s0, $a1
    ctx->pc = 0x1dc624u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1dc628: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x1dc628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dc62c: 0xafa9005c  sw          $t1, 0x5C($sp)
    ctx->pc = 0x1dc62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 9));
    // 0x1dc630: 0x244c0040  addiu       $t4, $v0, 0x40
    ctx->pc = 0x1dc630u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1dc634: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x1dc634u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dc638: 0x2234821  addu        $t1, $s1, $v1
    ctx->pc = 0x1dc638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1dc63c: 0x244d0080  addiu       $t5, $v0, 0x80
    ctx->pc = 0x1dc63cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1dc640: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x1dc640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1dc644: 0xafab0058  sw          $t3, 0x58($sp)
    ctx->pc = 0x1dc644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 11));
    // 0x1dc648: 0xafa90020  sw          $t1, 0x20($sp)
    ctx->pc = 0x1dc648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 9));
    // 0x1dc64c: 0x1a34821  addu        $t1, $t5, $v1
    ctx->pc = 0x1dc64cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1dc650: 0x24480090  addiu       $t0, $v0, 0x90
    ctx->pc = 0x1dc650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dc654: 0x244f0050  addiu       $t7, $v0, 0x50
    ctx->pc = 0x1dc654u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1dc658: 0x1845821  addu        $t3, $t4, $a0
    ctx->pc = 0x1dc658u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1dc65c: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x1dc65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x1dc660: 0xafab001c  sw          $t3, 0x1C($sp)
    ctx->pc = 0x1dc660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 11));
    // 0x1dc664: 0x1e45821  addu        $t3, $t7, $a0
    ctx->pc = 0x1dc664u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1dc668: 0x24530070  addiu       $s3, $v0, 0x70
    ctx->pc = 0x1dc668u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1dc66c: 0x1074821  addu        $t1, $t0, $a3
    ctx->pc = 0x1dc66cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1dc670: 0x244e00a0  addiu       $t6, $v0, 0xA0
    ctx->pc = 0x1dc670u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1dc674: 0xafab0024  sw          $t3, 0x24($sp)
    ctx->pc = 0x1dc674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
    // 0x1dc678: 0xafa90038  sw          $t1, 0x38($sp)
    ctx->pc = 0x1dc678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 9));
    // 0x1dc67c: 0x2634821  addu        $t1, $s3, $v1
    ctx->pc = 0x1dc67cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1dc680: 0x1c45821  addu        $t3, $t6, $a0
    ctx->pc = 0x1dc680u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1dc684: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x1dc684u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x1dc688: 0x24550060  addiu       $s5, $v0, 0x60
    ctx->pc = 0x1dc688u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dc68c: 0xafab0034  sw          $t3, 0x34($sp)
    ctx->pc = 0x1dc68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 11));
    // 0x1dc690: 0xafa90040  sw          $t1, 0x40($sp)
    ctx->pc = 0x1dc690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
    // 0x1dc694: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x1dc694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc698: 0x245200d0  addiu       $s2, $v0, 0xD0
    ctx->pc = 0x1dc698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1dc69c: 0x2a45821  addu        $t3, $s5, $a0
    ctx->pc = 0x1dc69cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1dc6a0: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x1dc6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1dc6a4: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x1dc6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1dc6a8: 0xafab003c  sw          $t3, 0x3C($sp)
    ctx->pc = 0x1dc6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 11));
    // 0x1dc6ac: 0x2465821  addu        $t3, $s2, $a2
    ctx->pc = 0x1dc6acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1dc6b0: 0x2074821  addu        $t1, $s0, $a3
    ctx->pc = 0x1dc6b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1dc6b4: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1dc6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1dc6b8: 0xafab0048  sw          $t3, 0x48($sp)
    ctx->pc = 0x1dc6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 11));
    // 0x1dc6bc: 0x455821  addu        $t3, $v0, $a1
    ctx->pc = 0x1dc6bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dc6c0: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x1dc6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x1dc6c4: 0x2274821  addu        $t1, $s1, $a3
    ctx->pc = 0x1dc6c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1dc6c8: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x1dc6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x1dc6cc: 0x1045821  addu        $t3, $t0, $a0
    ctx->pc = 0x1dc6ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1dc6d0: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x1dc6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x1dc6d4: 0x1e34821  addu        $t1, $t7, $v1
    ctx->pc = 0x1dc6d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x1dc6d8: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x1dc6d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc6dc: 0x183c021  addu        $t8, $t4, $v1
    ctx->pc = 0x1dc6dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1dc6e0: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x1dc6e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1dc6e4: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1dc6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1dc6e8: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1dc6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x1dc6ec: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dc6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dc6f0: 0xafab0030  sw          $t3, 0x30($sp)
    ctx->pc = 0x1dc6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 11));
    // 0x1dc6f4: 0x1855821  addu        $t3, $t4, $a1
    ctx->pc = 0x1dc6f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1dc6f8: 0x47c821  addu        $t9, $v0, $a3
    ctx->pc = 0x1dc6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1dc6fc: 0xafab0014  sw          $t3, 0x14($sp)
    ctx->pc = 0x1dc6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 11));
    // 0x1dc700: 0x24637344  addiu       $v1, $v1, 0x7344
    ctx->pc = 0x1dc700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29508));
    // 0x1dc704: 0x320582d  daddu       $t3, $t9, $zero
    ctx->pc = 0x1dc704u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc708: 0xafab0028  sw          $t3, 0x28($sp)
    ctx->pc = 0x1dc708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
    // 0x1dc70c: 0x1055821  addu        $t3, $t0, $a1
    ctx->pc = 0x1dc70cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1dc710: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1dc710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1dc714: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x1dc714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1dc718: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x1dc718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x1dc71c: 0x2654821  addu        $t1, $s3, $a1
    ctx->pc = 0x1dc71cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1dc720: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1dc720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1dc724: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1dc724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1dc728: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1dc728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dc72c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dc72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dc730: 0x224a021  addu        $s4, $s1, $a0
    ctx->pc = 0x1dc730u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1dc734: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1dc734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1dc738: 0x1e5b021  addu        $s6, $t7, $a1
    ctx->pc = 0x1dc738u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x1dc73c: 0x1e77821  addu        $t7, $t7, $a3
    ctx->pc = 0x1dc73cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x1dc740: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1dc740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dc744: 0x2463a000  addiu       $v1, $v1, -0x6000
    ctx->pc = 0x1dc744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942720));
    // 0x1dc748: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x1dc748u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1dc74c: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1dc74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1dc750: 0xafaa004c  sw          $t2, 0x4C($sp)
    ctx->pc = 0x1dc750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 10));
    // 0x1dc754: 0x240a007f  addiu       $t2, $zero, 0x7F
    ctx->pc = 0x1dc754u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1dc758: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dc758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1dc75c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1dc75cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1dc760: 0x24a5a03c  addiu       $a1, $a1, -0x5FC4
    ctx->pc = 0x1dc760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942780));
    // 0x1dc764: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x1dc764u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x1dc768: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x1dc768u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x1dc76c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dc76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dc770: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x1dc770u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x1dc774: 0x1876021  addu        $t4, $t4, $a3
    ctx->pc = 0x1dc774u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x1dc778: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x1dc778u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x1dc77c: 0x2679821  addu        $s3, $s3, $a3
    ctx->pc = 0x1dc77cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1dc780: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1dc780u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1dc784: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1dc784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1dc788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc78c: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x1dc78cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1dc790: 0x8fab0034  lw          $t3, 0x34($sp)
    ctx->pc = 0x1dc790u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1dc794: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1dc794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dc798: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x1dc798u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x1dc79c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1dc79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1dc7a0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dc7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dc7a4: 0xaf200000  sw          $zero, 0x0($t9)
    ctx->pc = 0x1dc7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
    // 0x1dc7a8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1dc7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc7ac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dc7acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dc7b0: 0xaee00020  sw          $zero, 0x20($s7)
    ctx->pc = 0x1dc7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 0));
    // 0x1dc7b4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1dc7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1dc7b8: 0x8fab000c  lw          $t3, 0xC($sp)
    ctx->pc = 0x1dc7b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1dc7bc: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1dc7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1dc7c0: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x1dc7c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dc7c4: 0xaf0a0000  sw          $t2, 0x0($t8)
    ctx->pc = 0x1dc7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 10));
    // 0x1dc7c8: 0xae8a0000  sw          $t2, 0x0($s4)
    ctx->pc = 0x1dc7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 10));
    // 0x1dc7cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dc7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc7d0: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x1dc7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x1dc7d4: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x1dc7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x1dc7d8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1dc7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1dc7dc: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x1dc7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x1dc7e0: 0xaecb0000  sw          $t3, 0x0($s6)
    ctx->pc = 0x1dc7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 11));
    // 0x1dc7e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1dc7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dc7e8: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x1dc7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
    // 0x1dc7ec: 0x240b1000  addiu       $t3, $zero, 0x1000
    ctx->pc = 0x1dc7ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dc7f0: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x1dc7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x1dc7f4: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x1dc7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1dc7f8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dc7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dc7fc: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x1dc7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x1dc800: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x1dc800u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dc804: 0xae2b0000  sw          $t3, 0x0($s1)
    ctx->pc = 0x1dc804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 11));
    // 0x1dc808: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1dc808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc80c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dc80cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dc810: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dc810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc814: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1dc814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1dc818: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dc818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dc81c: 0xaea90000  sw          $t1, 0x0($s5)
    ctx->pc = 0x1dc81cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 9));
    // 0x1dc820: 0x8fab0028  lw          $t3, 0x28($sp)
    ctx->pc = 0x1dc820u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dc824: 0xad630074  sw          $v1, 0x74($t3)
    ctx->pc = 0x1dc824u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 116), GPR_U32(ctx, 3));
    // 0x1dc828: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1dc828u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1dc82c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1dc82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc830: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dc830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dc834: 0x8fa9002c  lw          $t1, 0x2C($sp)
    ctx->pc = 0x1dc834u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1dc838: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1dc838u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1dc83c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dc83cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dc840: 0x8fab0038  lw          $t3, 0x38($sp)
    ctx->pc = 0x1dc840u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dc844: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1dc844u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1dc848: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1dc848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc84c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dc84cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1dc850: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x1dc850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1dc854: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x1dc854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x1dc858: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dc858u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dc85c: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x1dc85cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x1dc860: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1dc860u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1dc864: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x1dc864u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1dc868: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x1dc868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1dc86c: 0x8fab0044  lw          $t3, 0x44($sp)
    ctx->pc = 0x1dc86cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1dc870: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1dc870u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1dc874: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1dc874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1dc878: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dc878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dc87c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1dc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1dc880: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dc880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dc884: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1dc884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc888: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1dc888u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1dc88c: 0x8fa90050  lw          $t1, 0x50($sp)
    ctx->pc = 0x1dc88cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc890: 0xe52000c0  swc1        $f0, 0xC0($t1)
    ctx->pc = 0x1dc890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 192), bits); }
    // 0x1dc894: 0x8fab004c  lw          $t3, 0x4C($sp)
    ctx->pc = 0x1dc894u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1dc898: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x1dc898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x1dc89c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1dc89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1dc8a0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1dc8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1dc8a4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1dc8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1dc8a8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dc8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1dc8ac: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1dc8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dc8b0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dc8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x1dc8b4u;
}
