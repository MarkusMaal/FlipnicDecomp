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

// Function: entry_001dfdc8
// Address: 0x1dfdc8 - 0x1dfdd8
void entry_001dfdc8_0x1dfdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfdc8_0x1dfdc8");
#endif

    switch (ctx->pc) {
        case 0x1dfdd4u: goto label_1dfdd4;
        default: break;
    }

    ctx->pc = 0x1dfdc8u;

    // 0x1dfdc8: 0xde440050  ld          $a0, 0x50($s2)
    ctx->pc = 0x1dfdc8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1dfdcc: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1DFDCCu;
    SET_GPR_U32(ctx, 31, 0x1DFDD4u);
    ctx->pc = 0x1DFDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDCCu;
    // 0x1dfdd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DFDCCu, 0x1DFDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDD4u;
label_1dfdd4:
    // 0x1dfdd4: 0xfe420050  sd          $v0, 0x50($s2)
    ctx->pc = 0x1dfdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 2));
    ctx->pc = 0x1dfdd8u;
}
