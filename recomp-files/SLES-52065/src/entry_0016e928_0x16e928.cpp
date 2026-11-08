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

// Function: entry_0016e928
// Address: 0x16e928 - 0x16e964
void entry_0016e928_0x16e928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e928_0x16e928");
#endif

    ctx->pc = 0x16e928u;

    // 0x16e928: 0x86a20214  lh          $v0, 0x214($s5)
    ctx->pc = 0x16e928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 532)));
    // 0x16e92c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x16e92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16e930: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x16E930u;
    {
        const bool branch_taken_0x16e930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e930) {
            ctx->pc = 0x16E87Cu;
            return;
        }
    }
    ctx->pc = 0x16E938u;
    // 0x16e938: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x16e938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16e93c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16e940: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x16e940u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16e944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e948: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16e948u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16e94c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16e94cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16e950: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16e950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e954: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16e954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e958: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16e958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e95c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E95Cu;
        // 0x16e960: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E964u;
}
