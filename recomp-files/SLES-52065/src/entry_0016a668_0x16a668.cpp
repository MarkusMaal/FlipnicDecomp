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

// Function: entry_0016a668
// Address: 0x16a668 - 0x16a6a8
void entry_0016a668_0x16a668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a668_0x16a668");
#endif

    ctx->pc = 0x16a668u;

    // 0x16a668: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a66c: 0x1044002e  beq         $v0, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x16A66Cu;
    {
        const bool branch_taken_0x16a66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x16a66c) {
            ctx->pc = 0x16A728u;
            return;
        }
    }
    ctx->pc = 0x16A674u;
    // 0x16a674: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x16a674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a678: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x16a678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x16a67c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16a67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16a680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a684: 0x0  nop
    ctx->pc = 0x16a684u;
    // NOP
    // 0x16a688: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x16a688u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a68c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x16a68cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x16a690: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16a690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a694: 0x0  nop
    ctx->pc = 0x16a694u;
    // NOP
    // 0x16a698: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16A698u;
    {
        const bool branch_taken_0x16a698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a698) {
            ctx->pc = 0x16A6A8u;
            return;
        }
    }
    ctx->pc = 0x16A6A0u;
    // 0x16a6a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A6A0u;
    {
        const bool branch_taken_0x16a6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6A0u;
        // 0x16a6a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6a0) {
            ctx->pc = 0x16A6B0u;
            return;
        }
    }
    ctx->pc = 0x16A6A8u;
}
