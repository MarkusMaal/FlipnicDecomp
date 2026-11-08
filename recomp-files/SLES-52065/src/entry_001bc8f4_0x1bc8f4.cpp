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

// Function: entry_001bc8f4
// Address: 0x1bc8f4 - 0x1bc918
void entry_001bc8f4_0x1bc8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc8f4_0x1bc8f4");
#endif

    switch (ctx->pc) {
        case 0x1bc900u: goto label_1bc900;
        default: break;
    }

    ctx->pc = 0x1bc8f4u;

    // 0x1bc8f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc8f8: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1BC8F8u;
    SET_GPR_U32(ctx, 31, 0x1BC900u);
    ctx->pc = 0x1BC8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8F8u;
    // 0x1bc8fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1BC8F8u, 0x1BC900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC900u;
label_1bc900:
    // 0x1bc900: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1bc900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1bc904: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1bc904u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1bc908: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC908u;
    {
        const bool branch_taken_0x1bc908 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC908u;
        // 0x1bc90c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc908) {
            ctx->pc = 0x1BC91Cu;
            return;
        }
    }
    ctx->pc = 0x1BC910u;
    // 0x1bc910: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BC910u;
    SET_GPR_U32(ctx, 31, 0x1BC918u);
    ctx->pc = 0x1BC914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC910u;
    // 0x1bc914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BC910u, 0x1BC918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC918u;
}
