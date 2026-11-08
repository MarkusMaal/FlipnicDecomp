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

// Function: entry_0012b17c
// Address: 0x12b17c - 0x12b1b4
void entry_0012b17c_0x12b17c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b17c_0x12b17c");
#endif

    ctx->pc = 0x12b17cu;

    // 0x12b17c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x12b17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12b180: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x12b180u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12b184: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x12b184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12b188: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x12b188u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12b18c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x12b18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12b190: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x12b190u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12b194: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x12b194u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12b198: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x12b198u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12b19c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x12b19cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b1a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12b1a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b1a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12b1a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b1a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12b1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x12B1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1ACu;
        // 0x12b1b0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B1B4u;
}
