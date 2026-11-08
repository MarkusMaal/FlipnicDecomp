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

// Function: entry_002052f8
// Address: 0x2052f8 - 0x205314
void entry_002052f8_0x2052f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002052f8_0x2052f8");
#endif

    switch (ctx->pc) {
        case 0x205308u: goto label_205308;
        default: break;
    }

    ctx->pc = 0x2052f8u;

    // 0x2052f8: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2052F8u;
    {
        const bool branch_taken_0x2052f8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2052f8) {
            ctx->pc = 0x2052FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2052F8u;
            // 0x2052fc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205314u;
            return;
        }
    }
    ctx->pc = 0x205300u;
    // 0x205300: 0xc080432  jal         func_2010C8
    ctx->pc = 0x205300u;
    SET_GPR_U32(ctx, 31, 0x205308u);
    ctx->pc = 0x205304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205300u;
    // 0x205304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x205300u, 0x205308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205308u;
label_205308:
    // 0x205308: 0x14400287  bnez        $v0, . + 4 + (0x287 << 2)
    ctx->pc = 0x205308u;
    {
        const bool branch_taken_0x205308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205308u;
        // 0x20530c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205308) {
            ctx->pc = 0x205D28u;
            return;
        }
    }
    ctx->pc = 0x205310u;
    // 0x205310: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x205310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x205314u;
}
