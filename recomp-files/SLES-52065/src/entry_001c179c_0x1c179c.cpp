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

// Function: entry_001c179c
// Address: 0x1c179c - 0x1c17bc
void entry_001c179c_0x1c179c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c179c_0x1c179c");
#endif

    ctx->pc = 0x1c179cu;

    // 0x1c179c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1c179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c17a0: 0x9042006b  lbu         $v0, 0x6B($v0)
    ctx->pc = 0x1c17a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 107)));
    // 0x1c17a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C17A4u;
    {
        const bool branch_taken_0x1c17a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C17A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17A4u;
        // 0x1c17a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17a4) {
            ctx->pc = 0x1C17BCu;
            return;
        }
    }
    ctx->pc = 0x1C17ACu;
    // 0x1c17ac: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c17acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c17b0: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1c17b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c17b4: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c17b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c17b8: 0xac432830  sw          $v1, 0x2830($v0)
    ctx->pc = 0x1c17b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10288), GPR_U32(ctx, 3));
    ctx->pc = 0x1c17bcu;
}
