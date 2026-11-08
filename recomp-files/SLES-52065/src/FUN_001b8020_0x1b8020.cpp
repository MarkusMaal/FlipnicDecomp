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

// Function: FUN_001b8020
// Address: 0x1b8020 - 0x1b8090
void FUN_001b8020_0x1b8020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8020_0x1b8020");
#endif

    ctx->pc = 0x1b8020u;

    // 0x1b8020: 0x90820041  lbu         $v0, 0x41($a0)
    ctx->pc = 0x1b8020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 65)));
    // 0x1b8024: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8024u;
    {
        const bool branch_taken_0x1b8024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8024u;
        // 0x1b8028: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8024) {
            ctx->pc = 0x1B8034u;
            goto label_1b8034;
        }
    }
    ctx->pc = 0x1B802Cu;
    // 0x1b802c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B802Cu;
    {
        const bool branch_taken_0x1b802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B802Cu;
        // 0x1b8030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b802c) {
            ctx->pc = 0x1B8088u;
            goto label_1b8088;
        }
    }
    ctx->pc = 0x1B8034u;
label_1b8034:
    // 0x1b8034: 0x9022c7f8  lbu         $v0, -0x3808($at)
    ctx->pc = 0x1b8034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952952)));
    // 0x1b8038: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8038u;
    {
        const bool branch_taken_0x1b8038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8038u;
        // 0x1b803c: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8038) {
            ctx->pc = 0x1B8054u;
            goto label_1b8054;
        }
    }
    ctx->pc = 0x1B8040u;
    // 0x1b8040: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b8040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b8044: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x1b8044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
    // 0x1b8048: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b8048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b804c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1b804cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8050: 0x0  nop
    ctx->pc = 0x1b8050u;
    // NOP
label_1b8054:
    // 0x1b8054: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8054u;
    {
        const bool branch_taken_0x1b8054 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1B8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8054u;
        // 0x1b8058: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8054) {
            ctx->pc = 0x1B8064u;
            goto label_1b8064;
        }
    }
    ctx->pc = 0x1B805Cu;
    // 0x1b805c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B805Cu;
    {
        const bool branch_taken_0x1b805c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B805Cu;
        // 0x1b8060: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b805c) {
            ctx->pc = 0x1B8084u;
            goto label_1b8084;
        }
    }
    ctx->pc = 0x1B8064u;
label_1b8064:
    // 0x1b8064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8068: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b8068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b806c: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1b806cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b8070: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8070u;
    {
        const bool branch_taken_0x1b8070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b8070) {
            ctx->pc = 0x1B8080u;
            goto label_1b8080;
        }
    }
    ctx->pc = 0x1B8078u;
    // 0x1b8078: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8078u;
    {
        const bool branch_taken_0x1b8078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8078) {
            ctx->pc = 0x1B8084u;
            goto label_1b8084;
        }
    }
    ctx->pc = 0x1B8080u;
label_1b8080:
    // 0x1b8080: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b8080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8084:
    // 0x1b8084: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x1b8084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1b8088:
    // 0x1b8088: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8090u;
}
