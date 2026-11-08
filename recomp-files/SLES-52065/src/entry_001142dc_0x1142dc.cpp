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

// Function: entry_001142dc
// Address: 0x1142dc - 0x114304
void entry_001142dc_0x1142dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001142dc_0x1142dc");
#endif

    ctx->pc = 0x1142dcu;

    // 0x1142dc: 0x0  nop
    ctx->pc = 0x1142dcu;
    // NOP
    // 0x1142e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1142e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1142e4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x1142e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1142e8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1142E8u;
    {
        const bool branch_taken_0x1142e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1142ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142E8u;
        // 0x1142ec: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142e8) {
            ctx->pc = 0x114280u;
            return;
        }
    }
    ctx->pc = 0x1142F0u;
    // 0x1142f0: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x1142f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x1142f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1142f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1142f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1142F8u;
    {
        const bool branch_taken_0x1142f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1142FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142F8u;
        // 0x1142fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142f8) {
            ctx->pc = 0x114304u;
            return;
        }
    }
    ctx->pc = 0x114300u;
    // 0x114300: 0xae420274  sw          $v0, 0x274($s2)
    ctx->pc = 0x114300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 628), GPR_U32(ctx, 2));
    ctx->pc = 0x114304u;
}
