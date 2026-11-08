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

// Function: entry_001a45f0
// Address: 0x1a45f0 - 0x1a4614
void entry_001a45f0_0x1a45f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a45f0_0x1a45f0");
#endif

    ctx->pc = 0x1a45f0u;

    // 0x1a45f0: 0x12600068  beqz        $s3, . + 4 + (0x68 << 2)
    ctx->pc = 0x1A45F0u;
    {
        const bool branch_taken_0x1a45f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45f0) {
            ctx->pc = 0x1A4794u;
            return;
        }
    }
    ctx->pc = 0x1A45F8u;
    // 0x1a45f8: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1a45fc: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A45FCu;
    {
        const bool branch_taken_0x1a45fc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45FCu;
        // 0x1a4600: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45fc) {
            ctx->pc = 0x1A4614u;
            return;
        }
    }
    ctx->pc = 0x1A4604u;
    // 0x1a4604: 0x8e220674  lw          $v0, 0x674($s1)
    ctx->pc = 0x1a4604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
    // 0x1a4608: 0x18400062  blez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1A4608u;
    {
        const bool branch_taken_0x1a4608 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a4608) {
            ctx->pc = 0x1A4794u;
            return;
        }
    }
    ctx->pc = 0x1A4610u;
    // 0x1a4610: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1a4610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->pc = 0x1a4614u;
}
