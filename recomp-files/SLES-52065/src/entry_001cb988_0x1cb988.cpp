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

// Function: entry_001cb988
// Address: 0x1cb988 - 0x1cb9c0
void entry_001cb988_0x1cb988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb988_0x1cb988");
#endif

    ctx->pc = 0x1cb988u;

    // 0x1cb988: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1cb988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1cb98c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1cb98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1cb990: 0x9042274c  lbu         $v0, 0x274C($v0)
    ctx->pc = 0x1cb990u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10060)));
    // 0x1cb994: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1cb994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1cb998: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CB998u;
    {
        const bool branch_taken_0x1cb998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB998u;
        // 0x1cb99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb998) {
            ctx->pc = 0x1CB9D4u;
            return;
        }
    }
    ctx->pc = 0x1CB9A0u;
    // 0x1cb9a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cb9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb9a4: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB9A4u;
    {
        const bool branch_taken_0x1cb9a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9A4u;
        // 0x1cb9a8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9a4) {
            ctx->pc = 0x1CB9C4u;
            return;
        }
    }
    ctx->pc = 0x1CB9ACu;
    // 0x1cb9ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cb9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb9b0: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB9B0u;
    {
        const bool branch_taken_0x1cb9b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9B0u;
        // 0x1cb9b4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9b0) {
            ctx->pc = 0x1CB9C0u;
            return;
        }
    }
    ctx->pc = 0x1CB9B8u;
    // 0x1cb9b8: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB9B8u;
    {
        const bool branch_taken_0x1cb9b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb9b8) {
            ctx->pc = 0x1CB9CCu;
            return;
        }
    }
    ctx->pc = 0x1CB9C0u;
}
