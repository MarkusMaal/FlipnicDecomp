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

// Function: entry_00170038
// Address: 0x170038 - 0x17006c
void entry_00170038_0x170038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170038_0x170038");
#endif

    ctx->pc = 0x170038u;

    // 0x170038: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x170038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17003c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x17003cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x170040: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x170040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x170044: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x170044u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x170048: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x170048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17004c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17004cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x170050: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x170050u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x170054: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x170054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170058: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x170058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17005c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17005cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170060: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x170060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170064: 0x3e00008  jr          $ra
    ctx->pc = 0x170064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170064u;
        // 0x170068: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17006Cu;
}
