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

// Function: entry_00195904
// Address: 0x195904 - 0x195930
void entry_00195904_0x195904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195904_0x195904");
#endif

    switch (ctx->pc) {
        case 0x195928u: goto label_195928;
        default: break;
    }

    ctx->pc = 0x195904u;

    // 0x195904: 0x0  nop
    ctx->pc = 0x195904u;
    // NOP
    // 0x195908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19590c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19590cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x195910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195918: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19591c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19591cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x195920: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x195920u;
    SET_GPR_U32(ctx, 31, 0x195928u);
    ctx->pc = 0x195924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195920u;
    // 0x195924: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195920u, 0x195928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195928u;
label_195928:
    // 0x195928: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x195928u;
    {
        const bool branch_taken_0x195928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195928) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195930u;
}
