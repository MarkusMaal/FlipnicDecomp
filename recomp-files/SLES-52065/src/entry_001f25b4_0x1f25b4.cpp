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

// Function: entry_001f25b4
// Address: 0x1f25b4 - 0x1f25dc
void entry_001f25b4_0x1f25b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f25b4_0x1f25b4");
#endif

    switch (ctx->pc) {
        case 0x1f25ccu: goto label_1f25cc;
        default: break;
    }

    ctx->pc = 0x1f25b4u;

    // 0x1f25b4: 0x2630f9c0  addiu       $s0, $s1, -0x640
    ctx->pc = 0x1f25b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965696));
    // 0x1f25b8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f25b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f25bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f25bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25c0: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x1f25c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x1f25c4: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F25C4u;
    SET_GPR_U32(ctx, 31, 0x1F25CCu);
    ctx->pc = 0x1F25C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25C4u;
    // 0x1f25c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F25C4u, 0x1F25CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25CCu;
label_1f25cc:
    // 0x1f25cc: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F25CCu;
    {
        const bool branch_taken_0x1f25cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f25cc) {
            ctx->pc = 0x1F25D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F25CCu;
            // 0x1f25d0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F25DCu;
            return;
        }
    }
    ctx->pc = 0x1F25D4u;
    // 0x1f25d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F25D4u;
    {
        const bool branch_taken_0x1f25d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25D4u;
        // 0x1f25d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25d4) {
            ctx->pc = 0x1F25ECu;
            return;
        }
    }
    ctx->pc = 0x1F25DCu;
}
