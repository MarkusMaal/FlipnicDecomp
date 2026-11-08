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

// Function: entry_00149500
// Address: 0x149500 - 0x149530
void entry_00149500_0x149500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149500_0x149500");
#endif

    switch (ctx->pc) {
        case 0x149518u: goto label_149518;
        case 0x149520u: goto label_149520;
        default: break;
    }

    ctx->pc = 0x149500u;

    // 0x149500: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x149500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x149504: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x149504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x149508: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x149508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14950c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149510: 0xc0401a4  jal         func_100690
    ctx->pc = 0x149510u;
    SET_GPR_U32(ctx, 31, 0x149518u);
    ctx->pc = 0x149514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149510u;
    // 0x149514: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x149510u, 0x149518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149518u;
label_149518:
    // 0x149518: 0xc04fe2c  jal         func_13F8B0
    ctx->pc = 0x149518u;
    SET_GPR_U32(ctx, 31, 0x149520u);
    ctx->pc = 0x14951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149518u;
    // 0x14951c: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8B0u, 0x149518u, 0x149520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149520u;
label_149520:
    // 0x149520: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x149520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x149524: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x149524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x149528: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x149528u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14952c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x14952cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x149530u;
}
