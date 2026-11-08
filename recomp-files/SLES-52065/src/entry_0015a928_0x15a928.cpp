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

// Function: entry_0015a928
// Address: 0x15a928 - 0x15a93c
void entry_0015a928_0x15a928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a928_0x15a928");
#endif

    switch (ctx->pc) {
        case 0x15a938u: goto label_15a938;
        default: break;
    }

    ctx->pc = 0x15a928u;

    // 0x15a928: 0xc46c004c  lwc1        $f12, 0x4C($v1)
    ctx->pc = 0x15a928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a92c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15a92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a930: 0xc0566b8  jal         func_159AE0
    ctx->pc = 0x15A930u;
    SET_GPR_U32(ctx, 31, 0x15A938u);
    ctx->pc = 0x15A934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A930u;
    // 0x15a934: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159AE0u, 0x15A930u, 0x15A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A938u;
label_15a938:
    // 0x15a938: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15a938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15a93cu;
}
