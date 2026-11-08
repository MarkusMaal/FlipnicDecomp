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

// Function: entry_001aae88
// Address: 0x1aae88 - 0x1aaec4
void entry_001aae88_0x1aae88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aae88_0x1aae88");
#endif

    ctx->pc = 0x1aae88u;

    // 0x1aae88: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1aae88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1aae8c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1AAE8Cu;
    {
        const bool branch_taken_0x1aae8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE8Cu;
        // 0x1aae90: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae8c) {
            ctx->pc = 0x1AAF40u;
            return;
        }
    }
    ctx->pc = 0x1AAE94u;
    // 0x1aae94: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1AAE94u;
    {
        const bool branch_taken_0x1aae94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aae94) {
            ctx->pc = 0x1AAF30u;
            return;
        }
    }
    ctx->pc = 0x1AAE9Cu;
    // 0x1aae9c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1aae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1aaea0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AAEA0u;
    {
        const bool branch_taken_0x1aaea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEA0u;
        // 0x1aaea4: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaea0) {
            ctx->pc = 0x1AAF10u;
            return;
        }
    }
    ctx->pc = 0x1AAEA8u;
    // 0x1aaea8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AAEA8u;
    {
        const bool branch_taken_0x1aaea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aaea8) {
            ctx->pc = 0x1AAEF0u;
            return;
        }
    }
    ctx->pc = 0x1AAEB0u;
    // 0x1aaeb0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1aaeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1aaeb4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAEB4u;
    {
        const bool branch_taken_0x1aaeb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aaeb4) {
            ctx->pc = 0x1AAEC4u;
            return;
        }
    }
    ctx->pc = 0x1AAEBCu;
    // 0x1aaebc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1AAEBCu;
    {
        const bool branch_taken_0x1aaebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaebc) {
            ctx->pc = 0x1AAF40u;
            return;
        }
    }
    ctx->pc = 0x1AAEC4u;
}
