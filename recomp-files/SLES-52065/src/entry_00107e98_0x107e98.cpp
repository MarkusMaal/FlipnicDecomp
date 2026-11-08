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

// Function: entry_00107e98
// Address: 0x107e98 - 0x107eb4
void entry_00107e98_0x107e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107e98_0x107e98");
#endif

    ctx->pc = 0x107e98u;

    // 0x107e98: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x107e98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x107e9c: 0x2aa30018  slti        $v1, $s5, 0x18
    ctx->pc = 0x107e9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x107ea0: 0x1460ff6d  bnez        $v1, . + 4 + (-0x93 << 2)
    ctx->pc = 0x107EA0u;
    {
        const bool branch_taken_0x107ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EA0u;
        // 0x107ea4: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ea0) {
            ctx->pc = 0x107C58u;
            return;
        }
    }
    ctx->pc = 0x107EA8u;
    // 0x107ea8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x107ea8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107eac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x107EACu;
    {
        const bool branch_taken_0x107eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EACu;
        // 0x107eb0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107eac) {
            ctx->pc = 0x107EE0u;
            return;
        }
    }
    ctx->pc = 0x107EB4u;
}
