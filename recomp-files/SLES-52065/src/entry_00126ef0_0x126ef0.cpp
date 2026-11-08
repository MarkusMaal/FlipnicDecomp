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

// Function: entry_00126ef0
// Address: 0x126ef0 - 0x126f38
void entry_00126ef0_0x126ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126ef0_0x126ef0");
#endif

    ctx->pc = 0x126ef0u;

    // 0x126ef0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x126ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x126ef4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x126ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x126ef8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x126ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x126efc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x126efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x126f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126f04: 0x0  nop
    ctx->pc = 0x126f04u;
    // NOP
    // 0x126f08: 0x46010681  sub.s       $f26, $f0, $f1
    ctx->pc = 0x126f08u;
    ctx->f[26] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x126f0c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x126f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x126f10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x126f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x126f14: 0xc4960004  lwc1        $f22, 0x4($a0)
    ctx->pc = 0x126f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x126f18: 0xc4950000  lwc1        $f21, 0x0($a0)
    ctx->pc = 0x126f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x126f1c: 0x4601b642  mul.s       $f25, $f22, $f1
    ctx->pc = 0x126f1cu;
    ctx->f[25] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x126f20: 0x461aa81a  mula.s      $f21, $f26
    ctx->pc = 0x126f20u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[21], ctx->f[26]));
    // 0x126f24: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x126F24u;
    {
        const bool branch_taken_0x126f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x126F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F24u;
        // 0x126f28: 0x4601b5dc  madd.s      $f23, $f22, $f1 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f24) {
            ctx->pc = 0x127028u;
            return;
        }
    }
    ctx->pc = 0x126F2Cu;
    // 0x126f2c: 0x4616ae01  sub.s       $f24, $f21, $f22
    ctx->pc = 0x126f2cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x126f30: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x126F30u;
    {
        const bool branch_taken_0x126f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F30u;
        // 0x126f34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f30) {
            ctx->pc = 0x126F80u;
            return;
        }
    }
    ctx->pc = 0x126F38u;
}
