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

// Function: entry_0013927c
// Address: 0x13927c - 0x1392e0
void entry_0013927c_0x13927c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013927c_0x13927c");
#endif

    ctx->pc = 0x13927cu;

    // 0x13927c: 0x0  nop
    ctx->pc = 0x13927cu;
    // NOP
    // 0x139280: 0x16a00017  bnez        $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x139280u;
    {
        const bool branch_taken_0x139280 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x139280) {
            ctx->pc = 0x1392E0u;
            return;
        }
    }
    ctx->pc = 0x139288u;
    // 0x139288: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13928c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13928cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x139290: 0x34650104  ori         $a1, $v1, 0x104
    ctx->pc = 0x139290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)260);
    // 0x139294: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x139294u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x139298: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x139298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x13929c: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x13929cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1392a0: 0x34638023  ori         $v1, $v1, 0x8023
    ctx->pc = 0x1392a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32803);
    // 0x1392a4: 0x25d5021  addu        $t2, $s2, $sp
    ctx->pc = 0x1392a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1392a8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1392a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1392ac: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x1392acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1392b0: 0xa04b0003  sb          $t3, 0x3($v0)
    ctx->pc = 0x1392b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 11));
    // 0x1392b4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1392b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1392b8: 0x8d440180  lw          $a0, 0x180($t2)
    ctx->pc = 0x1392b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 384)));
    // 0x1392bc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1392bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1392c0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1392c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1392c4: 0xa4470000  sh          $a3, 0x0($v0)
    ctx->pc = 0x1392c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x1392c8: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1392c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1392cc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1392ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1392d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1392d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1392d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1392d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1392d8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1392D8u;
    {
        const bool branch_taken_0x1392d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1392DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392D8u;
        // 0x1392dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1392d8) {
            ctx->pc = 0x13931Cu;
            return;
        }
    }
    ctx->pc = 0x1392E0u;
}
