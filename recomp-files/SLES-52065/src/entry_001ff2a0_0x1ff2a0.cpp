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

// Function: entry_001ff2a0
// Address: 0x1ff2a0 - 0x1ff2f8
void entry_001ff2a0_0x1ff2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff2a0_0x1ff2a0");
#endif

    ctx->pc = 0x1ff2a0u;

    // 0x1ff2a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff2a4: 0x2683d9c8  addiu       $v1, $s4, -0x2638
    ctx->pc = 0x1ff2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
    // 0x1ff2a8: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x1ff2a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1ff2ac: 0x9c650004  lwu         $a1, 0x4($v1)
    ctx->pc = 0x1ff2acu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ff2b0: 0x162300b  movn        $a2, $t3, $v0
    ctx->pc = 0x1ff2b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 11));
    // 0x1ff2b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ff2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff2b8: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x1ff2b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x1ff2bc: 0x442014  dsllv       $a0, $a0, $v0
    ctx->pc = 0x1ff2bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x1ff2c0: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x1ff2c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ff2c4: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x1FF2C4u;
    {
        const bool branch_taken_0x1ff2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2C4u;
        // 0x1ff2c8: 0x2683d9c8  addiu       $v1, $s4, -0x2638 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2c4) {
            ctx->pc = 0x1FF44Cu;
            return;
        }
    }
    ctx->pc = 0x1FF2CCu;
    // 0x1ff2cc: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x1ff2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1ff2d0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FF2D0u;
    {
        const bool branch_taken_0x1ff2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2D0u;
        // 0x1ff2d4: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2d0) {
            ctx->pc = 0x1FF318u;
            return;
        }
    }
    ctx->pc = 0x1FF2D8u;
    // 0x1ff2d8: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1ff2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1ff2dc: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x1ff2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x1ff2e0: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x1ff2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x1ff2e4: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1ff2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1ff2e8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FF2E8u;
    {
        const bool branch_taken_0x1ff2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF2E8u;
        // 0x1ff2ec: 0x244b0004  addiu       $t3, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff2e8) {
            ctx->pc = 0x1FF314u;
            return;
        }
    }
    ctx->pc = 0x1FF2F0u;
    // 0x1ff2f0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ff2f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff2f4: 0x0  nop
    ctx->pc = 0x1ff2f4u;
    // NOP
    ctx->pc = 0x1ff2f8u;
}
