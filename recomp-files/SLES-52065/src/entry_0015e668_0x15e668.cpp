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

// Function: entry_0015e668
// Address: 0x15e668 - 0x15e684
void entry_0015e668_0x15e668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e668_0x15e668");
#endif

    ctx->pc = 0x15e668u;

    // 0x15e668: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15e668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15e66c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15e66cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15e670: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x15e670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x15e674: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x15e674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x15e678: 0x236182a  slt         $v1, $s1, $s6
    ctx->pc = 0x15e678u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x15e67c: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x15E67Cu;
    {
        const bool branch_taken_0x15e67c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e67c) {
            ctx->pc = 0x15E5D0u;
            return;
        }
    }
    ctx->pc = 0x15E684u;
}
