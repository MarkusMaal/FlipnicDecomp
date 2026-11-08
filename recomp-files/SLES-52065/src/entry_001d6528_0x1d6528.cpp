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

// Function: entry_001d6528
// Address: 0x1d6528 - 0x1d6560
void entry_001d6528_0x1d6528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6528_0x1d6528");
#endif

    switch (ctx->pc) {
        case 0x1d6530u: goto label_1d6530;
        case 0x1d653cu: goto label_1d653c;
        case 0x1d6554u: goto label_1d6554;
        default: break;
    }

    ctx->pc = 0x1d6528u;

    // 0x1d6528: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6528u;
    SET_GPR_U32(ctx, 31, 0x1D6530u);
    ctx->pc = 0x1D652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6528u;
    // 0x1d652c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6528u, 0x1D6530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6530u;
label_1d6530:
    // 0x1d6530: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6534: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D6534u;
    SET_GPR_U32(ctx, 31, 0x1D653Cu);
    ctx->pc = 0x1D6538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6534u;
    // 0x1d6538: 0x26053740  addiu       $a1, $s0, 0x3740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 14144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D6534u, 0x1D653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D653Cu;
label_1d653c:
    // 0x1d653c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d653cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d6540: 0x8ea60048  lw          $a2, 0x48($s5)
    ctx->pc = 0x1d6540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x1d6544: 0x24a53758  addiu       $a1, $a1, 0x3758
    ctx->pc = 0x1d6544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14168));
    // 0x1d6548: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d654c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1D654Cu;
    SET_GPR_U32(ctx, 31, 0x1D6554u);
    ctx->pc = 0x1D6550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D654Cu;
    // 0x1d6550: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1D654Cu, 0x1D6554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6554u;
label_1d6554:
    // 0x1d6554: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6558: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6558u;
    SET_GPR_U32(ctx, 31, 0x1D6560u);
    ctx->pc = 0x1D655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6558u;
    // 0x1d655c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6558u, 0x1D6560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6560u;
}
