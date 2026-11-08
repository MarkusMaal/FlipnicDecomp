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

// Function: entry_0013cde4
// Address: 0x13cde4 - 0x13ce04
void entry_0013cde4_0x13cde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cde4_0x13cde4");
#endif

    ctx->pc = 0x13cde4u;

    // 0x13cde4: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x13cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x13cde8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13cdec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13cdf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cdf4: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x13cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x13cdf8: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x13cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x13cdfc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x13CDFCu;
    {
        const bool branch_taken_0x13cdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CDFCu;
        // 0x13ce00: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cdfc) {
            ctx->pc = 0x13CF10u;
            return;
        }
    }
    ctx->pc = 0x13CE04u;
}
