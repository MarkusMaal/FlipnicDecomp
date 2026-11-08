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

// Function: entry_001873ec
// Address: 0x1873ec - 0x18741c
void entry_001873ec_0x1873ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001873ec_0x1873ec");
#endif

    switch (ctx->pc) {
        case 0x187408u: goto label_187408;
        default: break;
    }

    ctx->pc = 0x1873ecu;

    // 0x1873ec: 0x0  nop
    ctx->pc = 0x1873ecu;
    // NOP
    // 0x1873f0: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1873f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1873f4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1873F4u;
    {
        const bool branch_taken_0x1873f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1873F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873F4u;
        // 0x1873f8: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1873f4) {
            ctx->pc = 0x1873B4u;
            return;
        }
    }
    ctx->pc = 0x1873FCu;
    // 0x1873fc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1873fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x187400: 0xc061d6c  jal         func_1875B0
    ctx->pc = 0x187400u;
    SET_GPR_U32(ctx, 31, 0x187408u);
    ctx->pc = 0x187404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187400u;
    // 0x187404: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1875B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875B0u, 0x187400u, 0x187408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187408u;
label_187408:
    // 0x187408: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x187408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18740c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x18740cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x187410: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x187410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x187414: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x187414u;
    {
        const bool branch_taken_0x187414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187414u;
        // 0x187418: 0xafa20154  sw          $v0, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187414) {
            ctx->pc = 0x187468u;
            return;
        }
    }
    ctx->pc = 0x18741Cu;
}
