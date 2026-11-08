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

// Function: entry_001c4ee8
// Address: 0x1c4ee8 - 0x1c4efc
void entry_001c4ee8_0x1c4ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4ee8_0x1c4ee8");
#endif

    ctx->pc = 0x1c4ee8u;

    // 0x1c4ee8: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1c4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1c4eec: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1c4eecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c4ef0: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4EF0u;
    {
        const bool branch_taken_0x1c4ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EF0u;
        // 0x1c4ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ef0) {
            ctx->pc = 0x1C4EFCu;
            return;
        }
    }
    ctx->pc = 0x1C4EF8u;
    // 0x1c4ef8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c4ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c4efcu;
}
