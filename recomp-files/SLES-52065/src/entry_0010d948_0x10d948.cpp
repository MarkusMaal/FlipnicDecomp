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

// Function: entry_0010d948
// Address: 0x10d948 - 0x10d960
void entry_0010d948_0x10d948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d948_0x10d948");
#endif

    ctx->pc = 0x10d948u;

label_10d948:
    // 0x10d948: 0x8eb90008  lw          $t9, 0x8($s5)
    ctx->pc = 0x10d948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_10d94c:
    // 0x10d94c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10d94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d950:
    // 0x10d950: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10d950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10d954:
    // 0x10d954: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x10d954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_10d958:
    // 0x10d958: 0x320f809  jalr        $t9
label_10d95c:
    if (ctx->pc == 0x10D95Cu) {
        ctx->pc = 0x10D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D958u;
        // 0x10d95c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D960u;
        goto label_fallthrough_0x10d958;
    }
    ctx->pc = 0x10D958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10D960u);
        ctx->pc = 0x10D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D958u;
        // 0x10d95c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D958u, 0x10D960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x10d958:
    ctx->pc = 0x10D960u;
}
