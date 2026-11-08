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

// Function: entry_00164d6c
// Address: 0x164d6c - 0x164dd4
void entry_00164d6c_0x164d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164d6c_0x164d6c");
#endif

    ctx->pc = 0x164d6cu;

    // 0x164d6c: 0x0  nop
    ctx->pc = 0x164d6cu;
    // NOP
    // 0x164d70: 0x86830218  lh          $v1, 0x218($s4)
    ctx->pc = 0x164d70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 536)));
    // 0x164d74: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x164d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x164d78: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x164D78u;
    {
        const bool branch_taken_0x164d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D78u;
        // 0x164d7c: 0x2861000d  slti        $at, $v1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d78) {
            ctx->pc = 0x164DE8u;
            return;
        }
    }
    ctx->pc = 0x164D80u;
    // 0x164d80: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x164D80u;
    {
        const bool branch_taken_0x164d80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D80u;
        // 0x164d84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d80) {
            ctx->pc = 0x164DE8u;
            return;
        }
    }
    ctx->pc = 0x164D88u;
    // 0x164d88: 0x16430017  bne         $s2, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x164D88u;
    {
        const bool branch_taken_0x164d88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x164d88) {
            ctx->pc = 0x164DE8u;
            return;
        }
    }
    ctx->pc = 0x164D90u;
    // 0x164d90: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x164d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x164d94: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x164d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164d98: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x164d98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164d9c: 0x0  nop
    ctx->pc = 0x164d9cu;
    // NOP
    // 0x164da0: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x164DA0u;
    {
        const bool branch_taken_0x164da0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164da0) {
            ctx->pc = 0x164DE8u;
            return;
        }
    }
    ctx->pc = 0x164DA8u;
    // 0x164da8: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x164da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164dac: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x164dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164db0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x164db0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x164db4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x164db4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164db8: 0x0  nop
    ctx->pc = 0x164db8u;
    // NOP
    // 0x164dbc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x164DBCu;
    {
        const bool branch_taken_0x164dbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164dbc) {
            ctx->pc = 0x164DE8u;
            return;
        }
    }
    ctx->pc = 0x164DC4u;
    // 0x164dc4: 0x8e620350  lw          $v0, 0x350($s3)
    ctx->pc = 0x164dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 848)));
    // 0x164dc8: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x164DC8u;
    {
        const bool branch_taken_0x164dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x164dc8) {
            ctx->pc = 0x164DD4u;
            return;
        }
    }
    ctx->pc = 0x164DD0u;
    // 0x164dd0: 0xe6620354  swc1        $f2, 0x354($s3)
    ctx->pc = 0x164dd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 852), bits); }
    ctx->pc = 0x164dd4u;
}
