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

// Function: entry_001da6c0
// Address: 0x1da6c0 - 0x1da978
void entry_001da6c0_0x1da6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da6c0_0x1da6c0");
#endif

    ctx->pc = 0x1da6c0u;

    // 0x1da6c0: 0x27c700b0  addiu       $a3, $fp, 0xB0
    ctx->pc = 0x1da6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 176));
    // 0x1da6c4: 0x24c67344  addiu       $a2, $a2, 0x7344
    ctx->pc = 0x1da6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29508));
    // 0x1da6c8: 0x27ce0010  addiu       $t6, $fp, 0x10
    ctx->pc = 0x1da6c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x1da6cc: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1da6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1da6d0: 0x2502000c  addiu       $v0, $t0, 0xC
    ctx->pc = 0x1da6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x1da6d4: 0xafa6005c  sw          $a2, 0x5C($sp)
    ctx->pc = 0x1da6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 6));
    // 0x1da6d8: 0x1d83021  addu        $a2, $t6, $t8
    ctx->pc = 0x1da6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
    // 0x1da6dc: 0x27cf0030  addiu       $t7, $fp, 0x30
    ctx->pc = 0x1da6dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    // 0x1da6e0: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x1da6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x1da6e4: 0x27c90040  addiu       $t1, $fp, 0x40
    ctx->pc = 0x1da6e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    // 0x1da6e8: 0x3c26021  addu        $t4, $fp, $v0
    ctx->pc = 0x1da6e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1da6ec: 0x1e83021  addu        $a2, $t7, $t0
    ctx->pc = 0x1da6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x1da6f0: 0x27ca0080  addiu       $t2, $fp, 0x80
    ctx->pc = 0x1da6f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
    // 0x1da6f4: 0x25040008  addiu       $a0, $t0, 0x8
    ctx->pc = 0x1da6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1da6f8: 0xafac0060  sw          $t4, 0x60($sp)
    ctx->pc = 0x1da6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 12));
    // 0x1da6fc: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x1da6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x1da700: 0x1483021  addu        $a2, $t2, $t0
    ctx->pc = 0x1da700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1da704: 0x27c50090  addiu       $a1, $fp, 0x90
    ctx->pc = 0x1da704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x1da708: 0x27cd0050  addiu       $t5, $fp, 0x50
    ctx->pc = 0x1da708u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x1da70c: 0x1226021  addu        $t4, $t1, $v0
    ctx->pc = 0x1da70cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1da710: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x1da710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x1da714: 0xafac0020  sw          $t4, 0x20($sp)
    ctx->pc = 0x1da714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 12));
    // 0x1da718: 0x1a26021  addu        $t4, $t5, $v0
    ctx->pc = 0x1da718u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1da71c: 0x27d10070  addiu       $s1, $fp, 0x70
    ctx->pc = 0x1da71cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    // 0x1da720: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1da720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1da724: 0x27cb00a0  addiu       $t3, $fp, 0xA0
    ctx->pc = 0x1da724u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 30), 160));
    // 0x1da728: 0xafac002c  sw          $t4, 0x2C($sp)
    ctx->pc = 0x1da728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 12));
    // 0x1da72c: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1da72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1da730: 0x2283021  addu        $a2, $s1, $t0
    ctx->pc = 0x1da730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x1da734: 0x1626021  addu        $t4, $t3, $v0
    ctx->pc = 0x1da734u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1da738: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x1da738u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1da73c: 0x27d30060  addiu       $s3, $fp, 0x60
    ctx->pc = 0x1da73cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
    // 0x1da740: 0xafac003c  sw          $t4, 0x3C($sp)
    ctx->pc = 0x1da740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 12));
    // 0x1da744: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x1da744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x1da748: 0x3c83021  addu        $a2, $fp, $t0
    ctx->pc = 0x1da748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x1da74c: 0x27d000d0  addiu       $s0, $fp, 0xD0
    ctx->pc = 0x1da74cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 208));
    // 0x1da750: 0x2626021  addu        $t4, $s3, $v0
    ctx->pc = 0x1da750u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1da754: 0x25030010  addiu       $v1, $t0, 0x10
    ctx->pc = 0x1da754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1da758: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1da758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1da75c: 0xafac0044  sw          $t4, 0x44($sp)
    ctx->pc = 0x1da75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 12));
    // 0x1da760: 0x2036021  addu        $t4, $s0, $v1
    ctx->pc = 0x1da760u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1da764: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x1da764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1da768: 0xafac0050  sw          $t4, 0x50($sp)
    ctx->pc = 0x1da768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 12));
    // 0x1da76c: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x1da76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x1da770: 0x1e23021  addu        $a2, $t7, $v0
    ctx->pc = 0x1da770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1da774: 0x1c46021  addu        $t4, $t6, $a0
    ctx->pc = 0x1da774u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1da778: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x1da778u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1da77c: 0xafac000c  sw          $t4, 0xC($sp)
    ctx->pc = 0x1da77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 12));
    // 0x1da780: 0x1e46021  addu        $t4, $t7, $a0
    ctx->pc = 0x1da780u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1da784: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x1da784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x1da788: 0x1a83021  addu        $a2, $t5, $t0
    ctx->pc = 0x1da788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x1da78c: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x1da78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x1da790: 0x1386021  addu        $t4, $t1, $t8
    ctx->pc = 0x1da790u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 24)));
    // 0x1da794: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x1da794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
    // 0x1da798: 0x2383021  addu        $a2, $s1, $t8
    ctx->pc = 0x1da798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 24)));
    // 0x1da79c: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x1da79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
    // 0x1da7a0: 0x1b86021  addu        $t4, $t5, $t8
    ctx->pc = 0x1da7a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 24)));
    // 0x1da7a4: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x1da7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x1da7a8: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1da7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1da7ac: 0x3c4b021  addu        $s6, $fp, $a0
    ctx->pc = 0x1da7acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x1da7b0: 0xafac0070  sw          $t4, 0x70($sp)
    ctx->pc = 0x1da7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 12));
    // 0x1da7b4: 0x24c67344  addiu       $a2, $a2, 0x7344
    ctx->pc = 0x1da7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29508));
    // 0x1da7b8: 0x2c0602d  daddu       $t4, $s6, $zero
    ctx->pc = 0x1da7b8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7bc: 0xafac0030  sw          $t4, 0x30($sp)
    ctx->pc = 0x1da7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 12));
    // 0x1da7c0: 0xb86021  addu        $t4, $a1, $t8
    ctx->pc = 0x1da7c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x1da7c4: 0x3c8a021  addu        $s4, $fp, $t0
    ctx->pc = 0x1da7c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x1da7c8: 0x128a821  addu        $s5, $t1, $t0
    ctx->pc = 0x1da7c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1da7cc: 0x2689821  addu        $s3, $s3, $t0
    ctx->pc = 0x1da7ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x1da7d0: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x1da7d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1da7d4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1da7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1da7d8: 0x2183021  addu        $a2, $s0, $t8
    ctx->pc = 0x1da7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 24)));
    // 0x1da7dc: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x1da7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
    // 0x1da7e0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1da7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1da7e4: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x1da7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1da7e8: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x1da7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1da7ec: 0x24c6a000  addiu       $a2, $a2, -0x6000
    ctx->pc = 0x1da7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942720));
    // 0x1da7f0: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1da7f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1da7f4: 0xafa70054  sw          $a3, 0x54($sp)
    ctx->pc = 0x1da7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 7));
    // 0x1da7f8: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x1da7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1da7fc: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1da7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1da800: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1da800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da804: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x1da804u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x1da808: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1da808u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1da80c: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x1da80cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x1da810: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1da810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1da814: 0x24c6a03c  addiu       $a2, $a2, -0x5FC4
    ctx->pc = 0x1da814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942780));
    // 0x1da818: 0xafb90000  sw          $t9, 0x0($sp)
    ctx->pc = 0x1da818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 25));
    // 0x1da81c: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x1da81cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x1da820: 0x3c0c0022  lui         $t4, 0x22
    ctx->pc = 0x1da820u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)34 << 16));
    // 0x1da824: 0x258ca000  addiu       $t4, $t4, -0x6000
    ctx->pc = 0x1da824u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294942720));
    // 0x1da828: 0x24120040  addiu       $s2, $zero, 0x40
    ctx->pc = 0x1da828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1da82c: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x1da82cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
    // 0x1da830: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x1da830u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x1da834: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x1da834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x1da838: 0x1f87821  addu        $t7, $t7, $t8
    ctx->pc = 0x1da838u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
    // 0x1da83c: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x1da83cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1da840: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1da840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1da844: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x1da844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da848: 0x3d8f021  addu        $fp, $fp, $t8
    ctx->pc = 0x1da848u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 24)));
    // 0x1da84c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1da84cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da850: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1da850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1da854: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1da854u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1da858: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1da858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1da85c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1da85cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da860: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1da860u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1da864: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1da864u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1da868: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x1da868u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x1da86c: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x1da86cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
    // 0x1da870: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x1da870u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x1da874: 0x8fac000c  lw          $t4, 0xC($sp)
    ctx->pc = 0x1da874u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1da878: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1da878u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x1da87c: 0xaea70000  sw          $a3, 0x0($s5)
    ctx->pc = 0x1da87cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
    // 0x1da880: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1da880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1da884: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x1da884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x1da888: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1da888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da88c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1da88cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1da890: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x1da890u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x1da894: 0x8fac0018  lw          $t4, 0x18($sp)
    ctx->pc = 0x1da894u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1da898: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x1da898u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x1da89c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1da89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da8a0: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x1da8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
    // 0x1da8a4: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x1da8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1da8a8: 0xacd20000  sw          $s2, 0x0($a2)
    ctx->pc = 0x1da8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
    // 0x1da8ac: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x1da8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1da8b0: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x1da8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x1da8b4: 0x8fac0020  lw          $t4, 0x20($sp)
    ctx->pc = 0x1da8b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da8b8: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1da8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x1da8bc: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1da8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1da8c0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1da8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1da8c4: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x1da8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x1da8c8: 0x8fac0028  lw          $t4, 0x28($sp)
    ctx->pc = 0x1da8c8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1da8cc: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x1da8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x1da8d0: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1da8d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8d4: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x1da8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1da8d8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1da8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1da8dc: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x1da8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x1da8e0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1da8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da8e4: 0xaccc0074  sw          $t4, 0x74($a2)
    ctx->pc = 0x1da8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 12));
    // 0x1da8e8: 0xae2c0000  sw          $t4, 0x0($s1)
    ctx->pc = 0x1da8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 12));
    // 0x1da8ec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1da8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da8f0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1da8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1da8f4: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x1da8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1da8f8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1da8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1da8fc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1da8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1da900: 0x8fac0040  lw          $t4, 0x40($sp)
    ctx->pc = 0x1da900u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da904: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x1da904u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x1da908: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1da908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1da90c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1da90cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1da910: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x1da910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1da914: 0xe7c000e0  swc1        $f0, 0xE0($fp)
    ctx->pc = 0x1da914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 224), bits); }
    // 0x1da918: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1da918u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1da91c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1da91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1da920: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1da920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1da924: 0x8fac0050  lw          $t4, 0x50($sp)
    ctx->pc = 0x1da924u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1da928: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x1da928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x1da92c: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1da92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1da930: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1da930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1da934: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1da934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1da938: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1da938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1da93c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1da93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da940: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1da940u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1da944: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1da944u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x1da948: 0x8fac0058  lw          $t4, 0x58($sp)
    ctx->pc = 0x1da948u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1da94c: 0xe58000c0  swc1        $f0, 0xC0($t4)
    ctx->pc = 0x1da94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 192), bits); }
    // 0x1da950: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1da950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1da954: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1da954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1da958: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1da958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1da95c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1da95cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1da960: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x1da960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1da964: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1da964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1da968: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1da968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1da96c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1DA96Cu;
    {
        const bool branch_taken_0x1da96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA96Cu;
        // 0x1da970: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da96c) {
            ctx->pc = 0x1DAA04u;
            return;
        }
    }
    ctx->pc = 0x1DA974u;
    // 0x1da974: 0x0  nop
    ctx->pc = 0x1da974u;
    // NOP
    ctx->pc = 0x1da978u;
}
