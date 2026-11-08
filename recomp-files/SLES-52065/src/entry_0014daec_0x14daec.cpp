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

// Function: entry_0014daec
// Address: 0x14daec - 0x14db18
void entry_0014daec_0x14daec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014daec_0x14daec");
#endif

    ctx->pc = 0x14daecu;

    // 0x14daec: 0x0  nop
    ctx->pc = 0x14daecu;
    // NOP
    // 0x14daf0: 0xd32023  subu        $a0, $a2, $s3
    ctx->pc = 0x14daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x14daf4: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x14daf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x14daf8: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x14daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14dafc: 0x244082b  sltu        $at, $s2, $a0
    ctx->pc = 0x14dafcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14db00: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DB00u;
    {
        const bool branch_taken_0x14db00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DB00u;
        // 0x14db04: 0x2852021  addu        $a0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14db00) {
            ctx->pc = 0x14DB1Cu;
            return;
        }
    }
    ctx->pc = 0x14DB08u;
    // 0x14db08: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x14db08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14db0c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x14DB0Cu;
    {
        const bool branch_taken_0x14db0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db0c) {
            ctx->pc = 0x14DB18u;
            return;
        }
    }
    ctx->pc = 0x14DB14u;
    // 0x14db14: 0x2499021  addu        $s2, $s2, $t1
    ctx->pc = 0x14db14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    ctx->pc = 0x14db18u;
}
