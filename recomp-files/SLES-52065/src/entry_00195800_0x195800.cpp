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

// Function: entry_00195800
// Address: 0x195800 - 0x195824
void entry_00195800_0x195800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195800_0x195800");
#endif

    switch (ctx->pc) {
        case 0x19581cu: goto label_19581c;
        default: break;
    }

    ctx->pc = 0x195800u;

    // 0x195800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195804: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x195808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19580c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19580cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195810: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x195810u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x195814: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x195814u;
    SET_GPR_U32(ctx, 31, 0x19581Cu);
    ctx->pc = 0x195818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195814u;
    // 0x195818: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195814u, 0x19581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19581Cu;
label_19581c:
    // 0x19581c: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x19581Cu;
    {
        const bool branch_taken_0x19581c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19581c) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195824u;
}
