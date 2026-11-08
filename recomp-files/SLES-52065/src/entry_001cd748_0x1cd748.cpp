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

// Function: entry_001cd748
// Address: 0x1cd748 - 0x1cd770
void entry_001cd748_0x1cd748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd748_0x1cd748");
#endif

    switch (ctx->pc) {
        case 0x1cd754u: goto label_1cd754;
        case 0x1cd768u: goto label_1cd768;
        default: break;
    }

    ctx->pc = 0x1cd748u;

    // 0x1cd748: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cd748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd74c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD74Cu;
    SET_GPR_U32(ctx, 31, 0x1CD754u);
    ctx->pc = 0x1CD750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD74Cu;
    // 0x1cd750: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD74Cu, 0x1CD754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD754u;
label_1cd754:
    // 0x1cd754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd758: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cd758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cd75c: 0x24428a40  addiu       $v0, $v0, -0x75C0
    ctx->pc = 0x1cd75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937152));
    // 0x1cd760: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CD760u;
    SET_GPR_U32(ctx, 31, 0x1CD768u);
    ctx->pc = 0x1CD764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD760u;
    // 0x1cd764: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CD760u, 0x1CD768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD768u;
label_1cd768:
    // 0x1cd768: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1cd768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1cd76c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cd76cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1cd770u;
}
