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

// Function: entry_0018a4ec
// Address: 0x18a4ec - 0x18a504
void entry_0018a4ec_0x18a4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a4ec_0x18a4ec");
#endif

    switch (ctx->pc) {
        case 0x18a4f4u: goto label_18a4f4;
        case 0x18a500u: goto label_18a500;
        default: break;
    }

    ctx->pc = 0x18a4ecu;

    // 0x18a4ec: 0xc07588a  jal         func_1D6228
    ctx->pc = 0x18A4ECu;
    SET_GPR_U32(ctx, 31, 0x18A4F4u);
    ctx->pc = 0x18A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A4ECu;
    // 0x18a4f0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6228u, 0x18A4ECu, 0x18A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4F4u;
label_18a4f4:
    // 0x18a4f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4f8: 0xc075164  jal         func_1D4590
    ctx->pc = 0x18A4F8u;
    SET_GPR_U32(ctx, 31, 0x18A500u);
    ctx->pc = 0x18A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A4F8u;
    // 0x18a4fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4590u, 0x18A4F8u, 0x18A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A500u;
label_18a500:
    // 0x18a500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x18a504u;
}
