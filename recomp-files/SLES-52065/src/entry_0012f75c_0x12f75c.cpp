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

// Function: entry_0012f75c
// Address: 0x12f75c - 0x12f794
void entry_0012f75c_0x12f75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f75c_0x12f75c");
#endif

    ctx->pc = 0x12f75cu;

    // 0x12f75c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x12f75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12f760: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x12f760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12f764: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x12f764u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12f768: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x12f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12f76c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x12f76cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12f770: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x12f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12f774: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x12f774u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f778: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x12f778u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12f77c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x12f77cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12f780: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12f780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f784: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12f784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f788: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12f788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f78c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F78Cu;
        // 0x12f790: 0x27bd1aa0  addiu       $sp, $sp, 0x1AA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 6816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F794u;
}
