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

// Function: entry_001ff4b8
// Address: 0x1ff4b8 - 0x1ff4e8
void entry_001ff4b8_0x1ff4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff4b8_0x1ff4b8");
#endif

    switch (ctx->pc) {
        case 0x1ff4c0u: goto label_1ff4c0;
        default: break;
    }

    ctx->pc = 0x1ff4b8u;

    // 0x1ff4b8: 0xc07fb1c  jal         func_1FEC70
    ctx->pc = 0x1FF4B8u;
    SET_GPR_U32(ctx, 31, 0x1FF4C0u);
    ctx->pc = 0x1FF4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF4B8u;
    // 0x1ff4bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC70u, 0x1FF4B8u, 0x1FF4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF4C0u;
label_1ff4c0:
    // 0x1ff4c0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1ff4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ff4c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ff4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ff4c8: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x1ff4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x1ff4cc: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x1ff4ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1ff4d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF4D0u;
    {
        const bool branch_taken_0x1ff4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4D0u;
        // 0x1ff4d4: 0x2231023  subu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4d0) {
            ctx->pc = 0x1FF4E8u;
            return;
        }
    }
    ctx->pc = 0x1FF4D8u;
    // 0x1ff4d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff4dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ff4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ff4e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF4E0u;
    {
        const bool branch_taken_0x1ff4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4E0u;
        // 0x1ff4e4: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4e0) {
            ctx->pc = 0x1FF4F4u;
            return;
        }
    }
    ctx->pc = 0x1FF4E8u;
}
