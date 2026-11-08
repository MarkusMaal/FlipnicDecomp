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

// Function: entry_00205524
// Address: 0x205524 - 0x20553c
void entry_00205524_0x205524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205524_0x205524");
#endif

    ctx->pc = 0x205524u;

    // 0x205524: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205524u;
    {
        const bool branch_taken_0x205524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205524u;
        // 0x205528: 0x26d30001  addiu       $s3, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205524) {
            ctx->pc = 0x20553Cu;
            return;
        }
    }
    ctx->pc = 0x20552Cu;
    // 0x20552c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x20552cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x205530: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x205530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x205534: 0x1000ff5b  b           . + 4 + (-0xA5 << 2)
    ctx->pc = 0x205534u;
    {
        const bool branch_taken_0x205534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205534u;
        // 0x205538: 0xfc5e0000  sd          $fp, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205534) {
            ctx->pc = 0x2052A4u;
            return;
        }
    }
    ctx->pc = 0x20553Cu;
}
