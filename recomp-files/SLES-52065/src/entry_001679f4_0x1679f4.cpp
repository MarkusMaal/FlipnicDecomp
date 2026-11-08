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

// Function: entry_001679f4
// Address: 0x1679f4 - 0x167a08
void entry_001679f4_0x1679f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001679f4_0x1679f4");
#endif

    switch (ctx->pc) {
        case 0x1679fcu: goto label_1679fc;
        default: break;
    }

    ctx->pc = 0x1679f4u;

    // 0x1679f4: 0xc042570  jal         func_1095C0
    ctx->pc = 0x1679F4u;
    SET_GPR_U32(ctx, 31, 0x1679FCu);
    ctx->pc = 0x1679F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1679F4u;
    // 0x1679f8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1679F4u, 0x1679FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1679FCu;
label_1679fc:
    // 0x1679fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1679fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167a00: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x167A00u;
    {
        const bool branch_taken_0x167a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A00u;
        // 0x167a04: 0xa20301d3  sb          $v1, 0x1D3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a00) {
            ctx->pc = 0x167A54u;
            return;
        }
    }
    ctx->pc = 0x167A08u;
}
