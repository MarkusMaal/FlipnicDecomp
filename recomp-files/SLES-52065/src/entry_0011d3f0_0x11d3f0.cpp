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

// Function: entry_0011d3f0
// Address: 0x11d3f0 - 0x11d414
void entry_0011d3f0_0x11d3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d3f0_0x11d3f0");
#endif

    ctx->pc = 0x11d3f0u;

label_11d3f0:
    // 0x11d3f0: 0x8f8283f0  lw          $v0, -0x7C10($gp)
    ctx->pc = 0x11d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x11d3f4: 0x1040fffe  beqz        $v0, . + 4 + (-0x2 << 2)
    ctx->pc = 0x11D3F4u;
    {
        const bool branch_taken_0x11d3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d3f4) {
            ctx->pc = 0x11D3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d3f0;
        }
    }
    ctx->pc = 0x11D3FCu;
    // 0x11d3fc: 0x8f8283e0  lw          $v0, -0x7C20($gp)
    ctx->pc = 0x11d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935520)));
    // 0x11d400: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D400u;
    {
        const bool branch_taken_0x11d400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x11D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D400u;
        // 0x11d404: 0xaf8083f0  sw          $zero, -0x7C10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d400) {
            ctx->pc = 0x11D414u;
            return;
        }
    }
    ctx->pc = 0x11D408u;
    // 0x11d408: 0xdf8283e8  ld          $v0, -0x7C18($gp)
    ctx->pc = 0x11d408u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935528)));
    // 0x11d40c: 0x1052000d  beq         $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x11D40Cu;
    {
        const bool branch_taken_0x11d40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x11d40c) {
            ctx->pc = 0x11D444u;
            return;
        }
    }
    ctx->pc = 0x11D414u;
}
