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

// Function: entry_0010ecdc
// Address: 0x10ecdc - 0x10ed14
void entry_0010ecdc_0x10ecdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ecdc_0x10ecdc");
#endif

    ctx->pc = 0x10ecdcu;

    // 0x10ecdc: 0x0  nop
    ctx->pc = 0x10ecdcu;
    // NOP
    // 0x10ece0: 0x8e430228  lw          $v1, 0x228($s2)
    ctx->pc = 0x10ece0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
    // 0x10ece4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x10ece4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10ece8: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x10ECE8u;
    {
        const bool branch_taken_0x10ece8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ece8) {
            ctx->pc = 0x10EC38u;
            return;
        }
    }
    ctx->pc = 0x10ECF0u;
    // 0x10ecf0: 0xae400230  sw          $zero, 0x230($s2)
    ctx->pc = 0x10ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 0));
    // 0x10ecf4: 0xae400234  sw          $zero, 0x234($s2)
    ctx->pc = 0x10ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 0));
    // 0x10ecf8: 0xae400238  sw          $zero, 0x238($s2)
    ctx->pc = 0x10ecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 0));
    // 0x10ecfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10ecfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ed00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10ed00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ed04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10ed04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ed08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10ed08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ed0c: 0x3e00008  jr          $ra
    ctx->pc = 0x10ED0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED0Cu;
        // 0x10ed10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ED0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ED14u;
}
