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

// Function: entry_00138b68
// Address: 0x138b68 - 0x138b80
void entry_00138b68_0x138b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138b68_0x138b68");
#endif

    ctx->pc = 0x138b68u;

    // 0x138b68: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x138B68u;
    {
        const bool branch_taken_0x138b68 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x138b68) {
            ctx->pc = 0x138B80u;
            return;
        }
    }
    ctx->pc = 0x138B70u;
    // 0x138b70: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x138b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138b74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x138b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x138b78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x138B78u;
    {
        const bool branch_taken_0x138b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B78u;
        // 0x138b7c: 0xafa500e0  sw          $a1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b78) {
            ctx->pc = 0x138BA4u;
            return;
        }
    }
    ctx->pc = 0x138B80u;
}
