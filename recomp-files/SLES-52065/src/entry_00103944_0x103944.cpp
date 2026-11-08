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

// Function: entry_00103944
// Address: 0x103944 - 0x103968
void entry_00103944_0x103944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103944_0x103944");
#endif

    switch (ctx->pc) {
        case 0x10394cu: goto label_10394c;
        case 0x10395cu: goto label_10395c;
        default: break;
    }

    ctx->pc = 0x103944u;

    // 0x103944: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103944u;
    SET_GPR_U32(ctx, 31, 0x10394Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103944u, 0x10394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10394Cu;
label_10394c:
    // 0x10394c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10394Cu;
    {
        const bool branch_taken_0x10394c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10394Cu;
        // 0x103950: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10394c) {
            ctx->pc = 0x103968u;
            return;
        }
    }
    ctx->pc = 0x103954u;
    // 0x103954: 0xc056360  jal         func_158D80
    ctx->pc = 0x103954u;
    SET_GPR_U32(ctx, 31, 0x10395Cu);
    ctx->pc = 0x103958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103954u;
    // 0x103958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103954u, 0x10395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10395Cu;
label_10395c:
    // 0x10395c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10395cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103960: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x103960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x103964: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103968u;
}
