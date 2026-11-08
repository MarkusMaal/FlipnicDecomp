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

// Function: entry_00131c10
// Address: 0x131c10 - 0x131c1c
void entry_00131c10_0x131c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131c10_0x131c10");
#endif

    switch (ctx->pc) {
        case 0x131c18u: goto label_131c18;
        default: break;
    }

    ctx->pc = 0x131c10u;

    // 0x131c10: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x131C10u;
    SET_GPR_U32(ctx, 31, 0x131C18u);
    ctx->pc = 0x131C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C10u;
    // 0x131c14: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x131C10u, 0x131C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C18u;
label_131c18:
    // 0x131c18: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x131c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x131c1cu;
}
