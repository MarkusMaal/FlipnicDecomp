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

// Function: entry_001a839c
// Address: 0x1a839c - 0x1a83cc
void entry_001a839c_0x1a839c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a839c_0x1a839c");
#endif

    switch (ctx->pc) {
        case 0x1a83c4u: goto label_1a83c4;
        default: break;
    }

    ctx->pc = 0x1a839cu;

    // 0x1a839c: 0x0  nop
    ctx->pc = 0x1a839cu;
    // NOP
    // 0x1a83a0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1a83a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1a83a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a83a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a83a8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a83a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a83ac: 0x1062ffab  beq         $v1, $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x1A83ACu;
    {
        const bool branch_taken_0x1a83ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a83ac) {
            ctx->pc = 0x1A825Cu;
            return;
        }
    }
    ctx->pc = 0x1A83B4u;
    // 0x1a83b4: 0x8e620664  lw          $v0, 0x664($s3)
    ctx->pc = 0x1a83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1636)));
    // 0x1a83b8: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1a83b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a83bc: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A83BCu;
    SET_GPR_U32(ctx, 31, 0x1A83C4u);
    ctx->pc = 0x1A83C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83BCu;
    // 0x1a83c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A83BCu, 0x1A83C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83C4u;
label_1a83c4:
    // 0x1a83c4: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A83C4u;
    SET_GPR_U32(ctx, 31, 0x1A83CCu);
    ctx->pc = 0x1A83C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A83C4u;
    // 0x1a83c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A83C4u, 0x1A83CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A83CCu;
}
