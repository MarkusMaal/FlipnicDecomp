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

// Function: entry_0016a6c4
// Address: 0x16a6c4 - 0x16a708
void entry_0016a6c4_0x16a6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a6c4_0x16a6c4");
#endif

    ctx->pc = 0x16a6c4u;

    // 0x16a6c4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x16a6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a6c8: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x16a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x16a6cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16a6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16a6d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a6d4: 0x0  nop
    ctx->pc = 0x16a6d4u;
    // NOP
    // 0x16a6d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16a6d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a6dc: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16a6dcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16a6e0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x16a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x16a6e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16a6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16a6e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a6ec: 0x0  nop
    ctx->pc = 0x16a6ecu;
    // NOP
    // 0x16a6f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16a6f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a6f4: 0x0  nop
    ctx->pc = 0x16a6f4u;
    // NOP
    // 0x16a6f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16A6F8u;
    {
        const bool branch_taken_0x16a6f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a6f8) {
            ctx->pc = 0x16A708u;
            return;
        }
    }
    ctx->pc = 0x16A700u;
    // 0x16a700: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A700u;
    {
        const bool branch_taken_0x16a700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A700u;
        // 0x16a704: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a700) {
            ctx->pc = 0x16A710u;
            return;
        }
    }
    ctx->pc = 0x16A708u;
}
