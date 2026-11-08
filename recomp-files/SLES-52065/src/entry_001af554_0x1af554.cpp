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

// Function: entry_001af554
// Address: 0x1af554 - 0x1af574
void entry_001af554_0x1af554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af554_0x1af554");
#endif

    switch (ctx->pc) {
        case 0x1af560u: goto label_1af560;
        default: break;
    }

    ctx->pc = 0x1af554u;

    // 0x1af554: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1af554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af558: 0xc061fa8  jal         func_187EA0
    ctx->pc = 0x1AF558u;
    SET_GPR_U32(ctx, 31, 0x1AF560u);
    ctx->pc = 0x1AF55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF558u;
    // 0x1af55c: 0x24a50b70  addiu       $a1, $a1, 0xB70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1AF558u, 0x1AF560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF560u;
label_1af560:
    // 0x1af560: 0x11182b  sltu        $v1, $zero, $s1
    ctx->pc = 0x1af560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1af564: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF564u;
    {
        const bool branch_taken_0x1af564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF564u;
        // 0x1af568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af564) {
            ctx->pc = 0x1AF574u;
            return;
        }
    }
    ctx->pc = 0x1AF56Cu;
    // 0x1af56c: 0x920328fe  lbu         $v1, 0x28FE($s0)
    ctx->pc = 0x1af56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10494)));
    // 0x1af570: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1af570u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x1af574u;
}
