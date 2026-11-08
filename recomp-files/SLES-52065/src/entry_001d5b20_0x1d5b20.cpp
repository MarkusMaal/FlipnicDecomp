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

// Function: entry_001d5b20
// Address: 0x1d5b20 - 0x1d5b38
void entry_001d5b20_0x1d5b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5b20_0x1d5b20");
#endif

    ctx->pc = 0x1d5b20u;

    // 0x1d5b20: 0x12020139  beq         $s0, $v0, . + 4 + (0x139 << 2)
    ctx->pc = 0x1D5B20u;
    {
        const bool branch_taken_0x1d5b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B20u;
        // 0x1d5b24: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b20) {
            ctx->pc = 0x1D6008u;
            return;
        }
    }
    ctx->pc = 0x1D5B28u;
    // 0x1d5b28: 0x52020155  beql        $s0, $v0, . + 4 + (0x155 << 2)
    ctx->pc = 0x1D5B28u;
    {
        const bool branch_taken_0x1d5b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d5b28) {
            ctx->pc = 0x1D5B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5B28u;
            // 0x1d5b2c: 0x1288c0  sll         $s1, $s2, 3 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6080u;
            return;
        }
    }
    ctx->pc = 0x1D5B30u;
    // 0x1d5b30: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x1D5B30u;
    {
        const bool branch_taken_0x1d5b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b30) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5B38u;
}
