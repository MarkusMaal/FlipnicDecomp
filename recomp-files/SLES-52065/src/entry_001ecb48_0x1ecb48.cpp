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

// Function: entry_001ecb48
// Address: 0x1ecb48 - 0x1ecb64
void entry_001ecb48_0x1ecb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecb48_0x1ecb48");
#endif

    ctx->pc = 0x1ecb48u;

    // 0x1ecb48: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ecb48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ecb4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ecb4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ecb50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ecb50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ecb54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ecb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ecb58: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x1ecb58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1ecb5c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1ECB5Cu;
    {
        const bool branch_taken_0x1ecb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB5Cu;
        // 0x1ecb60: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb5c) {
            ctx->pc = 0x1ECB18u;
            return;
        }
    }
    ctx->pc = 0x1ECB64u;
}
