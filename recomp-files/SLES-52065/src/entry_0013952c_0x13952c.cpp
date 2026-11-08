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

// Function: entry_0013952c
// Address: 0x13952c - 0x1395e0
void entry_0013952c_0x13952c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013952c_0x13952c");
#endif

    ctx->pc = 0x13952cu;

    // 0x13952c: 0x0  nop
    ctx->pc = 0x13952cu;
    // NOP
    // 0x139530: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x139530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x139534: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x139534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x139538: 0x3c0a0100  lui         $t2, 0x100
    ctx->pc = 0x139538u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)256 << 16));
    // 0x13953c: 0x3c0d6c00  lui         $t5, 0x6C00
    ctx->pc = 0x13953cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)27648 << 16));
    // 0x139540: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x139540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x139544: 0x35ae8023  ori         $t6, $t5, 0x8023
    ctx->pc = 0x139544u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32803);
    // 0x139548: 0x75c00  sll         $t3, $a3, 16
    ctx->pc = 0x139548u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x13954c: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x13954cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x139550: 0x354a0104  ori         $t2, $t2, 0x104
    ctx->pc = 0x139550u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)260);
    // 0x139554: 0x16e7025  or          $t6, $t3, $t6
    ctx->pc = 0x139554u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) | GPR_U64(ctx, 14));
    // 0x139558: 0x35ad8123  ori         $t5, $t5, 0x8123
    ctx->pc = 0x139558u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)33059);
    // 0x13955c: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x13955cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x139560: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x139560u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x139564: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x139564u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139568: 0x240c0060  addiu       $t4, $zero, 0x60
    ctx->pc = 0x139568u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x13956c: 0x8c630180  lw          $v1, 0x180($v1)
    ctx->pc = 0x13956cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
    // 0x139570: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x139570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x139574: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x139574u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x139578: 0xa4c70000  sh          $a3, 0x0($a2)
    ctx->pc = 0x139578u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x13957c: 0xacca0008  sw          $t2, 0x8($a2)
    ctx->pc = 0x13957cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 10));
    // 0x139580: 0xacce000c  sw          $t6, 0xC($a2)
    ctx->pc = 0x139580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 14));
    // 0x139584: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x139584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x139588: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x139588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13958c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x13958cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x139590: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x139590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x139594: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x139594u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x139598: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x139598u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13959c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13959cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1395a0: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x1395a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x1395a4: 0xac6a0008  sw          $t2, 0x8($v1)
    ctx->pc = 0x1395a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
    // 0x1395a8: 0xac6b000c  sw          $t3, 0xC($v1)
    ctx->pc = 0x1395a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 11));
    // 0x1395ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1395acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1395b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1395b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1395b4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1395b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1395b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1395b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1395bc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1395bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1395c0: 0xa04c0003  sb          $t4, 0x3($v0)
    ctx->pc = 0x1395c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 12));
    // 0x1395c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1395c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1395c8: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1395c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1395cc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1395ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1395d0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1395d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1395d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1395d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1395d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1395d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1395dc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1395dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1395e0u;
}
