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

// Function: entry_0016a628
// Address: 0x16a628 - 0x16a668
void entry_0016a628_0x16a628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a628_0x16a628");
#endif

    ctx->pc = 0x16a628u;

    // 0x16a628: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x16a628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a62c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16a630: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a634: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16a634u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a638: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16a638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16a63c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16a63cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a640: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16a640u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16a644: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x16a644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x16a648: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16a648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16a64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a650: 0x0  nop
    ctx->pc = 0x16a650u;
    // NOP
    // 0x16a654: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16a654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a658: 0x0  nop
    ctx->pc = 0x16a658u;
    // NOP
    // 0x16a65c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16A65Cu;
    {
        const bool branch_taken_0x16a65c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A65Cu;
        // 0x16a660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a65c) {
            ctx->pc = 0x16A668u;
            return;
        }
    }
    ctx->pc = 0x16A664u;
    // 0x16a664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16a668u;
}
