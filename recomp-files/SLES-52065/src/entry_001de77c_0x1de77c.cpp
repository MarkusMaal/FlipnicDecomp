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

// Function: entry_001de77c
// Address: 0x1de77c - 0x1de7a8
void entry_001de77c_0x1de77c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de77c_0x1de77c");
#endif

    switch (ctx->pc) {
        case 0x1de7a0u: goto label_1de7a0;
        default: break;
    }

    ctx->pc = 0x1de77cu;

    // 0x1de77c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1de77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de780: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1de780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1de784: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE784u;
    {
        const bool branch_taken_0x1de784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE784u;
        // 0x1de788: 0xae15004c  sw          $s5, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de784) {
            ctx->pc = 0x1DE7A8u;
            return;
        }
    }
    ctx->pc = 0x1DE78Cu;
    // 0x1de78c: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x1de78cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1de790: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1de790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de794: 0x8e070070  lw          $a3, 0x70($s0)
    ctx->pc = 0x1de794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1de798: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1DE798u;
    SET_GPR_U32(ctx, 31, 0x1DE7A0u);
    ctx->pc = 0x1DE79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE798u;
    // 0x1de79c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1DE798u, 0x1DE7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7A0u;
label_1de7a0:
    // 0x1de7a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE7A0u;
    {
        const bool branch_taken_0x1de7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7A0u;
        // 0x1de7a4: 0x8e080000  lw          $t0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7a0) {
            ctx->pc = 0x1DE7C0u;
            return;
        }
    }
    ctx->pc = 0x1DE7A8u;
}
