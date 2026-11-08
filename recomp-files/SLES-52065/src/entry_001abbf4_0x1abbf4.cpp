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

// Function: entry_001abbf4
// Address: 0x1abbf4 - 0x1abc20
void entry_001abbf4_0x1abbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abbf4_0x1abbf4");
#endif

    ctx->pc = 0x1abbf4u;

    // 0x1abbf4: 0x260407b0  addiu       $a0, $s0, 0x7B0
    ctx->pc = 0x1abbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1968));
    // 0x1abbf8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ABBF8u;
    {
        const bool branch_taken_0x1abbf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABBF8u;
        // 0x1abbfc: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abbf8) {
            ctx->pc = 0x1ABC20u;
            return;
        }
    }
    ctx->pc = 0x1ABC00u;
    // 0x1abc00: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x1abc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
    // 0x1abc04: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABC04u;
    {
        const bool branch_taken_0x1abc04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC04u;
        // 0x1abc08: 0xae0207bc  sw          $v0, 0x7BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc04) {
            ctx->pc = 0x1ABC20u;
            return;
        }
    }
    ctx->pc = 0x1ABC0Cu;
    // 0x1abc0c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1abc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1abc10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc14: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1abc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1abc18: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1ABC18u;
    SET_GPR_U32(ctx, 31, 0x1ABC20u);
    ctx->pc = 0x1ABC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC18u;
    // 0x1abc1c: 0xae0207bc  sw          $v0, 0x7BC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1980), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1ABC18u, 0x1ABC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC20u;
}
