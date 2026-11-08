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

// Function: entry_0019ae2c
// Address: 0x19ae2c - 0x19ae50
void entry_0019ae2c_0x19ae2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ae2c_0x19ae2c");
#endif

    ctx->pc = 0x19ae2cu;

label_19ae2c:
    // 0x19ae2c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_19ae30:
    if (ctx->pc == 0x19AE30u) {
        ctx->pc = 0x19AE34u;
        goto label_19ae34;
    }
    ctx->pc = 0x19AE2Cu;
    {
        const bool branch_taken_0x19ae2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ae2c) {
            ctx->pc = 0x19AE50u;
            return;
        }
    }
    ctx->pc = 0x19AE34u;
label_19ae34:
    // 0x19ae34: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_19ae38:
    if (ctx->pc == 0x19AE38u) {
        ctx->pc = 0x19AE3Cu;
        goto label_19ae3c;
    }
    ctx->pc = 0x19AE34u;
    {
        const bool branch_taken_0x19ae34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ae34) {
            ctx->pc = 0x19AE50u;
            return;
        }
    }
    ctx->pc = 0x19AE3Cu;
label_19ae3c:
    // 0x19ae3c: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x19ae3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_19ae40:
    // 0x19ae40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ae40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ae44:
    // 0x19ae44: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19ae44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19ae48:
    // 0x19ae48: 0x320f809  jalr        $t9
label_19ae4c:
    if (ctx->pc == 0x19AE4Cu) {
        ctx->pc = 0x19AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE48u;
        // 0x19ae4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AE50u;
        goto label_fallthrough_0x19ae48;
    }
    ctx->pc = 0x19AE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19AE50u);
        ctx->pc = 0x19AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE48u;
        // 0x19ae4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AE48u, 0x19AE50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x19ae48:
    ctx->pc = 0x19AE50u;
}
