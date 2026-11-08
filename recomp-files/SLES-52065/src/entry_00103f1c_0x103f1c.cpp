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

// Function: entry_00103f1c
// Address: 0x103f1c - 0x103f4c
void entry_00103f1c_0x103f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103f1c_0x103f1c");
#endif

    switch (ctx->pc) {
        case 0x103f24u: goto label_103f24;
        case 0x103f34u: goto label_103f34;
        default: break;
    }

    ctx->pc = 0x103f1cu;

    // 0x103f1c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103F1Cu;
    SET_GPR_U32(ctx, 31, 0x103F24u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103F1Cu, 0x103F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F24u;
label_103f24:
    // 0x103f24: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x103F24u;
    {
        const bool branch_taken_0x103f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F24u;
        // 0x103f28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f24) {
            ctx->pc = 0x103F4Cu;
            return;
        }
    }
    ctx->pc = 0x103F2Cu;
    // 0x103f2c: 0xc056360  jal         func_158D80
    ctx->pc = 0x103F2Cu;
    SET_GPR_U32(ctx, 31, 0x103F34u);
    ctx->pc = 0x103F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103F2Cu;
    // 0x103f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103F2Cu, 0x103F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F34u;
label_103f34:
    // 0x103f34: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x103f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x103f38: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103f3c: 0x24637db0  addiu       $v1, $v1, 0x7DB0
    ctx->pc = 0x103f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32176));
    // 0x103f40: 0x2442a550  addiu       $v0, $v0, -0x5AB0
    ctx->pc = 0x103f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944080));
    // 0x103f44: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103f48: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103f4cu;
}
