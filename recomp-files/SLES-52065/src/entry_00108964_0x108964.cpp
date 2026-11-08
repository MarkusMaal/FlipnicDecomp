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

// Function: entry_00108964
// Address: 0x108964 - 0x108990
void entry_00108964_0x108964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108964_0x108964");
#endif

    switch (ctx->pc) {
        case 0x10896cu: goto label_10896c;
        case 0x108974u: goto label_108974;
        case 0x108988u: goto label_108988;
        default: break;
    }

    ctx->pc = 0x108964u;

    // 0x108964: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x108964u;
    SET_GPR_U32(ctx, 31, 0x10896Cu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x108964u, 0x10896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10896Cu;
label_10896c:
    // 0x10896c: 0xc049f08  jal         func_127C20
    ctx->pc = 0x10896Cu;
    SET_GPR_U32(ctx, 31, 0x108974u);
    ctx->pc = 0x108970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10896Cu;
    // 0x108970: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C20u, 0x10896Cu, 0x108974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108974u;
label_108974:
    // 0x108974: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x108974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x108978: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x108978u;
    {
        const bool branch_taken_0x108978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x108978) {
            ctx->pc = 0x1089A4u;
            return;
        }
    }
    ctx->pc = 0x108980u;
    // 0x108980: 0xc042524  jal         func_109490
    ctx->pc = 0x108980u;
    SET_GPR_U32(ctx, 31, 0x108988u);
    ctx->pc = 0x108984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108980u;
    // 0x108984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109490u, 0x108980u, 0x108988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108988u;
label_108988:
    // 0x108988: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x108988u;
    {
        const bool branch_taken_0x108988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108988) {
            ctx->pc = 0x1089A4u;
            return;
        }
    }
    ctx->pc = 0x108990u;
}
