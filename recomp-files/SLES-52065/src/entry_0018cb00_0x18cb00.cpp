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

// Function: entry_0018cb00
// Address: 0x18cb00 - 0x18cb38
void entry_0018cb00_0x18cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cb00_0x18cb00");
#endif

    ctx->pc = 0x18cb00u;

    // 0x18cb00: 0xc6010508  lwc1        $f1, 0x508($s0)
    ctx->pc = 0x18cb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cb04: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x18cb08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18cb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18cb0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18cb0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cb10: 0x0  nop
    ctx->pc = 0x18cb10u;
    // NOP
    // 0x18cb14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18cb14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18cb18: 0x0  nop
    ctx->pc = 0x18cb18u;
    // NOP
    // 0x18cb1c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18CB1Cu;
    {
        const bool branch_taken_0x18cb1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB1Cu;
        // 0x18cb20: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb1c) {
            ctx->pc = 0x18CB38u;
            return;
        }
    }
    ctx->pc = 0x18CB24u;
    // 0x18cb24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18cb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18cb28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18cb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cb2c: 0x0  nop
    ctx->pc = 0x18cb2cu;
    // NOP
    // 0x18cb30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18cb30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18cb34: 0xe6000508  swc1        $f0, 0x508($s0)
    ctx->pc = 0x18cb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1288), bits); }
    ctx->pc = 0x18cb38u;
}
