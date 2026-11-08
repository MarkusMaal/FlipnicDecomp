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

// Function: entry_001894a0
// Address: 0x1894a0 - 0x1894b8
void entry_001894a0_0x1894a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001894a0_0x1894a0");
#endif

    ctx->pc = 0x1894a0u;

    // 0x1894a0: 0x92820080  lbu         $v0, 0x80($s4)
    ctx->pc = 0x1894a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x1894a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1894A4u;
    {
        const bool branch_taken_0x1894a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1894a4) {
            ctx->pc = 0x1894B8u;
            return;
        }
    }
    ctx->pc = 0x1894ACu;
    // 0x1894ac: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x1894acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x1894b0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1894B0u;
    {
        const bool branch_taken_0x1894b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1894B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894B0u;
        // 0x1894b4: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894b0) {
            ctx->pc = 0x189618u;
            return;
        }
    }
    ctx->pc = 0x1894B8u;
}
