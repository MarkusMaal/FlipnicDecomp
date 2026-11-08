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

// Function: entry_001d8f40
// Address: 0x1d8f40 - 0x1d8f68
void entry_001d8f40_0x1d8f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8f40_0x1d8f40");
#endif

    switch (ctx->pc) {
        case 0x1d8f54u: goto label_1d8f54;
        default: break;
    }

    ctx->pc = 0x1d8f40u;

    // 0x1d8f40: 0x3c051122  lui         $a1, 0x1122
    ctx->pc = 0x1d8f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4386 << 16));
    // 0x1d8f44: 0x26046400  addiu       $a0, $s0, 0x6400
    ctx->pc = 0x1d8f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25600));
    // 0x1d8f48: 0x34a53344  ori         $a1, $a1, 0x3344
    ctx->pc = 0x1d8f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13124);
    // 0x1d8f4c: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1D8F4Cu;
    SET_GPR_U32(ctx, 31, 0x1D8F54u);
    ctx->pc = 0x1D8F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F4Cu;
    // 0x1d8f50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1D8F4Cu, 0x1D8F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F54u;
label_1d8f54:
    // 0x1d8f54: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8F54u;
    {
        const bool branch_taken_0x1d8f54 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F54u;
        // 0x1d8f58: 0x24032710  addiu       $v1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f54) {
            ctx->pc = 0x1D8F68u;
            return;
        }
    }
    ctx->pc = 0x1D8F5Cu;
    // 0x1d8f5c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1D8F5Cu;
    {
        const bool branch_taken_0x1d8f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F5Cu;
        // 0x1d8f60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8f5c) {
            ctx->pc = 0x1D8FA4u;
            return;
        }
    }
    ctx->pc = 0x1D8F64u;
    // 0x1d8f64: 0x0  nop
    ctx->pc = 0x1d8f64u;
    // NOP
    ctx->pc = 0x1d8f68u;
}
