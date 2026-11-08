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

// Function: entry_00113070
// Address: 0x113070 - 0x1130b8
void entry_00113070_0x113070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113070_0x113070");
#endif

    switch (ctx->pc) {
        case 0x113078u: goto label_113078;
        default: break;
    }

    ctx->pc = 0x113070u;

    // 0x113070: 0xc044254  jal         func_110950
    ctx->pc = 0x113070u;
    SET_GPR_U32(ctx, 31, 0x113078u);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x113070u, 0x113078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113078u;
label_113078:
    // 0x113078: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x113078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11307c: 0x24442cd8  addiu       $a0, $v0, 0x2CD8
    ctx->pc = 0x11307cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x113080: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x113080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x113084: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x113084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113088: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11308c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11308cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x113090: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113094: 0x90830224  lbu         $v1, 0x224($a0)
    ctx->pc = 0x113094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x113098: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x113098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
    // 0x11309c: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x11309cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x1130a0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1130A0u;
    {
        const bool branch_taken_0x1130a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1130a0) {
            ctx->pc = 0x1130B8u;
            return;
        }
    }
    ctx->pc = 0x1130A8u;
    // 0x1130a8: 0x8c830228  lw          $v1, 0x228($a0)
    ctx->pc = 0x1130a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x1130ac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1130ACu;
    {
        const bool branch_taken_0x1130ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1130B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130ACu;
        // 0x1130b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130ac) {
            ctx->pc = 0x1130B8u;
            return;
        }
    }
    ctx->pc = 0x1130B4u;
    // 0x1130b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1130b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x1130b8u;
}
