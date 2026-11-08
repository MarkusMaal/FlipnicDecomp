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

// Function: FUN_00158f30
// Address: 0x158f30 - 0x158f8c
void FUN_00158f30_0x158f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158f30_0x158f30");
#endif

    switch (ctx->pc) {
        case 0x158f64u: goto label_158f64;
        default: break;
    }

    ctx->pc = 0x158f30u;

    // 0x158f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158f34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x158f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158f40: 0xa48001fa  sh          $zero, 0x1FA($a0)
    ctx->pc = 0x158f40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 506), (uint16_t)GPR_U32(ctx, 0));
    // 0x158f44: 0xac8001fc  sw          $zero, 0x1FC($a0)
    ctx->pc = 0x158f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 0));
    // 0x158f48: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x158f48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158f4c: 0x8205002a  lb          $a1, 0x2A($s0)
    ctx->pc = 0x158f4cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x158f50: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x158f50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x158f54: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x158F54u;
    {
        const bool branch_taken_0x158f54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F54u;
        // 0x158f58: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f54) {
            ctx->pc = 0x158F64u;
            goto label_158f64;
        }
    }
    ctx->pc = 0x158F5Cu;
    // 0x158f5c: 0xc042570  jal         func_1095C0
    ctx->pc = 0x158F5Cu;
    SET_GPR_U32(ctx, 31, 0x158F64u);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x158F5Cu, 0x158F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158F64u;
label_158f64:
    // 0x158f64: 0x82030029  lb          $v1, 0x29($s0)
    ctx->pc = 0x158f64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x158f68: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x158f68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x158f6c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x158F6Cu;
    {
        const bool branch_taken_0x158f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x158f6c) {
            ctx->pc = 0x158F78u;
            goto label_158f78;
        }
    }
    ctx->pc = 0x158F74u;
    // 0x158f74: 0xa22301d3  sb          $v1, 0x1D3($s1)
    ctx->pc = 0x158f74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 3));
label_158f78:
    // 0x158f78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158f7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158f80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158f84: 0x3e00008  jr          $ra
    ctx->pc = 0x158F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F84u;
        // 0x158f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158F8Cu;
}
