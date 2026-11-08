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

// Function: entry_00181f5c
// Address: 0x181f5c - 0x181f78
void entry_00181f5c_0x181f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181f5c_0x181f5c");
#endif

    switch (ctx->pc) {
        case 0x181f74u: goto label_181f74;
        default: break;
    }

    ctx->pc = 0x181f5cu;

    // 0x181f5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x181f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x181f60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x181f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x181f64: 0x0  nop
    ctx->pc = 0x181f64u;
    // NOP
    // 0x181f68: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x181f68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x181f6c: 0xc0608ac  jal         func_1822B0
    ctx->pc = 0x181F6Cu;
    SET_GPR_U32(ctx, 31, 0x181F74u);
    ctx->pc = 0x181F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F6Cu;
    // 0x181f70: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1822B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1822B0u, 0x181F6Cu, 0x181F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F74u;
label_181f74:
    // 0x181f74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x181f78u;
}
