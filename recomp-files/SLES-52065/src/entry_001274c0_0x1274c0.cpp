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

// Function: entry_001274c0
// Address: 0x1274c0 - 0x1274f0
void entry_001274c0_0x1274c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001274c0_0x1274c0");
#endif

    switch (ctx->pc) {
        case 0x1274dcu: goto label_1274dc;
        default: break;
    }

    ctx->pc = 0x1274c0u;

    // 0x1274c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1274c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1274c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1274c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1274c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1274ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1274d0: 0x24460090  addiu       $a2, $v0, 0x90
    ctx->pc = 0x1274d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1274d4: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1274D4u;
    SET_GPR_U32(ctx, 31, 0x1274DCu);
    ctx->pc = 0x1274D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1274D4u;
    // 0x1274d8: 0x24450070  addiu       $a1, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1274D4u, 0x1274DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1274DCu;
label_1274dc:
    // 0x1274dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1274dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1274e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1274e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1274e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1274E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1274E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274E4u;
        // 0x1274e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1274E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1274ECu;
    // 0x1274ec: 0x0  nop
    ctx->pc = 0x1274ecu;
    // NOP
    ctx->pc = 0x1274f0u;
}
