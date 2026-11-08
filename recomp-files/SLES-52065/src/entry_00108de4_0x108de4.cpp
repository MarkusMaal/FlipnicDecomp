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

// Function: entry_00108de4
// Address: 0x108de4 - 0x108e04
void entry_00108de4_0x108de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108de4_0x108de4");
#endif

    switch (ctx->pc) {
        case 0x108df0u: goto label_108df0;
        default: break;
    }

    ctx->pc = 0x108de4u;

    // 0x108de4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x108de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108de8: 0xc0583f0  jal         func_160FC0
    ctx->pc = 0x108DE8u;
    SET_GPR_U32(ctx, 31, 0x108DF0u);
    ctx->pc = 0x108DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DE8u;
    // 0x108dec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160FC0u, 0x108DE8u, 0x108DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DF0u;
label_108df0:
    // 0x108df0: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x108df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x108df4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108DF4u;
    {
        const bool branch_taken_0x108df4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x108DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DF4u;
        // 0x108df8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108df4) {
            ctx->pc = 0x108E04u;
            return;
        }
    }
    ctx->pc = 0x108DFCu;
    // 0x108dfc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x108DFCu;
    {
        const bool branch_taken_0x108dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DFCu;
        // 0x108e00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108dfc) {
            ctx->pc = 0x108E1Cu;
            return;
        }
    }
    ctx->pc = 0x108E04u;
}
