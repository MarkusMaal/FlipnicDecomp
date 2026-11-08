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

// Function: entry_00201394
// Address: 0x201394 - 0x2013bc
void entry_00201394_0x201394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201394_0x201394");
#endif

    switch (ctx->pc) {
        case 0x2013a8u: goto label_2013a8;
        default: break;
    }

    ctx->pc = 0x201394u;

    // 0x201394: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x201394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x201398: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x201398u;
    {
        const bool branch_taken_0x201398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201398u;
        // 0x20139c: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201398) {
            ctx->pc = 0x2013C0u;
            return;
        }
    }
    ctx->pc = 0x2013A0u;
    // 0x2013a0: 0xc0804ba  jal         func_2012E8
    ctx->pc = 0x2013A0u;
    SET_GPR_U32(ctx, 31, 0x2013A8u);
    ctx->pc = 0x2013A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2013A0u;
    // 0x2013a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2012E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2012E8u, 0x2013A0u, 0x2013A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013A8u;
label_2013a8:
    // 0x2013a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2013A8u;
    {
        const bool branch_taken_0x2013a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2013a8) {
            ctx->pc = 0x2013ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2013A8u;
            // 0x2013ac: 0x8e0201d4  lw          $v0, 0x1D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2013BCu;
            return;
        }
    }
    ctx->pc = 0x2013B0u;
    // 0x2013b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2013b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2013b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2013B4u;
    {
        const bool branch_taken_0x2013b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013B4u;
        // 0x2013b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013b4) {
            ctx->pc = 0x2013CCu;
            return;
        }
    }
    ctx->pc = 0x2013BCu;
}
