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

// Function: entry_00188cf4
// Address: 0x188cf4 - 0x188d08
void entry_00188cf4_0x188cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188cf4_0x188cf4");
#endif

    ctx->pc = 0x188cf4u;

    // 0x188cf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188CF4u;
    {
        const bool branch_taken_0x188cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188cf4) {
            ctx->pc = 0x188D08u;
            return;
        }
    }
    ctx->pc = 0x188CFCu;
    // 0x188cfc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x188cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x188d00: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x188d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x188d04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x188d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x188d08u;
}
