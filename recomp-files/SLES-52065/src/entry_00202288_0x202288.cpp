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

// Function: entry_00202288
// Address: 0x202288 - 0x2022b4
void entry_00202288_0x202288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202288_0x202288");
#endif

    ctx->pc = 0x202288u;

label_202288:
    // 0x202288: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x202288u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_20228c:
    // 0x20228c: 0x2c62002e  sltiu       $v0, $v1, 0x2E
    ctx->pc = 0x20228cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
label_202290:
    // 0x202290: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_202294:
    if (ctx->pc == 0x202294u) {
        ctx->pc = 0x202294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202290u;
        // 0x202294: 0x92a60000  lbu         $a2, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202298u;
        goto label_202298;
    }
    ctx->pc = 0x202290u;
    {
        const bool branch_taken_0x202290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202290u;
        // 0x202294: 0x92a60000  lbu         $a2, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202290) {
            ctx->pc = 0x2022DCu;
            return;
        }
    }
    ctx->pc = 0x202298u;
label_202298:
    // 0x202298: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x202298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_20229c:
    // 0x20229c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20229cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2022a0:
    // 0x2022a0: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x2022a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_2022a4:
    // 0x2022a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2022a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2022a8:
    // 0x2022a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2022a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2022ac:
    // 0x2022ac: 0x800008  jr          $a0
label_2022b0:
    if (ctx->pc == 0x2022B0u) {
        ctx->pc = 0x2022B4u;
        goto label_fallthrough_0x2022ac;
    }
    ctx->pc = 0x2022ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2022ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2022ac:
    ctx->pc = 0x2022B4u;
}
