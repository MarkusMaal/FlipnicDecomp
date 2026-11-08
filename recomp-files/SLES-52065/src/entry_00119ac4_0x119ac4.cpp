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

// Function: entry_00119ac4
// Address: 0x119ac4 - 0x119b10
void entry_00119ac4_0x119ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119ac4_0x119ac4");
#endif

    switch (ctx->pc) {
        case 0x119aecu: goto label_119aec;
        default: break;
    }

    ctx->pc = 0x119ac4u;

    // 0x119ac4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x119ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x119ac8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x119ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x119acc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x119accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119ad0: 0x0  nop
    ctx->pc = 0x119ad0u;
    // NOP
    // 0x119ad4: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x119ad4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x119ad8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x119ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x119adc: 0x0  nop
    ctx->pc = 0x119adcu;
    // NOP
    // 0x119ae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119ae4: 0xc04c730  jal         func_131CC0
    ctx->pc = 0x119AE4u;
    SET_GPR_U32(ctx, 31, 0x119AECu);
    ctx->pc = 0x119AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119AE4u;
    // 0x119ae8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x119AE4u, 0x119AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119AECu;
label_119aec:
    // 0x119aec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x119aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119af0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x119af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119af4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x119af4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119af8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x119af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x119afc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x119afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119b00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x119b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119b04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x119b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119b08: 0x3e00008  jr          $ra
    ctx->pc = 0x119B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B08u;
        // 0x119b0c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119B10u;
}
