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

// Function: entry_0014e4c4
// Address: 0x14e4c4 - 0x14e4dc
void entry_0014e4c4_0x14e4c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e4c4_0x14e4c4");
#endif

    ctx->pc = 0x14e4c4u;

    // 0x14e4c4: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x14e4c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x14e4c8: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x14e4c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x14e4cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E4CCu;
    {
        const bool branch_taken_0x14e4cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e4cc) {
            ctx->pc = 0x14E4DCu;
            return;
        }
    }
    ctx->pc = 0x14E4D4u;
    // 0x14e4d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14E4D4u;
    {
        const bool branch_taken_0x14e4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4D4u;
        // 0x14e4d8: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4d4) {
            ctx->pc = 0x14E4E4u;
            return;
        }
    }
    ctx->pc = 0x14E4DCu;
}
