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

// Function: entry_0017e93c
// Address: 0x17e93c - 0x17e950
void entry_0017e93c_0x17e93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e93c_0x17e93c");
#endif

    ctx->pc = 0x17e93cu;

    // 0x17e93c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e940: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E940u;
    {
        const bool branch_taken_0x17e940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e940) {
            ctx->pc = 0x17E950u;
            return;
        }
    }
    ctx->pc = 0x17E948u;
    // 0x17e948: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E948u;
    {
        const bool branch_taken_0x17e948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E948u;
        // 0x17e94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e948) {
            ctx->pc = 0x17E958u;
            return;
        }
    }
    ctx->pc = 0x17E950u;
}
