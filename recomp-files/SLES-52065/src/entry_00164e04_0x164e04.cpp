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

// Function: entry_00164e04
// Address: 0x164e04 - 0x164e3c
void entry_00164e04_0x164e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164e04_0x164e04");
#endif

    ctx->pc = 0x164e04u;

    // 0x164e04: 0x8e630350  lw          $v1, 0x350($s3)
    ctx->pc = 0x164e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 848)));
    // 0x164e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164e0c: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x164E0Cu;
    {
        const bool branch_taken_0x164e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E0Cu;
        // 0x164e10: 0x27a20070  addiu       $v0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e0c) {
            ctx->pc = 0x164F38u;
            return;
        }
    }
    ctx->pc = 0x164E14u;
    // 0x164e14: 0x86830218  lh          $v1, 0x218($s4)
    ctx->pc = 0x164e14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 536)));
    // 0x164e18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x164e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x164e1c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164E1Cu;
    {
        const bool branch_taken_0x164e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x164E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E1Cu;
        // 0x164e20: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e1c) {
            ctx->pc = 0x164E3Cu;
            return;
        }
    }
    ctx->pc = 0x164E24u;
    // 0x164e24: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x164e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x164e28: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x164e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164e2c: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x164e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164e30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x164e30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x164e34: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x164E34u;
    {
        const bool branch_taken_0x164e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E34u;
        // 0x164e38: 0xe66002f0  swc1        $f0, 0x2F0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e34) {
            ctx->pc = 0x164EACu;
            return;
        }
    }
    ctx->pc = 0x164E3Cu;
}
