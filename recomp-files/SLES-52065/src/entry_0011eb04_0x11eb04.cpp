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

// Function: entry_0011eb04
// Address: 0x11eb04 - 0x11eb28
void entry_0011eb04_0x11eb04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eb04_0x11eb04");
#endif

    ctx->pc = 0x11eb04u;

    // 0x11eb04: 0x0  nop
    ctx->pc = 0x11eb04u;
    // NOP
    // 0x11eb08: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x11eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x11eb0c: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11EB0Cu;
    {
        const bool branch_taken_0x11eb0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB0Cu;
        // 0x11eb10: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb0c) {
            ctx->pc = 0x11EB34u;
            return;
        }
    }
    ctx->pc = 0x11EB14u;
    // 0x11eb14: 0x26c2ffff  addiu       $v0, $s6, -0x1
    ctx->pc = 0x11eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x11eb18: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EB18u;
    {
        const bool branch_taken_0x11eb18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB18u;
        // 0x11eb1c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb18) {
            ctx->pc = 0x11EB28u;
            return;
        }
    }
    ctx->pc = 0x11EB20u;
    // 0x11eb20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11EB20u;
    {
        const bool branch_taken_0x11eb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11eb20) {
            ctx->pc = 0x11EB30u;
            return;
        }
    }
    ctx->pc = 0x11EB28u;
}
