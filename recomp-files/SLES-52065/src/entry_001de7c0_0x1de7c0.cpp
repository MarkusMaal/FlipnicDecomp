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

// Function: entry_001de7c0
// Address: 0x1de7c0 - 0x1de818
void entry_001de7c0_0x1de7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de7c0_0x1de7c0");
#endif

    ctx->pc = 0x1de7c0u;

    // 0x1de7c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1de7c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1de7c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1de7c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7cc: 0x31024000  andi        $v0, $t0, 0x4000
    ctx->pc = 0x1de7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16384);
    // 0x1de7d0: 0x8e07005c  lw          $a3, 0x5C($s0)
    ctx->pc = 0x1de7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1de7d4: 0x8e0c0060  lw          $t4, 0x60($s0)
    ctx->pc = 0x1de7d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1de7d8: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x1DE7D8u;
    {
        const bool branch_taken_0x1de7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7D8u;
        // 0x1de7dc: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7d8) {
            ctx->pc = 0x1DEA08u;
            return;
        }
    }
    ctx->pc = 0x1DE7E0u;
    // 0x1de7e0: 0x31020010  andi        $v0, $t0, 0x10
    ctx->pc = 0x1de7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
    // 0x1de7e4: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1DE7E4u;
    {
        const bool branch_taken_0x1de7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de7e4) {
            ctx->pc = 0x1DE7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE7E4u;
            // 0x1de7e8: 0x31020200  andi        $v0, $t0, 0x200 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)512);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE88Cu;
            return;
        }
    }
    ctx->pc = 0x1DE7ECu;
    // 0x1de7ec: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1de7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de7f0: 0xc60200cc  lwc1        $f2, 0xCC($s0)
    ctx->pc = 0x1de7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de7f4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1de7f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de7f8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1de7f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1de7fc: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1de7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de800: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE800u;
    {
        const bool branch_taken_0x1de800 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE800u;
        // 0x1de804: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de800) {
            ctx->pc = 0x1DE818u;
            return;
        }
    }
    ctx->pc = 0x1DE808u;
    // 0x1de808: 0xc60100c8  lwc1        $f1, 0xC8($s0)
    ctx->pc = 0x1de808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de80c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1de80cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de810: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1DE810u;
    {
        const bool branch_taken_0x1de810 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE810u;
        // 0x1de814: 0x2402ffef  addiu       $v0, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de810) {
            ctx->pc = 0x1DE838u;
            return;
        }
    }
    ctx->pc = 0x1DE818u;
}
