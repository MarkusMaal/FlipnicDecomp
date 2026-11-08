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

// Function: entry_0010f3ec
// Address: 0x10f3ec - 0x10f3fc
void entry_0010f3ec_0x10f3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f3ec_0x10f3ec");
#endif

    switch (ctx->pc) {
        case 0x10f3f4u: goto label_10f3f4;
        default: break;
    }

    ctx->pc = 0x10f3ecu;

    // 0x10f3ec: 0xc042570  jal         func_1095C0
    ctx->pc = 0x10F3ECu;
    SET_GPR_U32(ctx, 31, 0x10F3F4u);
    ctx->pc = 0x10F3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F3ECu;
    // 0x10f3f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10F3ECu, 0x10F3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F3F4u;
label_10f3f4:
    // 0x10f3f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f3f8: 0xa20301d3  sb          $v1, 0x1D3($s0)
    ctx->pc = 0x10f3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x10f3fcu;
}
