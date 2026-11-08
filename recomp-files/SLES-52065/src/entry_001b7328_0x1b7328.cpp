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

// Function: entry_001b7328
// Address: 0x1b7328 - 0x1b733c
void entry_001b7328_0x1b7328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7328_0x1b7328");
#endif

    ctx->pc = 0x1b7328u;

    // 0x1b7328: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b7328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b732c: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x1b732cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b7330: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B7330u;
    {
        const bool branch_taken_0x1b7330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7330u;
        // 0x1b7334: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7330) {
            ctx->pc = 0x1B7304u;
            return;
        }
    }
    ctx->pc = 0x1B7338u;
    // 0x1b7338: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b7338u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b733cu;
}
