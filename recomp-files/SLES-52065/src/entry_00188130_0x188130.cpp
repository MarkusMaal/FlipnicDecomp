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

// Function: entry_00188130
// Address: 0x188130 - 0x188168
void entry_00188130_0x188130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188130_0x188130");
#endif

    ctx->pc = 0x188130u;

    // 0x188130: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x188130u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x188134: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x188134u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x188138: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x188138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x18813c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x18813cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x188140: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x188140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x188144: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x188144u;
    {
        const bool branch_taken_0x188144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x188148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188144u;
        // 0x188148: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188144) {
            ctx->pc = 0x188174u;
            return;
        }
    }
    ctx->pc = 0x18814Cu;
    // 0x18814c: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18814Cu;
    {
        const bool branch_taken_0x18814c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x18814c) {
            ctx->pc = 0x188174u;
            return;
        }
    }
    ctx->pc = 0x188154u;
    // 0x188154: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x188154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x188158: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188158u;
    {
        const bool branch_taken_0x188158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x188158) {
            ctx->pc = 0x188168u;
            return;
        }
    }
    ctx->pc = 0x188160u;
    // 0x188160: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x188160u;
    {
        const bool branch_taken_0x188160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188160) {
            ctx->pc = 0x188180u;
            return;
        }
    }
    ctx->pc = 0x188168u;
}
