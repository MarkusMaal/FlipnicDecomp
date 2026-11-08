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

// Function: entry_00133eac
// Address: 0x133eac - 0x133ee4
void entry_00133eac_0x133eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133eac_0x133eac");
#endif

    ctx->pc = 0x133eacu;

    // 0x133eac: 0x0  nop
    ctx->pc = 0x133eacu;
    // NOP
    // 0x133eb0: 0x8fa202f4  lw          $v0, 0x2F4($sp)
    ctx->pc = 0x133eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x133eb4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x133eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x133eb8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x133EB8u;
    {
        const bool branch_taken_0x133eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EB8u;
        // 0x133ebc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133eb8) {
            ctx->pc = 0x133E38u;
            return;
        }
    }
    ctx->pc = 0x133EC0u;
    // 0x133ec0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x133ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x133ec4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x133ec4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133ec8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x133ec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x133ecc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x133eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133ed0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x133ed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133ed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133ed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133edc: 0x3e00008  jr          $ra
    ctx->pc = 0x133EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EDCu;
        // 0x133ee0: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133EE4u;
}
