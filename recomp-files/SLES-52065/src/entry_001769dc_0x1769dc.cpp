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

// Function: entry_001769dc
// Address: 0x1769dc - 0x176a1c
void entry_001769dc_0x1769dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001769dc_0x1769dc");
#endif

    ctx->pc = 0x1769dcu;

    // 0x1769dc: 0x0  nop
    ctx->pc = 0x1769dcu;
    // NOP
    // 0x1769e0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1769e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1769e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1769e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1769e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1769e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1769ec: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x1769ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1769f0: 0x9062004c  lbu         $v0, 0x4C($v1)
    ctx->pc = 0x1769f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1769f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1769F4u;
    {
        const bool branch_taken_0x1769f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1769f4) {
            ctx->pc = 0x176A24u;
            return;
        }
    }
    ctx->pc = 0x1769FCu;
    // 0x1769fc: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x1769fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176a00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176a04: 0x0  nop
    ctx->pc = 0x176a04u;
    // NOP
    // 0x176a08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x176a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176a0c: 0x0  nop
    ctx->pc = 0x176a0cu;
    // NOP
    // 0x176a10: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x176A10u;
    {
        const bool branch_taken_0x176a10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x176A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A10u;
        // 0x176a14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a10) {
            ctx->pc = 0x176A1Cu;
            return;
        }
    }
    ctx->pc = 0x176A18u;
    // 0x176a18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176a1cu;
}
