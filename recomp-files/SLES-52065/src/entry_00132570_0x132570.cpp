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

// Function: entry_00132570
// Address: 0x132570 - 0x1325ac
void entry_00132570_0x132570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132570_0x132570");
#endif

    switch (ctx->pc) {
        case 0x132594u: goto label_132594;
        default: break;
    }

    ctx->pc = 0x132570u;

    // 0x132570: 0x27a2009c  addiu       $v0, $sp, 0x9C
    ctx->pc = 0x132570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x132574: 0x27b5008c  addiu       $s5, $sp, 0x8C
    ctx->pc = 0x132574u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x132578: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x132578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13257c: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x13257cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x132580: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x132580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132584: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x132584u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x132588: 0xafb30098  sw          $s3, 0x98($sp)
    ctx->pc = 0x132588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 19));
    // 0x13258c: 0xc04c994  jal         func_132650
    ctx->pc = 0x13258Cu;
    SET_GPR_U32(ctx, 31, 0x132594u);
    ctx->pc = 0x132590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13258Cu;
    // 0x132590: 0xafb40088  sw          $s4, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132650u, 0x13258Cu, 0x132594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132594u;
label_132594:
    // 0x132594: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x132594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x132598: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x132598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13259c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13259Cu;
    {
        const bool branch_taken_0x13259c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13259c) {
            ctx->pc = 0x1325ACu;
            return;
        }
    }
    ctx->pc = 0x1325A4u;
    // 0x1325a4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1325a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1325a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1325a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1325acu;
}
