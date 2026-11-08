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

// Function: entry_001936a8
// Address: 0x1936a8 - 0x1936d4
void entry_001936a8_0x1936a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001936a8_0x1936a8");
#endif

    switch (ctx->pc) {
        case 0x1936c0u: goto label_1936c0;
        default: break;
    }

    ctx->pc = 0x1936a8u;

    // 0x1936a8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1936a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1936ac: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x1936acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1936b0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1936b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1936b4: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1936b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1936b8: 0xc042570  jal         func_1095C0
    ctx->pc = 0x1936B8u;
    SET_GPR_U32(ctx, 31, 0x1936C0u);
    ctx->pc = 0x1936BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1936B8u;
    // 0x1936bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1936B8u, 0x1936C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1936C0u;
label_1936c0:
    // 0x1936c0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1936c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1936c4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1936c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1936c8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1936c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1936cc: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x1936CCu;
    {
        const bool branch_taken_0x1936cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1936D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936CCu;
        // 0x1936d0: 0xa06001d3  sb          $zero, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936cc) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
    ctx->pc = 0x1936D4u;
}
