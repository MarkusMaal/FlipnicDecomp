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

// Function: entry_00195774
// Address: 0x195774 - 0x1957a0
void entry_00195774_0x195774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195774_0x195774");
#endif

    switch (ctx->pc) {
        case 0x195798u: goto label_195798;
        default: break;
    }

    ctx->pc = 0x195774u;

    // 0x195774: 0x0  nop
    ctx->pc = 0x195774u;
    // NOP
    // 0x195778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19577c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19577cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x195780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195788: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195788u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19578c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19578cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x195790: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x195790u;
    SET_GPR_U32(ctx, 31, 0x195798u);
    ctx->pc = 0x195794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195790u;
    // 0x195794: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195790u, 0x195798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195798u;
label_195798:
    // 0x195798: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x195798u;
    {
        const bool branch_taken_0x195798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195798) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x1957A0u;
}
