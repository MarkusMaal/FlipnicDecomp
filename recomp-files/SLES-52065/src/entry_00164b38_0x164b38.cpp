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

// Function: entry_00164b38
// Address: 0x164b38 - 0x164b6c
void entry_00164b38_0x164b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164b38_0x164b38");
#endif

    ctx->pc = 0x164b38u;

    // 0x164b38: 0x8643021a  lh          $v1, 0x21A($s2)
    ctx->pc = 0x164b38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 538)));
    // 0x164b3c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x164b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x164b40: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x164B40u;
    {
        const bool branch_taken_0x164b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B40u;
        // 0x164b44: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b40) {
            ctx->pc = 0x164B70u;
            return;
        }
    }
    ctx->pc = 0x164B48u;
    // 0x164b48: 0xc6210348  lwc1        $f1, 0x348($s1)
    ctx->pc = 0x164b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164b4c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x164b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x164b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164b54: 0x0  nop
    ctx->pc = 0x164b54u;
    // NOP
    // 0x164b58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x164b58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164b5c: 0x0  nop
    ctx->pc = 0x164b5cu;
    // NOP
    // 0x164b60: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x164B60u;
    {
        const bool branch_taken_0x164b60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x164B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B60u;
        // 0x164b64: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b60) {
            ctx->pc = 0x164B6Cu;
            return;
        }
    }
    ctx->pc = 0x164B68u;
    // 0x164b68: 0xa62201ea  sh          $v0, 0x1EA($s1)
    ctx->pc = 0x164b68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 490), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x164b6cu;
}
