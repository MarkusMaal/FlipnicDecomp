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

// Function: entry_00208908
// Address: 0x208908 - 0x208924
void entry_00208908_0x208908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208908_0x208908");
#endif

    ctx->pc = 0x208908u;

    // 0x208908: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x208908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x20890c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20890Cu;
    {
        const bool branch_taken_0x20890c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20890Cu;
        // 0x208910: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20890c) {
            ctx->pc = 0x208960u;
            return;
        }
    }
    ctx->pc = 0x208914u;
    // 0x208914: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208914u;
    {
        const bool branch_taken_0x208914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208914) {
            ctx->pc = 0x208924u;
            return;
        }
    }
    ctx->pc = 0x20891Cu;
    // 0x20891c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x20891Cu;
    {
        const bool branch_taken_0x20891c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20891Cu;
        // 0x208920: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20891c) {
            ctx->pc = 0x20899Cu;
            return;
        }
    }
    ctx->pc = 0x208924u;
}
