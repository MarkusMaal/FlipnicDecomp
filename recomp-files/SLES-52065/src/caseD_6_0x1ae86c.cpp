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

// Function: caseD_6
// Address: 0x1ae86c - 0x1ae8b0
void caseD_6_0x1ae86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1ae86c");
#endif

    switch (ctx->pc) {
        case 0x1ae888u: goto label_1ae888;
        case 0x1ae8a8u: goto label_1ae8a8;
        default: break;
    }

    ctx->pc = 0x1ae86cu;

    // 0x1ae86c: 0x8e8306ac  lw          $v1, 0x6AC($s4)
    ctx->pc = 0x1ae86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1708)));
    // 0x1ae870: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1ae870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ae874: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ae874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae878: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae87c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ae87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ae880: 0xc06bc5c  jal         func_1AF170
    ctx->pc = 0x1AE880u;
    SET_GPR_U32(ctx, 31, 0x1AE888u);
    ctx->pc = 0x1AE884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE880u;
    // 0x1ae884: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF170u, 0x1AE880u, 0x1AE888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE888u;
label_1ae888:
    // 0x1ae888: 0x1040014b  beqz        $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x1AE888u;
    {
        const bool branch_taken_0x1ae888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae888) {
            ctx->pc = 0x1AEDB8u;
            return;
        }
    }
    ctx->pc = 0x1AE890u;
    // 0x1ae890: 0x8e8306ac  lw          $v1, 0x6AC($s4)
    ctx->pc = 0x1ae890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1708)));
    // 0x1ae894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae898: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ae898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae89c: 0xae8306a8  sw          $v1, 0x6A8($s4)
    ctx->pc = 0x1ae89cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1704), GPR_U32(ctx, 3));
    // 0x1ae8a0: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AE8A0u;
    SET_GPR_U32(ctx, 31, 0x1AE8A8u);
    ctx->pc = 0x1AE8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8A0u;
    // 0x1ae8a4: 0xa28206b8  sb          $v0, 0x6B8($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AE8A0u, 0x1AE8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8A8u;
label_1ae8a8:
    // 0x1ae8a8: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x1AE8A8u;
    {
        const bool branch_taken_0x1ae8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae8a8) {
            ctx->pc = 0x1AEDB8u;
            return;
        }
    }
    ctx->pc = 0x1AE8B0u;
}
