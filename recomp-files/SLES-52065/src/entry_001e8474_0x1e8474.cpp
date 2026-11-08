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

// Function: entry_001e8474
// Address: 0x1e8474 - 0x1e848c
void entry_001e8474_0x1e8474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8474_0x1e8474");
#endif

    ctx->pc = 0x1e8474u;

    // 0x1e8474: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1e8474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1e8478: 0x281082b  sltu        $at, $s4, $at
    ctx->pc = 0x1e8478u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e847c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E847Cu;
    {
        const bool branch_taken_0x1e847c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e847c) {
            ctx->pc = 0x1E848Cu;
            return;
        }
    }
    ctx->pc = 0x1E8484u;
    // 0x1e8484: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8484u;
    {
        const bool branch_taken_0x1e8484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8484u;
        // 0x1e8488: 0x14a040  sll         $s4, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8484) {
            ctx->pc = 0x1E8494u;
            return;
        }
    }
    ctx->pc = 0x1E848Cu;
}
