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

// Function: FUN_001d2320
// Address: 0x1d2320 - 0x1d2364
void FUN_001d2320_0x1d2320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2320_0x1d2320");
#endif

    switch (ctx->pc) {
        case 0x1d2340u: goto label_1d2340;
        case 0x1d2350u: goto label_1d2350;
        default: break;
    }

    ctx->pc = 0x1d2320u;

    // 0x1d2320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d2320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d2324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d2324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d2328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d232c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d232cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2330: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d2330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2334: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d2334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2338: 0xc074af0  jal         func_1D2BC0
    ctx->pc = 0x1D2338u;
    SET_GPR_U32(ctx, 31, 0x1D2340u);
    ctx->pc = 0x1D233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2338u;
    // 0x1d233c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2BC0u, 0x1D2338u, 0x1D2340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2340u;
label_1d2340:
    // 0x1d2340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2344: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d2344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2348: 0xc0748dc  jal         func_1D2370
    ctx->pc = 0x1D2348u;
    SET_GPR_U32(ctx, 31, 0x1D2350u);
    ctx->pc = 0x1D234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2348u;
    // 0x1d234c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2370u, 0x1D2348u, 0x1D2350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2350u;
label_1d2350:
    // 0x1d2350: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d2350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d235c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D235Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D235Cu;
        // 0x1d2360: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D235Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2364u;
}
