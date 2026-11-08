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

// Function: entry_00100ba0
// Address: 0x100ba0 - 0x100bc8
void entry_00100ba0_0x100ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100ba0_0x100ba0");
#endif

    switch (ctx->pc) {
        case 0x100bb4u: goto label_100bb4;
        default: break;
    }

    ctx->pc = 0x100ba0u;

    // 0x100ba0: 0x9243007a  lbu         $v1, 0x7A($s2)
    ctx->pc = 0x100ba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 122)));
    // 0x100ba4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x100BA4u;
    {
        const bool branch_taken_0x100ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BA4u;
        // 0x100ba8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ba4) {
            ctx->pc = 0x100BC8u;
            return;
        }
    }
    ctx->pc = 0x100BACu;
    // 0x100bac: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x100BACu;
    SET_GPR_U32(ctx, 31, 0x100BB4u);
    ctx->pc = 0x100BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BACu;
    // 0x100bb0: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x100BACu, 0x100BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BB4u;
label_100bb4:
    // 0x100bb4: 0x7a460060  lq          $a2, 0x60($s2)
    ctx->pc = 0x100bb4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x100bb8: 0x7e460010  sq          $a2, 0x10($s2)
    ctx->pc = 0x100bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 6));
    // 0x100bbc: 0x7a460060  lq          $a2, 0x60($s2)
    ctx->pc = 0x100bbcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x100bc0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x100BC0u;
    {
        const bool branch_taken_0x100bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BC0u;
        // 0x100bc4: 0x7e4601e0  sq          $a2, 0x1E0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 480), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100bc0) {
            ctx->pc = 0x100C3Cu;
            return;
        }
    }
    ctx->pc = 0x100BC8u;
}
