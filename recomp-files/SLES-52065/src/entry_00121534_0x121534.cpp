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

// Function: entry_00121534
// Address: 0x121534 - 0x12154c
void entry_00121534_0x121534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121534_0x121534");
#endif

    ctx->pc = 0x121534u;

    // 0x121534: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x121534u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x121538: 0x261082b  sltu        $at, $s3, $at
    ctx->pc = 0x121538u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x12153c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x12153Cu;
    {
        const bool branch_taken_0x12153c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12153c) {
            ctx->pc = 0x12154Cu;
            return;
        }
    }
    ctx->pc = 0x121544u;
    // 0x121544: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121544u;
    {
        const bool branch_taken_0x121544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121544u;
        // 0x121548: 0x139840  sll         $s3, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121544) {
            ctx->pc = 0x121554u;
            return;
        }
    }
    ctx->pc = 0x12154Cu;
}
