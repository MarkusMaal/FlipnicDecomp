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

// Function: entry_001299e8
// Address: 0x1299e8 - 0x129a14
void entry_001299e8_0x1299e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001299e8_0x1299e8");
#endif

    switch (ctx->pc) {
        case 0x1299f0u: goto label_1299f0;
        default: break;
    }

    ctx->pc = 0x1299e8u;

    // 0x1299e8: 0xc04a7bc  jal         func_129EF0
    ctx->pc = 0x1299E8u;
    SET_GPR_U32(ctx, 31, 0x1299F0u);
    ctx->pc = 0x129EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129EF0u, 0x1299E8u, 0x1299F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1299F0u;
label_1299f0:
    // 0x1299f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1299f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1299f4: 0x10430042  beq         $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1299F4u;
    {
        const bool branch_taken_0x1299f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1299F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1299F4u;
        // 0x1299f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299f4) {
            ctx->pc = 0x129B00u;
            return;
        }
    }
    ctx->pc = 0x1299FCu;
    // 0x1299fc: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1299FCu;
    {
        const bool branch_taken_0x1299fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1299fc) {
            ctx->pc = 0x129A80u;
            return;
        }
    }
    ctx->pc = 0x129A04u;
    // 0x129a04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129A04u;
    {
        const bool branch_taken_0x129a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129a04) {
            ctx->pc = 0x129A14u;
            return;
        }
    }
    ctx->pc = 0x129A0Cu;
    // 0x129a0c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x129A0Cu;
    {
        const bool branch_taken_0x129a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129A0Cu;
        // 0x129a10: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a0c) {
            ctx->pc = 0x129B84u;
            return;
        }
    }
    ctx->pc = 0x129A14u;
}
