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

// Function: entry_001e9790
// Address: 0x1e9790 - 0x1e97b4
void entry_001e9790_0x1e9790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9790_0x1e9790");
#endif

    switch (ctx->pc) {
        case 0x1e9798u: goto label_1e9798;
        case 0x1e97acu: goto label_1e97ac;
        default: break;
    }

    ctx->pc = 0x1e9790u;

    // 0x1e9790: 0xc07aba0  jal         func_1EAE80
    ctx->pc = 0x1E9790u;
    SET_GPR_U32(ctx, 31, 0x1E9798u);
    ctx->pc = 0x1E9794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9790u;
    // 0x1e9794: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAE80u, 0x1E9790u, 0x1E9798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9798u;
label_1e9798:
    // 0x1e9798: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e9798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e979c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E979Cu;
    {
        const bool branch_taken_0x1e979c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E979Cu;
        // 0x1e97a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e979c) {
            ctx->pc = 0x1E97B4u;
            return;
        }
    }
    ctx->pc = 0x1E97A4u;
    // 0x1e97a4: 0xc07a790  jal         func_1E9E40
    ctx->pc = 0x1E97A4u;
    SET_GPR_U32(ctx, 31, 0x1E97ACu);
    ctx->pc = 0x1E97A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E97A4u;
    // 0x1e97a8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9E40u, 0x1E97A4u, 0x1E97ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E97ACu;
label_1e97ac:
    // 0x1e97ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E97ACu;
    {
        const bool branch_taken_0x1e97ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97ACu;
        // 0x1e97b0: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e97ac) {
            ctx->pc = 0x1E97B8u;
            return;
        }
    }
    ctx->pc = 0x1E97B4u;
}
