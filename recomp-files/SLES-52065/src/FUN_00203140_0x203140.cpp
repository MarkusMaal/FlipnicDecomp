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

// Function: FUN_00203140
// Address: 0x203140 - 0x20316c
void FUN_00203140_0x203140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203140_0x203140");
#endif

    switch (ctx->pc) {
        case 0x203160u: goto label_203160;
        default: break;
    }

    ctx->pc = 0x203140u;

    // 0x203140: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x203140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203144: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x203144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x203148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20314c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x20314cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203150: 0x8c64d9ac  lw          $a0, -0x2654($v1)
    ctx->pc = 0x203150u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x203154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203158: 0xc080890  jal         func_202240
    ctx->pc = 0x203158u;
    SET_GPR_U32(ctx, 31, 0x203160u);
    ctx->pc = 0x20315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203158u;
    // 0x20315c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202240u, 0x203158u, 0x203160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203160u;
label_203160:
    // 0x203160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203164: 0x3e00008  jr          $ra
    ctx->pc = 0x203164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203164u;
        // 0x203168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20316Cu;
}
