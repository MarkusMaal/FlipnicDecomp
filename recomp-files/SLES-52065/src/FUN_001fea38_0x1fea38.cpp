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

// Function: FUN_001fea38
// Address: 0x1fea38 - 0x1fea64
void FUN_001fea38_0x1fea38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fea38_0x1fea38");
#endif

    switch (ctx->pc) {
        case 0x1fea58u: goto label_1fea58;
        default: break;
    }

    ctx->pc = 0x1fea38u;

    // 0x1fea38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fea38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fea3c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fea40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fea44: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1fea44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fea48: 0x8c64d9ac  lw          $a0, -0x2654($v1)
    ctx->pc = 0x1fea48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1fea4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fea50: 0xc07fa9a  jal         func_1FEA68
    ctx->pc = 0x1FEA50u;
    SET_GPR_U32(ctx, 31, 0x1FEA58u);
    ctx->pc = 0x1FEA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA50u;
    // 0x1fea54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEA68u, 0x1FEA50u, 0x1FEA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA58u;
label_1fea58:
    // 0x1fea58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fea58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fea5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA5Cu;
        // 0x1fea60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEA64u;
}
