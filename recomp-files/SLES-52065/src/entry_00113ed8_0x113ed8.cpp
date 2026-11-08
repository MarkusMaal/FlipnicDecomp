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

// Function: entry_00113ed8
// Address: 0x113ed8 - 0x113f00
void entry_00113ed8_0x113ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113ed8_0x113ed8");
#endif

    switch (ctx->pc) {
        case 0x113ef8u: goto label_113ef8;
        default: break;
    }

    ctx->pc = 0x113ed8u;

    // 0x113ed8: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x113ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x113edc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ee4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x113ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ee8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x113ee8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113eec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x113eecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ef0: 0xc043e58  jal         func_10F960
    ctx->pc = 0x113EF0u;
    SET_GPR_U32(ctx, 31, 0x113EF8u);
    ctx->pc = 0x113EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113EF0u;
    // 0x113ef4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F960u, 0x113EF0u, 0x113EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113EF8u;
label_113ef8:
    // 0x113ef8: 0x26310044  addiu       $s1, $s1, 0x44
    ctx->pc = 0x113ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x113efc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x113efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x113f00u;
}
