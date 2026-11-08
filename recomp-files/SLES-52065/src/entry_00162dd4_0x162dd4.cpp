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

// Function: entry_00162dd4
// Address: 0x162dd4 - 0x162df8
void entry_00162dd4_0x162dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162dd4_0x162dd4");
#endif

    switch (ctx->pc) {
        case 0x162de4u: goto label_162de4;
        case 0x162df0u: goto label_162df0;
        default: break;
    }

    ctx->pc = 0x162dd4u;

label_162dd4:
    // 0x162dd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162dd8:
    // 0x162dd8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x162dd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_162ddc:
    // 0x162ddc: 0x320f809  jalr        $t9
label_162de0:
    if (ctx->pc == 0x162DE0u) {
        ctx->pc = 0x162DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DDCu;
        // 0x162de0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162DE4u;
        goto label_162de4;
    }
    ctx->pc = 0x162DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x162DE4u);
        ctx->pc = 0x162DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DDCu;
        // 0x162de0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162DDCu, 0x162DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162DE4u;
label_162de4:
    // 0x162de4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x162de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_162de8:
    // 0x162de8: 0xc0564b8  jal         func_1592E0
label_162dec:
    if (ctx->pc == 0x162DECu) {
        ctx->pc = 0x162DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DE8u;
        // 0x162dec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162DF0u;
        goto label_162df0;
    }
    ctx->pc = 0x162DE8u;
    SET_GPR_U32(ctx, 31, 0x162DF0u);
    ctx->pc = 0x162DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162DE8u;
    // 0x162dec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x162DE8u, 0x162DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162DF0u;
label_162df0:
    // 0x162df0: 0x10000002  b           . + 4 + (0x2 << 2)
label_162df4:
    if (ctx->pc == 0x162DF4u) {
        ctx->pc = 0x162DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DF0u;
        // 0x162df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162DF8u;
        goto label_fallthrough_0x162df0;
    }
    ctx->pc = 0x162DF0u;
    {
        const bool branch_taken_0x162df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DF0u;
        // 0x162df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162df0) {
            ctx->pc = 0x162DFCu;
            return;
        }
    }
label_fallthrough_0x162df0:
    ctx->pc = 0x162DF8u;
}
