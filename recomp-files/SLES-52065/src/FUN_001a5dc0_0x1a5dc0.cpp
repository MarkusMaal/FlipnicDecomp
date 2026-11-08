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

// Function: FUN_001a5dc0
// Address: 0x1a5dc0 - 0x1a5df0
void FUN_001a5dc0_0x1a5dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5dc0_0x1a5dc0");
#endif

    switch (ctx->pc) {
        case 0x1a5dd4u: goto label_1a5dd4;
        case 0x1a5ddcu: goto label_1a5ddc;
        default: break;
    }

    ctx->pc = 0x1a5dc0u;

    // 0x1a5dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5dcc: 0xc045fb4  jal         func_117ED0
    ctx->pc = 0x1A5DCCu;
    SET_GPR_U32(ctx, 31, 0x1A5DD4u);
    ctx->pc = 0x1A5DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5DCCu;
    // 0x1a5dd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117ED0u, 0x1A5DCCu, 0x1A5DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DD4u;
label_1a5dd4:
    // 0x1a5dd4: 0xc069798  jal         func_1A5E60
    ctx->pc = 0x1A5DD4u;
    SET_GPR_U32(ctx, 31, 0x1A5DDCu);
    ctx->pc = 0x1A5DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5DD4u;
    // 0x1a5dd8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5E60u, 0x1A5DD4u, 0x1A5DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DDCu;
label_1a5ddc:
    // 0x1a5ddc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5de0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a5de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a5de4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DE8u;
        // 0x1a5dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5DF0u;
}
