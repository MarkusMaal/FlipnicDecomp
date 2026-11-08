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

// Function: entry_0021b6b8
// Address: 0x21b6b8 - 0x21b6d4
void entry_0021b6b8_0x21b6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b6b8_0x21b6b8");
#endif

    switch (ctx->pc) {
        case 0x21b6ccu: goto label_21b6cc;
        default: break;
    }

    ctx->pc = 0x21b6b8u;

    // 0x21b6b8: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x21b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
    // 0x21b6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21b6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b6c0: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x21b6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x21b6c4: 0xc01d80e  jal         func_076038
    ctx->pc = 0x21B6C4u;
    SET_GPR_U32(ctx, 31, 0x21B6CCu);
    ctx->pc = 0x21B6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6C4u;
    // 0x21b6c8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76038u, 0x21B6C4u, 0x21B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6CCu;
label_21b6cc:
    // 0x21b6cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21B6CCu;
    {
        const bool branch_taken_0x21b6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6CCu;
        // 0x21b6d0: 0x503023  subu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6cc) {
            ctx->pc = 0x21B6E4u;
            return;
        }
    }
    ctx->pc = 0x21B6D4u;
}
