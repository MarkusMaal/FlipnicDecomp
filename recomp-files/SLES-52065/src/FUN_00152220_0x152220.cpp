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

// Function: FUN_00152220
// Address: 0x152220 - 0x1522a0
void FUN_00152220_0x152220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152220_0x152220");
#endif

    switch (ctx->pc) {
        case 0x152234u: goto label_152234;
        default: break;
    }

    ctx->pc = 0x152220u;

    // 0x152220: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x152220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x152224: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x152224u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x152228: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x152228u;
    {
        const bool branch_taken_0x152228 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152228u;
        // 0x15222c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152228) {
            ctx->pc = 0x152288u;
            goto label_152288;
        }
    }
    ctx->pc = 0x152230u;
    // 0x152230: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x152230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152234:
    // 0x152234: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x152234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x152238: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x152238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15223c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x15223cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152240: 0x0  nop
    ctx->pc = 0x152240u;
    // NOP
    // 0x152244: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x152244u;
    {
        const bool branch_taken_0x152244 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152244u;
        // 0x152248: 0xc4420004  lwc1        $f2, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152244) {
            ctx->pc = 0x152278u;
            goto label_152278;
        }
    }
    ctx->pc = 0x15224Cu;
    // 0x15224c: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x15224cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152250: 0x0  nop
    ctx->pc = 0x152250u;
    // NOP
    // 0x152254: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x152254u;
    {
        const bool branch_taken_0x152254 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152254u;
        // 0x152258: 0x46006041  sub.s       $f1, $f12, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152254) {
            ctx->pc = 0x152278u;
            goto label_152278;
        }
    }
    ctx->pc = 0x15225Cu;
    // 0x15225c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x15225cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x152260: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x152260u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x152264: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x152264u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152268: 0x0  nop
    ctx->pc = 0x152268u;
    // NOP
    // 0x15226c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15226cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x152270: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x152270u;
    {
        const bool branch_taken_0x152270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152270u;
        // 0x152274: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152270) {
            ctx->pc = 0x152298u;
            goto label_152298;
        }
    }
    ctx->pc = 0x152278u;
label_152278:
    // 0x152278: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x152278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15227c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x15227cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x152280: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x152280u;
    {
        const bool branch_taken_0x152280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152280u;
        // 0x152284: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152280) {
            ctx->pc = 0x152234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152234;
        }
    }
    ctx->pc = 0x152288u;
label_152288:
    // 0x152288: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x152288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x15228c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15228cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152290: 0x0  nop
    ctx->pc = 0x152290u;
    // NOP
    // 0x152294: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_152298:
    // 0x152298: 0x3e00008  jr          $ra
    ctx->pc = 0x152298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1522A0u;
}
