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

// Function: entry_001bbb78
// Address: 0x1bbb78 - 0x1bbbd0
void entry_001bbb78_0x1bbb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbb78_0x1bbb78");
#endif

    switch (ctx->pc) {
        case 0x1bbbc0u: goto label_1bbbc0;
        case 0x1bbbc8u: goto label_1bbbc8;
        default: break;
    }

    ctx->pc = 0x1bbb78u;

    // 0x1bbb78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bbb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bbb7c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bbb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bbb80: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1bbb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1bbb84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bbb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bbb88: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1bbb88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1bbb8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bbb90: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1bbb90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1bbb94: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1bbb94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1bbb98: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1bbb98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1bbb9c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bbb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bbba0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bbba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bbba4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1bbba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1bbba8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1bbba8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x1bbbac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bbbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bbbb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBBB0u;
    {
        const bool branch_taken_0x1bbbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBB0u;
        // 0x1bbbb4: 0x27a40088  addiu       $a0, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbbb0) {
            ctx->pc = 0x1BBBD0u;
            return;
        }
    }
    ctx->pc = 0x1BBBB8u;
    // 0x1bbbb8: 0xc06ef04  jal         func_1BBC10
    ctx->pc = 0x1BBBB8u;
    SET_GPR_U32(ctx, 31, 0x1BBBC0u);
    ctx->pc = 0x1BBC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC10u, 0x1BBBB8u, 0x1BBBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBBC0u;
label_1bbbc0:
    // 0x1bbbc0: 0xc06ef00  jal         func_1BBC00
    ctx->pc = 0x1BBBC0u;
    SET_GPR_U32(ctx, 31, 0x1BBBC8u);
    ctx->pc = 0x1BBBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBBC0u;
    // 0x1bbbc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC00u, 0x1BBBC0u, 0x1BBBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBBC8u;
label_1bbbc8:
    // 0x1bbbc8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BBBC8u;
    SET_GPR_U32(ctx, 31, 0x1BBBD0u);
    ctx->pc = 0x1BBBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBBC8u;
    // 0x1bbbcc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BBBC8u, 0x1BBBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBBD0u;
}
