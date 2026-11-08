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

// Function: entry_0018bf18
// Address: 0x18bf18 - 0x18bf50
void entry_0018bf18_0x18bf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bf18_0x18bf18");
#endif

    ctx->pc = 0x18bf18u;

    // 0x18bf18: 0xc62104e0  lwc1        $f1, 0x4E0($s1)
    ctx->pc = 0x18bf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bf1c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x18bf20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18bf24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bf24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bf28: 0x0  nop
    ctx->pc = 0x18bf28u;
    // NOP
    // 0x18bf2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18bf2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18bf30: 0x0  nop
    ctx->pc = 0x18bf30u;
    // NOP
    // 0x18bf34: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18BF34u;
    {
        const bool branch_taken_0x18bf34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF34u;
        // 0x18bf38: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf34) {
            ctx->pc = 0x18BF50u;
            return;
        }
    }
    ctx->pc = 0x18BF3Cu;
    // 0x18bf3c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18bf40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bf40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bf44: 0x0  nop
    ctx->pc = 0x18bf44u;
    // NOP
    // 0x18bf48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18bf48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18bf4c: 0xe62004e0  swc1        $f0, 0x4E0($s1)
    ctx->pc = 0x18bf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1248), bits); }
    ctx->pc = 0x18bf50u;
}
