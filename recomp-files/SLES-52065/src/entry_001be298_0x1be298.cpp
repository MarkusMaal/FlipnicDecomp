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

// Function: entry_001be298
// Address: 0x1be298 - 0x1be2c8
void entry_001be298_0x1be298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be298_0x1be298");
#endif

    switch (ctx->pc) {
        case 0x1be2a4u: goto label_1be2a4;
        default: break;
    }

    ctx->pc = 0x1be298u;

    // 0x1be298: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1be298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1be29c: 0xc05021c  jal         func_140870
    ctx->pc = 0x1BE29Cu;
    SET_GPR_U32(ctx, 31, 0x1BE2A4u);
    ctx->pc = 0x1BE2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE29Cu;
    // 0x1be2a0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140870u, 0x1BE29Cu, 0x1BE2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE2A4u;
label_1be2a4:
    // 0x1be2a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1be2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1be2a8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1be2a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1be2ac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1be2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1be2b0: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1BE2B0u;
    {
        const bool branch_taken_0x1be2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be2b0) {
            ctx->pc = 0x1BE27Cu;
            return;
        }
    }
    ctx->pc = 0x1BE2B8u;
    // 0x1be2b8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE2B8u;
    {
        const bool branch_taken_0x1be2b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2B8u;
        // 0x1be2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2b8) {
            ctx->pc = 0x1BE2C8u;
            return;
        }
    }
    ctx->pc = 0x1BE2C0u;
    // 0x1be2c0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE2C0u;
    SET_GPR_U32(ctx, 31, 0x1BE2C8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE2C0u, 0x1BE2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE2C8u;
}
