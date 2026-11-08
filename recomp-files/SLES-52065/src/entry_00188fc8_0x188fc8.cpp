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

// Function: entry_00188fc8
// Address: 0x188fc8 - 0x188fe0
void entry_00188fc8_0x188fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188fc8_0x188fc8");
#endif

    ctx->pc = 0x188fc8u;

    // 0x188fc8: 0x92620080  lbu         $v0, 0x80($s3)
    ctx->pc = 0x188fc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x188fcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188FCCu;
    {
        const bool branch_taken_0x188fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188fcc) {
            ctx->pc = 0x188FE0u;
            return;
        }
    }
    ctx->pc = 0x188FD4u;
    // 0x188fd4: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x188fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x188fd8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x188FD8u;
    {
        const bool branch_taken_0x188fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FD8u;
        // 0x188fdc: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fd8) {
            ctx->pc = 0x189140u;
            return;
        }
    }
    ctx->pc = 0x188FE0u;
}
