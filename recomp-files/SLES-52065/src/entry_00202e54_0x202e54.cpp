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

// Function: entry_00202e54
// Address: 0x202e54 - 0x202e8c
void entry_00202e54_0x202e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202e54_0x202e54");
#endif

    switch (ctx->pc) {
        case 0x202e64u: goto label_202e64;
        case 0x202e7cu: goto label_202e7c;
        default: break;
    }

    ctx->pc = 0x202e54u;

    // 0x202e54: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x202e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x202e58: 0xdc255168  ld          $a1, 0x5168($at)
    ctx->pc = 0x202e58u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x225168u));
    // 0x202e5c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202E5Cu;
    SET_GPR_U32(ctx, 31, 0x202E64u);
    ctx->pc = 0x202E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E5Cu;
    // 0x202e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202E5Cu, 0x202E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E64u;
label_202e64:
    // 0x202e64: 0x4400093  bltz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x202E64u;
    {
        const bool branch_taken_0x202e64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x202E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E64u;
        // 0x202e68: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e64) {
            ctx->pc = 0x2030B4u;
            return;
        }
    }
    ctx->pc = 0x202E6Cu;
    // 0x202e6c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x202e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x202e70: 0xdc255170  ld          $a1, 0x5170($at)
    ctx->pc = 0x202e70u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x225170u));
    // 0x202e74: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202E74u;
    SET_GPR_U32(ctx, 31, 0x202E7Cu);
    ctx->pc = 0x202E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E74u;
    // 0x202e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202E74u, 0x202E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E7Cu;
label_202e7c:
    // 0x202e7c: 0x1c40008c  bgtz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x202E7Cu;
    {
        const bool branch_taken_0x202e7c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x202E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E7Cu;
        // 0x202e80: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e7c) {
            ctx->pc = 0x2030B0u;
            return;
        }
    }
    ctx->pc = 0x202E84u;
    // 0x202e84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202E84u;
    {
        const bool branch_taken_0x202e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202e84) {
            ctx->pc = 0x202EA8u;
            return;
        }
    }
    ctx->pc = 0x202E8Cu;
}
