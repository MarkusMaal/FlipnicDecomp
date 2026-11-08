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

// Function: entry_00109abc
// Address: 0x109abc - 0x109aec
void entry_00109abc_0x109abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109abc_0x109abc");
#endif

    ctx->pc = 0x109abcu;

    // 0x109abc: 0x0  nop
    ctx->pc = 0x109abcu;
    // NOP
    // 0x109ac0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x109ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x109ac4: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x109ac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x109ac8: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x109AC8u;
    {
        const bool branch_taken_0x109ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x109ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AC8u;
        // 0x109acc: 0x265203d0  addiu       $s2, $s2, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ac8) {
            ctx->pc = 0x109A44u;
            return;
        }
    }
    ctx->pc = 0x109AD0u;
    // 0x109ad0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x109ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109ad4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x109ad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109ad8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x109ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109adc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x109adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109ae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x109ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x109AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AE4u;
        // 0x109ae8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109AECu;
}
