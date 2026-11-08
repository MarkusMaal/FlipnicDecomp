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

// Function: FUN_00162e40
// Address: 0x162e40 - 0x162e7c
void FUN_00162e40_0x162e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00162e40_0x162e40");
#endif

    switch (ctx->pc) {
        case 0x162e54u: goto label_162e54;
        default: break;
    }

    ctx->pc = 0x162e40u;

    // 0x162e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162e44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x162e4c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x162E4Cu;
    SET_GPR_U32(ctx, 31, 0x162E54u);
    ctx->pc = 0x162E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162E4Cu;
    // 0x162e50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x162E4Cu, 0x162E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162E54u;
label_162e54:
    // 0x162e54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x162e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x162e58: 0x80830022  lb          $v1, 0x22($a0)
    ctx->pc = 0x162e58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x162e5c: 0xa6030218  sh          $v1, 0x218($s0)
    ctx->pc = 0x162e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 536), (uint16_t)GPR_U32(ctx, 3));
    // 0x162e60: 0x80830023  lb          $v1, 0x23($a0)
    ctx->pc = 0x162e60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x162e64: 0xa603021a  sh          $v1, 0x21A($s0)
    ctx->pc = 0x162e64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 538), (uint16_t)GPR_U32(ctx, 3));
    // 0x162e68: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x162e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x162e6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x162e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162e70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162e74: 0x3e00008  jr          $ra
    ctx->pc = 0x162E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E74u;
        // 0x162e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162E7Cu;
}
