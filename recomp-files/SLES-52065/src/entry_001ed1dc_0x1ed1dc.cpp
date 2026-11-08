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

// Function: entry_001ed1dc
// Address: 0x1ed1dc - 0x1ed1ec
void entry_001ed1dc_0x1ed1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed1dc_0x1ed1dc");
#endif

    ctx->pc = 0x1ed1dcu;

    // 0x1ed1dc: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED1DCu;
    {
        const bool branch_taken_0x1ed1dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1DCu;
        // 0x1ed1e0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1dc) {
            ctx->pc = 0x1ED1ECu;
            return;
        }
    }
    ctx->pc = 0x1ED1E4u;
    // 0x1ed1e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ED1E4u;
    {
        const bool branch_taken_0x1ed1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1E4u;
        // 0x1ed1e8: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1e4) {
            ctx->pc = 0x1ED1F0u;
            return;
        }
    }
    ctx->pc = 0x1ED1ECu;
}
