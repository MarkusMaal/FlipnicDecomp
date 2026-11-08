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

// Function: entry_0010406c
// Address: 0x10406c - 0x10409c
void entry_0010406c_0x10406c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010406c_0x10406c");
#endif

    switch (ctx->pc) {
        case 0x104074u: goto label_104074;
        case 0x104084u: goto label_104084;
        default: break;
    }

    ctx->pc = 0x10406cu;

    // 0x10406c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x10406Cu;
    SET_GPR_U32(ctx, 31, 0x104074u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10406Cu, 0x104074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104074u;
label_104074:
    // 0x104074: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104074u;
    {
        const bool branch_taken_0x104074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104074u;
        // 0x104078: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104074) {
            ctx->pc = 0x10409Cu;
            return;
        }
    }
    ctx->pc = 0x10407Cu;
    // 0x10407c: 0xc056360  jal         func_158D80
    ctx->pc = 0x10407Cu;
    SET_GPR_U32(ctx, 31, 0x104084u);
    ctx->pc = 0x104080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10407Cu;
    // 0x104080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10407Cu, 0x104084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104084u;
label_104084:
    // 0x104084: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x104084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x104088: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10408c: 0x24637cf0  addiu       $v1, $v1, 0x7CF0
    ctx->pc = 0x10408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31984));
    // 0x104090: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x104090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x104094: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104098: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10409cu;
}
