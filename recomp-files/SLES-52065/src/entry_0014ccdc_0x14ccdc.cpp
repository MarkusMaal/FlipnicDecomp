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

// Function: entry_0014ccdc
// Address: 0x14ccdc - 0x14ccf0
void entry_0014ccdc_0x14ccdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ccdc_0x14ccdc");
#endif

    switch (ctx->pc) {
        case 0x14cce8u: goto label_14cce8;
        default: break;
    }

    ctx->pc = 0x14ccdcu;

    // 0x14ccdc: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x14ccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x14cce0: 0xc0522d4  jal         func_148B50
    ctx->pc = 0x14CCE0u;
    SET_GPR_U32(ctx, 31, 0x14CCE8u);
    ctx->pc = 0x14CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CCE0u;
    // 0x14cce4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148B50u, 0x14CCE0u, 0x14CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCE8u;
label_14cce8:
    // 0x14cce8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x14CCE8u;
    {
        const bool branch_taken_0x14cce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cce8) {
            ctx->pc = 0x14CE34u;
            return;
        }
    }
    ctx->pc = 0x14CCF0u;
}
