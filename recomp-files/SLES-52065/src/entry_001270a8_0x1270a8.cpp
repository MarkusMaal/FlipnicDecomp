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

// Function: entry_001270a8
// Address: 0x1270a8 - 0x127118
void entry_001270a8_0x1270a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001270a8_0x1270a8");
#endif

    ctx->pc = 0x1270a8u;

    // 0x1270a8: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1270a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1270ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1270acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270b0: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x1270b0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
    // 0x1270b4: 0x7bc30000  lq          $v1, 0x0($fp)
    ctx->pc = 0x1270b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1270b8: 0x7e830010  sq          $v1, 0x10($s4)
    ctx->pc = 0x1270b8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 3));
    // 0x1270bc: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1270bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1270c0: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x1270c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    // 0x1270c4: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x1270c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1270c8: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x1270c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x1270cc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1270ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1270d0: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1270d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1270d4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1270d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1270d8: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1270d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1270dc: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1270dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1270e0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1270e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1270e4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1270e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1270e8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1270e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1270ec: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1270ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1270f0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1270f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1270f4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1270f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1270f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1270f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1270fc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1270fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127100: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x127100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x127104: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x127104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127108: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x127108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12710c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12710cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127110: 0x3e00008  jr          $ra
    ctx->pc = 0x127110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127110u;
        // 0x127114: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127118u;
}
