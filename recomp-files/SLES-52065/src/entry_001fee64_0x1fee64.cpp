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

// Function: entry_001fee64
// Address: 0x1fee64 - 0x1fee80
void entry_001fee64_0x1fee64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fee64_0x1fee64");
#endif

    ctx->pc = 0x1fee64u;

    // 0x1fee64: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1fee64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1fee68: 0x8fc3ddf8  lw          $v1, -0x2208($fp)
    ctx->pc = 0x1fee68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294958584)));
    // 0x1fee6c: 0xdca2dde8  ld          $v0, -0x2218($a1)
    ctx->pc = 0x1fee6cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x21DDE8u));
    // 0x1fee70: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1fee70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fee74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEE74u;
    {
        const bool branch_taken_0x1fee74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE74u;
        // 0x1fee78: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee74) {
            ctx->pc = 0x1FEE80u;
            return;
        }
    }
    ctx->pc = 0x1FEE7Cu;
    // 0x1fee7c: 0xfca3dde8  sd          $v1, -0x2218($a1)
    ctx->pc = 0x1fee7cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294958568), GPR_U64(ctx, 3));
    ctx->pc = 0x1fee80u;
}
