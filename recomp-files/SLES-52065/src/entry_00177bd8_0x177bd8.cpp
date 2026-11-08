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

// Function: entry_00177bd8
// Address: 0x177bd8 - 0x177c2c
void entry_00177bd8_0x177bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177bd8_0x177bd8");
#endif

    ctx->pc = 0x177bd8u;

    // 0x177bd8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x177bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x177bdc: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x177bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x177be0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x177be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177be4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x177be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x177be8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x177be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x177bec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x177becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x177bf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x177bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177bf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x177bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x177bf8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x177bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x177bfc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x177bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x177c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177c04: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x177c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x177c08: 0xac450040  sw          $a1, 0x40($v0)
    ctx->pc = 0x177c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 5));
    // 0x177c0c: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x177c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x177c10: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x177c10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x177c14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x177c14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177c18: 0x0  nop
    ctx->pc = 0x177c18u;
    // NOP
    // 0x177c1c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x177C1Cu;
    {
        const bool branch_taken_0x177c1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x177C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C1Cu;
        // 0x177c20: 0xe7a100dc  swc1        $f1, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c1c) {
            ctx->pc = 0x177C2Cu;
            return;
        }
    }
    ctx->pc = 0x177C24u;
    // 0x177c24: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177c24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177c28: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x177c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    ctx->pc = 0x177c2cu;
}
