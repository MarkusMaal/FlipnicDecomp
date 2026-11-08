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

// Function: entry_001393b8
// Address: 0x1393b8 - 0x139414
void entry_001393b8_0x1393b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001393b8_0x1393b8");
#endif

    ctx->pc = 0x1393b8u;

    // 0x1393b8: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1393b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1393bc: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1393bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1393c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1393c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1393c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1393C4u;
    {
        const bool branch_taken_0x1393c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1393c4) {
            ctx->pc = 0x139414u;
            return;
        }
    }
    ctx->pc = 0x1393CCu;
    // 0x1393cc: 0x8f8685c0  lw          $a2, -0x7A40($gp)
    ctx->pc = 0x1393ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936000)));
    // 0x1393d0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1393d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1393d4: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x1393d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1393d8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1393d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1393dc: 0x34440104  ori         $a0, $v0, 0x104
    ctx->pc = 0x1393dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)260);
    // 0x1393e0: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x1393e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1393e4: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x1393e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x1393e8: 0x34428020  ori         $v0, $v0, 0x8020
    ctx->pc = 0x1393e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32800);
    // 0x1393ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1393ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1393f0: 0xa1450003  sb          $a1, 0x3($t2)
    ctx->pc = 0x1393f0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1393f4: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x1393f4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1393f8: 0xad460004  sw          $a2, 0x4($t2)
    ctx->pc = 0x1393f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 6));
    // 0x1393fc: 0xa5470000  sh          $a3, 0x0($t2)
    ctx->pc = 0x1393fcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x139400: 0xad440008  sw          $a0, 0x8($t2)
    ctx->pc = 0x139400u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 4));
    // 0x139404: 0xad42000c  sw          $v0, 0xC($t2)
    ctx->pc = 0x139404u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
    // 0x139408: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13940c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x139410: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x139410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x139414u;
}
