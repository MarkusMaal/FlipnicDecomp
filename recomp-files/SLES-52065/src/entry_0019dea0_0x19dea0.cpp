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

// Function: entry_0019dea0
// Address: 0x19dea0 - 0x19dec0
void entry_0019dea0_0x19dea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dea0_0x19dea0");
#endif

    switch (ctx->pc) {
        case 0x19dea8u: goto label_19dea8;
        default: break;
    }

    ctx->pc = 0x19dea0u;

    // 0x19dea0: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x19DEA0u;
    SET_GPR_U32(ctx, 31, 0x19DEA8u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x19DEA0u, 0x19DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DEA8u;
label_19dea8:
    // 0x19dea8: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x19dea8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19deac: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19DEACu;
    {
        const bool branch_taken_0x19deac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEACu;
        // 0x19deb0: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19deac) {
            ctx->pc = 0x19DEC0u;
            return;
        }
    }
    ctx->pc = 0x19DEB4u;
    // 0x19deb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DEB4u;
    {
        const bool branch_taken_0x19deb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19deb4) {
            ctx->pc = 0x19DEC0u;
            return;
        }
    }
    ctx->pc = 0x19DEBCu;
    // 0x19debc: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x19debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    ctx->pc = 0x19dec0u;
}
