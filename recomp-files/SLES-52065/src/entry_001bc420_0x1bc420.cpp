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

// Function: entry_001bc420
// Address: 0x1bc420 - 0x1bc454
void entry_001bc420_0x1bc420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc420_0x1bc420");
#endif

    ctx->pc = 0x1bc420u;

    // 0x1bc420: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1bc420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1bc424: 0x240200be  addiu       $v0, $zero, 0xBE
    ctx->pc = 0x1bc424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x1bc428: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1BC428u;
    {
        const bool branch_taken_0x1bc428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC428u;
        // 0x1bc42c: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc428) {
            ctx->pc = 0x1BC4DCu;
            return;
        }
    }
    ctx->pc = 0x1BC430u;
    // 0x1bc430: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BC430u;
    {
        const bool branch_taken_0x1bc430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC430u;
        // 0x1bc434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc430) {
            ctx->pc = 0x1BC4B0u;
            return;
        }
    }
    ctx->pc = 0x1BC438u;
    // 0x1bc438: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1bc438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bc43c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BC43Cu;
    {
        const bool branch_taken_0x1bc43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC43Cu;
        // 0x1bc440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc43c) {
            ctx->pc = 0x1BC484u;
            return;
        }
    }
    ctx->pc = 0x1BC444u;
    // 0x1bc444: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC444u;
    {
        const bool branch_taken_0x1bc444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC444u;
        // 0x1bc448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc444) {
            ctx->pc = 0x1BC454u;
            return;
        }
    }
    ctx->pc = 0x1BC44Cu;
    // 0x1bc44c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1BC44Cu;
    {
        const bool branch_taken_0x1bc44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC44Cu;
        // 0x1bc450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc44c) {
            ctx->pc = 0x1BC4ECu;
            return;
        }
    }
    ctx->pc = 0x1BC454u;
}
