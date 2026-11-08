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

// Function: entry_001182d4
// Address: 0x1182d4 - 0x11830c
void entry_001182d4_0x1182d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001182d4_0x1182d4");
#endif

    switch (ctx->pc) {
        case 0x1182e0u: goto label_1182e0;
        case 0x1182f8u: goto label_1182f8;
        case 0x118300u: goto label_118300;
        default: break;
    }

    ctx->pc = 0x1182d4u;

    // 0x1182d4: 0x0  nop
    ctx->pc = 0x1182d4u;
    // NOP
    // 0x1182d8: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1182D8u;
    SET_GPR_U32(ctx, 31, 0x1182E0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1182D8u, 0x1182E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182E0u;
label_1182e0:
    // 0x1182e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1182e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1182e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1182e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182ec: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x1182ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1182f0: 0xc062a44  jal         func_18A910
    ctx->pc = 0x1182F0u;
    SET_GPR_U32(ctx, 31, 0x1182F8u);
    ctx->pc = 0x1182F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1182F0u;
    // 0x1182f4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A910u, 0x1182F0u, 0x1182F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182F8u;
label_1182f8:
    // 0x1182f8: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1182F8u;
    SET_GPR_U32(ctx, 31, 0x118300u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1182F8u, 0x118300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118300u;
label_118300:
    // 0x118300: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x118300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x118304: 0xc062b48  jal         func_18AD20
    ctx->pc = 0x118304u;
    SET_GPR_U32(ctx, 31, 0x11830Cu);
    ctx->pc = 0x118308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118304u;
    // 0x118308: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD20u, 0x118304u, 0x11830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11830Cu;
}
