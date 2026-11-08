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

// Function: FUN_00132220
// Address: 0x132220 - 0x1322a8
void FUN_00132220_0x132220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00132220_0x132220");
#endif

    switch (ctx->pc) {
        case 0x132278u: goto label_132278;
        default: break;
    }

    ctx->pc = 0x132220u;

label_132220:
    // 0x132220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132228: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x132228u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x13222c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x13222cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x132230: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x132230u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x132234: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x132234u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x132238: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x132238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x13223c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13223Cu;
    {
        const bool branch_taken_0x13223c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13223Cu;
        // 0x132240: 0xc4940074  lwc1        $f20, 0x74($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13223c) {
            ctx->pc = 0x132288u;
            goto label_132288;
        }
    }
    ctx->pc = 0x132244u;
    // 0x132244: 0xc4550074  lwc1        $f21, 0x74($v0)
    ctx->pc = 0x132244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x132248: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x132248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x13224c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13224Cu;
    {
        const bool branch_taken_0x13224c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13224c) {
            ctx->pc = 0x132284u;
            goto label_132284;
        }
    }
    ctx->pc = 0x132254u;
    // 0x132254: 0xc4560074  lwc1        $f22, 0x74($v0)
    ctx->pc = 0x132254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x132258: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x132258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x13225c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13225Cu;
    {
        const bool branch_taken_0x13225c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13225c) {
            ctx->pc = 0x132280u;
            goto label_132280;
        }
    }
    ctx->pc = 0x132264u;
    // 0x132264: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x132264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x132268: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132268u;
    {
        const bool branch_taken_0x132268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132268u;
        // 0x13226c: 0xc4570074  lwc1        $f23, 0x74($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132268) {
            ctx->pc = 0x13227Cu;
            goto label_13227c;
        }
    }
    ctx->pc = 0x132270u;
    // 0x132270: 0xc04c888  jal         func_132220
    ctx->pc = 0x132270u;
    SET_GPR_U32(ctx, 31, 0x132278u);
    ctx->pc = 0x132220u;
    goto label_132220;
    ctx->pc = 0x132278u;
label_132278:
    // 0x132278: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x132278u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_13227c:
    // 0x13227c: 0x4617b582  mul.s       $f22, $f22, $f23
    ctx->pc = 0x13227cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
label_132280:
    // 0x132280: 0x4616ad42  mul.s       $f21, $f21, $f22
    ctx->pc = 0x132280u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
label_132284:
    // 0x132284: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x132284u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
label_132288:
    // 0x132288: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x132288u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x13228c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13228cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132290: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x132290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x132294: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x132294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x132298: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x132298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13229c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13229cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1322a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1322A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1322A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322A0u;
        // 0x1322a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1322A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1322A8u;
}
