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

// Function: entry_001c857c
// Address: 0x1c857c - 0x1c85dc
void entry_001c857c_0x1c857c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c857c_0x1c857c");
#endif

    switch (ctx->pc) {
        case 0x1c85b8u: goto label_1c85b8;
        case 0x1c85c4u: goto label_1c85c4;
        case 0x1c85d8u: goto label_1c85d8;
        default: break;
    }

    ctx->pc = 0x1c857cu;

    // 0x1c857c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1c857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c8580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8584: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c8584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c8588: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1c8588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c858c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c858cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8590: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1c8590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8594: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8594u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8598: 0x260a0060  addiu       $t2, $s0, 0x60
    ctx->pc = 0x1c8598u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1c859c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c859cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85a0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1c85a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1c85a4: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1c85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1c85a8: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x1c85a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x1c85ac: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1c85acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c85b0: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C85B0u;
    SET_GPR_U32(ctx, 31, 0x1C85B8u);
    ctx->pc = 0x1C85B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85B0u;
    // 0x1c85b4: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C85B0u, 0x1C85B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85B8u;
label_1c85b8:
    // 0x1c85b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c85b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85bc: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C85BCu;
    SET_GPR_U32(ctx, 31, 0x1C85C4u);
    ctx->pc = 0x1C85C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85BCu;
    // 0x1c85c0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C85BCu, 0x1C85C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85C4u;
label_1c85c4:
    // 0x1c85c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C85C4u;
    {
        const bool branch_taken_0x1c85c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85C4u;
        // 0x1c85c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85c4) {
            ctx->pc = 0x1C85DCu;
            return;
        }
    }
    ctx->pc = 0x1C85CCu;
    // 0x1c85cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c85ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85d0: 0xc072188  jal         func_1C8620
    ctx->pc = 0x1C85D0u;
    SET_GPR_U32(ctx, 31, 0x1C85D8u);
    ctx->pc = 0x1C85D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85D0u;
    // 0x1c85d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8620u, 0x1C85D0u, 0x1C85D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85D8u;
label_1c85d8:
    // 0x1c85d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c85d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c85dcu;
}
