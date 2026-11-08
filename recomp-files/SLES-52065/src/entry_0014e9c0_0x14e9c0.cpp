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

// Function: entry_0014e9c0
// Address: 0x14e9c0 - 0x14e9d0
void entry_0014e9c0_0x14e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e9c0_0x14e9c0");
#endif

    ctx->pc = 0x14e9c0u;

    // 0x14e9c0: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x14e9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x14e9c4: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x14e9c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14e9c8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x14E9C8u;
    {
        const bool branch_taken_0x14e9c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E9C8u;
        // 0x14e9cc: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e9c8) {
            ctx->pc = 0x14E9ECu;
            return;
        }
    }
    ctx->pc = 0x14E9D0u;
}
