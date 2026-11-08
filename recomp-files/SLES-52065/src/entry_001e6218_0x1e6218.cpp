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

// Function: entry_001e6218
// Address: 0x1e6218 - 0x1e6228
void entry_001e6218_0x1e6218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6218_0x1e6218");
#endif

    ctx->pc = 0x1e6218u;

    // 0x1e6218: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6218u;
    {
        const bool branch_taken_0x1e6218 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6218u;
        // 0x1e621c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6218) {
            ctx->pc = 0x1E6228u;
            return;
        }
    }
    ctx->pc = 0x1E6220u;
    // 0x1e6220: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1E6220u;
    {
        const bool branch_taken_0x1e6220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6220u;
        // 0x1e6224: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6220) {
            ctx->pc = 0x1E6374u;
            return;
        }
    }
    ctx->pc = 0x1E6228u;
}
