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

// Function: entry_0018c6d4
// Address: 0x18c6d4 - 0x18c70c
void entry_0018c6d4_0x18c6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c6d4_0x18c6d4");
#endif

    ctx->pc = 0x18c6d4u;

    // 0x18c6d4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x18c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x18c6d8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18c6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18c6dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c6dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c6e0: 0x0  nop
    ctx->pc = 0x18c6e0u;
    // NOP
    // 0x18c6e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18c6e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c6e8: 0x0  nop
    ctx->pc = 0x18c6e8u;
    // NOP
    // 0x18c6ec: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x18C6ECu;
    {
        const bool branch_taken_0x18c6ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6ECu;
        // 0x18c6f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6ec) {
            ctx->pc = 0x18C710u;
            return;
        }
    }
    ctx->pc = 0x18C6F4u;
    // 0x18c6f4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x18c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x18c6f8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18c6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18c6fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c6fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c700: 0x0  nop
    ctx->pc = 0x18c700u;
    // NOP
    // 0x18c704: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18c704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18c708: 0xe6000574  swc1        $f0, 0x574($s0)
    ctx->pc = 0x18c708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
    ctx->pc = 0x18c70cu;
}
