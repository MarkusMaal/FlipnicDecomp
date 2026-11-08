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

// Function: entry_00181f40
// Address: 0x181f40 - 0x181f5c
void entry_00181f40_0x181f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181f40_0x181f40");
#endif

    switch (ctx->pc) {
        case 0x181f54u: goto label_181f54;
        default: break;
    }

    ctx->pc = 0x181f40u;

    // 0x181f40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x181f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x181f44: 0x0  nop
    ctx->pc = 0x181f44u;
    // NOP
    // 0x181f48: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x181f48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x181f4c: 0xc0608ac  jal         func_1822B0
    ctx->pc = 0x181F4Cu;
    SET_GPR_U32(ctx, 31, 0x181F54u);
    ctx->pc = 0x181F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F4Cu;
    // 0x181f50: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1822B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1822B0u, 0x181F4Cu, 0x181F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F54u;
label_181f54:
    // 0x181f54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181F54u;
    {
        const bool branch_taken_0x181f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F54u;
        // 0x181f58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f54) {
            ctx->pc = 0x181F78u;
            return;
        }
    }
    ctx->pc = 0x181F5Cu;
}
