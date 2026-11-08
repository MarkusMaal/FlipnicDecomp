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

// Function: entry_0019962c
// Address: 0x19962c - 0x19965c
void entry_0019962c_0x19962c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019962c_0x19962c");
#endif

    switch (ctx->pc) {
        case 0x199644u: goto label_199644;
        case 0x199650u: goto label_199650;
        default: break;
    }

    ctx->pc = 0x19962cu;

    // 0x19962c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19962cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x199630: 0x26840820  addiu       $a0, $s4, 0x820
    ctx->pc = 0x199630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2080));
    // 0x199634: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x199634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x199638: 0xdc452818  ld          $a1, 0x2818($v0)
    ctx->pc = 0x199638u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 10264)));
    // 0x19963c: 0xc069698  jal         func_1A5A60
    ctx->pc = 0x19963Cu;
    SET_GPR_U32(ctx, 31, 0x199644u);
    ctx->pc = 0x199640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19963Cu;
    // 0x199640: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5A60u, 0x19963Cu, 0x199644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199644u;
label_199644:
    // 0x199644: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199648: 0xc063e08  jal         func_18F820
    ctx->pc = 0x199648u;
    SET_GPR_U32(ctx, 31, 0x199650u);
    ctx->pc = 0x19964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199648u;
    // 0x19964c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x199648u, 0x199650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199650u;
label_199650:
    // 0x199650: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x199650u;
    {
        const bool branch_taken_0x199650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199650) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x199658u;
    // 0x199658: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x199658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19965cu;
}
