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

// Function: entry_001943ac
// Address: 0x1943ac - 0x1943d4
void entry_001943ac_0x1943ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001943ac_0x1943ac");
#endif

    ctx->pc = 0x1943acu;

label_1943ac:
    // 0x1943ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1943acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1943b0:
    // 0x1943b0: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x1943b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_1943b4:
    // 0x1943b4: 0x1020066f  beqz        $at, . + 4 + (0x66F << 2)
label_1943b8:
    if (ctx->pc == 0x1943B8u) {
        ctx->pc = 0x1943B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943B4u;
        // 0x1943b8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1943BCu;
        goto label_1943bc;
    }
    ctx->pc = 0x1943B4u;
    {
        const bool branch_taken_0x1943b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1943B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1943B4u;
        // 0x1943b8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1943b4) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x1943BCu;
label_1943bc:
    // 0x1943bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1943bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1943c0:
    // 0x1943c0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1943c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_1943c4:
    // 0x1943c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1943c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1943c8:
    // 0x1943c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1943c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1943cc:
    // 0x1943cc: 0x600008  jr          $v1
label_1943d0:
    if (ctx->pc == 0x1943D0u) {
        ctx->pc = 0x1943D4u;
        goto label_fallthrough_0x1943cc;
    }
    ctx->pc = 0x1943CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1943CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1943cc:
    ctx->pc = 0x1943D4u;
}
