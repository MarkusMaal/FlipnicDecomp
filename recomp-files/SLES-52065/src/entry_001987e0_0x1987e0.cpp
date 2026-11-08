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

// Function: entry_001987e0
// Address: 0x1987e0 - 0x198830
void entry_001987e0_0x1987e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001987e0_0x1987e0");
#endif

    switch (ctx->pc) {
        case 0x19880cu: goto label_19880c;
        case 0x198824u: goto label_198824;
        default: break;
    }

    ctx->pc = 0x1987e0u;

    // 0x1987e0: 0x8ea40340  lw          $a0, 0x340($s5)
    ctx->pc = 0x1987e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x1987e4: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x1987e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1987e8: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1987E8u;
    {
        const bool branch_taken_0x1987e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1987ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987E8u;
        // 0x1987ec: 0x2a23021  addu        $a2, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1987e8) {
            ctx->pc = 0x198788u;
            return;
        }
    }
    ctx->pc = 0x1987F0u;
    // 0x1987f0: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1987f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x1987f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1987f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987f8: 0x8ea70670  lw          $a3, 0x670($s5)
    ctx->pc = 0x1987f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1648)));
    // 0x1987fc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1987fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x198800: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x198800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x198804: 0xc064f7c  jal         func_193DF0
    ctx->pc = 0x198804u;
    SET_GPR_U32(ctx, 31, 0x19880Cu);
    ctx->pc = 0x198808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198804u;
    // 0x198808: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x198804u, 0x19880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19880Cu;
label_19880c:
    // 0x19880c: 0xaea00674  sw          $zero, 0x674($s5)
    ctx->pc = 0x19880cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1652), GPR_U32(ctx, 0));
    // 0x198810: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198814: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x198814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x198818: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19881c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19881Cu;
    SET_GPR_U32(ctx, 31, 0x198824u);
    ctx->pc = 0x198820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19881Cu;
    // 0x198820: 0xa04328f4  sb          $v1, 0x28F4($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 10484), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19881Cu, 0x198824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198824u;
label_198824:
    // 0x198824: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x198824u;
    {
        const bool branch_taken_0x198824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198824) {
            ctx->pc = 0x198C34u;
            return;
        }
    }
    ctx->pc = 0x19882Cu;
    // 0x19882c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19882cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198830u;
}
