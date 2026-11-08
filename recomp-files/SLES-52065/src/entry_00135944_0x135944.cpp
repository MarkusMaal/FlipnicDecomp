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

// Function: entry_00135944
// Address: 0x135944 - 0x135958
void entry_00135944_0x135944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135944_0x135944");
#endif

    switch (ctx->pc) {
        case 0x13594cu: goto label_13594c;
        case 0x135954u: goto label_135954;
        default: break;
    }

    ctx->pc = 0x135944u;

    // 0x135944: 0xc061bf0  jal         func_186FC0
    ctx->pc = 0x135944u;
    SET_GPR_U32(ctx, 31, 0x13594Cu);
    ctx->pc = 0x186FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FC0u, 0x135944u, 0x13594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13594Cu;
label_13594c:
    // 0x13594c: 0xc061b50  jal         func_186D40
    ctx->pc = 0x13594Cu;
    SET_GPR_U32(ctx, 31, 0x135954u);
    ctx->pc = 0x135950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13594Cu;
    // 0x135950: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D40u, 0x13594Cu, 0x135954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135954u;
label_135954:
    // 0x135954: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x135954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135958u;
}
