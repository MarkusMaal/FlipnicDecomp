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

// Function: entry_0016f4d0
// Address: 0x16f4d0 - 0x16f514
void entry_0016f4d0_0x16f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f4d0_0x16f4d0");
#endif

    ctx->pc = 0x16f4d0u;

    // 0x16f4d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f4d4: 0x14440027  bne         $v0, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x16F4D4u;
    {
        const bool branch_taken_0x16f4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x16f4d4) {
            ctx->pc = 0x16F574u;
            return;
        }
    }
    ctx->pc = 0x16F4DCu;
    // 0x16f4dc: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x16f4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f4e0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x16f4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f4e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f4e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f4e8: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f4e8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f4ec: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f4f0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f4f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f4f8: 0x0  nop
    ctx->pc = 0x16f4f8u;
    // NOP
    // 0x16f4fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f4fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f500: 0x0  nop
    ctx->pc = 0x16f500u;
    // NOP
    // 0x16f504: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16F504u;
    {
        const bool branch_taken_0x16f504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f504) {
            ctx->pc = 0x16F514u;
            return;
        }
    }
    ctx->pc = 0x16F50Cu;
    // 0x16f50c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F50Cu;
    {
        const bool branch_taken_0x16f50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F50Cu;
        // 0x16f510: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f50c) {
            ctx->pc = 0x16F51Cu;
            return;
        }
    }
    ctx->pc = 0x16F514u;
}
