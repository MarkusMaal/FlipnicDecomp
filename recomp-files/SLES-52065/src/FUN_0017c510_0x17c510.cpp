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

// Function: FUN_0017c510
// Address: 0x17c510 - 0x17c5a8
void FUN_0017c510_0x17c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017c510_0x17c510");
#endif

    switch (ctx->pc) {
        case 0x17c52cu: goto label_17c52c;
        default: break;
    }

    ctx->pc = 0x17c510u;

    // 0x17c510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17c514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17c518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17c518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17c51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17c520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17c520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c524: 0xc056414  jal         func_159050
    ctx->pc = 0x17C524u;
    SET_GPR_U32(ctx, 31, 0x17C52Cu);
    ctx->pc = 0x17C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C524u;
    // 0x17c528: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159050u, 0x17C524u, 0x17C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C52Cu;
label_17c52c:
    // 0x17c52c: 0xae2001e4  sw          $zero, 0x1E4($s1)
    ctx->pc = 0x17c52cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 0));
    // 0x17c530: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x17c530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x17c534: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x17c534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c538: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x17c538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c53c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x17c53cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17c540: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17c540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17c544: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17c544u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17c548: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17c548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17c54c: 0xe6200210  swc1        $f0, 0x210($s1)
    ctx->pc = 0x17c54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 528), bits); }
    // 0x17c550: 0xae230214  sw          $v1, 0x214($s1)
    ctx->pc = 0x17c550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 3));
    // 0x17c554: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x17c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c558: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x17c558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c55c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17c55cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17c560: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17c560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17c564: 0xe6200218  swc1        $f0, 0x218($s1)
    ctx->pc = 0x17c564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 536), bits); }
    // 0x17c568: 0xc6200210  lwc1        $f0, 0x210($s1)
    ctx->pc = 0x17c568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c56c: 0xc6210218  lwc1        $f1, 0x218($s1)
    ctx->pc = 0x17c56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c570: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17c570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c574: 0x0  nop
    ctx->pc = 0x17c574u;
    // NOP
    // 0x17c578: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x17C578u;
    {
        const bool branch_taken_0x17c578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c578) {
            ctx->pc = 0x17C588u;
            goto label_17c588;
        }
    }
    ctx->pc = 0x17C580u;
    // 0x17c580: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17C580u;
    {
        const bool branch_taken_0x17c580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C580u;
        // 0x17c584: 0xe6200200  swc1        $f0, 0x200($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c580) {
            ctx->pc = 0x17C58Cu;
            goto label_17c58c;
        }
    }
    ctx->pc = 0x17C588u;
label_17c588:
    // 0x17c588: 0xe6210200  swc1        $f1, 0x200($s1)
    ctx->pc = 0x17c588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
label_17c58c:
    // 0x17c58c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x17c58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c590: 0xe6200214  swc1        $f0, 0x214($s1)
    ctx->pc = 0x17c590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 532), bits); }
    // 0x17c594: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17c594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17c598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c59c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x17C5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5A0u;
        // 0x17c5a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C5A8u;
}
