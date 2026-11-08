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

// Function: entry_00130044
// Address: 0x130044 - 0x130068
void entry_00130044_0x130044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130044_0x130044");
#endif

    switch (ctx->pc) {
        case 0x130050u: goto label_130050;
        default: break;
    }

    ctx->pc = 0x130044u;

    // 0x130044: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x130044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x130048: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x130048u;
    SET_GPR_U32(ctx, 31, 0x130050u);
    ctx->pc = 0x13004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130048u;
    // 0x13004c: 0xaf908584  sw          $s0, -0x7A7C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935940), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x130048u, 0x130050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130050u;
label_130050:
    // 0x130050: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130050u;
    {
        const bool branch_taken_0x130050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130050u;
        // 0x130054: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130050) {
            ctx->pc = 0x130068u;
            return;
        }
    }
    ctx->pc = 0x130058u;
    // 0x130058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13005c: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x13005cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x130060: 0xc04c37c  jal         func_130DF0
    ctx->pc = 0x130060u;
    SET_GPR_U32(ctx, 31, 0x130068u);
    ctx->pc = 0x130064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130060u;
    // 0x130064: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DF0u, 0x130060u, 0x130068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130068u;
}
