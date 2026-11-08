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

// Function: entry_001b2b58
// Address: 0x1b2b58 - 0x1b2b8c
void entry_001b2b58_0x1b2b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2b58_0x1b2b58");
#endif

    ctx->pc = 0x1b2b58u;

    // 0x1b2b58: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1b2b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b2b5c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1b2b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2b60: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1b2b60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b2b64: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1b2b64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b2b68: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1b2b68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2b6c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1b2b6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b2b70: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1b2b70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b2b74: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1b2b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b2b78: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1b2b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2b7c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b2b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2b80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b2b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2b84: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B84u;
        // 0x1b2b88: 0x27bd0410  addiu       $sp, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2B8Cu;
}
