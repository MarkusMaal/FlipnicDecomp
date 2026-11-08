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

// Function: entry_001d9138
// Address: 0x1d9138 - 0x1d9150
void entry_001d9138_0x1d9138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9138_0x1d9138");
#endif

    ctx->pc = 0x1d9138u;

    // 0x1d9138: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1d9138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d913c: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x1d913cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x1d9140: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1d9140u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9144: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D9144u;
    {
        const bool branch_taken_0x1d9144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9144u;
        // 0x1d9148: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9144) {
            ctx->pc = 0x1D91B4u;
            return;
        }
    }
    ctx->pc = 0x1D914Cu;
    // 0x1d914c: 0x0  nop
    ctx->pc = 0x1d914cu;
    // NOP
    ctx->pc = 0x1d9150u;
}
