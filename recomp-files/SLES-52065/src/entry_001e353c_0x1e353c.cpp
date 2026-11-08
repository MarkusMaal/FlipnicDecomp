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

// Function: entry_001e353c
// Address: 0x1e353c - 0x1e3550
void entry_001e353c_0x1e353c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e353c_0x1e353c");
#endif

    ctx->pc = 0x1e353cu;

    // 0x1e353c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e353cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3540: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e3540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3544: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e3544u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1e3548: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1E3548u;
    {
        const bool branch_taken_0x1e3548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3548u;
        // 0x1e354c: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3548) {
            ctx->pc = 0x1E3680u;
            return;
        }
    }
    ctx->pc = 0x1E3550u;
}
