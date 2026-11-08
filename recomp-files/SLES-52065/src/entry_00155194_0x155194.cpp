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

// Function: entry_00155194
// Address: 0x155194 - 0x1551dc
void entry_00155194_0x155194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155194_0x155194");
#endif

    ctx->pc = 0x155194u;

    // 0x155194: 0x0  nop
    ctx->pc = 0x155194u;
    // NOP
    // 0x155198: 0x46141036  c.le.s      $f2, $f20
    ctx->pc = 0x155198u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15519c: 0x0  nop
    ctx->pc = 0x15519cu;
    // NOP
    // 0x1551a0: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1551A0u;
    {
        const bool branch_taken_0x1551a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1551a0) {
            ctx->pc = 0x1551DCu;
            return;
        }
    }
    ctx->pc = 0x1551A8u;
    // 0x1551a8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1551a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1551ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1551acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1551b0: 0x0  nop
    ctx->pc = 0x1551b0u;
    // NOP
    // 0x1551b4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1551B4u;
    {
        const bool branch_taken_0x1551b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1551B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551B4u;
        // 0x1551b8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551b4) {
            ctx->pc = 0x1551DCu;
            return;
        }
    }
    ctx->pc = 0x1551BCu;
    // 0x1551bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1551bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1551c0: 0x0  nop
    ctx->pc = 0x1551c0u;
    // NOP
    // 0x1551c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1551c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1551c8: 0x0  nop
    ctx->pc = 0x1551c8u;
    // NOP
    // 0x1551cc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1551CCu;
    {
        const bool branch_taken_0x1551cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1551cc) {
            ctx->pc = 0x1551DCu;
            return;
        }
    }
    ctx->pc = 0x1551D4u;
    // 0x1551d4: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x1551d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x1551d8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1551d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1551dcu;
}
