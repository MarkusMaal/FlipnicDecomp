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

// Function: entry_00102720
// Address: 0x102720 - 0x102750
void entry_00102720_0x102720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102720_0x102720");
#endif

    switch (ctx->pc) {
        case 0x102738u: goto label_102738;
        case 0x102748u: goto label_102748;
        default: break;
    }

    ctx->pc = 0x102720u;

    // 0x102720: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102724: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102728: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10272c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x10272cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x102730: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x102730u;
    SET_GPR_U32(ctx, 31, 0x102738u);
    ctx->pc = 0x102734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102730u;
    // 0x102734: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x102730u, 0x102738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102738u;
label_102738:
    // 0x102738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x102738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10273c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10273cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102740: 0xc04a034  jal         func_1280D0
    ctx->pc = 0x102740u;
    SET_GPR_U32(ctx, 31, 0x102748u);
    ctx->pc = 0x102744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102740u;
    // 0x102744: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280D0u, 0x102740u, 0x102748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102748u;
label_102748:
    // 0x102748: 0xc05fbe4  jal         func_17EF90
    ctx->pc = 0x102748u;
    SET_GPR_U32(ctx, 31, 0x102750u);
    ctx->pc = 0x17EF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EF90u, 0x102748u, 0x102750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102750u;
}
