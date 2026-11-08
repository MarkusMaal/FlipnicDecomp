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

// Function: entry_001dc9c8
// Address: 0x1dc9c8 - 0x1dc9d4
void entry_001dc9c8_0x1dc9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc9c8_0x1dc9c8");
#endif

    ctx->pc = 0x1dc9c8u;

    // 0x1dc9c8: 0x28a20030  slti        $v0, $a1, 0x30
    ctx->pc = 0x1dc9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1dc9cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DC9CCu;
    {
        const bool branch_taken_0x1dc9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9CCu;
        // 0x1dc9d0: 0x246300e8  addiu       $v1, $v1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9cc) {
            ctx->pc = 0x1DCA00u;
            return;
        }
    }
    ctx->pc = 0x1DC9D4u;
}
