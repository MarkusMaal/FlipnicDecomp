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

// Function: entry_00113240
// Address: 0x113240 - 0x113278
void entry_00113240_0x113240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113240_0x113240");
#endif

    switch (ctx->pc) {
        case 0x113248u: goto label_113248;
        case 0x113270u: goto label_113270;
        default: break;
    }

    ctx->pc = 0x113240u;

    // 0x113240: 0xc044254  jal         func_110950
    ctx->pc = 0x113240u;
    SET_GPR_U32(ctx, 31, 0x113248u);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x113240u, 0x113248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113248u;
label_113248:
    // 0x113248: 0x24432cd8  addiu       $v1, $v0, 0x2CD8
    ctx->pc = 0x113248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x11324c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11324cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x113250: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x113250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x113254: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x113254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x113258: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x113258u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11325c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11325cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113260: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x113260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x113264: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x113264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113268: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x113268u;
    SET_GPR_U32(ctx, 31, 0x113270u);
    ctx->pc = 0x11326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113268u;
    // 0x11326c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x113268u, 0x113270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113270u;
label_113270:
    // 0x113270: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x113270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x113274: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x113274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x113278u;
}
