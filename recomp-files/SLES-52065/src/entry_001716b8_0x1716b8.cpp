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

// Function: entry_001716b8
// Address: 0x1716b8 - 0x171730
void entry_001716b8_0x1716b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001716b8_0x1716b8");
#endif

    ctx->pc = 0x1716b8u;

label_1716b8:
    // 0x1716b8: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x1716b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1716bc: 0x2053821  addu        $a3, $s0, $a1
    ctx->pc = 0x1716bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1716c0: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x1716c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1716c4: 0xe02021  addu        $a0, $a3, $zero
    ctx->pc = 0x1716c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
    // 0x1716c8: 0xc01821  addu        $v1, $a2, $zero
    ctx->pc = 0x1716c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
    // 0x1716cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1716ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1716d0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1716d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1716d4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1716d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1716d8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1716d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1716dc: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x1716dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1716e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1716e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1716e4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1716e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1716e8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1716e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1716ec: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1716ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1716f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1716f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1716f4: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x1716f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1716f8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1716f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1716fc: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1716fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171700: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x171700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x171704: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x171704u;
    {
        const bool branch_taken_0x171704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171704u;
        // 0x171708: 0xe4e00008  swc1        $f0, 0x8($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171704) {
            ctx->pc = 0x1716B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1716b8;
        }
    }
    ctx->pc = 0x17170Cu;
    // 0x17170c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17170cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x171710: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x171710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x171714: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x171714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x171718: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x171718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17171c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17171cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171720: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x171720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171724: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x171724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171728: 0x3e00008  jr          $ra
    ctx->pc = 0x171728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171728u;
        // 0x17172c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171730u;
}
