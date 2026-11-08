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

// Function: entry_001e9170
// Address: 0x1e9170 - 0x1e9194
void entry_001e9170_0x1e9170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9170_0x1e9170");
#endif

    switch (ctx->pc) {
        case 0x1e9188u: goto label_1e9188;
        default: break;
    }

    ctx->pc = 0x1e9170u;

label_1e9170:
    // 0x1e9170: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1e9170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1e9174:
    // 0x1e9174: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e9174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e9178:
    // 0x1e9178: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1e9178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1e917c:
    // 0x1e917c: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x1e917cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1e9180:
    // 0x1e9180: 0x40f809  jalr        $v0
label_1e9184:
    if (ctx->pc == 0x1E9184u) {
        ctx->pc = 0x1E9184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9180u;
        // 0x1e9184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9188u;
        goto label_1e9188;
    }
    ctx->pc = 0x1E9180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9188u);
        ctx->pc = 0x1E9184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9180u;
        // 0x1e9184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9180u, 0x1E9188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9188u;
label_1e9188:
    // 0x1e9188: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e9188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e918c:
    // 0x1e918c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e918cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e9190:
    // 0x1e9190: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1e9190u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1e9194u;
}
