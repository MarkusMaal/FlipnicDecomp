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

// Function: entry_0016b280
// Address: 0x16b280 - 0x16b2ec
void entry_0016b280_0x16b280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b280_0x16b280");
#endif

    ctx->pc = 0x16b280u;

    // 0x16b280: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x16b280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b284: 0x0  nop
    ctx->pc = 0x16b284u;
    // NOP
    // 0x16b288: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x16B288u;
    {
        const bool branch_taken_0x16b288 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b288) {
            ctx->pc = 0x16B3A8u;
            return;
        }
    }
    ctx->pc = 0x16B290u;
    // 0x16b290: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x16b290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16b294: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x16b294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
    // 0x16b298: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16b298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x16b29c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16b2a0: 0x0  nop
    ctx->pc = 0x16b2a0u;
    // NOP
    // 0x16b2a4: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x16b2a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b2a8: 0x0  nop
    ctx->pc = 0x16b2a8u;
    // NOP
    // 0x16b2ac: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x16B2ACu;
    {
        const bool branch_taken_0x16b2ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2ACu;
        // 0x16b2b0: 0x3c023f99  lui         $v0, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2ac) {
            ctx->pc = 0x16B3A8u;
            return;
        }
    }
    ctx->pc = 0x16B2B4u;
    // 0x16b2b4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16b2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x16b2b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b2bc: 0x0  nop
    ctx->pc = 0x16b2bcu;
    // NOP
    // 0x16b2c0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x16b2c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b2c4: 0x0  nop
    ctx->pc = 0x16b2c4u;
    // NOP
    // 0x16b2c8: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x16B2C8u;
    {
        const bool branch_taken_0x16b2c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b2c8) {
            ctx->pc = 0x16B3A8u;
            return;
        }
    }
    ctx->pc = 0x16B2D0u;
    // 0x16b2d0: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x16b2d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b2d4: 0x0  nop
    ctx->pc = 0x16b2d4u;
    // NOP
    // 0x16b2d8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16B2D8u;
    {
        const bool branch_taken_0x16b2d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2D8u;
        // 0x16b2dc: 0x3c023f99  lui         $v0, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2d8) {
            ctx->pc = 0x16B2ECu;
            return;
        }
    }
    ctx->pc = 0x16B2E0u;
    // 0x16b2e0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16b2e4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16b2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16b2e8: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x16b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    ctx->pc = 0x16b2ecu;
}
