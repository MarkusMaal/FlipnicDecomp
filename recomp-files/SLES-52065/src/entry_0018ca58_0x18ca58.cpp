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

// Function: entry_0018ca58
// Address: 0x18ca58 - 0x18ca90
void entry_0018ca58_0x18ca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ca58_0x18ca58");
#endif

    ctx->pc = 0x18ca58u;

    // 0x18ca58: 0xc6010504  lwc1        $f1, 0x504($s0)
    ctx->pc = 0x18ca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ca5c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18ca60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18ca64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca68: 0x0  nop
    ctx->pc = 0x18ca68u;
    // NOP
    // 0x18ca6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18ca6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ca70: 0x0  nop
    ctx->pc = 0x18ca70u;
    // NOP
    // 0x18ca74: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x18CA74u;
    {
        const bool branch_taken_0x18ca74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA74u;
        // 0x18ca78: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca74) {
            ctx->pc = 0x18CA90u;
            return;
        }
    }
    ctx->pc = 0x18CA7Cu;
    // 0x18ca7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18ca80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca84: 0x0  nop
    ctx->pc = 0x18ca84u;
    // NOP
    // 0x18ca88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18ca88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18ca8c: 0xe6000504  swc1        $f0, 0x504($s0)
    ctx->pc = 0x18ca8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1284), bits); }
    ctx->pc = 0x18ca90u;
}
