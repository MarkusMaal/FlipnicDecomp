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

// Function: entry_001c757c
// Address: 0x1c757c - 0x1c7594
void entry_001c757c_0x1c757c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c757c_0x1c757c");
#endif

    switch (ctx->pc) {
        case 0x1c7588u: goto label_1c7588;
        default: break;
    }

    ctx->pc = 0x1c757cu;

    // 0x1c757c: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c757cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c7580: 0xc0748c8  jal         func_1D2320
    ctx->pc = 0x1C7580u;
    SET_GPR_U32(ctx, 31, 0x1C7588u);
    ctx->pc = 0x1C7584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7580u;
    // 0x1c7584: 0x24a520b8  addiu       $a1, $a1, 0x20B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2320u, 0x1C7580u, 0x1C7588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7588u;
label_1c7588:
    // 0x1c7588: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1c7588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1c758c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1C758Cu;
    {
        const bool branch_taken_0x1c758c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C758Cu;
        // 0x1c7590: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c758c) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7594u;
}
