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

// Function: entry_00123510
// Address: 0x123510 - 0x123528
void entry_00123510_0x123510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123510_0x123510");
#endif

    ctx->pc = 0x123510u;

    // 0x123510: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x123510u;
    {
        const bool branch_taken_0x123510 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x123510) {
            ctx->pc = 0x123528u;
            return;
        }
    }
    ctx->pc = 0x123518u;
    // 0x123518: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x123518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12351c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x12351cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123520: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x123520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x123524: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x123524u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x123528u;
}
