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

// Function: entry_001f8d38
// Address: 0x1f8d38 - 0x1f8d4c
void entry_001f8d38_0x1f8d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8d38_0x1f8d38");
#endif

    ctx->pc = 0x1f8d38u;

    // 0x1f8d38: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8D38u;
    {
        const bool branch_taken_0x1f8d38 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D38u;
        // 0x1f8d3c: 0x26231680  addiu       $v1, $s1, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d38) {
            ctx->pc = 0x1F8D4Cu;
            return;
        }
    }
    ctx->pc = 0x1F8D40u;
    // 0x1f8d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8d44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8D44u;
    {
        const bool branch_taken_0x1f8d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D44u;
        // 0x1f8d48: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d44) {
            ctx->pc = 0x1F8D54u;
            return;
        }
    }
    ctx->pc = 0x1F8D4Cu;
}
