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

// Function: entry_001f13f8
// Address: 0x1f13f8 - 0x1f140c
void entry_001f13f8_0x1f13f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f13f8_0x1f13f8");
#endif

    ctx->pc = 0x1f13f8u;

    // 0x1f13f8: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F13F8u;
    {
        const bool branch_taken_0x1f13f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f13f8) {
            ctx->pc = 0x1F13FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F13F8u;
            // 0x1f13fc: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F140Cu;
            return;
        }
    }
    ctx->pc = 0x1F1400u;
    // 0x1f1400: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x1f1400u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1404: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1f1404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1f1408: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x1f1408u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
    ctx->pc = 0x1f140cu;
}
