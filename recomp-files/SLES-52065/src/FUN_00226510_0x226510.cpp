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

// Function: FUN_00226510
// Address: 0x226510 - 0x226560
void FUN_00226510_0x226510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00226510_0x226510");
#endif

    switch (ctx->pc) {
        case 0x226528u: goto label_226528;
        case 0x226554u: goto label_226554;
        default: break;
    }

    ctx->pc = 0x226510u;

    // 0x226510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226514: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22651c: 0x248487c0  addiu       $a0, $a0, -0x7840
    ctx->pc = 0x22651cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936512));
    // 0x226520: 0xc049dd8  jal         func_127760
    ctx->pc = 0x226520u;
    SET_GPR_U32(ctx, 31, 0x226528u);
    ctx->pc = 0x226524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226520u;
    // 0x226524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x226520u, 0x226528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226528u;
label_226528:
    // 0x226528: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x226528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x22652c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x22652cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226530: 0xac2087c4  sw          $zero, -0x783C($at)
    ctx->pc = 0x226530u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3687C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3687C4u, _value); } while (0);
    // 0x226534: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x226534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x226538: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x22653c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x22653cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x226540: 0x248487c0  addiu       $a0, $a0, -0x7840
    ctx->pc = 0x226540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936512));
    // 0x226544: 0x24a5c270  addiu       $a1, $a1, -0x3D90
    ctx->pc = 0x226544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951536));
    // 0x226548: 0x24c687b0  addiu       $a2, $a2, -0x7850
    ctx->pc = 0x226548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936496));
    // 0x22654c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x22654Cu;
    SET_GPR_U32(ctx, 31, 0x226554u);
    ctx->pc = 0x226550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22654Cu;
    // 0x226550: 0xac2087c8  sw          $zero, -0x7838($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936520), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x22654Cu, 0x226554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226554u;
label_226554:
    // 0x226554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226558: 0x3e00008  jr          $ra
    ctx->pc = 0x226558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226558u;
        // 0x22655c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226560u;
}
