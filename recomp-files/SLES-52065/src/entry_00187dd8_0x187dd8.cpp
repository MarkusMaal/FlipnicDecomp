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

// Function: entry_00187dd8
// Address: 0x187dd8 - 0x187dfc
void entry_00187dd8_0x187dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187dd8_0x187dd8");
#endif

    switch (ctx->pc) {
        case 0x187decu: goto label_187dec;
        default: break;
    }

    ctx->pc = 0x187dd8u;

    // 0x187dd8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x187dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x187ddc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187de0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x187de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x187de4: 0xc081798  jal         func_205E60
    ctx->pc = 0x187DE4u;
    SET_GPR_U32(ctx, 31, 0x187DECu);
    ctx->pc = 0x187DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187DE4u;
    // 0x187de8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205E60u, 0x187DE4u, 0x187DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187DECu;
label_187dec:
    // 0x187dec: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x187decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x187df0: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x187df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x187df4: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x187DF4u;
    {
        const bool branch_taken_0x187df4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x187DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DF4u;
        // 0x187df8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187df4) {
            ctx->pc = 0x187E20u;
            return;
        }
    }
    ctx->pc = 0x187DFCu;
}
