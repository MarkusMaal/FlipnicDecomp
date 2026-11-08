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

// Function: caseD_2e
// Address: 0x203d08 - 0x203d40
void caseD_2e_0x203d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2e_0x203d08");
#endif

    ctx->pc = 0x203d08u;

    // 0x203d08: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x203d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203d0c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x203d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x203d10: 0x80d70000  lb          $s7, 0x0($a2)
    ctx->pc = 0x203d10u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x203d14: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x203d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x203d18: 0x16e20009  bne         $s7, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x203D18u;
    {
        const bool branch_taken_0x203d18 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x203D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D18u;
        // 0x203d1c: 0xafa601ec  sw          $a2, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d18) {
            ctx->pc = 0x203D40u;
            return;
        }
    }
    ctx->pc = 0x203D20u;
    // 0x203d20: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x203d20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x203d24: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x203d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x203d28: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x203d28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x203d2c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x203d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203d30: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x203d30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x203d34: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x203d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x203d38: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x203D38u;
    {
        const bool branch_taken_0x203d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D38u;
        // 0x203d3c: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d38) {
            ctx->pc = 0x203C6Cu;
            return;
        }
    }
    ctx->pc = 0x203D40u;
}
