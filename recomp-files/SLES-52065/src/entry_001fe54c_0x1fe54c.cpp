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

// Function: entry_001fe54c
// Address: 0x1fe54c - 0x1fe568
void entry_001fe54c_0x1fe54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe54c_0x1fe54c");
#endif

    ctx->pc = 0x1fe54cu;

    // 0x1fe54c: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x1fe54cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1fe550: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1fe550u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1fe554: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fe554u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fe558: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x1FE558u;
    {
        const bool branch_taken_0x1fe558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE558u;
        // 0x1fe55c: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe558) {
            ctx->pc = 0x1FE428u;
            return;
        }
    }
    ctx->pc = 0x1FE560u;
    // 0x1fe560: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1FE560u;
    {
        const bool branch_taken_0x1fe560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE560u;
        // 0x1fe564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe560) {
            ctx->pc = 0x1FE6D4u;
            return;
        }
    }
    ctx->pc = 0x1FE568u;
}
