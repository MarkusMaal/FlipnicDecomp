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

// Function: entry_0019aba0
// Address: 0x19aba0 - 0x19abb4
void entry_0019aba0_0x19aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019aba0_0x19aba0");
#endif

    ctx->pc = 0x19aba0u;

    // 0x19aba0: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x19aba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
    // 0x19aba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19aba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aba8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19aba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19abac: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19ABACu;
    SET_GPR_U32(ctx, 31, 0x19ABB4u);
    ctx->pc = 0x19ABB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ABACu;
    // 0x19abb0: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19ABACu, 0x19ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ABB4u;
}
