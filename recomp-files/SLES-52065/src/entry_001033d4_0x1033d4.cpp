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

// Function: entry_001033d4
// Address: 0x1033d4 - 0x103414
void entry_001033d4_0x1033d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001033d4_0x1033d4");
#endif

    ctx->pc = 0x1033d4u;

    // 0x1033d4: 0x0  nop
    ctx->pc = 0x1033d4u;
    // NOP
    // 0x1033d8: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x1033d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1033dc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1033DCu;
    {
        const bool branch_taken_0x1033dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1033dc) {
            ctx->pc = 0x1033C4u;
            return;
        }
    }
    ctx->pc = 0x1033E4u;
    // 0x1033e4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1033e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1033e8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1033e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1033ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1033ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1033f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1033f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1033f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1033f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1033f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1033f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1033fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1033fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103400: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x103400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x103404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103408: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x103408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10340c: 0x3e00008  jr          $ra
    ctx->pc = 0x10340Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10340Cu;
        // 0x103410: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10340Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103414u;
}
