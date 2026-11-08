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

// Function: entry_0014e46c
// Address: 0x14e46c - 0x14e484
void entry_0014e46c_0x14e46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e46c_0x14e46c");
#endif

    ctx->pc = 0x14e46cu;

    // 0x14e46c: 0x0  nop
    ctx->pc = 0x14e46cu;
    // NOP
    // 0x14e470: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14e470u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14e474: 0x1660ffee  bnez        $s3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14E474u;
    {
        const bool branch_taken_0x14e474 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E474u;
        // 0x14e478: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e474) {
            ctx->pc = 0x14E430u;
            return;
        }
    }
    ctx->pc = 0x14E47Cu;
    // 0x14e47c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x14E47Cu;
    {
        const bool branch_taken_0x14e47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E47Cu;
        // 0x14e480: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e47c) {
            ctx->pc = 0x14E770u;
            return;
        }
    }
    ctx->pc = 0x14E484u;
}
