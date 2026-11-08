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

// Function: entry_00112ca8
// Address: 0x112ca8 - 0x112cbc
void entry_00112ca8_0x112ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112ca8_0x112ca8");
#endif

    switch (ctx->pc) {
        case 0x112cb4u: goto label_112cb4;
        default: break;
    }

    ctx->pc = 0x112ca8u;

    // 0x112ca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112cac: 0xc042570  jal         func_1095C0
    ctx->pc = 0x112CACu;
    SET_GPR_U32(ctx, 31, 0x112CB4u);
    ctx->pc = 0x112CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CACu;
    // 0x112cb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x112CACu, 0x112CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CB4u;
label_112cb4:
    // 0x112cb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x112cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112cb8: 0xa24301d3  sb          $v1, 0x1D3($s2)
    ctx->pc = 0x112cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x112cbcu;
}
