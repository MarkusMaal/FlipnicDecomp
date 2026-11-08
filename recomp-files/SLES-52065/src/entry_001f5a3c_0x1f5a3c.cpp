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

// Function: entry_001f5a3c
// Address: 0x1f5a3c - 0x1f5a70
void entry_001f5a3c_0x1f5a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5a3c_0x1f5a3c");
#endif

    switch (ctx->pc) {
        case 0x1f5a54u: goto label_1f5a54;
        default: break;
    }

    ctx->pc = 0x1f5a3cu;

    // 0x1f5a3c: 0x26301080  addiu       $s0, $s1, 0x1080
    ctx->pc = 0x1f5a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4224));
    // 0x1f5a40: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f5a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f5a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a48: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x1f5a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x1f5a4c: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F5A4Cu;
    SET_GPR_U32(ctx, 31, 0x1F5A54u);
    ctx->pc = 0x1F5A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A4Cu;
    // 0x1f5a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F5A4Cu, 0x1F5A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A54u;
label_1f5a54:
    // 0x1f5a54: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1f5a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f5a58: 0x1060ffef  beqz        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F5A58u;
    {
        const bool branch_taken_0x1f5a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A58u;
        // 0x1f5a5c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a58) {
            ctx->pc = 0x1F5A18u;
            return;
        }
    }
    ctx->pc = 0x1F5A60u;
    // 0x1f5a60: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1f5a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a64: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F5A64u;
    {
        const bool branch_taken_0x1f5a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A64u;
        // 0x1f5a68: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a64) {
            ctx->pc = 0x1F5A94u;
            return;
        }
    }
    ctx->pc = 0x1F5A6Cu;
    // 0x1f5a6c: 0x0  nop
    ctx->pc = 0x1f5a6cu;
    // NOP
    ctx->pc = 0x1f5a70u;
}
