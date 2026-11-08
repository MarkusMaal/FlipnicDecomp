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

// Function: entry_001b4278
// Address: 0x1b4278 - 0x1b4290
void entry_001b4278_0x1b4278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4278_0x1b4278");
#endif

    ctx->pc = 0x1b4278u;

    // 0x1b4278: 0x8f82871c  lw          $v0, -0x78E4($gp)
    ctx->pc = 0x1b4278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936348)));
    // 0x1b427c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b427cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4280: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1b4280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1b4284: 0xfe200018  sd          $zero, 0x18($s1)
    ctx->pc = 0x1b4284u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 0));
    // 0x1b4288: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4288u;
    {
        const bool branch_taken_0x1b4288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4288u;
        // 0x1b428c: 0xfe200010  sd          $zero, 0x10($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4288) {
            ctx->pc = 0x1B429Cu;
            return;
        }
    }
    ctx->pc = 0x1B4290u;
}
