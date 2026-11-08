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

// Function: entry_001e3390
// Address: 0x1e3390 - 0x1e33d4
void entry_001e3390_0x1e3390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3390_0x1e3390");
#endif

    switch (ctx->pc) {
        case 0x1e33a4u: goto label_1e33a4;
        case 0x1e33b4u: goto label_1e33b4;
        default: break;
    }

    ctx->pc = 0x1e3390u;

label_1e3390:
    // 0x1e3390: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1e3390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1e3394:
    // 0x1e3394: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e3394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3398:
    // 0x1e3398: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e3398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e339c:
    // 0x1e339c: 0x320f809  jalr        $t9
label_1e33a0:
    if (ctx->pc == 0x1E33A0u) {
        ctx->pc = 0x1E33A4u;
        goto label_1e33a4;
    }
    ctx->pc = 0x1E339Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E33A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E339Cu, 0x1E33A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E33A4u;
label_1e33a4:
    // 0x1e33a4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e33a8:
    if (ctx->pc == 0x1E33A8u) {
        ctx->pc = 0x1E33A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33A4u;
        // 0x1e33a8: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E33ACu;
        goto label_1e33ac;
    }
    ctx->pc = 0x1E33A4u;
    {
        const bool branch_taken_0x1e33a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E33A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33A4u;
        // 0x1e33a8: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33a4) {
            ctx->pc = 0x1E33D4u;
            return;
        }
    }
    ctx->pc = 0x1E33ACu;
label_1e33ac:
    // 0x1e33ac: 0xc07a704  jal         func_1E9C10
label_1e33b0:
    if (ctx->pc == 0x1E33B0u) {
        ctx->pc = 0x1E33B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33ACu;
        // 0x1e33b0: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E33B4u;
        goto label_1e33b4;
    }
    ctx->pc = 0x1E33ACu;
    SET_GPR_U32(ctx, 31, 0x1E33B4u);
    ctx->pc = 0x1E33B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E33ACu;
    // 0x1e33b0: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E33ACu, 0x1E33B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E33B4u;
label_1e33b4:
    // 0x1e33b4: 0x0  nop
    ctx->pc = 0x1e33b4u;
    // NOP
label_1e33b8:
    // 0x1e33b8: 0x0  nop
    ctx->pc = 0x1e33b8u;
    // NOP
label_1e33bc:
    // 0x1e33bc: 0x0  nop
    ctx->pc = 0x1e33bcu;
    // NOP
label_1e33c0:
    // 0x1e33c0: 0x0  nop
    ctx->pc = 0x1e33c0u;
    // NOP
label_1e33c4:
    // 0x1e33c4: 0x0  nop
    ctx->pc = 0x1e33c4u;
    // NOP
label_1e33c8:
    // 0x1e33c8: 0x0  nop
    ctx->pc = 0x1e33c8u;
    // NOP
label_1e33cc:
    // 0x1e33cc: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e33d0:
    if (ctx->pc == 0x1E33D0u) {
        ctx->pc = 0x1E33D4u;
        goto label_fallthrough_0x1e33cc;
    }
    ctx->pc = 0x1E33CCu;
    {
        const bool branch_taken_0x1e33cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e33cc) {
            ctx->pc = 0x1E33B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e33b4;
        }
    }
label_fallthrough_0x1e33cc:
    ctx->pc = 0x1E33D4u;
}
