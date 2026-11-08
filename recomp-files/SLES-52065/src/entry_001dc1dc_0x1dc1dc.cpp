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

// Function: entry_001dc1dc
// Address: 0x1dc1dc - 0x1dc4b0
void entry_001dc1dc_0x1dc1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc1dc_0x1dc1dc");
#endif

    ctx->pc = 0x1dc1dcu;

    // 0x1dc1dc: 0x7c000b4  bltz        $fp, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1DC1DCu;
    {
        const bool branch_taken_0x1dc1dc = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x1DC1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1DCu;
        // 0x1dc1e0: 0x1e10c0  sll         $v0, $fp, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1dc) {
            ctx->pc = 0x1DC4B0u;
            return;
        }
    }
    ctx->pc = 0x1DC1E4u;
    // 0x1dc1e4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dc1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dc1e8: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x1dc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1dc1ec: 0x24637330  addiu       $v1, $v1, 0x7330
    ctx->pc = 0x1dc1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dc1f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc1f4: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1dc1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1dc1f8: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1dc1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1dc1fc: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1dc1fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1dc200: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dc200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dc204: 0x25297344  addiu       $t1, $t1, 0x7344
    ctx->pc = 0x1dc204u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29508));
    // 0x1dc208: 0x244c0040  addiu       $t4, $v0, 0x40
    ctx->pc = 0x1dc208u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1dc20c: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x1dc20cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dc210: 0xafab011c  sw          $t3, 0x11C($sp)
    ctx->pc = 0x1dc210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 11));
    // 0x1dc214: 0x1845821  addu        $t3, $t4, $a0
    ctx->pc = 0x1dc214u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1dc218: 0x244f0050  addiu       $t7, $v0, 0x50
    ctx->pc = 0x1dc218u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1dc21c: 0xafab00dc  sw          $t3, 0xDC($sp)
    ctx->pc = 0x1dc21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 11));
    // 0x1dc220: 0x244e00a0  addiu       $t6, $v0, 0xA0
    ctx->pc = 0x1dc220u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1dc224: 0x244a00b0  addiu       $t2, $v0, 0xB0
    ctx->pc = 0x1dc224u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1dc228: 0x1e45821  addu        $t3, $t7, $a0
    ctx->pc = 0x1dc228u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1dc22c: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x1dc22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1dc230: 0xafab00e8  sw          $t3, 0xE8($sp)
    ctx->pc = 0x1dc230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 11));
    // 0x1dc234: 0x1c45821  addu        $t3, $t6, $a0
    ctx->pc = 0x1dc234u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1dc238: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1dc238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dc23c: 0x24550060  addiu       $s5, $v0, 0x60
    ctx->pc = 0x1dc23cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dc240: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1dc240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1dc244: 0xafab00f8  sw          $t3, 0xF8($sp)
    ctx->pc = 0x1dc244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 11));
    // 0x1dc248: 0xafa90118  sw          $t1, 0x118($sp)
    ctx->pc = 0x1dc248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 9));
    // 0x1dc24c: 0x2054821  addu        $t1, $s0, $a1
    ctx->pc = 0x1dc24cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1dc250: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x1dc250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dc254: 0x245200d0  addiu       $s2, $v0, 0xD0
    ctx->pc = 0x1dc254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1dc258: 0x2a45821  addu        $t3, $s5, $a0
    ctx->pc = 0x1dc258u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1dc25c: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x1dc25cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1dc260: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x1dc260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1dc264: 0xafa90120  sw          $t1, 0x120($sp)
    ctx->pc = 0x1dc264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 9));
    // 0x1dc268: 0xafab0100  sw          $t3, 0x100($sp)
    ctx->pc = 0x1dc268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 11));
    // 0x1dc26c: 0x2465821  addu        $t3, $s2, $a2
    ctx->pc = 0x1dc26cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1dc270: 0x2234821  addu        $t1, $s1, $v1
    ctx->pc = 0x1dc270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1dc274: 0x244d0080  addiu       $t5, $v0, 0x80
    ctx->pc = 0x1dc274u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1dc278: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x1dc278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1dc27c: 0xafa900e4  sw          $t1, 0xE4($sp)
    ctx->pc = 0x1dc27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 9));
    // 0x1dc280: 0xafab010c  sw          $t3, 0x10C($sp)
    ctx->pc = 0x1dc280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 11));
    // 0x1dc284: 0x455821  addu        $t3, $v0, $a1
    ctx->pc = 0x1dc284u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dc288: 0x24480090  addiu       $t0, $v0, 0x90
    ctx->pc = 0x1dc288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dc28c: 0x1a34821  addu        $t1, $t5, $v1
    ctx->pc = 0x1dc28cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1dc290: 0xafa900f0  sw          $t1, 0xF0($sp)
    ctx->pc = 0x1dc290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 9));
    // 0x1dc294: 0x1074821  addu        $t1, $t0, $a3
    ctx->pc = 0x1dc294u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1dc298: 0xafab00c8  sw          $t3, 0xC8($sp)
    ctx->pc = 0x1dc298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 11));
    // 0x1dc29c: 0x1045821  addu        $t3, $t0, $a0
    ctx->pc = 0x1dc29cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1dc2a0: 0x24530070  addiu       $s3, $v0, 0x70
    ctx->pc = 0x1dc2a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1dc2a4: 0xafa900fc  sw          $t1, 0xFC($sp)
    ctx->pc = 0x1dc2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 9));
    // 0x1dc2a8: 0xafab00f4  sw          $t3, 0xF4($sp)
    ctx->pc = 0x1dc2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 11));
    // 0x1dc2ac: 0x1855821  addu        $t3, $t4, $a1
    ctx->pc = 0x1dc2acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1dc2b0: 0x2634821  addu        $t1, $s3, $v1
    ctx->pc = 0x1dc2b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1dc2b4: 0xafab00d4  sw          $t3, 0xD4($sp)
    ctx->pc = 0x1dc2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 11));
    // 0x1dc2b8: 0xafa90104  sw          $t1, 0x104($sp)
    ctx->pc = 0x1dc2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 9));
    // 0x1dc2bc: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x1dc2bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc2c0: 0x1e35821  addu        $t3, $t7, $v1
    ctx->pc = 0x1dc2c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x1dc2c4: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x1dc2c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc2c8: 0x183c021  addu        $t8, $t4, $v1
    ctx->pc = 0x1dc2c8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1dc2cc: 0x1876021  addu        $t4, $t4, $a3
    ctx->pc = 0x1dc2ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x1dc2d0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1dc2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1dc2d4: 0xafab00d8  sw          $t3, 0xD8($sp)
    ctx->pc = 0x1dc2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 11));
    // 0x1dc2d8: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x1dc2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x1dc2dc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dc2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dc2e0: 0x47c821  addu        $t9, $v0, $a3
    ctx->pc = 0x1dc2e0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1dc2e4: 0x2655821  addu        $t3, $s3, $a1
    ctx->pc = 0x1dc2e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1dc2e8: 0xafa900c4  sw          $t1, 0xC4($sp)
    ctx->pc = 0x1dc2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 9));
    // 0x1dc2ec: 0x2074821  addu        $t1, $s0, $a3
    ctx->pc = 0x1dc2ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1dc2f0: 0xafab00e0  sw          $t3, 0xE0($sp)
    ctx->pc = 0x1dc2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 11));
    // 0x1dc2f4: 0x320582d  daddu       $t3, $t9, $zero
    ctx->pc = 0x1dc2f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc2f8: 0x24637344  addiu       $v1, $v1, 0x7344
    ctx->pc = 0x1dc2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29508));
    // 0x1dc2fc: 0xafa900cc  sw          $t1, 0xCC($sp)
    ctx->pc = 0x1dc2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 9));
    // 0x1dc300: 0xafab00ec  sw          $t3, 0xEC($sp)
    ctx->pc = 0x1dc300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 11));
    // 0x1dc304: 0x1055821  addu        $t3, $t0, $a1
    ctx->pc = 0x1dc304u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1dc308: 0x2274821  addu        $t1, $s1, $a3
    ctx->pc = 0x1dc308u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1dc30c: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1dc30cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1dc310: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x1dc310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1dc314: 0xafa900d0  sw          $t1, 0xD0($sp)
    ctx->pc = 0x1dc314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 9));
    // 0x1dc318: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x1dc318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x1dc31c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1dc31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1dc320: 0x2244821  addu        $t1, $s1, $a0
    ctx->pc = 0x1dc320u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1dc324: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1dc324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1dc328: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1dc328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dc32c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dc32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dc330: 0x1e5b021  addu        $s6, $t7, $a1
    ctx->pc = 0x1dc330u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x1dc334: 0x1e77821  addu        $t7, $t7, $a3
    ctx->pc = 0x1dc334u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x1dc338: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x1dc338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1dc33c: 0x2463a000  addiu       $v1, $v1, -0x6000
    ctx->pc = 0x1dc33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942720));
    // 0x1dc340: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x1dc340u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1dc344: 0xafa60114  sw          $a2, 0x114($sp)
    ctx->pc = 0x1dc344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 6));
    // 0x1dc348: 0xafaa0110  sw          $t2, 0x110($sp)
    ctx->pc = 0x1dc348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 10));
    // 0x1dc34c: 0x240a007f  addiu       $t2, $zero, 0x7F
    ctx->pc = 0x1dc34cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1dc350: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dc350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1dc354: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1dc354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1dc358: 0x24a5a03c  addiu       $a1, $a1, -0x5FC4
    ctx->pc = 0x1dc358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942780));
    // 0x1dc35c: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x1dc35cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x1dc360: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x1dc360u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x1dc364: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x1dc364u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x1dc368: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x1dc368u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x1dc36c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dc36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dc370: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x1dc370u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x1dc374: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1dc374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1dc378: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1dc378u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1dc37c: 0x24140040  addiu       $s4, $zero, 0x40
    ctx->pc = 0x1dc37cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dc380: 0x2679821  addu        $s3, $s3, $a3
    ctx->pc = 0x1dc380u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1dc384: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1dc384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1dc388: 0x8fab00f8  lw          $t3, 0xF8($sp)
    ctx->pc = 0x1dc388u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dc38c: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x1dc38cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1dc390: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc394: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1dc394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dc398: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x1dc398u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x1dc39c: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1dc39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1dc3a0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dc3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dc3a4: 0xaf200000  sw          $zero, 0x0($t9)
    ctx->pc = 0x1dc3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
    // 0x1dc3a8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1dc3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1dc3ac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dc3acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dc3b0: 0xaee00020  sw          $zero, 0x20($s7)
    ctx->pc = 0x1dc3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 0));
    // 0x1dc3b4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1dc3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1dc3b8: 0x8fab00cc  lw          $t3, 0xCC($sp)
    ctx->pc = 0x1dc3b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1dc3bc: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1dc3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1dc3c0: 0xaf0a0000  sw          $t2, 0x0($t8)
    ctx->pc = 0x1dc3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 10));
    // 0x1dc3c4: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x1dc3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x1dc3c8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1dc3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dc3cc: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x1dc3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x1dc3d0: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x1dc3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x1dc3d4: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x1dc3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1dc3d8: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x1dc3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x1dc3dc: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1dc3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dc3e0: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x1dc3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
    // 0x1dc3e4: 0x8fa900d8  lw          $t1, 0xD8($sp)
    ctx->pc = 0x1dc3e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1dc3e8: 0xad340000  sw          $s4, 0x0($t1)
    ctx->pc = 0x1dc3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 20));
    // 0x1dc3ec: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x1dc3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x1dc3f0: 0x8fab00dc  lw          $t3, 0xDC($sp)
    ctx->pc = 0x1dc3f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1dc3f4: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1dc3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1dc3f8: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1dc3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dc3fc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1dc3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1dc400: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x1dc400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x1dc404: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dc404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc408: 0x8fa900e4  lw          $t1, 0xE4($sp)
    ctx->pc = 0x1dc408u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1dc40c: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1dc40cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1dc410: 0x8fab00e8  lw          $t3, 0xE8($sp)
    ctx->pc = 0x1dc410u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1dc414: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1dc414u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1dc418: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x1dc418u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    // 0x1dc41c: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x1dc41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1dc420: 0xac650074  sw          $a1, 0x74($v1)
    ctx->pc = 0x1dc420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 5));
    // 0x1dc424: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x1dc424u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x1dc428: 0x8fa900f4  lw          $t1, 0xF4($sp)
    ctx->pc = 0x1dc428u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1dc42c: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1dc42cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1dc430: 0x8fab00f0  lw          $t3, 0xF0($sp)
    ctx->pc = 0x1dc430u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1dc434: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1dc434u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1dc438: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1dc438u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1dc43c: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x1dc43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1dc440: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dc440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dc444: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x1dc444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1dc448: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dc448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dc44c: 0x8fa90100  lw          $t1, 0x100($sp)
    ctx->pc = 0x1dc44cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dc450: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x1dc450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x1dc454: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x1dc454u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x1dc458: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x1dc458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x1dc45c: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1dc45cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1dc460: 0x8fab010c  lw          $t3, 0x10C($sp)
    ctx->pc = 0x1dc460u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x1dc464: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x1dc464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x1dc468: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1dc468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1dc46c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1dc46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1dc470: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x1dc470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1dc474: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1dc474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1dc478: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x1dc478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1dc47c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dc47cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dc480: 0x8fa900c8  lw          $t1, 0xC8($sp)
    ctx->pc = 0x1dc480u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1dc484: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x1dc484u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x1dc488: 0x8fab0114  lw          $t3, 0x114($sp)
    ctx->pc = 0x1dc488u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x1dc48c: 0xe56000c0  swc1        $f0, 0xC0($t3)
    ctx->pc = 0x1dc48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 192), bits); }
    // 0x1dc490: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1dc490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1dc494: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dc494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dc498: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x1dc498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1dc49c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dc49cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1dc4a0: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x1dc4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1dc4a4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dc4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dc4a8: 0x8fa9011c  lw          $t1, 0x11C($sp)
    ctx->pc = 0x1dc4a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1dc4ac: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x1dc4acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x1dc4b0u;
}
