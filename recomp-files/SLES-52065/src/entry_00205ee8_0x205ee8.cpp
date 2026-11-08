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

// Function: entry_00205ee8
// Address: 0x205ee8 - 0x205f00
void entry_00205ee8_0x205ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205ee8_0x205ee8");
#endif

    switch (ctx->pc) {
        case 0x205efcu: goto label_205efc;
        default: break;
    }

    ctx->pc = 0x205ee8u;

    // 0x205ee8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x205ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x205eec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x205EECu;
    {
        const bool branch_taken_0x205eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205eec) {
            ctx->pc = 0x205EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205EECu;
            // 0x205ef0: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205F00u;
            return;
        }
    }
    ctx->pc = 0x205EF4u;
    // 0x205ef4: 0xc07f5b0  jal         func_1FD6C0
    ctx->pc = 0x205EF4u;
    SET_GPR_U32(ctx, 31, 0x205EFCu);
    ctx->pc = 0x205EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205EF4u;
    // 0x205ef8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6C0u, 0x205EF4u, 0x205EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205EFCu;
label_205efc:
    // 0x205efc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x205efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x205f00u;
}
