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

// Function: entry_00134698
// Address: 0x134698 - 0x1346bc
void entry_00134698_0x134698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134698_0x134698");
#endif

    switch (ctx->pc) {
        case 0x1346a8u: goto label_1346a8;
        default: break;
    }

    ctx->pc = 0x134698u;

    // 0x134698: 0x8fa603ec  lw          $a2, 0x3EC($sp)
    ctx->pc = 0x134698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1004)));
    // 0x13469c: 0x2332821  addu        $a1, $s1, $s3
    ctx->pc = 0x13469cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1346a0: 0xc0507d0  jal         func_141F40
    ctx->pc = 0x1346A0u;
    SET_GPR_U32(ctx, 31, 0x1346A8u);
    ctx->pc = 0x1346A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1346A0u;
    // 0x1346a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141F40u, 0x1346A0u, 0x1346A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1346A8u;
label_1346a8:
    // 0x1346a8: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1346a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1346ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1346acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1346b0: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x1346b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1346b4: 0xc050784  jal         func_141E10
    ctx->pc = 0x1346B4u;
    SET_GPR_U32(ctx, 31, 0x1346BCu);
    ctx->pc = 0x1346B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1346B4u;
    // 0x1346b8: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141E10u, 0x1346B4u, 0x1346BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1346BCu;
}
