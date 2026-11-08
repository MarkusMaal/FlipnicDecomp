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

// Function: entry_001de4d0
// Address: 0x1de4d0 - 0x1de540
void entry_001de4d0_0x1de4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de4d0_0x1de4d0");
#endif

    ctx->pc = 0x1de4d0u;

    // 0x1de4d0: 0x31020040  andi        $v0, $t0, 0x40
    ctx->pc = 0x1de4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
    // 0x1de4d4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1DE4D4u;
    {
        const bool branch_taken_0x1de4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4D4u;
        // 0x1de4d8: 0x31020100  andi        $v0, $t0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4d4) {
            ctx->pc = 0x1DE588u;
            return;
        }
    }
    ctx->pc = 0x1DE4DCu;
    // 0x1de4dc: 0xc60000c4  lwc1        $f0, 0xC4($s0)
    ctx->pc = 0x1de4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de4e0: 0xc60200c0  lwc1        $f2, 0xC0($s0)
    ctx->pc = 0x1de4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de4e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de4e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de4e8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1de4e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1de4ec: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x1de4ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1de4f0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de4f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1de4f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1de4f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1de4f8: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1DE4F8u;
    {
        const bool branch_taken_0x1de4f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4F8u;
        // 0x1de4fc: 0xe60100c4  swc1        $f1, 0xC4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4f8) {
            ctx->pc = 0x1DE584u;
            return;
        }
    }
    ctx->pc = 0x1DE500u;
    // 0x1de500: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de500u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de504: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1de508: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1de508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1de50c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1de50cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1de510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de514: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1de514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de518: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x1de518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x1de51c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1de51cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1de520: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE520u;
    {
        const bool branch_taken_0x1de520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE520u;
        // 0x1de524: 0xe60000c4  swc1        $f0, 0xC4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de520) {
            ctx->pc = 0x1DE540u;
            return;
        }
    }
    ctx->pc = 0x1DE528u;
    // 0x1de528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de52c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de52cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1de530: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x1de530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de534: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1de534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de538: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1DE538u;
    {
        const bool branch_taken_0x1de538 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de538) {
            ctx->pc = 0x1DE564u;
            return;
        }
    }
    ctx->pc = 0x1DE540u;
}
