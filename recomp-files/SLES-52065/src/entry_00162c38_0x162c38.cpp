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

// Function: entry_00162c38
// Address: 0x162c38 - 0x162c7c
void entry_00162c38_0x162c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162c38_0x162c38");
#endif

    ctx->pc = 0x162c38u;

    // 0x162c38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x162c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x162c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162c40: 0x0  nop
    ctx->pc = 0x162c40u;
    // NOP
    // 0x162c44: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x162c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162c48: 0x0  nop
    ctx->pc = 0x162c48u;
    // NOP
    // 0x162c4c: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x162C4Cu;
    {
        const bool branch_taken_0x162c4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C4Cu;
        // 0x162c50: 0x27a20230  addiu       $v0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c4c) {
            ctx->pc = 0x162CF4u;
            return;
        }
    }
    ctx->pc = 0x162C54u;
    // 0x162c54: 0xc7838020  lwc1        $f3, -0x7FE0($gp)
    ctx->pc = 0x162c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x162c58: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x162c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x162c5c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x162c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x162c60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162c64: 0xc62002f0  lwc1        $f0, 0x2F0($s1)
    ctx->pc = 0x162c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162c68: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x162c68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x162c6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162c6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162c70: 0x0  nop
    ctx->pc = 0x162c70u;
    // NOP
    // 0x162c74: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x162C74u;
    {
        const bool branch_taken_0x162c74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162c74) {
            ctx->pc = 0x162CF0u;
            return;
        }
    }
    ctx->pc = 0x162C7Cu;
}
