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

// Function: entry_001fbf10
// Address: 0x1fbf10 - 0x1fbf68
void entry_001fbf10_0x1fbf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbf10_0x1fbf10");
#endif

    ctx->pc = 0x1fbf10u;

    // 0x1fbf10: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fbf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fbf14: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1fbf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1fbf18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1fbf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fbf1c: 0x2466fffc  addiu       $a2, $v1, -0x4
    ctx->pc = 0x1fbf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1fbf20: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x1fbf20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x1fbf24: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FBF24u;
    {
        const bool branch_taken_0x1fbf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF24u;
        // 0x1fbf28: 0x2cc20014  sltiu       $v0, $a2, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf24) {
            ctx->pc = 0x1FBF7Cu;
            return;
        }
    }
    ctx->pc = 0x1FBF2Cu;
    // 0x1fbf2c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FBF2Cu;
    {
        const bool branch_taken_0x1fbf2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF2Cu;
        // 0x1fbf30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf2c) {
            ctx->pc = 0x1FBF68u;
            return;
        }
    }
    ctx->pc = 0x1FBF34u;
    // 0x1fbf34: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1fbf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1fbf38: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1fbf38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1fbf3c: 0x2cc2001c  sltiu       $v0, $a2, 0x1C
    ctx->pc = 0x1fbf3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x1fbf40: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FBF40u;
    {
        const bool branch_taken_0x1fbf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF40u;
        // 0x1fbf44: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf40) {
            ctx->pc = 0x1FBF68u;
            return;
        }
    }
    ctx->pc = 0x1FBF48u;
    // 0x1fbf48: 0x2cc20024  sltiu       $v0, $a2, 0x24
    ctx->pc = 0x1fbf48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x1fbf4c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1fbf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1fbf50: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1fbf50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1fbf54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBF54u;
    {
        const bool branch_taken_0x1fbf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF54u;
        // 0x1fbf58: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf54) {
            ctx->pc = 0x1FBF68u;
            return;
        }
    }
    ctx->pc = 0x1FBF5Cu;
    // 0x1fbf5c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1fbf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1fbf60: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1fbf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1fbf64: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1fbf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x1fbf68u;
}
