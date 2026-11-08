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

// Function: entry_001f2978
// Address: 0x1f2978 - 0x1f29b8
void entry_001f2978_0x1f2978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2978_0x1f2978");
#endif

    switch (ctx->pc) {
        case 0x1f29a8u: goto label_1f29a8;
        default: break;
    }

    ctx->pc = 0x1f2978u;

    // 0x1f2978: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f2978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f297c: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f297cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f2980: 0x2484f9c0  addiu       $a0, $a0, -0x640
    ctx->pc = 0x1f2980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965696));
    // 0x1f2984: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f2984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f2988: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f2988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f298c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f298cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2990: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f2990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2994: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f2994u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2998: 0x2609fa00  addiu       $t1, $s0, -0x600
    ctx->pc = 0x1f2998u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965760));
    // 0x1f299c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f299cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f29a0: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F29A0u;
    SET_GPR_U32(ctx, 31, 0x1F29A8u);
    ctx->pc = 0x1F29A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F29A0u;
    // 0x1f29a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F29A0u, 0x1F29A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F29A8u;
label_1f29a8:
    // 0x1f29a8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F29A8u;
    {
        const bool branch_taken_0x1f29a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f29a8) {
            ctx->pc = 0x1F29ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F29A8u;
            // 0x1f29ac: 0x8e02fa00  lw          $v0, -0x600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F29B8u;
            return;
        }
    }
    ctx->pc = 0x1F29B0u;
    // 0x1f29b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f29b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f29b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1f29b8u;
}
