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

// Function: entry_00187e30
// Address: 0x187e30 - 0x187e40
void entry_00187e30_0x187e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187e30_0x187e30");
#endif

    ctx->pc = 0x187e30u;

    // 0x187e30: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x187e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x187e34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x187E34u;
    {
        const bool branch_taken_0x187e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187e34) {
            ctx->pc = 0x187E40u;
            return;
        }
    }
    ctx->pc = 0x187E3Cu;
    // 0x187e3c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x187e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x187e40u;
}
