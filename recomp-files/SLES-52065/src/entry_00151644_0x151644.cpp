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

// Function: entry_00151644
// Address: 0x151644 - 0x151698
void entry_00151644_0x151644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151644_0x151644");
#endif

    switch (ctx->pc) {
        case 0x151690u: goto label_151690;
        default: break;
    }

    ctx->pc = 0x151644u;

    // 0x151644: 0x838285ec  lb          $v0, -0x7A14($gp)
    ctx->pc = 0x151644u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936044)));
    // 0x151648: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x151648u;
    {
        const bool branch_taken_0x151648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151648u;
        // 0x15164c: 0x3c02302e  lui         $v0, 0x302E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12334 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151648) {
            ctx->pc = 0x151698u;
            return;
        }
    }
    ctx->pc = 0x151650u;
    // 0x151650: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x151650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x151654: 0x3444c000  ori         $a0, $v0, 0xC000
    ctx->pc = 0x151654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x151658: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x151658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x15165c: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x15165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x151660: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x151660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x151664: 0xfc227478  sd          $v0, 0x7478($at)
    ctx->pc = 0x151664u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x367478u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x367478u, _value); } while (0);
    // 0x151668: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x151668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15166c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x15166cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x151670: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x151670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x151674: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x151674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151678: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x151678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15167c: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x15167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x151680: 0xfc227470  sd          $v0, 0x7470($at)
    ctx->pc = 0x151680u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x367470u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x367470u, _value); } while (0);
    // 0x151684: 0x24a54bb0  addiu       $a1, $a1, 0x4BB0
    ctx->pc = 0x151684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19376));
    // 0x151688: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x151688u;
    SET_GPR_U32(ctx, 31, 0x151690u);
    ctx->pc = 0x15168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151688u;
    // 0x15168c: 0x24c67460  addiu       $a2, $a2, 0x7460 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x151688u, 0x151690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151690u;
label_151690:
    // 0x151690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x151690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151694: 0xa38285ec  sb          $v0, -0x7A14($gp)
    ctx->pc = 0x151694u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936044), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x151698u;
}
