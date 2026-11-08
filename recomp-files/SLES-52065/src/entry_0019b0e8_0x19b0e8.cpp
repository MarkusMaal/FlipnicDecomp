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

// Function: entry_0019b0e8
// Address: 0x19b0e8 - 0x19b11c
void entry_0019b0e8_0x19b0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b0e8_0x19b0e8");
#endif

    switch (ctx->pc) {
        case 0x19b0fcu: goto label_19b0fc;
        case 0x19b110u: goto label_19b110;
        default: break;
    }

    ctx->pc = 0x19b0e8u;

    // 0x19b0e8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19B0E8u;
    {
        const bool branch_taken_0x19b0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b0e8) {
            ctx->pc = 0x19B124u;
            return;
        }
    }
    ctx->pc = 0x19B0F0u;
    // 0x19b0f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0f4: 0xc064918  jal         func_192460
    ctx->pc = 0x19B0F4u;
    SET_GPR_U32(ctx, 31, 0x19B0FCu);
    ctx->pc = 0x19B0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B0F4u;
    // 0x19b0f8: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x19B0F4u, 0x19B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B0FCu;
label_19b0fc:
    // 0x19b0fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19B0FCu;
    {
        const bool branch_taken_0x19b0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0FCu;
        // 0x19b100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0fc) {
            ctx->pc = 0x19B11Cu;
            return;
        }
    }
    ctx->pc = 0x19B104u;
    // 0x19b104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b108: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19B108u;
    SET_GPR_U32(ctx, 31, 0x19B110u);
    ctx->pc = 0x19B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B108u;
    // 0x19b10c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19B108u, 0x19B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B110u;
label_19b110:
    // 0x19b110: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x19B110u;
    {
        const bool branch_taken_0x19b110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b110) {
            ctx->pc = 0x19B6F0u;
            return;
        }
    }
    ctx->pc = 0x19B118u;
    // 0x19b118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19b11cu;
}
