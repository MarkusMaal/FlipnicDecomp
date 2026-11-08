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

// Function: entry_00127470
// Address: 0x127470 - 0x1274a0
void entry_00127470_0x127470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127470_0x127470");
#endif

    switch (ctx->pc) {
        case 0x127488u: goto label_127488;
        default: break;
    }

    ctx->pc = 0x127470u;

    // 0x127470: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x127470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127474: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x127474u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x127478: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x127478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12747c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12747cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x127480: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x127480u;
    SET_GPR_U32(ctx, 31, 0x127488u);
    ctx->pc = 0x127484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127480u;
    // 0x127484: 0x24450070  addiu       $a1, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x127480u, 0x127488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127488u;
label_127488:
    // 0x127488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x127488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12748c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127490: 0x3e00008  jr          $ra
    ctx->pc = 0x127490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127490u;
        // 0x127494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127498u;
    // 0x127498: 0x0  nop
    ctx->pc = 0x127498u;
    // NOP
    // 0x12749c: 0x0  nop
    ctx->pc = 0x12749cu;
    // NOP
    ctx->pc = 0x1274a0u;
}
