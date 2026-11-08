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

// Function: entry_0015cc0c
// Address: 0x15cc0c - 0x15cc40
void entry_0015cc0c_0x15cc0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cc0c_0x15cc0c");
#endif

    ctx->pc = 0x15cc0cu;

    // 0x15cc0c: 0x0  nop
    ctx->pc = 0x15cc0cu;
    // NOP
    // 0x15cc10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15cc10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15cc14: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x15cc14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15cc18: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x15CC18u;
    {
        const bool branch_taken_0x15cc18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC18u;
        // 0x15cc1c: 0x269403d0  addiu       $s4, $s4, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc18) {
            ctx->pc = 0x15CB78u;
            return;
        }
    }
    ctx->pc = 0x15CC20u;
    // 0x15cc20: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15cc20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15cc24: 0x10200061  beqz        $at, . + 4 + (0x61 << 2)
    ctx->pc = 0x15CC24u;
    {
        const bool branch_taken_0x15cc24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC24u;
        // 0x15cc28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc24) {
            ctx->pc = 0x15CDACu;
            return;
        }
    }
    ctx->pc = 0x15CC2Cu;
    // 0x15cc2c: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x15cc2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x15cc30: 0x1420004a  bnez        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x15CC30u;
    {
        const bool branch_taken_0x15cc30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC30u;
        // 0x15cc34: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc30) {
            ctx->pc = 0x15CD5Cu;
            return;
        }
    }
    ctx->pc = 0x15CC38u;
    // 0x15cc38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cc3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15cc3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15cc40u;
}
