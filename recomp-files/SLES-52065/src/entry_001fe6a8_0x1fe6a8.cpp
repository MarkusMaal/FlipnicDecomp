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

// Function: entry_001fe6a8
// Address: 0x1fe6a8 - 0x1fe6bc
void entry_001fe6a8_0x1fe6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe6a8_0x1fe6a8");
#endif

    ctx->pc = 0x1fe6a8u;

    // 0x1fe6a8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x1fe6a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1fe6ac: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1fe6acu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1fe6b0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fe6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fe6b4: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x1FE6B4u;
    {
        const bool branch_taken_0x1fe6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6B4u;
        // 0x1fe6b8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6b4) {
            ctx->pc = 0x1FE568u;
            return;
        }
    }
    ctx->pc = 0x1FE6BCu;
}
