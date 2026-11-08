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

// Function: entry_0017a618
// Address: 0x17a618 - 0x17a640
void entry_0017a618_0x17a618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a618_0x17a618");
#endif

    switch (ctx->pc) {
        case 0x17a624u: goto label_17a624;
        default: break;
    }

    ctx->pc = 0x17a618u;

    // 0x17a618: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x17a618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x17a61c: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x17A61Cu;
    SET_GPR_U32(ctx, 31, 0x17A624u);
    ctx->pc = 0x17A620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A61Cu;
    // 0x17a620: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x17A61Cu, 0x17A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A624u;
label_17a624:
    // 0x17a624: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x17a624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x17a628: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17a628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17a62c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x17a630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a634: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17a634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17a638: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x17A638u;
    SET_GPR_U32(ctx, 31, 0x17A640u);
    ctx->pc = 0x17A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A638u;
    // 0x17a63c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x17A638u, 0x17A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A640u;
}
