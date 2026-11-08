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

// Function: entry_001d8788
// Address: 0x1d8788 - 0x1d8798
void entry_001d8788_0x1d8788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8788_0x1d8788");
#endif

    ctx->pc = 0x1d8788u;

    // 0x1d8788: 0x1242004b  beq         $s2, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1D8788u;
    {
        const bool branch_taken_0x1d8788 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8788u;
        // 0x1d878c: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8788) {
            ctx->pc = 0x1D88B8u;
            return;
        }
    }
    ctx->pc = 0x1D8790u;
    // 0x1d8790: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x1D8790u;
    {
        const bool branch_taken_0x1d8790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8790u;
        // 0x1d8794: 0xdfb100c8  ld          $s1, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8790) {
            ctx->pc = 0x1D8A8Cu;
            return;
        }
    }
    ctx->pc = 0x1D8798u;
}
