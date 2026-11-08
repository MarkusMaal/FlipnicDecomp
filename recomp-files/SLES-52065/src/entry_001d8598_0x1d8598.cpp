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

// Function: entry_001d8598
// Address: 0x1d8598 - 0x1d85a8
void entry_001d8598_0x1d8598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8598_0x1d8598");
#endif

    ctx->pc = 0x1d8598u;

    // 0x1d8598: 0x1062011b  beq         $v1, $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x1D8598u;
    {
        const bool branch_taken_0x1d8598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8598u;
        // 0x1d859c: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8598) {
            ctx->pc = 0x1D8A08u;
            return;
        }
    }
    ctx->pc = 0x1D85A0u;
    // 0x1d85a0: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x1D85A0u;
    {
        const bool branch_taken_0x1d85a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D85A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85A0u;
        // 0x1d85a4: 0xdfb100c8  ld          $s1, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85a0) {
            ctx->pc = 0x1D8A8Cu;
            return;
        }
    }
    ctx->pc = 0x1D85A8u;
}
