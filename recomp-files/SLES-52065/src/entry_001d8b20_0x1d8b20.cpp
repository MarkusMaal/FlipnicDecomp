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

// Function: entry_001d8b20
// Address: 0x1d8b20 - 0x1d8b30
void entry_001d8b20_0x1d8b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8b20_0x1d8b20");
#endif

    ctx->pc = 0x1d8b20u;

    // 0x1d8b20: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D8B20u;
    {
        const bool branch_taken_0x1d8b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B20u;
        // 0x1d8b24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b20) {
            ctx->pc = 0x1D8B88u;
            return;
        }
    }
    ctx->pc = 0x1D8B28u;
    // 0x1d8b28: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1D8B28u;
    {
        const bool branch_taken_0x1d8b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B28u;
        // 0x1d8b2c: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b28) {
            ctx->pc = 0x1D8BB0u;
            return;
        }
    }
    ctx->pc = 0x1D8B30u;
}
