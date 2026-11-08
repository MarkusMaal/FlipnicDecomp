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

// Function: entry_0018ca20
// Address: 0x18ca20 - 0x18ca58
void entry_0018ca20_0x18ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ca20_0x18ca20");
#endif

    ctx->pc = 0x18ca20u;

    // 0x18ca20: 0xc6010500  lwc1        $f1, 0x500($s0)
    ctx->pc = 0x18ca20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ca24: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x18ca28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18ca2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca30: 0x0  nop
    ctx->pc = 0x18ca30u;
    // NOP
    // 0x18ca34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ca34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ca38: 0x0  nop
    ctx->pc = 0x18ca38u;
    // NOP
    // 0x18ca3c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18CA3Cu;
    {
        const bool branch_taken_0x18ca3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA3Cu;
        // 0x18ca40: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca3c) {
            ctx->pc = 0x18CA58u;
            return;
        }
    }
    ctx->pc = 0x18CA44u;
    // 0x18ca44: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18ca48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ca4c: 0x0  nop
    ctx->pc = 0x18ca4cu;
    // NOP
    // 0x18ca50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18ca50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18ca54: 0xe6000500  swc1        $f0, 0x500($s0)
    ctx->pc = 0x18ca54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1280), bits); }
    ctx->pc = 0x18ca58u;
}
