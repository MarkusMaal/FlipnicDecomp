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

// Function: entry_001f8d1c
// Address: 0x1f8d1c - 0x1f8d30
void entry_001f8d1c_0x1f8d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8d1c_0x1f8d1c");
#endif

    ctx->pc = 0x1f8d1cu;

    // 0x1f8d1c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8D1Cu;
    {
        const bool branch_taken_0x1f8d1c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D1Cu;
        // 0x1f8d20: 0x26231680  addiu       $v1, $s1, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d1c) {
            ctx->pc = 0x1F8D30u;
            return;
        }
    }
    ctx->pc = 0x1F8D24u;
    // 0x1f8d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8d28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8D28u;
    {
        const bool branch_taken_0x1f8d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D28u;
        // 0x1f8d2c: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d28) {
            ctx->pc = 0x1F8D38u;
            return;
        }
    }
    ctx->pc = 0x1F8D30u;
}
