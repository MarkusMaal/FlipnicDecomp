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

// Function: entry_001a87c8
// Address: 0x1a87c8 - 0x1a87e0
void entry_001a87c8_0x1a87c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a87c8_0x1a87c8");
#endif

    ctx->pc = 0x1a87c8u;

    // 0x1a87c8: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A87C8u;
    {
        const bool branch_taken_0x1a87c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a87c8) {
            ctx->pc = 0x1A87E0u;
            return;
        }
    }
    ctx->pc = 0x1A87D0u;
    // 0x1a87d0: 0x8e8309b0  lw          $v1, 0x9B0($s4)
    ctx->pc = 0x1a87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1a87d4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a87d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a87d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a87d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a87dc: 0xae8309b0  sw          $v1, 0x9B0($s4)
    ctx->pc = 0x1a87dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2480), GPR_U32(ctx, 3));
    ctx->pc = 0x1a87e0u;
}
