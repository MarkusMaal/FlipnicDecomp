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

// Function: FUN_00127130
// Address: 0x127130 - 0x127180
void FUN_00127130_0x127130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127130_0x127130");
#endif

    ctx->pc = 0x127130u;

    // 0x127130: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x127130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x127134: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x127134u;
    {
        const bool branch_taken_0x127134 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x127138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127134u;
        // 0x127138: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127134) {
            ctx->pc = 0x127148u;
            goto label_127148;
        }
    }
    ctx->pc = 0x12713Cu;
    // 0x12713c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12713cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127140: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x127140u;
    {
        const bool branch_taken_0x127140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127140u;
        // 0x127144: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127140) {
            ctx->pc = 0x127160u;
            goto label_127160;
        }
    }
    ctx->pc = 0x127148u;
label_127148:
    // 0x127148: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x127148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12714c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12714cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x127150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127154: 0x0  nop
    ctx->pc = 0x127154u;
    // NOP
    // 0x127158: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x127158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12715c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x12715cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_127160:
    // 0x127160: 0xc48000fc  lwc1        $f0, 0xFC($a0)
    ctx->pc = 0x127160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127164: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x127164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127168: 0x0  nop
    ctx->pc = 0x127168u;
    // NOP
    // 0x12716c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x12716Cu;
    {
        const bool branch_taken_0x12716c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x127170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12716Cu;
        // 0x127170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12716c) {
            ctx->pc = 0x127178u;
            goto label_127178;
        }
    }
    ctx->pc = 0x127174u;
    // 0x127174: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127178:
    // 0x127178: 0x3e00008  jr          $ra
    ctx->pc = 0x127178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127180u;
}
