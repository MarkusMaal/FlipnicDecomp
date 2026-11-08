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

// Function: entry_0014d674
// Address: 0x14d674 - 0x14d684
void entry_0014d674_0x14d674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d674_0x14d674");
#endif

    ctx->pc = 0x14d674u;

    // 0x14d674: 0x0  nop
    ctx->pc = 0x14d674u;
    // NOP
    // 0x14d678: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x14d678u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14d67c: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x14D67Cu;
    {
        const bool branch_taken_0x14d67c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D67Cu;
        // 0x14d680: 0x3c010aaa  lui         $at, 0xAAA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2730 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d67c) {
            ctx->pc = 0x14D654u;
            return;
        }
    }
    ctx->pc = 0x14D684u;
}
