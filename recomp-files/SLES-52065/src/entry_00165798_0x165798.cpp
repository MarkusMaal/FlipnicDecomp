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

// Function: entry_00165798
// Address: 0x165798 - 0x1657bc
void entry_00165798_0x165798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165798_0x165798");
#endif

    switch (ctx->pc) {
        case 0x1657a4u: goto label_1657a4;
        default: break;
    }

    ctx->pc = 0x165798u;

    // 0x165798: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x165798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16579c: 0xc059568  jal         func_1655A0
    ctx->pc = 0x16579Cu;
    SET_GPR_U32(ctx, 31, 0x1657A4u);
    ctx->pc = 0x1657A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16579Cu;
    // 0x1657a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1655A0u, 0x16579Cu, 0x1657A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657A4u;
label_1657a4:
    // 0x1657a4: 0x2911023  subu        $v0, $s4, $s1
    ctx->pc = 0x1657a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1657a8: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x1657a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1657ac: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1657acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1657b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1657b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657b4: 0xc059568  jal         func_1655A0
    ctx->pc = 0x1657B4u;
    SET_GPR_U32(ctx, 31, 0x1657BCu);
    ctx->pc = 0x1657B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657B4u;
    // 0x1657b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1655A0u, 0x1657B4u, 0x1657BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657BCu;
}
