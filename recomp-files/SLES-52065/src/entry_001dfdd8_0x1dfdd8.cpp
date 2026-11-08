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

// Function: entry_001dfdd8
// Address: 0x1dfdd8 - 0x1dfdf8
void entry_001dfdd8_0x1dfdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfdd8_0x1dfdd8");
#endif

    switch (ctx->pc) {
        case 0x1dfde4u: goto label_1dfde4;
        case 0x1dfdf0u: goto label_1dfdf0;
        default: break;
    }

    ctx->pc = 0x1dfdd8u;

    // 0x1dfdd8: 0xde450050  ld          $a1, 0x50($s2)
    ctx->pc = 0x1dfdd8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1dfddc: 0xc082014  jal         func_208050
    ctx->pc = 0x1DFDDCu;
    SET_GPR_U32(ctx, 31, 0x1DFDE4u);
    ctx->pc = 0x1DFDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDDCu;
    // 0x1dfde0: 0xde440048  ld          $a0, 0x48($s2) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1DFDDCu, 0x1DFDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDE4u;
label_1dfde4:
    // 0x1dfde4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dfde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfde8: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1DFDE8u;
    SET_GPR_U32(ctx, 31, 0x1DFDF0u);
    ctx->pc = 0x1DFDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDE8u;
    // 0x1dfdec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1DFDE8u, 0x1DFDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDF0u;
label_1dfdf0:
    // 0x1dfdf0: 0x443ffc9  bgezl       $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1DFDF0u;
    {
        const bool branch_taken_0x1dfdf0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1dfdf0) {
            ctx->pc = 0x1DFDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFDF0u;
            // 0x1dfdf4: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFD18u;
            return;
        }
    }
    ctx->pc = 0x1DFDF8u;
}
