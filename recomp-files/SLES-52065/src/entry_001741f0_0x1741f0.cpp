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

// Function: entry_001741f0
// Address: 0x1741f0 - 0x174224
void entry_001741f0_0x1741f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001741f0_0x1741f0");
#endif

    switch (ctx->pc) {
        case 0x1741fcu: goto label_1741fc;
        default: break;
    }

    ctx->pc = 0x1741f0u;

    // 0x1741f0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1741f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1741f4: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x1741F4u;
    SET_GPR_U32(ctx, 31, 0x1741FCu);
    ctx->pc = 0x1741F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1741F4u;
    // 0x1741f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x1741F4u, 0x1741FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1741FCu;
label_1741fc:
    // 0x1741fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1741fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x174200: 0x3c03c0f0  lui         $v1, 0xC0F0
    ctx->pc = 0x174200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49392 << 16));
    // 0x174204: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x174204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x174208: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x174208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17420c: 0x3c024070  lui         $v0, 0x4070
    ctx->pc = 0x17420cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16496 << 16));
    // 0x174210: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x174210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x174214: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x174214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x174218: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x174218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x17421c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x17421Cu;
    {
        const bool branch_taken_0x17421c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17421Cu;
        // 0x174220: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17421c) {
            ctx->pc = 0x174354u;
            return;
        }
    }
    ctx->pc = 0x174224u;
}
