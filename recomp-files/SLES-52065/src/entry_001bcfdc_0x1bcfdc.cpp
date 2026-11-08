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

// Function: entry_001bcfdc
// Address: 0x1bcfdc - 0x1bcfe4
void entry_001bcfdc_0x1bcfdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcfdc_0x1bcfdc");
#endif

    ctx->pc = 0x1bcfdcu;

    // 0x1bcfdc: 0xc06f500  jal         func_1BD400
    ctx->pc = 0x1BCFDCu;
    SET_GPR_U32(ctx, 31, 0x1BCFE4u);
    ctx->pc = 0x1BCFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCFDCu;
    // 0x1bcfe0: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD400u, 0x1BCFDCu, 0x1BCFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCFE4u;
}
