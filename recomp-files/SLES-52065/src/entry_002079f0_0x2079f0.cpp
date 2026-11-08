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

// Function: entry_002079f0
// Address: 0x2079f0 - 0x207a30
void entry_002079f0_0x2079f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002079f0_0x2079f0");
#endif

    ctx->pc = 0x2079f0u;

    // 0x2079f0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2079f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2079f4: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x2079f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x2079f8: 0x24425b00  addiu       $v0, $v0, 0x5B00
    ctx->pc = 0x2079f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
    // 0x2079fc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2079fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x207a00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x207a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x207a04: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x207a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207a08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x207a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x207a0c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x207a0cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x207a10: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x207A10u;
    {
        const bool branch_taken_0x207a10 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x207A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A10u;
        // 0x207a14: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a10) {
            ctx->pc = 0x207A58u;
            return;
        }
    }
    ctx->pc = 0x207A18u;
    // 0x207a18: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x207a18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x207a1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207A1Cu;
    {
        const bool branch_taken_0x207a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A1Cu;
        // 0x207a20: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a1c) {
            ctx->pc = 0x207A30u;
            return;
        }
    }
    ctx->pc = 0x207A24u;
    // 0x207a24: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x207a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x207a28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207A28u;
    {
        const bool branch_taken_0x207a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207a28) {
            ctx->pc = 0x207A40u;
            return;
        }
    }
    ctx->pc = 0x207A30u;
}
