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

// Function: entry_001e53fc
// Address: 0x1e53fc - 0x1e5444
void entry_001e53fc_0x1e53fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e53fc_0x1e53fc");
#endif

    switch (ctx->pc) {
        case 0x1e5414u: goto label_1e5414;
        case 0x1e5424u: goto label_1e5424;
        default: break;
    }

    ctx->pc = 0x1e53fcu;

label_1e53fc:
    // 0x1e53fc: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e5400:
    // 0x1e5400: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x1e5400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1e5404:
    // 0x1e5404: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5408:
    // 0x1e5408: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e5408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e540c:
    // 0x1e540c: 0x320f809  jalr        $t9
label_1e5410:
    if (ctx->pc == 0x1E5410u) {
        ctx->pc = 0x1E5414u;
        goto label_1e5414;
    }
    ctx->pc = 0x1E540Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5414u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E540Cu, 0x1E5414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5414u;
label_1e5414:
    // 0x1e5414: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e5418:
    if (ctx->pc == 0x1E5418u) {
        ctx->pc = 0x1E5418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5414u;
        // 0x1e5418: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E541Cu;
        goto label_1e541c;
    }
    ctx->pc = 0x1E5414u;
    {
        const bool branch_taken_0x1e5414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5414u;
        // 0x1e5418: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5414) {
            ctx->pc = 0x1E5444u;
            return;
        }
    }
    ctx->pc = 0x1E541Cu;
label_1e541c:
    // 0x1e541c: 0xc07a704  jal         func_1E9C10
label_1e5420:
    if (ctx->pc == 0x1E5420u) {
        ctx->pc = 0x1E5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E541Cu;
        // 0x1e5420: 0x27c40050  addiu       $a0, $fp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5424u;
        goto label_1e5424;
    }
    ctx->pc = 0x1E541Cu;
    SET_GPR_U32(ctx, 31, 0x1E5424u);
    ctx->pc = 0x1E5420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E541Cu;
    // 0x1e5420: 0x27c40050  addiu       $a0, $fp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E541Cu, 0x1E5424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5424u;
label_1e5424:
    // 0x1e5424: 0x0  nop
    ctx->pc = 0x1e5424u;
    // NOP
label_1e5428:
    // 0x1e5428: 0x0  nop
    ctx->pc = 0x1e5428u;
    // NOP
label_1e542c:
    // 0x1e542c: 0x0  nop
    ctx->pc = 0x1e542cu;
    // NOP
label_1e5430:
    // 0x1e5430: 0x0  nop
    ctx->pc = 0x1e5430u;
    // NOP
label_1e5434:
    // 0x1e5434: 0x0  nop
    ctx->pc = 0x1e5434u;
    // NOP
label_1e5438:
    // 0x1e5438: 0x0  nop
    ctx->pc = 0x1e5438u;
    // NOP
label_1e543c:
    // 0x1e543c: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e5440:
    if (ctx->pc == 0x1E5440u) {
        ctx->pc = 0x1E5444u;
        goto label_fallthrough_0x1e543c;
    }
    ctx->pc = 0x1E543Cu;
    {
        const bool branch_taken_0x1e543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e543c) {
            ctx->pc = 0x1E5424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5424;
        }
    }
label_fallthrough_0x1e543c:
    ctx->pc = 0x1E5444u;
}
