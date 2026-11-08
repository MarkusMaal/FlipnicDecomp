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

// Function: entry_001ee6e8
// Address: 0x1ee6e8 - 0x1ee704
void entry_001ee6e8_0x1ee6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee6e8_0x1ee6e8");
#endif

    ctx->pc = 0x1ee6e8u;

    // 0x1ee6e8: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x1ee6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1ee6ec: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x1ee6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1ee6f0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1ee6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1ee6f4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE6F4u;
    {
        const bool branch_taken_0x1ee6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee6f4) {
            ctx->pc = 0x1EE6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE6F4u;
            // 0x1ee6f8: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE704u;
            return;
        }
    }
    ctx->pc = 0x1EE6FCu;
    // 0x1ee6fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EE6FCu;
    {
        const bool branch_taken_0x1ee6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6FCu;
        // 0x1ee700: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee6fc) {
            ctx->pc = 0x1EE708u;
            return;
        }
    }
    ctx->pc = 0x1EE704u;
}
