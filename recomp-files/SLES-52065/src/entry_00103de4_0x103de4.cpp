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

// Function: entry_00103de4
// Address: 0x103de4 - 0x103e20
void entry_00103de4_0x103de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103de4_0x103de4");
#endif

    switch (ctx->pc) {
        case 0x103decu: goto label_103dec;
        case 0x103dfcu: goto label_103dfc;
        default: break;
    }

    ctx->pc = 0x103de4u;

    // 0x103de4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103DE4u;
    SET_GPR_U32(ctx, 31, 0x103DECu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103DE4u, 0x103DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DECu;
label_103dec:
    // 0x103dec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103DECu;
    {
        const bool branch_taken_0x103dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DECu;
        // 0x103df0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103dec) {
            ctx->pc = 0x103E20u;
            return;
        }
    }
    ctx->pc = 0x103DF4u;
    // 0x103df4: 0xc041860  jal         func_106180
    ctx->pc = 0x103DF4u;
    SET_GPR_U32(ctx, 31, 0x103DFCu);
    ctx->pc = 0x103DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103DF4u;
    // 0x103df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x103DF4u, 0x103DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DFCu;
label_103dfc:
    // 0x103dfc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103e00: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103e04: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x103e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x103e08: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x103e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x103e0c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103e10: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103e14: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103e18: 0x2442b060  addiu       $v0, $v0, -0x4FA0
    ctx->pc = 0x103e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946912));
    // 0x103e1c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103e20u;
}
