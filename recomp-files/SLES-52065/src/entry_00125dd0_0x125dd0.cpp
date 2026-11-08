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

// Function: entry_00125dd0
// Address: 0x125dd0 - 0x125e00
void entry_00125dd0_0x125dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125dd0_0x125dd0");
#endif

    switch (ctx->pc) {
        case 0x125de8u: goto label_125de8;
        default: break;
    }

    ctx->pc = 0x125dd0u;

    // 0x125dd0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x125dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125dd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125dd8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x125dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125de0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x125DE0u;
    SET_GPR_U32(ctx, 31, 0x125DE8u);
    ctx->pc = 0x125DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125DE0u;
    // 0x125de4: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x125DE0u, 0x125DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125DE8u;
label_125de8:
    // 0x125de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125df0: 0x3e00008  jr          $ra
    ctx->pc = 0x125DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125DF0u;
        // 0x125df4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125DF8u;
    // 0x125df8: 0x0  nop
    ctx->pc = 0x125df8u;
    // NOP
    // 0x125dfc: 0x0  nop
    ctx->pc = 0x125dfcu;
    // NOP
    ctx->pc = 0x125e00u;
}
