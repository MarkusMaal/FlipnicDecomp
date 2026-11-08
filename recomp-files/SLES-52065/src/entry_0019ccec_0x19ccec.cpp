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

// Function: entry_0019ccec
// Address: 0x19ccec - 0x19cd08
void entry_0019ccec_0x19ccec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ccec_0x19ccec");
#endif

    ctx->pc = 0x19ccecu;

    // 0x19ccec: 0x0  nop
    ctx->pc = 0x19ccecu;
    // NOP
    // 0x19ccf0: 0x8e460824  lw          $a2, 0x824($s2)
    ctx->pc = 0x19ccf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2084)));
    // 0x19ccf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ccf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ccf8: 0x26450828  addiu       $a1, $s2, 0x828
    ctx->pc = 0x19ccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2088));
    // 0x19ccfc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19ccfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd00: 0xc067364  jal         func_19CD90
    ctx->pc = 0x19CD00u;
    SET_GPR_U32(ctx, 31, 0x19CD08u);
    ctx->pc = 0x19CD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CD00u;
    // 0x19cd04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CD90u, 0x19CD00u, 0x19CD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CD08u;
}
