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

// Function: entry_001f8bc8
// Address: 0x1f8bc8 - 0x1f8bd8
void entry_001f8bc8_0x1f8bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8bc8_0x1f8bc8");
#endif

    ctx->pc = 0x1f8bc8u;

    // 0x1f8bc8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8BC8u;
    {
        const bool branch_taken_0x1f8bc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BC8u;
        // 0x1f8bcc: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bc8) {
            ctx->pc = 0x1F8BD8u;
            return;
        }
    }
    ctx->pc = 0x1F8BD0u;
    // 0x1f8bd0: 0x8e62d6b8  lw          $v0, -0x2948($s3)
    ctx->pc = 0x1f8bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956728)));
    // 0x1f8bd4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1f8bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1f8bd8u;
}
