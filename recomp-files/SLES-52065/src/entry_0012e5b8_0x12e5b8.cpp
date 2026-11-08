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

// Function: entry_0012e5b8
// Address: 0x12e5b8 - 0x12e5c8
void entry_0012e5b8_0x12e5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e5b8_0x12e5b8");
#endif

    ctx->pc = 0x12e5b8u;

    // 0x12e5b8: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x12e5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x12e5bc: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x12e5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x12e5c0: 0x12510019  beq         $s2, $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x12E5C0u;
    {
        const bool branch_taken_0x12e5c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x12E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5C0u;
        // 0x12e5c4: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5c0) {
            ctx->pc = 0x12E628u;
            return;
        }
    }
    ctx->pc = 0x12E5C8u;
}
