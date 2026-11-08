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

// Function: entry_001ffe18
// Address: 0x1ffe18 - 0x1ffe30
void entry_001ffe18_0x1ffe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffe18_0x1ffe18");
#endif

    ctx->pc = 0x1ffe18u;

    // 0x1ffe18: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFE18u;
    {
        const bool branch_taken_0x1ffe18 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1FFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE18u;
        // 0x1ffe1c: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe18) {
            ctx->pc = 0x1FFE30u;
            return;
        }
    }
    ctx->pc = 0x1FFE20u;
    // 0x1ffe20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ffe20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ffe24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ffe24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ffe28: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFE28u;
    {
        const bool branch_taken_0x1ffe28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE28u;
        // 0x1ffe2c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe28) {
            ctx->pc = 0x1FFE34u;
            return;
        }
    }
    ctx->pc = 0x1FFE30u;
}
