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

// Function: entry_00116e14
// Address: 0x116e14 - 0x116e40
void entry_00116e14_0x116e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116e14_0x116e14");
#endif

    ctx->pc = 0x116e14u;

    // 0x116e14: 0x0  nop
    ctx->pc = 0x116e14u;
    // NOP
    // 0x116e18: 0x91660000  lbu         $a2, 0x0($t3)
    ctx->pc = 0x116e18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x116e1c: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x116E1Cu;
    {
        const bool branch_taken_0x116e1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x116e1c) {
            ctx->pc = 0x116E04u;
            return;
        }
    }
    ctx->pc = 0x116E24u;
    // 0x116e24: 0x94e60004  lhu         $a2, 0x4($a3)
    ctx->pc = 0x116e24u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x116e28: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x116E28u;
    {
        const bool branch_taken_0x116e28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E28u;
        // 0x116e2c: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e28) {
            ctx->pc = 0x116E40u;
            return;
        }
    }
    ctx->pc = 0x116E30u;
    // 0x116e30: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x116e30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116e34: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x116e34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x116e38: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x116E38u;
    {
        const bool branch_taken_0x116e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E38u;
        // 0x116e3c: 0xe63821  addu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e38) {
            ctx->pc = 0x116DCCu;
            return;
        }
    }
    ctx->pc = 0x116E40u;
}
