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

// Function: entry_0016819c
// Address: 0x16819c - 0x1681bc
void entry_0016819c_0x16819c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016819c_0x16819c");
#endif

    switch (ctx->pc) {
        case 0x1681b4u: goto label_1681b4;
        default: break;
    }

    ctx->pc = 0x16819cu;

    // 0x16819c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16819cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1681a0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1681a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1681a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1681a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1681a8: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x1681a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x1681ac: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1681ACu;
    SET_GPR_U32(ctx, 31, 0x1681B4u);
    ctx->pc = 0x1681B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1681ACu;
    // 0x1681b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1681ACu, 0x1681B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1681B4u;
label_1681b4:
    // 0x1681b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1681B4u;
    {
        const bool branch_taken_0x1681b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1681b4) {
            ctx->pc = 0x1681DCu;
            return;
        }
    }
    ctx->pc = 0x1681BCu;
}
