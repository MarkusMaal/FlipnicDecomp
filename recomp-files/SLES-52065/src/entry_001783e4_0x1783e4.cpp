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

// Function: entry_001783e4
// Address: 0x1783e4 - 0x17841c
void entry_001783e4_0x1783e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001783e4_0x1783e4");
#endif

    ctx->pc = 0x1783e4u;

    // 0x1783e4: 0x0  nop
    ctx->pc = 0x1783e4u;
    // NOP
    // 0x1783e8: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x1783e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1783ec: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1783ECu;
    {
        const bool branch_taken_0x1783ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1783ec) {
            ctx->pc = 0x178334u;
            return;
        }
    }
    ctx->pc = 0x1783F4u;
    // 0x1783f4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1783f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1783f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1783f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1783fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1783fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178400: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x178400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x178404: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x178404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178408: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x178408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17840c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17840cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178410: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x178410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178414: 0x3e00008  jr          $ra
    ctx->pc = 0x178414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178414u;
        // 0x178418: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17841Cu;
}
