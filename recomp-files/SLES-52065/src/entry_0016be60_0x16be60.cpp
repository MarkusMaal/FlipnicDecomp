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

// Function: entry_0016be60
// Address: 0x16be60 - 0x16beb4
void entry_0016be60_0x16be60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016be60_0x16be60");
#endif

    ctx->pc = 0x16be60u;

    // 0x16be60: 0xc7808020  lwc1        $f0, -0x7FE0($gp)
    ctx->pc = 0x16be60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16be64: 0x3c033e06  lui         $v1, 0x3E06
    ctx->pc = 0x16be64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15878 << 16));
    // 0x16be68: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x16be68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x16be6c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x16be6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16be70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16be70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16be74: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x16be74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x16be78: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16be78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x16be7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16be7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16be80: 0xaf848604  sw          $a0, -0x79FC($gp)
    ctx->pc = 0x16be80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936068), GPR_U32(ctx, 4));
    // 0x16be84: 0xc6200224  lwc1        $f0, 0x224($s1)
    ctx->pc = 0x16be84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16be88: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16be88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16be8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16be8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16be90: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x16be90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16be94: 0x0  nop
    ctx->pc = 0x16be94u;
    // NOP
    // 0x16be98: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x16BE98u;
    {
        const bool branch_taken_0x16be98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE98u;
        // 0x16be9c: 0xe6200224  swc1        $f0, 0x224($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be98) {
            ctx->pc = 0x16BEB4u;
            return;
        }
    }
    ctx->pc = 0x16BEA0u;
    // 0x16bea0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x16bea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x16bea4: 0xe6200224  swc1        $f0, 0x224($s1)
    ctx->pc = 0x16bea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    // 0x16bea8: 0x86230220  lh          $v1, 0x220($s1)
    ctx->pc = 0x16bea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x16beac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16beacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16beb0: 0xa6230220  sh          $v1, 0x220($s1)
    ctx->pc = 0x16beb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 544), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x16beb4u;
}
