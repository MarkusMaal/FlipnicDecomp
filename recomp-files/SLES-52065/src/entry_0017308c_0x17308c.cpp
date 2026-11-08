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

// Function: entry_0017308c
// Address: 0x17308c - 0x1730f4
void entry_0017308c_0x17308c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017308c_0x17308c");
#endif

    ctx->pc = 0x17308cu;

    // 0x17308c: 0x92226034  lbu         $v0, 0x6034($s1)
    ctx->pc = 0x17308cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24628)));
    // 0x173090: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x173090u;
    {
        const bool branch_taken_0x173090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173090) {
            ctx->pc = 0x173118u;
            return;
        }
    }
    ctx->pc = 0x173098u;
    // 0x173098: 0xc7838020  lwc1        $f3, -0x7FE0($gp)
    ctx->pc = 0x173098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17309c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x17309cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1730a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1730a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1730a4: 0xc6211464  lwc1        $f1, 0x1464($s1)
    ctx->pc = 0x1730a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1730a8: 0xc6201474  lwc1        $f0, 0x1474($s1)
    ctx->pc = 0x1730a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1730ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1730acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1730b0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1730b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1730b4: 0x0  nop
    ctx->pc = 0x1730b4u;
    // NOP
    // 0x1730b8: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x1730B8u;
    {
        const bool branch_taken_0x1730b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1730BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730B8u;
        // 0x1730bc: 0x46031082  mul.s       $f2, $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730b8) {
            ctx->pc = 0x17315Cu;
            return;
        }
    }
    ctx->pc = 0x1730C0u;
    // 0x1730c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1730c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1730c4: 0x0  nop
    ctx->pc = 0x1730c4u;
    // NOP
    // 0x1730c8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1730C8u;
    {
        const bool branch_taken_0x1730c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1730c8) {
            ctx->pc = 0x1730F4u;
            return;
        }
    }
    ctx->pc = 0x1730D0u;
    // 0x1730d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1730d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1730d4: 0xe6211464  swc1        $f1, 0x1464($s1)
    ctx->pc = 0x1730d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5220), bits); }
    // 0x1730d8: 0xc6201474  lwc1        $f0, 0x1474($s1)
    ctx->pc = 0x1730d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1730dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1730dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1730e0: 0x0  nop
    ctx->pc = 0x1730e0u;
    // NOP
    // 0x1730e4: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1730E4u;
    {
        const bool branch_taken_0x1730e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1730E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730E4u;
        // 0x1730e8: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730e4) {
            ctx->pc = 0x173160u;
            return;
        }
    }
    ctx->pc = 0x1730ECu;
    // 0x1730ec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1730ECu;
    {
        const bool branch_taken_0x1730ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730ECu;
        // 0x1730f0: 0xe6201464  swc1        $f0, 0x1464($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730ec) {
            ctx->pc = 0x17315Cu;
            return;
        }
    }
    ctx->pc = 0x1730F4u;
}
