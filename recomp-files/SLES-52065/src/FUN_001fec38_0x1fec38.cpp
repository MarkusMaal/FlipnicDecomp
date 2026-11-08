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

// Function: FUN_001fec38
// Address: 0x1fec38 - 0x1fec60
void FUN_001fec38_0x1fec38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fec38_0x1fec38");
#endif

    switch (ctx->pc) {
        case 0x1fec54u: goto label_1fec54;
        default: break;
    }

    ctx->pc = 0x1fec38u;

    // 0x1fec38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1fec38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec3c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fec40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fec40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fec44: 0x8c44d9ac  lw          $a0, -0x2654($v0)
    ctx->pc = 0x1fec44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1fec48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fec48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fec4c: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x1FEC4Cu;
    SET_GPR_U32(ctx, 31, 0x1FEC54u);
    ctx->pc = 0x1FEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEC8u, 0x1FEC4Cu, 0x1FEC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC54u;
label_1fec54:
    // 0x1fec54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fec54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fec58: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC58u;
        // 0x1fec5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEC60u;
}
