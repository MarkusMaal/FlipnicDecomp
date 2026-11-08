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

// Function: entry_0014fe48
// Address: 0x14fe48 - 0x14feac
void entry_0014fe48_0x14fe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fe48_0x14fe48");
#endif

    switch (ctx->pc) {
        case 0x14fe60u: goto label_14fe60;
        default: break;
    }

    ctx->pc = 0x14fe48u;

    // 0x14fe48: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x14fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x14fe4c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x14fe4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14fe50: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x14FE50u;
    {
        const bool branch_taken_0x14fe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE50u;
        // 0x14fe54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe50) {
            ctx->pc = 0x14FC94u;
            return;
        }
    }
    ctx->pc = 0x14FE58u;
    // 0x14fe58: 0xc054050  jal         func_150140
    ctx->pc = 0x14FE58u;
    SET_GPR_U32(ctx, 31, 0x14FE60u);
    ctx->pc = 0x150140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150140u, 0x14FE58u, 0x14FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE60u;
label_14fe60:
    // 0x14fe60: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x14fe60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14fe64: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x14fe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x14fe68: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x14fe68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14fe6c: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x14fe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x14fe70: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x14fe70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14fe74: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x14fe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x14fe78: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14fe78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14fe7c: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x14fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x14fe80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14fe80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fe84: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x14fe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x14fe88: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x14fe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x14fe8c: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x14fe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x14fe90: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x14fe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x14fe94: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x14fe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14fe98: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x14fe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x14fe9c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14fe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14fea0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14fea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14fea4: 0x3e00008  jr          $ra
    ctx->pc = 0x14FEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEA4u;
        // 0x14fea8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FEACu;
}
