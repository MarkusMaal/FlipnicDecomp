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

// Function: FUN_002033d0
// Address: 0x2033d0 - 0x203404
void FUN_002033d0_0x2033d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002033d0_0x2033d0");
#endif

    switch (ctx->pc) {
        case 0x2033f8u: goto label_2033f8;
        default: break;
    }

    ctx->pc = 0x2033d0u;

    // 0x2033d0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2033d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033d4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2033d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2033d8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2033d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2033dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2033e0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2033e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033e4: 0x8c44d9ac  lw          $a0, -0x2654($v0)
    ctx->pc = 0x2033e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x2033e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2033e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2033ec: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2033ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033f0: 0xc080c66  jal         func_203198
    ctx->pc = 0x2033F0u;
    SET_GPR_U32(ctx, 31, 0x2033F8u);
    ctx->pc = 0x2033F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2033F0u;
    // 0x2033f4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203198u, 0x2033F0u, 0x2033F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2033F8u;
label_2033f8:
    // 0x2033f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2033f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2033fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2033FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033FCu;
        // 0x203400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2033FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203404u;
}
