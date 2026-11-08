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

// Function: entry_00188320
// Address: 0x188320 - 0x188330
void entry_00188320_0x188320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188320_0x188320");
#endif

    ctx->pc = 0x188320u;

    // 0x188320: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x188320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x188324: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x188324u;
    {
        const bool branch_taken_0x188324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188324) {
            ctx->pc = 0x188330u;
            return;
        }
    }
    ctx->pc = 0x18832Cu;
    // 0x18832c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x18832cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x188330u;
}
