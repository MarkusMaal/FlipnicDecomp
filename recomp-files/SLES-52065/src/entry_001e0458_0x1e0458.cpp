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

// Function: entry_001e0458
// Address: 0x1e0458 - 0x1e046c
void entry_001e0458_0x1e0458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0458_0x1e0458");
#endif

    ctx->pc = 0x1e0458u;

    // 0x1e0458: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1e0458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1e045c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E045Cu;
    {
        const bool branch_taken_0x1e045c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E045Cu;
        // 0x1e0460: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e045c) {
            ctx->pc = 0x1E046Cu;
            return;
        }
    }
    ctx->pc = 0x1E0464u;
    // 0x1e0464: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x1e0464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x1e0468: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e0468u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e046cu;
}
