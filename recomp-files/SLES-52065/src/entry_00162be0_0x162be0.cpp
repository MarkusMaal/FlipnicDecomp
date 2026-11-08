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

// Function: entry_00162be0
// Address: 0x162be0 - 0x162c38
void entry_00162be0_0x162be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162be0_0x162be0");
#endif

    ctx->pc = 0x162be0u;

    // 0x162be0: 0x8e420224  lw          $v0, 0x224($s2)
    ctx->pc = 0x162be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 548)));
    // 0x162be4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x162BE4u;
    {
        const bool branch_taken_0x162be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BE4u;
        // 0x162be8: 0x27a20220  addiu       $v0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162be4) {
            ctx->pc = 0x162C80u;
            return;
        }
    }
    ctx->pc = 0x162BECu;
    // 0x162bec: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x162becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x162bf0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x162bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x162bf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162bf8: 0x0  nop
    ctx->pc = 0x162bf8u;
    // NOP
    // 0x162bfc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x162bfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162c00: 0x0  nop
    ctx->pc = 0x162c00u;
    // NOP
    // 0x162c04: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x162C04u;
    {
        const bool branch_taken_0x162c04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C04u;
        // 0x162c08: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c04) {
            ctx->pc = 0x162C38u;
            return;
        }
    }
    ctx->pc = 0x162C0Cu;
    // 0x162c0c: 0xc7838020  lwc1        $f3, -0x7FE0($gp)
    ctx->pc = 0x162c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x162c10: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x162c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x162c14: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x162c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x162c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162c1c: 0x0  nop
    ctx->pc = 0x162c1cu;
    // NOP
    // 0x162c20: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x162c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x162c24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x162c24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162c28: 0x0  nop
    ctx->pc = 0x162c28u;
    // NOP
    // 0x162c2c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x162C2Cu;
    {
        const bool branch_taken_0x162c2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162c2c) {
            ctx->pc = 0x162C7Cu;
            return;
        }
    }
    ctx->pc = 0x162C34u;
    // 0x162c34: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x162c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    ctx->pc = 0x162c38u;
}
