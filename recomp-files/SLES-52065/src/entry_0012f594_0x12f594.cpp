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

// Function: entry_0012f594
// Address: 0x12f594 - 0x12f5c8
void entry_0012f594_0x12f594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f594_0x12f594");
#endif

    switch (ctx->pc) {
        case 0x12f5c4u: goto label_12f5c4;
        default: break;
    }

    ctx->pc = 0x12f594u;

    // 0x12f594: 0x0  nop
    ctx->pc = 0x12f594u;
    // NOP
    // 0x12f598: 0x2d52821  addu        $a1, $s6, $s5
    ctx->pc = 0x12f598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x12f59c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x12f59cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f5a0: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12F5A0u;
    {
        const bool branch_taken_0x12f5a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5A0u;
        // 0x12f5a4: 0x23d1821  addu        $v1, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5a0) {
            ctx->pc = 0x12F540u;
            return;
        }
    }
    ctx->pc = 0x12F5A8u;
    // 0x12f5a8: 0x121200  sll         $v0, $s2, 8
    ctx->pc = 0x12f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x12f5ac: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x12f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x12f5b0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x12f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x12f5b4: 0xa0601a20  sb          $zero, 0x1A20($v1)
    ctx->pc = 0x12f5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6688), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f5b8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12f5bc: 0xc080702  jal         func_201C08
    ctx->pc = 0x12F5BCu;
    SET_GPR_U32(ctx, 31, 0x12F5C4u);
    ctx->pc = 0x12F5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F5BCu;
    // 0x12f5c0: 0x27a51a20  addiu       $a1, $sp, 0x1A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 6688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x12F5BCu, 0x12F5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F5C4u;
label_12f5c4:
    // 0x12f5c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12f5c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x12f5c8u;
}
