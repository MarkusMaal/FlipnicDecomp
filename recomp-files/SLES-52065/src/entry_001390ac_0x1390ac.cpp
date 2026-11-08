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

// Function: entry_001390ac
// Address: 0x1390ac - 0x139130
void entry_001390ac_0x1390ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001390ac_0x1390ac");
#endif

    ctx->pc = 0x1390acu;

    // 0x1390ac: 0x0  nop
    ctx->pc = 0x1390acu;
    // NOP
    // 0x1390b0: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1390b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1390b4: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1390b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1390b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1390b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1390bc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1390BCu;
    {
        const bool branch_taken_0x1390bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1390bc) {
            ctx->pc = 0x139130u;
            return;
        }
    }
    ctx->pc = 0x1390C4u;
    // 0x1390c4: 0x16a0001a  bnez        $s5, . + 4 + (0x1A << 2)
    ctx->pc = 0x1390C4u;
    {
        const bool branch_taken_0x1390c4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1390c4) {
            ctx->pc = 0x139130u;
            return;
        }
    }
    ctx->pc = 0x1390CCu;
    // 0x1390cc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1390ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1390d0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1390d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1390d4: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1390d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1390d8: 0x24ea0001  addiu       $t2, $a3, 0x1
    ctx->pc = 0x1390d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1390dc: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x1390dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1390e0: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x1390e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1390e4: 0x1465024  and         $t2, $t2, $a2
    ctx->pc = 0x1390e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 6));
    // 0x1390e8: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1390e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x1390ec: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x1390ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x1390f0: 0x34cb0104  ori         $t3, $a2, 0x104
    ctx->pc = 0x1390f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)260);
    // 0x1390f4: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x1390f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1390f8: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x1390f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1390fc: 0x3c066d00  lui         $a2, 0x6D00
    ctx->pc = 0x1390fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27904 << 16));
    // 0x139100: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x139100u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139104: 0x34c48021  ori         $a0, $a2, 0x8021
    ctx->pc = 0x139104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32801);
    // 0x139108: 0x8c6301a8  lw          $v1, 0x1A8($v1)
    ctx->pc = 0x139108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 424)));
    // 0x13910c: 0x1442025  or          $a0, $t2, $a0
    ctx->pc = 0x13910cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x139110: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x139110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x139114: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x139114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x139118: 0xa4ac0000  sh          $t4, 0x0($a1)
    ctx->pc = 0x139118u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x13911c: 0xacab0008  sw          $t3, 0x8($a1)
    ctx->pc = 0x13911cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 11));
    // 0x139120: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x139120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x139124: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139128: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x139128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13912c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13912cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x139130u;
}
