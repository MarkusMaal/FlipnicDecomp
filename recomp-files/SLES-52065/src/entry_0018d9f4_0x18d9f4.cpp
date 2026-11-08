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

// Function: entry_0018d9f4
// Address: 0x18d9f4 - 0x18da14
void entry_0018d9f4_0x18d9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d9f4_0x18d9f4");
#endif

    switch (ctx->pc) {
        case 0x18da0cu: goto label_18da0c;
        default: break;
    }

    ctx->pc = 0x18d9f4u;

    // 0x18d9f4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18d9f8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x18d9f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18d9fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18da00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18da04: 0xc063270  jal         func_18C9C0
    ctx->pc = 0x18DA04u;
    SET_GPR_U32(ctx, 31, 0x18DA0Cu);
    ctx->pc = 0x18DA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DA04u;
    // 0x18da08: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C9C0u, 0x18DA04u, 0x18DA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DA0Cu;
label_18da0c:
    // 0x18da0c: 0x10000250  b           . + 4 + (0x250 << 2)
    ctx->pc = 0x18DA0Cu;
    {
        const bool branch_taken_0x18da0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da0c) {
            ctx->pc = 0x18E350u;
            return;
        }
    }
    ctx->pc = 0x18DA14u;
}
