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

// Function: entry_002029c4
// Address: 0x2029c4 - 0x2029dc
void entry_002029c4_0x2029c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002029c4_0x2029c4");
#endif

    ctx->pc = 0x2029c4u;

    // 0x2029c4: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x2029c4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2029c8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2029c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2029cc: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2029CCu;
    {
        const bool branch_taken_0x2029cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2029D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029CCu;
        // 0x2029d0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029cc) {
            ctx->pc = 0x2029A0u;
            return;
        }
    }
    ctx->pc = 0x2029D4u;
    // 0x2029d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2029D4u;
    {
        const bool branch_taken_0x2029d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2029D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029D4u;
        // 0x2029d8: 0x26425088  addiu       $v0, $s2, 0x5088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029d4) {
            ctx->pc = 0x2029E4u;
            return;
        }
    }
    ctx->pc = 0x2029DCu;
}
