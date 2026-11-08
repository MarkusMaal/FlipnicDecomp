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

// Function: entry_0014d52c
// Address: 0x14d52c - 0x14d544
void entry_0014d52c_0x14d52c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d52c_0x14d52c");
#endif

    ctx->pc = 0x14d52cu;

    // 0x14d52c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x14d530: 0x3f080  sll         $fp, $v1, 2
    ctx->pc = 0x14d530u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14d534: 0x2de8023  subu        $s0, $s6, $fp
    ctx->pc = 0x14d534u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x14d538: 0x216082b  sltu        $at, $s0, $s6
    ctx->pc = 0x14d538u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x14d53c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14D53Cu;
    {
        const bool branch_taken_0x14d53c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D53Cu;
        // 0x14d540: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d53c) {
            ctx->pc = 0x14D574u;
            return;
        }
    }
    ctx->pc = 0x14D544u;
}
