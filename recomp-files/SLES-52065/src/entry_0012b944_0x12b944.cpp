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

// Function: entry_0012b944
// Address: 0x12b944 - 0x12b984
void entry_0012b944_0x12b944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b944_0x12b944");
#endif

    ctx->pc = 0x12b944u;

    // 0x12b944: 0x0  nop
    ctx->pc = 0x12b944u;
    // NOP
    // 0x12b948: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12b948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12b94c: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x12b94cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12b950: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x12B950u;
    {
        const bool branch_taken_0x12b950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B950u;
        // 0x12b954: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b950) {
            ctx->pc = 0x12B924u;
            return;
        }
    }
    ctx->pc = 0x12B958u;
    // 0x12b958: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12b958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12b95c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x12b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x12b960: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x12b960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x12b964: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x12b964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x12b968: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12b968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b96c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12b96cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b970: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12b970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12b974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b978: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12b978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b97c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B97Cu;
        // 0x12b980: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B984u;
}
