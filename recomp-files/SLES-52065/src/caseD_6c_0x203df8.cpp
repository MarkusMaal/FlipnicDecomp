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

// Function: caseD_6c
// Address: 0x203df8 - 0x203e24
void caseD_6c_0x203df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6c_0x203df8");
#endif

    ctx->pc = 0x203df8u;

    // 0x203df8: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x203df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203dfc: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x203dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203e00: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x203e00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203e04: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x203e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x203e08: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203E08u;
    {
        const bool branch_taken_0x203e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x203E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E08u;
        // 0x203e0c: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e08) {
            ctx->pc = 0x203E24u;
            return;
        }
    }
    ctx->pc = 0x203E10u;
    // 0x203e10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x203e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x203e14: 0x37de0020  ori         $fp, $fp, 0x20
    ctx->pc = 0x203e14u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32);
    // 0x203e18: 0xafa501ec  sw          $a1, 0x1EC($sp)
    ctx->pc = 0x203e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
    // 0x203e1c: 0x1000ff93  b           . + 4 + (-0x6D << 2)
    ctx->pc = 0x203E1Cu;
    {
        const bool branch_taken_0x203e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E1Cu;
        // 0x203e20: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e1c) {
            ctx->pc = 0x203C6Cu;
            return;
        }
    }
    ctx->pc = 0x203E24u;
}
