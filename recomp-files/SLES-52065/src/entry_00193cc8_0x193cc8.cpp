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

// Function: entry_00193cc8
// Address: 0x193cc8 - 0x193cec
void entry_00193cc8_0x193cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193cc8_0x193cc8");
#endif

    switch (ctx->pc) {
        case 0x193ce4u: goto label_193ce4;
        default: break;
    }

    ctx->pc = 0x193cc8u;

    // 0x193cc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193cc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cd4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193cd4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193cd8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x193cd8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x193cdc: 0xc053c00  jal         func_14F000
    ctx->pc = 0x193CDCu;
    SET_GPR_U32(ctx, 31, 0x193CE4u);
    ctx->pc = 0x193CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193CDCu;
    // 0x193ce0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x193CDCu, 0x193CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193CE4u;
label_193ce4:
    // 0x193ce4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x193CE4u;
    {
        const bool branch_taken_0x193ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193ce4) {
            ctx->pc = 0x193DD4u;
            return;
        }
    }
    ctx->pc = 0x193CECu;
}
