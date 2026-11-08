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

// Function: entry_0018bf50
// Address: 0x18bf50 - 0x18bf88
void entry_0018bf50_0x18bf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bf50_0x18bf50");
#endif

    ctx->pc = 0x18bf50u;

    // 0x18bf50: 0xc62104e4  lwc1        $f1, 0x4E4($s1)
    ctx->pc = 0x18bf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bf54: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18bf58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18bf5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bf5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bf60: 0x0  nop
    ctx->pc = 0x18bf60u;
    // NOP
    // 0x18bf64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18bf64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18bf68: 0x0  nop
    ctx->pc = 0x18bf68u;
    // NOP
    // 0x18bf6c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x18BF6Cu;
    {
        const bool branch_taken_0x18bf6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF6Cu;
        // 0x18bf70: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf6c) {
            ctx->pc = 0x18BF88u;
            return;
        }
    }
    ctx->pc = 0x18BF74u;
    // 0x18bf74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18bf78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bf78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bf7c: 0x0  nop
    ctx->pc = 0x18bf7cu;
    // NOP
    // 0x18bf80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18bf80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18bf84: 0xe62004e4  swc1        $f0, 0x4E4($s1)
    ctx->pc = 0x18bf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1252), bits); }
    ctx->pc = 0x18bf88u;
}
