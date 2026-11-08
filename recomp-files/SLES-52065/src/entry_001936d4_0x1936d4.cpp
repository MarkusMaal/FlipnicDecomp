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

// Function: entry_001936d4
// Address: 0x1936d4 - 0x193704
void entry_001936d4_0x1936d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001936d4_0x1936d4");
#endif

    switch (ctx->pc) {
        case 0x1936ecu: goto label_1936ec;
        default: break;
    }

    ctx->pc = 0x1936d4u;

    // 0x1936d4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1936d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1936d8: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x1936d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1936dc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1936dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1936e0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1936e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1936e4: 0xc042570  jal         func_1095C0
    ctx->pc = 0x1936E4u;
    SET_GPR_U32(ctx, 31, 0x1936ECu);
    ctx->pc = 0x1936E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1936E4u;
    // 0x1936e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x1936E4u, 0x1936ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1936ECu;
label_1936ec:
    // 0x1936ec: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1936ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1936f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1936f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1936f4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1936f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1936f8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1936f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1936fc: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1936FCu;
    {
        const bool branch_taken_0x1936fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936FCu;
        // 0x193700: 0xa06401d3  sb          $a0, 0x1D3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936fc) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
    ctx->pc = 0x193704u;
}
