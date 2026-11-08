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

// Function: entry_001bee30
// Address: 0x1bee30 - 0x1beedc
void entry_001bee30_0x1bee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bee30_0x1bee30");
#endif

    ctx->pc = 0x1bee30u;

    // 0x1bee30: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1bee30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1bee34: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x1bee34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x1bee38: 0x24423650  addiu       $v0, $v0, 0x3650
    ctx->pc = 0x1bee38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13904));
    // 0x1bee3c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1bee3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bee40: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x1bee40u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x213650u));
    // 0x1bee44: 0x24843660  addiu       $a0, $a0, 0x3660
    ctx->pc = 0x1bee44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13920));
    // 0x1bee48: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x1bee48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1bee4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bee4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bee50: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1bee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1bee54: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1bee54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1bee58: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1bee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1bee5c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1bee5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bee60: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1bee60u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x213660u));
    // 0x1bee64: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1bee64u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1bee68: 0x8c23f4e8  lw          $v1, -0xB18($at)
    ctx->pc = 0x1bee68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4E8u));
    // 0x1bee6c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1bee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bee70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bee74: 0xc4420070  lwc1        $f2, 0x70($v0)
    ctx->pc = 0x1bee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bee78: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x1bee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bee7c: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x1bee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bee80: 0x460110c1  sub.s       $f3, $f2, $f1
    ctx->pc = 0x1bee80u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1bee84: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x1bee84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1bee88: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x1bee88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bee8c: 0x0  nop
    ctx->pc = 0x1bee8cu;
    // NOP
    // 0x1bee90: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x1BEE90u;
    {
        const bool branch_taken_0x1bee90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BEE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE90u;
        // 0x1bee94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee90) {
            ctx->pc = 0x1BEF38u;
            return;
        }
    }
    ctx->pc = 0x1BEE98u;
    // 0x1bee98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bee98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bee9c: 0x0  nop
    ctx->pc = 0x1bee9cu;
    // NOP
    // 0x1beea0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1beea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1beea4: 0x0  nop
    ctx->pc = 0x1beea4u;
    // NOP
    // 0x1beea8: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x1BEEA8u;
    {
        const bool branch_taken_0x1beea8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEA8u;
        // 0x1beeac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beea8) {
            ctx->pc = 0x1BEF34u;
            return;
        }
    }
    ctx->pc = 0x1BEEB0u;
    // 0x1beeb0: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1BEEB0u;
    {
        const bool branch_taken_0x1beeb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEB0u;
        // 0x1beeb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beeb0) {
            ctx->pc = 0x1BEF34u;
            return;
        }
    }
    ctx->pc = 0x1BEEB8u;
    // 0x1beeb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1beeb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beebc: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x1beebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x1beec0: 0x3c043a83  lui         $a0, 0x3A83
    ctx->pc = 0x1beec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14979 << 16));
    // 0x1beec4: 0x34430fd8  ori         $v1, $v0, 0xFD8
    ctx->pc = 0x1beec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1beec8: 0x3482126e  ori         $v0, $a0, 0x126E
    ctx->pc = 0x1beec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4718);
    // 0x1beecc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1beeccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1beed0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1beed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1beed4: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x1beed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1beed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1beed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x1beedcu;
}
