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

// Function: entry_00103c3c
// Address: 0x103c3c - 0x103c7c
void entry_00103c3c_0x103c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103c3c_0x103c3c");
#endif

    switch (ctx->pc) {
        case 0x103c44u: goto label_103c44;
        case 0x103c54u: goto label_103c54;
        default: break;
    }

    ctx->pc = 0x103c3cu;

    // 0x103c3c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103C3Cu;
    SET_GPR_U32(ctx, 31, 0x103C44u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103C3Cu, 0x103C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C44u;
label_103c44:
    // 0x103c44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x103C44u;
    {
        const bool branch_taken_0x103c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C44u;
        // 0x103c48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c44) {
            ctx->pc = 0x103C7Cu;
            return;
        }
    }
    ctx->pc = 0x103C4Cu;
    // 0x103c4c: 0xc056360  jal         func_158D80
    ctx->pc = 0x103C4Cu;
    SET_GPR_U32(ctx, 31, 0x103C54u);
    ctx->pc = 0x103C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103C4Cu;
    // 0x103c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103C4Cu, 0x103C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C54u;
label_103c54:
    // 0x103c54: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103c58: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103c5c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x103c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x103c60: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x103c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x103c64: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103c68: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103c6c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103c70: 0x2442acf0  addiu       $v0, $v0, -0x5310
    ctx->pc = 0x103c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946032));
    // 0x103c74: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103c78: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x103c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    ctx->pc = 0x103c7cu;
}
