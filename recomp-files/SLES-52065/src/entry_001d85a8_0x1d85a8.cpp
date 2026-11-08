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

// Function: entry_001d85a8
// Address: 0x1d85a8 - 0x1d85d8
void entry_001d85a8_0x1d85a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d85a8_0x1d85a8");
#endif

    ctx->pc = 0x1d85a8u;

label_1d85a8:
    // 0x1d85a8: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x1d85a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1d85ac:
    // 0x1d85ac: 0x2442ff8f  addiu       $v0, $v0, -0x71
    ctx->pc = 0x1d85acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967183));
label_1d85b0:
    // 0x1d85b0: 0x2c43000f  sltiu       $v1, $v0, 0xF
    ctx->pc = 0x1d85b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_1d85b4:
    // 0x1d85b4: 0x10600135  beqz        $v1, . + 4 + (0x135 << 2)
label_1d85b8:
    if (ctx->pc == 0x1D85B8u) {
        ctx->pc = 0x1D85B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85B4u;
        // 0x1d85b8: 0xdfb100c8  ld          $s1, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D85BCu;
        goto label_1d85bc;
    }
    ctx->pc = 0x1D85B4u;
    {
        const bool branch_taken_0x1d85b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D85B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85B4u;
        // 0x1d85b8: 0xdfb100c8  ld          $s1, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85b4) {
            ctx->pc = 0x1D8A8Cu;
            return;
        }
    }
    ctx->pc = 0x1D85BCu;
label_1d85bc:
    // 0x1d85bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d85bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d85c0:
    // 0x1d85c0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1d85c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_1d85c4:
    // 0x1d85c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d85c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d85c8:
    // 0x1d85c8: 0x8c633770  lw          $v1, 0x3770($v1)
    ctx->pc = 0x1d85c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14192)));
label_1d85cc:
    // 0x1d85cc: 0x600008  jr          $v1
label_1d85d0:
    if (ctx->pc == 0x1D85D0u) {
        ctx->pc = 0x1D85D4u;
        goto label_1d85d4;
    }
    ctx->pc = 0x1D85CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D85CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D85D4u;
label_1d85d4:
    // 0x1d85d4: 0x0  nop
    ctx->pc = 0x1d85d4u;
    // NOP
    ctx->pc = 0x1d85d8u;
}
