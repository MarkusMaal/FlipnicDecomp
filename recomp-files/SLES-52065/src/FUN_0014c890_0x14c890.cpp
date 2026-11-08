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

// Function: FUN_0014c890
// Address: 0x14c890 - 0x14c8d4
void FUN_0014c890_0x14c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014c890_0x14c890");
#endif

    switch (ctx->pc) {
        case 0x14c8b0u: goto label_14c8b0;
        case 0x14c8c0u: goto label_14c8c0;
        default: break;
    }

    ctx->pc = 0x14c890u;

    // 0x14c890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14c890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14c894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14c898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14c898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14c89c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14c89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14c8a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14c8a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14c8a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8a8: 0xc04c0e0  jal         func_130380
    ctx->pc = 0x14C8A8u;
    SET_GPR_U32(ctx, 31, 0x14C8B0u);
    ctx->pc = 0x14C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C8A8u;
    // 0x14c8ac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x14C8A8u, 0x14C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8B0u;
label_14c8b0:
    // 0x14c8b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14c8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14c8b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8b8: 0xc053238  jal         func_14C8E0
    ctx->pc = 0x14C8B8u;
    SET_GPR_U32(ctx, 31, 0x14C8C0u);
    ctx->pc = 0x14C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C8B8u;
    // 0x14c8bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C8E0u, 0x14C8B8u, 0x14C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8C0u;
label_14c8c0:
    // 0x14c8c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14c8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c8c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14c8c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c8c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14c8c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x14C8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C8CCu;
        // 0x14c8d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C8D4u;
}
