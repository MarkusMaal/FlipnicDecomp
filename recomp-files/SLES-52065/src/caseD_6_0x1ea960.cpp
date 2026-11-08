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

// Function: caseD_6
// Address: 0x1ea960 - 0x1ea984
void caseD_6_0x1ea960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1ea960");
#endif

    switch (ctx->pc) {
        case 0x1ea96cu: goto label_1ea96c;
        case 0x1ea978u: goto label_1ea978;
        default: break;
    }

    ctx->pc = 0x1ea960u;

    // 0x1ea960: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ea960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ea964: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA964u;
    SET_GPR_U32(ctx, 31, 0x1EA96Cu);
    ctx->pc = 0x1EA968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA964u;
    // 0x1ea968: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA964u, 0x1EA96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA96Cu;
label_1ea96c:
    // 0x1ea96c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea970: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1EA970u;
    SET_GPR_U32(ctx, 31, 0x1EA978u);
    ctx->pc = 0x1EA974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA970u;
    // 0x1ea974: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1EA970u, 0x1EA978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA978u;
label_1ea978:
    // 0x1ea978: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ea978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ea97c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1EA97Cu;
    {
        const bool branch_taken_0x1ea97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA97Cu;
        // 0x1ea980: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea97c) {
            ctx->pc = 0x1EAB14u;
            return;
        }
    }
    ctx->pc = 0x1EA984u;
}
